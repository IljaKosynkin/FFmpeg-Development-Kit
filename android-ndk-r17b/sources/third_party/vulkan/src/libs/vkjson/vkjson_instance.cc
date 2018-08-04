///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2015-2016 The Khronos Group Inc.
// Copyright (c) 2015-2016 Valve Corporation
// Copyright (c) 2015-2016 LunarG, Inc.
// Copyright (c) 2015-2016 Google, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
///////////////////////////////////////////////////////////////////////////////

#ifndef VK_PROTOTYPES
#define VK_PROTOTYPES
#endif

#include "vkjson.h"

#include <algorithm>
#include <utility>

namespace {
const char* kSupportedInstanceExtensions[] = {
    "VK_KHR_get_physical_device_properties2"};

bool EnumerateExtensions(const char* layer_name,
                         std::vector<VkExtensionProperties>* extensions) {
  VkResult result;
  uint32_t count = 0;
  result = vkEnumerateInstanceExtensionProperties(layer_name, &count, nullptr);
  if (result != VK_SUCCESS)
    return false;
  extensions->resize(count);
  result = vkEnumerateInstanceExtensionProperties(layer_name, &count,
                                                  extensions->data());
  if (result != VK_SUCCESS)
    return false;
  return true;
}

bool HasExtension(const char* extension_name,
                  uint32_t count,
                  const char* const* extensions) {
  return std::find_if(extensions, extensions + count,
                      [extension_name](const char* extension) {
                        return strcmp(extension, extension_name) == 0;
                      }) != extensions + count;
}

bool HasExtension(const char* extension_name,
                  const std::vector<VkExtensionProperties>& extensions) {
  return std::find_if(extensions.cbegin(), extensions.cend(),
                      [extension_name](const VkExtensionProperties& extension) {
                        return strcmp(extension.extensionName,
                                      extension_name) == 0;
                      }) != extensions.cend();
}
}  // anonymous namespace

VkJsonDevice VkJsonGetDevice(VkInstance instance,
                             VkPhysicalDevice physical_device,
                             uint32_t instance_extension_count,
                             const char* const* instance_extensions) {
  VkJsonDevice device;

  PFN_vkGetPhysicalDeviceFeatures2KHR vkpGetPhysicalDeviceFeatures2KHR =
      nullptr;
  if (instance != VK_NULL_HANDLE &&
      HasExtension("VK_KHR_get_physical_device_properties2",
                   instance_extension_count, instance_extensions)) {
    vkpGetPhysicalDeviceFeatures2KHR =
        reinterpret_cast<PFN_vkGetPhysicalDeviceFeatures2KHR>(
            vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2KHR"));
  }

  // Only device extensions.
  // TODO(piman): do we want to show layer extensions?
  uint32_t extension_count = 0;
  vkEnumerateDeviceExtensionProperties(physical_device, nullptr,
                                       &extension_count, nullptr);
  if (extension_count > 0) {
    device.extensions.resize(extension_count);
    vkEnumerateDeviceExtensionProperties(
        physical_device, nullptr, &extension_count, device.extensions.data());
  }

  uint32_t layer_count = 0;
  vkEnumerateDeviceLayerProperties(physical_device, &layer_count, nullptr);
  if (layer_count > 0) {
    device.layers.resize(layer_count);
    vkEnumerateDeviceLayerProperties(physical_device, &layer_count,
                                     device.layers.data());
  }

  vkGetPhysicalDeviceProperties(physical_device, &device.properties);
  if (HasExtension("VK_KHR_get_physical_device_properties2",
                   instance_extension_count, instance_extensions)) {
    VkPhysicalDeviceFeatures2KHR features = {
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR,
        nullptr,
        {}  // features
    };
    if (HasExtension("VK_KHR_variable_pointers", device.extensions)) {
      device.variable_pointer_features.sType =
          VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR;
      device.variable_pointer_features.pNext = features.pNext;
      features.pNext = &device.variable_pointer_features;
    }
    vkpGetPhysicalDeviceFeatures2KHR(physical_device, &features);
    device.features = features.features;
  } else {
    vkGetPhysicalDeviceFeatures(physical_device, &device.features);
  }
  vkGetPhysicalDeviceMemoryProperties(physical_device, &device.memory);

  uint32_t queue_family_count = 0;
  vkGetPhysicalDeviceQueueFamilyProperties(physical_device, &queue_family_count,
                                           nullptr);
  if (queue_family_count > 0) {
    device.queues.resize(queue_family_count);
    vkGetPhysicalDeviceQueueFamilyProperties(
        physical_device, &queue_family_count, device.queues.data());
  }

  VkFormatProperties format_properties = {};
  for (VkFormat format = VK_FORMAT_R4G4_UNORM_PACK8;
       format <= VK_FORMAT_END_RANGE;
       format = static_cast<VkFormat>(format + 1)) {
    vkGetPhysicalDeviceFormatProperties(physical_device, format,
                                        &format_properties);
    if (format_properties.linearTilingFeatures ||
        format_properties.optimalTilingFeatures ||
        format_properties.bufferFeatures) {
      device.formats.insert(std::make_pair(format, format_properties));
    }
  }
  return device;
}

VkJsonInstance VkJsonGetInstance() {
  VkJsonInstance instance;
  VkResult result;
  uint32_t count;

  count = 0;
  result = vkEnumerateInstanceLayerProperties(&count, nullptr);
  if (result != VK_SUCCESS)
    return VkJsonInstance();
  if (count > 0) {
    std::vector<VkLayerProperties> layers(count);
    result = vkEnumerateInstanceLayerProperties(&count, layers.data());
    if (result != VK_SUCCESS)
      return VkJsonInstance();
    instance.layers.reserve(count);
    for (auto& layer : layers) {
      instance.layers.push_back(VkJsonLayer{layer, std::vector<VkExtensionProperties>()});
      if (!EnumerateExtensions(layer.layerName,
                               &instance.layers.back().extensions))
        return VkJsonInstance();
    }
  }

  if (!EnumerateExtensions(nullptr, &instance.extensions))
    return VkJsonInstance();

  std::vector<const char*> instance_extensions;
  for (const auto extension : kSupportedInstanceExtensions) {
    if (HasExtension(extension, instance.extensions))
      instance_extensions.push_back(extension);
  }

  const VkApplicationInfo app_info = {VK_STRUCTURE_TYPE_APPLICATION_INFO,
                                      nullptr,
                                      "vkjson_info",
                                      1,
                                      "",
                                      0,
                                      VK_API_VERSION_1_0};
  VkInstanceCreateInfo instance_info = {
      VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
      nullptr,
      0,
      &app_info,
      0,
      nullptr,
      static_cast<uint32_t>(instance_extensions.size()),
      instance_extensions.data()};
  VkInstance vkinstance;
  result = vkCreateInstance(&instance_info, nullptr, &vkinstance);
  if (result != VK_SUCCESS)
    return VkJsonInstance();

  count = 0;
  result = vkEnumeratePhysicalDevices(vkinstance, &count, nullptr);
  if (result != VK_SUCCESS) {
    vkDestroyInstance(vkinstance, nullptr);
    return VkJsonInstance();
  }
  std::vector<VkPhysicalDevice> devices(count, VK_NULL_HANDLE);
  result = vkEnumeratePhysicalDevices(vkinstance, &count, devices.data());
  if (result != VK_SUCCESS) {
    vkDestroyInstance(vkinstance, nullptr);
    return VkJsonInstance();
  }

  instance.devices.reserve(devices.size());
  for (auto device : devices)
    instance.devices.emplace_back(VkJsonGetDevice(vkinstance, device,
                                                  instance_extensions.size(),
                                                  instance_extensions.data()));

  vkDestroyInstance(vkinstance, nullptr);
  return instance;
}
