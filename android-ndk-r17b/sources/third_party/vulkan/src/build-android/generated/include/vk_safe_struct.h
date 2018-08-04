// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See helper_file_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2015-2017 The Khronos Group Inc.
 * Copyright (c) 2015-2017 Valve Corporation
 * Copyright (c) 2015-2017 LunarG, Inc.
 * Copyright (c) 2015-2017 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Mark Lobodzinski <mark@lunarg.com>
 * Author: Courtney Goeltzenleuchter <courtneygo@google.com>
 * Author: Tobin Ehlis <tobine@google.com>
 * Author: Chris Forbes <chrisforbes@google.com>
 * Author: John Zulauf<jzulauf@lunarg.com>
 *
 ****************************************************************************/


#pragma once
#include <vulkan/vulkan.h>


struct safe_VkApplicationInfo {
    VkStructureType sType;
    const void* pNext;
    const char* pApplicationName;
    uint32_t applicationVersion;
    const char* pEngineName;
    uint32_t engineVersion;
    uint32_t apiVersion;
    safe_VkApplicationInfo(const VkApplicationInfo* in_struct);
    safe_VkApplicationInfo(const safe_VkApplicationInfo& src);
    safe_VkApplicationInfo& operator=(const safe_VkApplicationInfo& src);
    safe_VkApplicationInfo();
    ~safe_VkApplicationInfo();
    void initialize(const VkApplicationInfo* in_struct);
    void initialize(const safe_VkApplicationInfo* src);
    VkApplicationInfo *ptr() { return reinterpret_cast<VkApplicationInfo *>(this); }
    VkApplicationInfo const *ptr() const { return reinterpret_cast<VkApplicationInfo const *>(this); }
};

struct safe_VkInstanceCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkInstanceCreateFlags flags;
    safe_VkApplicationInfo* pApplicationInfo;
    uint32_t enabledLayerCount;
    const char* const* ppEnabledLayerNames;
    uint32_t enabledExtensionCount;
    const char* const* ppEnabledExtensionNames;
    safe_VkInstanceCreateInfo(const VkInstanceCreateInfo* in_struct);
    safe_VkInstanceCreateInfo(const safe_VkInstanceCreateInfo& src);
    safe_VkInstanceCreateInfo& operator=(const safe_VkInstanceCreateInfo& src);
    safe_VkInstanceCreateInfo();
    ~safe_VkInstanceCreateInfo();
    void initialize(const VkInstanceCreateInfo* in_struct);
    void initialize(const safe_VkInstanceCreateInfo* src);
    VkInstanceCreateInfo *ptr() { return reinterpret_cast<VkInstanceCreateInfo *>(this); }
    VkInstanceCreateInfo const *ptr() const { return reinterpret_cast<VkInstanceCreateInfo const *>(this); }
};

struct safe_VkAllocationCallbacks {
    void* pUserData;
    PFN_vkAllocationFunction pfnAllocation;
    PFN_vkReallocationFunction pfnReallocation;
    PFN_vkFreeFunction pfnFree;
    PFN_vkInternalAllocationNotification pfnInternalAllocation;
    PFN_vkInternalFreeNotification pfnInternalFree;
    safe_VkAllocationCallbacks(const VkAllocationCallbacks* in_struct);
    safe_VkAllocationCallbacks(const safe_VkAllocationCallbacks& src);
    safe_VkAllocationCallbacks& operator=(const safe_VkAllocationCallbacks& src);
    safe_VkAllocationCallbacks();
    ~safe_VkAllocationCallbacks();
    void initialize(const VkAllocationCallbacks* in_struct);
    void initialize(const safe_VkAllocationCallbacks* src);
    VkAllocationCallbacks *ptr() { return reinterpret_cast<VkAllocationCallbacks *>(this); }
    VkAllocationCallbacks const *ptr() const { return reinterpret_cast<VkAllocationCallbacks const *>(this); }
};

struct safe_VkDeviceQueueCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDeviceQueueCreateFlags flags;
    uint32_t queueFamilyIndex;
    uint32_t queueCount;
    const float* pQueuePriorities;
    safe_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* in_struct);
    safe_VkDeviceQueueCreateInfo(const safe_VkDeviceQueueCreateInfo& src);
    safe_VkDeviceQueueCreateInfo& operator=(const safe_VkDeviceQueueCreateInfo& src);
    safe_VkDeviceQueueCreateInfo();
    ~safe_VkDeviceQueueCreateInfo();
    void initialize(const VkDeviceQueueCreateInfo* in_struct);
    void initialize(const safe_VkDeviceQueueCreateInfo* src);
    VkDeviceQueueCreateInfo *ptr() { return reinterpret_cast<VkDeviceQueueCreateInfo *>(this); }
    VkDeviceQueueCreateInfo const *ptr() const { return reinterpret_cast<VkDeviceQueueCreateInfo const *>(this); }
};

struct safe_VkDeviceCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDeviceCreateFlags flags;
    uint32_t queueCreateInfoCount;
    safe_VkDeviceQueueCreateInfo* pQueueCreateInfos;
    uint32_t enabledLayerCount;
    const char* const* ppEnabledLayerNames;
    uint32_t enabledExtensionCount;
    const char* const* ppEnabledExtensionNames;
    const VkPhysicalDeviceFeatures* pEnabledFeatures;
    safe_VkDeviceCreateInfo(const VkDeviceCreateInfo* in_struct);
    safe_VkDeviceCreateInfo(const safe_VkDeviceCreateInfo& src);
    safe_VkDeviceCreateInfo& operator=(const safe_VkDeviceCreateInfo& src);
    safe_VkDeviceCreateInfo();
    ~safe_VkDeviceCreateInfo();
    void initialize(const VkDeviceCreateInfo* in_struct);
    void initialize(const safe_VkDeviceCreateInfo* src);
    VkDeviceCreateInfo *ptr() { return reinterpret_cast<VkDeviceCreateInfo *>(this); }
    VkDeviceCreateInfo const *ptr() const { return reinterpret_cast<VkDeviceCreateInfo const *>(this); }
};

struct safe_VkSubmitInfo {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores;
    const VkPipelineStageFlags* pWaitDstStageMask;
    uint32_t commandBufferCount;
    VkCommandBuffer* pCommandBuffers;
    uint32_t signalSemaphoreCount;
    VkSemaphore* pSignalSemaphores;
    safe_VkSubmitInfo(const VkSubmitInfo* in_struct);
    safe_VkSubmitInfo(const safe_VkSubmitInfo& src);
    safe_VkSubmitInfo& operator=(const safe_VkSubmitInfo& src);
    safe_VkSubmitInfo();
    ~safe_VkSubmitInfo();
    void initialize(const VkSubmitInfo* in_struct);
    void initialize(const safe_VkSubmitInfo* src);
    VkSubmitInfo *ptr() { return reinterpret_cast<VkSubmitInfo *>(this); }
    VkSubmitInfo const *ptr() const { return reinterpret_cast<VkSubmitInfo const *>(this); }
};

struct safe_VkMemoryAllocateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDeviceSize allocationSize;
    uint32_t memoryTypeIndex;
    safe_VkMemoryAllocateInfo(const VkMemoryAllocateInfo* in_struct);
    safe_VkMemoryAllocateInfo(const safe_VkMemoryAllocateInfo& src);
    safe_VkMemoryAllocateInfo& operator=(const safe_VkMemoryAllocateInfo& src);
    safe_VkMemoryAllocateInfo();
    ~safe_VkMemoryAllocateInfo();
    void initialize(const VkMemoryAllocateInfo* in_struct);
    void initialize(const safe_VkMemoryAllocateInfo* src);
    VkMemoryAllocateInfo *ptr() { return reinterpret_cast<VkMemoryAllocateInfo *>(this); }
    VkMemoryAllocateInfo const *ptr() const { return reinterpret_cast<VkMemoryAllocateInfo const *>(this); }
};

struct safe_VkMappedMemoryRange {
    VkStructureType sType;
    const void* pNext;
    VkDeviceMemory memory;
    VkDeviceSize offset;
    VkDeviceSize size;
    safe_VkMappedMemoryRange(const VkMappedMemoryRange* in_struct);
    safe_VkMappedMemoryRange(const safe_VkMappedMemoryRange& src);
    safe_VkMappedMemoryRange& operator=(const safe_VkMappedMemoryRange& src);
    safe_VkMappedMemoryRange();
    ~safe_VkMappedMemoryRange();
    void initialize(const VkMappedMemoryRange* in_struct);
    void initialize(const safe_VkMappedMemoryRange* src);
    VkMappedMemoryRange *ptr() { return reinterpret_cast<VkMappedMemoryRange *>(this); }
    VkMappedMemoryRange const *ptr() const { return reinterpret_cast<VkMappedMemoryRange const *>(this); }
};

struct safe_VkSparseBufferMemoryBindInfo {
    VkBuffer buffer;
    uint32_t bindCount;
    VkSparseMemoryBind* pBinds;
    safe_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo* in_struct);
    safe_VkSparseBufferMemoryBindInfo(const safe_VkSparseBufferMemoryBindInfo& src);
    safe_VkSparseBufferMemoryBindInfo& operator=(const safe_VkSparseBufferMemoryBindInfo& src);
    safe_VkSparseBufferMemoryBindInfo();
    ~safe_VkSparseBufferMemoryBindInfo();
    void initialize(const VkSparseBufferMemoryBindInfo* in_struct);
    void initialize(const safe_VkSparseBufferMemoryBindInfo* src);
    VkSparseBufferMemoryBindInfo *ptr() { return reinterpret_cast<VkSparseBufferMemoryBindInfo *>(this); }
    VkSparseBufferMemoryBindInfo const *ptr() const { return reinterpret_cast<VkSparseBufferMemoryBindInfo const *>(this); }
};

struct safe_VkSparseImageOpaqueMemoryBindInfo {
    VkImage image;
    uint32_t bindCount;
    VkSparseMemoryBind* pBinds;
    safe_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo* in_struct);
    safe_VkSparseImageOpaqueMemoryBindInfo(const safe_VkSparseImageOpaqueMemoryBindInfo& src);
    safe_VkSparseImageOpaqueMemoryBindInfo& operator=(const safe_VkSparseImageOpaqueMemoryBindInfo& src);
    safe_VkSparseImageOpaqueMemoryBindInfo();
    ~safe_VkSparseImageOpaqueMemoryBindInfo();
    void initialize(const VkSparseImageOpaqueMemoryBindInfo* in_struct);
    void initialize(const safe_VkSparseImageOpaqueMemoryBindInfo* src);
    VkSparseImageOpaqueMemoryBindInfo *ptr() { return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo *>(this); }
    VkSparseImageOpaqueMemoryBindInfo const *ptr() const { return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo const *>(this); }
};

struct safe_VkSparseImageMemoryBindInfo {
    VkImage image;
    uint32_t bindCount;
    VkSparseImageMemoryBind* pBinds;
    safe_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo* in_struct);
    safe_VkSparseImageMemoryBindInfo(const safe_VkSparseImageMemoryBindInfo& src);
    safe_VkSparseImageMemoryBindInfo& operator=(const safe_VkSparseImageMemoryBindInfo& src);
    safe_VkSparseImageMemoryBindInfo();
    ~safe_VkSparseImageMemoryBindInfo();
    void initialize(const VkSparseImageMemoryBindInfo* in_struct);
    void initialize(const safe_VkSparseImageMemoryBindInfo* src);
    VkSparseImageMemoryBindInfo *ptr() { return reinterpret_cast<VkSparseImageMemoryBindInfo *>(this); }
    VkSparseImageMemoryBindInfo const *ptr() const { return reinterpret_cast<VkSparseImageMemoryBindInfo const *>(this); }
};

struct safe_VkBindSparseInfo {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores;
    uint32_t bufferBindCount;
    safe_VkSparseBufferMemoryBindInfo* pBufferBinds;
    uint32_t imageOpaqueBindCount;
    safe_VkSparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds;
    uint32_t imageBindCount;
    safe_VkSparseImageMemoryBindInfo* pImageBinds;
    uint32_t signalSemaphoreCount;
    VkSemaphore* pSignalSemaphores;
    safe_VkBindSparseInfo(const VkBindSparseInfo* in_struct);
    safe_VkBindSparseInfo(const safe_VkBindSparseInfo& src);
    safe_VkBindSparseInfo& operator=(const safe_VkBindSparseInfo& src);
    safe_VkBindSparseInfo();
    ~safe_VkBindSparseInfo();
    void initialize(const VkBindSparseInfo* in_struct);
    void initialize(const safe_VkBindSparseInfo* src);
    VkBindSparseInfo *ptr() { return reinterpret_cast<VkBindSparseInfo *>(this); }
    VkBindSparseInfo const *ptr() const { return reinterpret_cast<VkBindSparseInfo const *>(this); }
};

struct safe_VkFenceCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkFenceCreateFlags flags;
    safe_VkFenceCreateInfo(const VkFenceCreateInfo* in_struct);
    safe_VkFenceCreateInfo(const safe_VkFenceCreateInfo& src);
    safe_VkFenceCreateInfo& operator=(const safe_VkFenceCreateInfo& src);
    safe_VkFenceCreateInfo();
    ~safe_VkFenceCreateInfo();
    void initialize(const VkFenceCreateInfo* in_struct);
    void initialize(const safe_VkFenceCreateInfo* src);
    VkFenceCreateInfo *ptr() { return reinterpret_cast<VkFenceCreateInfo *>(this); }
    VkFenceCreateInfo const *ptr() const { return reinterpret_cast<VkFenceCreateInfo const *>(this); }
};

struct safe_VkSemaphoreCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkSemaphoreCreateFlags flags;
    safe_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo* in_struct);
    safe_VkSemaphoreCreateInfo(const safe_VkSemaphoreCreateInfo& src);
    safe_VkSemaphoreCreateInfo& operator=(const safe_VkSemaphoreCreateInfo& src);
    safe_VkSemaphoreCreateInfo();
    ~safe_VkSemaphoreCreateInfo();
    void initialize(const VkSemaphoreCreateInfo* in_struct);
    void initialize(const safe_VkSemaphoreCreateInfo* src);
    VkSemaphoreCreateInfo *ptr() { return reinterpret_cast<VkSemaphoreCreateInfo *>(this); }
    VkSemaphoreCreateInfo const *ptr() const { return reinterpret_cast<VkSemaphoreCreateInfo const *>(this); }
};

struct safe_VkEventCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkEventCreateFlags flags;
    safe_VkEventCreateInfo(const VkEventCreateInfo* in_struct);
    safe_VkEventCreateInfo(const safe_VkEventCreateInfo& src);
    safe_VkEventCreateInfo& operator=(const safe_VkEventCreateInfo& src);
    safe_VkEventCreateInfo();
    ~safe_VkEventCreateInfo();
    void initialize(const VkEventCreateInfo* in_struct);
    void initialize(const safe_VkEventCreateInfo* src);
    VkEventCreateInfo *ptr() { return reinterpret_cast<VkEventCreateInfo *>(this); }
    VkEventCreateInfo const *ptr() const { return reinterpret_cast<VkEventCreateInfo const *>(this); }
};

struct safe_VkQueryPoolCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkQueryPoolCreateFlags flags;
    VkQueryType queryType;
    uint32_t queryCount;
    VkQueryPipelineStatisticFlags pipelineStatistics;
    safe_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo* in_struct);
    safe_VkQueryPoolCreateInfo(const safe_VkQueryPoolCreateInfo& src);
    safe_VkQueryPoolCreateInfo& operator=(const safe_VkQueryPoolCreateInfo& src);
    safe_VkQueryPoolCreateInfo();
    ~safe_VkQueryPoolCreateInfo();
    void initialize(const VkQueryPoolCreateInfo* in_struct);
    void initialize(const safe_VkQueryPoolCreateInfo* src);
    VkQueryPoolCreateInfo *ptr() { return reinterpret_cast<VkQueryPoolCreateInfo *>(this); }
    VkQueryPoolCreateInfo const *ptr() const { return reinterpret_cast<VkQueryPoolCreateInfo const *>(this); }
};

struct safe_VkBufferCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkBufferCreateFlags flags;
    VkDeviceSize size;
    VkBufferUsageFlags usage;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices;
    safe_VkBufferCreateInfo(const VkBufferCreateInfo* in_struct);
    safe_VkBufferCreateInfo(const safe_VkBufferCreateInfo& src);
    safe_VkBufferCreateInfo& operator=(const safe_VkBufferCreateInfo& src);
    safe_VkBufferCreateInfo();
    ~safe_VkBufferCreateInfo();
    void initialize(const VkBufferCreateInfo* in_struct);
    void initialize(const safe_VkBufferCreateInfo* src);
    VkBufferCreateInfo *ptr() { return reinterpret_cast<VkBufferCreateInfo *>(this); }
    VkBufferCreateInfo const *ptr() const { return reinterpret_cast<VkBufferCreateInfo const *>(this); }
};

struct safe_VkBufferViewCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkBufferViewCreateFlags flags;
    VkBuffer buffer;
    VkFormat format;
    VkDeviceSize offset;
    VkDeviceSize range;
    safe_VkBufferViewCreateInfo(const VkBufferViewCreateInfo* in_struct);
    safe_VkBufferViewCreateInfo(const safe_VkBufferViewCreateInfo& src);
    safe_VkBufferViewCreateInfo& operator=(const safe_VkBufferViewCreateInfo& src);
    safe_VkBufferViewCreateInfo();
    ~safe_VkBufferViewCreateInfo();
    void initialize(const VkBufferViewCreateInfo* in_struct);
    void initialize(const safe_VkBufferViewCreateInfo* src);
    VkBufferViewCreateInfo *ptr() { return reinterpret_cast<VkBufferViewCreateInfo *>(this); }
    VkBufferViewCreateInfo const *ptr() const { return reinterpret_cast<VkBufferViewCreateInfo const *>(this); }
};

struct safe_VkImageCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkImageCreateFlags flags;
    VkImageType imageType;
    VkFormat format;
    VkExtent3D extent;
    uint32_t mipLevels;
    uint32_t arrayLayers;
    VkSampleCountFlagBits samples;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkSharingMode sharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices;
    VkImageLayout initialLayout;
    safe_VkImageCreateInfo(const VkImageCreateInfo* in_struct);
    safe_VkImageCreateInfo(const safe_VkImageCreateInfo& src);
    safe_VkImageCreateInfo& operator=(const safe_VkImageCreateInfo& src);
    safe_VkImageCreateInfo();
    ~safe_VkImageCreateInfo();
    void initialize(const VkImageCreateInfo* in_struct);
    void initialize(const safe_VkImageCreateInfo* src);
    VkImageCreateInfo *ptr() { return reinterpret_cast<VkImageCreateInfo *>(this); }
    VkImageCreateInfo const *ptr() const { return reinterpret_cast<VkImageCreateInfo const *>(this); }
};

struct safe_VkImageViewCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkImageViewCreateFlags flags;
    VkImage image;
    VkImageViewType viewType;
    VkFormat format;
    VkComponentMapping components;
    VkImageSubresourceRange subresourceRange;
    safe_VkImageViewCreateInfo(const VkImageViewCreateInfo* in_struct);
    safe_VkImageViewCreateInfo(const safe_VkImageViewCreateInfo& src);
    safe_VkImageViewCreateInfo& operator=(const safe_VkImageViewCreateInfo& src);
    safe_VkImageViewCreateInfo();
    ~safe_VkImageViewCreateInfo();
    void initialize(const VkImageViewCreateInfo* in_struct);
    void initialize(const safe_VkImageViewCreateInfo* src);
    VkImageViewCreateInfo *ptr() { return reinterpret_cast<VkImageViewCreateInfo *>(this); }
    VkImageViewCreateInfo const *ptr() const { return reinterpret_cast<VkImageViewCreateInfo const *>(this); }
};

struct safe_VkShaderModuleCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkShaderModuleCreateFlags flags;
    size_t codeSize;
    const uint32_t* pCode;
    safe_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo* in_struct);
    safe_VkShaderModuleCreateInfo(const safe_VkShaderModuleCreateInfo& src);
    safe_VkShaderModuleCreateInfo& operator=(const safe_VkShaderModuleCreateInfo& src);
    safe_VkShaderModuleCreateInfo();
    ~safe_VkShaderModuleCreateInfo();
    void initialize(const VkShaderModuleCreateInfo* in_struct);
    void initialize(const safe_VkShaderModuleCreateInfo* src);
    VkShaderModuleCreateInfo *ptr() { return reinterpret_cast<VkShaderModuleCreateInfo *>(this); }
    VkShaderModuleCreateInfo const *ptr() const { return reinterpret_cast<VkShaderModuleCreateInfo const *>(this); }
};

struct safe_VkPipelineCacheCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCacheCreateFlags flags;
    size_t initialDataSize;
    const void* pInitialData;
    safe_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* in_struct);
    safe_VkPipelineCacheCreateInfo(const safe_VkPipelineCacheCreateInfo& src);
    safe_VkPipelineCacheCreateInfo& operator=(const safe_VkPipelineCacheCreateInfo& src);
    safe_VkPipelineCacheCreateInfo();
    ~safe_VkPipelineCacheCreateInfo();
    void initialize(const VkPipelineCacheCreateInfo* in_struct);
    void initialize(const safe_VkPipelineCacheCreateInfo* src);
    VkPipelineCacheCreateInfo *ptr() { return reinterpret_cast<VkPipelineCacheCreateInfo *>(this); }
    VkPipelineCacheCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineCacheCreateInfo const *>(this); }
};

struct safe_VkSpecializationInfo {
    uint32_t mapEntryCount;
    const VkSpecializationMapEntry* pMapEntries;
    size_t dataSize;
    const void* pData;
    safe_VkSpecializationInfo(const VkSpecializationInfo* in_struct);
    safe_VkSpecializationInfo(const safe_VkSpecializationInfo& src);
    safe_VkSpecializationInfo& operator=(const safe_VkSpecializationInfo& src);
    safe_VkSpecializationInfo();
    ~safe_VkSpecializationInfo();
    void initialize(const VkSpecializationInfo* in_struct);
    void initialize(const safe_VkSpecializationInfo* src);
    VkSpecializationInfo *ptr() { return reinterpret_cast<VkSpecializationInfo *>(this); }
    VkSpecializationInfo const *ptr() const { return reinterpret_cast<VkSpecializationInfo const *>(this); }
};

struct safe_VkPipelineShaderStageCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineShaderStageCreateFlags flags;
    VkShaderStageFlagBits stage;
    VkShaderModule module;
    const char* pName;
    safe_VkSpecializationInfo* pSpecializationInfo;
    safe_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* in_struct);
    safe_VkPipelineShaderStageCreateInfo(const safe_VkPipelineShaderStageCreateInfo& src);
    safe_VkPipelineShaderStageCreateInfo& operator=(const safe_VkPipelineShaderStageCreateInfo& src);
    safe_VkPipelineShaderStageCreateInfo();
    ~safe_VkPipelineShaderStageCreateInfo();
    void initialize(const VkPipelineShaderStageCreateInfo* in_struct);
    void initialize(const safe_VkPipelineShaderStageCreateInfo* src);
    VkPipelineShaderStageCreateInfo *ptr() { return reinterpret_cast<VkPipelineShaderStageCreateInfo *>(this); }
    VkPipelineShaderStageCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineShaderStageCreateInfo const *>(this); }
};

struct safe_VkPipelineVertexInputStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineVertexInputStateCreateFlags flags;
    uint32_t vertexBindingDescriptionCount;
    const VkVertexInputBindingDescription* pVertexBindingDescriptions;
    uint32_t vertexAttributeDescriptionCount;
    const VkVertexInputAttributeDescription* pVertexAttributeDescriptions;
    safe_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo* in_struct);
    safe_VkPipelineVertexInputStateCreateInfo(const safe_VkPipelineVertexInputStateCreateInfo& src);
    safe_VkPipelineVertexInputStateCreateInfo& operator=(const safe_VkPipelineVertexInputStateCreateInfo& src);
    safe_VkPipelineVertexInputStateCreateInfo();
    ~safe_VkPipelineVertexInputStateCreateInfo();
    void initialize(const VkPipelineVertexInputStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineVertexInputStateCreateInfo* src);
    VkPipelineVertexInputStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineVertexInputStateCreateInfo *>(this); }
    VkPipelineVertexInputStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineVertexInputStateCreateInfo const *>(this); }
};

struct safe_VkPipelineInputAssemblyStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineInputAssemblyStateCreateFlags flags;
    VkPrimitiveTopology topology;
    VkBool32 primitiveRestartEnable;
    safe_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo* in_struct);
    safe_VkPipelineInputAssemblyStateCreateInfo(const safe_VkPipelineInputAssemblyStateCreateInfo& src);
    safe_VkPipelineInputAssemblyStateCreateInfo& operator=(const safe_VkPipelineInputAssemblyStateCreateInfo& src);
    safe_VkPipelineInputAssemblyStateCreateInfo();
    ~safe_VkPipelineInputAssemblyStateCreateInfo();
    void initialize(const VkPipelineInputAssemblyStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineInputAssemblyStateCreateInfo* src);
    VkPipelineInputAssemblyStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo *>(this); }
    VkPipelineInputAssemblyStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo const *>(this); }
};

struct safe_VkPipelineTessellationStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineTessellationStateCreateFlags flags;
    uint32_t patchControlPoints;
    safe_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo* in_struct);
    safe_VkPipelineTessellationStateCreateInfo(const safe_VkPipelineTessellationStateCreateInfo& src);
    safe_VkPipelineTessellationStateCreateInfo& operator=(const safe_VkPipelineTessellationStateCreateInfo& src);
    safe_VkPipelineTessellationStateCreateInfo();
    ~safe_VkPipelineTessellationStateCreateInfo();
    void initialize(const VkPipelineTessellationStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineTessellationStateCreateInfo* src);
    VkPipelineTessellationStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineTessellationStateCreateInfo *>(this); }
    VkPipelineTessellationStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineTessellationStateCreateInfo const *>(this); }
};

struct safe_VkPipelineViewportStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineViewportStateCreateFlags flags;
    uint32_t viewportCount;
    const VkViewport* pViewports;
    uint32_t scissorCount;
    const VkRect2D* pScissors;
    safe_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* in_struct, const bool is_dynamic_viewports, const bool is_dynamic_scissors);
    safe_VkPipelineViewportStateCreateInfo(const safe_VkPipelineViewportStateCreateInfo& src);
    safe_VkPipelineViewportStateCreateInfo& operator=(const safe_VkPipelineViewportStateCreateInfo& src);
    safe_VkPipelineViewportStateCreateInfo();
    ~safe_VkPipelineViewportStateCreateInfo();
    void initialize(const VkPipelineViewportStateCreateInfo* in_struct, const bool is_dynamic_viewports, const bool is_dynamic_scissors);
    void initialize(const safe_VkPipelineViewportStateCreateInfo* src);
    VkPipelineViewportStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineViewportStateCreateInfo *>(this); }
    VkPipelineViewportStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineViewportStateCreateInfo const *>(this); }
};

struct safe_VkPipelineRasterizationStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineRasterizationStateCreateFlags flags;
    VkBool32 depthClampEnable;
    VkBool32 rasterizerDiscardEnable;
    VkPolygonMode polygonMode;
    VkCullModeFlags cullMode;
    VkFrontFace frontFace;
    VkBool32 depthBiasEnable;
    float depthBiasConstantFactor;
    float depthBiasClamp;
    float depthBiasSlopeFactor;
    float lineWidth;
    safe_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo* in_struct);
    safe_VkPipelineRasterizationStateCreateInfo(const safe_VkPipelineRasterizationStateCreateInfo& src);
    safe_VkPipelineRasterizationStateCreateInfo& operator=(const safe_VkPipelineRasterizationStateCreateInfo& src);
    safe_VkPipelineRasterizationStateCreateInfo();
    ~safe_VkPipelineRasterizationStateCreateInfo();
    void initialize(const VkPipelineRasterizationStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineRasterizationStateCreateInfo* src);
    VkPipelineRasterizationStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineRasterizationStateCreateInfo *>(this); }
    VkPipelineRasterizationStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineRasterizationStateCreateInfo const *>(this); }
};

struct safe_VkPipelineMultisampleStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineMultisampleStateCreateFlags flags;
    VkSampleCountFlagBits rasterizationSamples;
    VkBool32 sampleShadingEnable;
    float minSampleShading;
    const VkSampleMask* pSampleMask;
    VkBool32 alphaToCoverageEnable;
    VkBool32 alphaToOneEnable;
    safe_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo* in_struct);
    safe_VkPipelineMultisampleStateCreateInfo(const safe_VkPipelineMultisampleStateCreateInfo& src);
    safe_VkPipelineMultisampleStateCreateInfo& operator=(const safe_VkPipelineMultisampleStateCreateInfo& src);
    safe_VkPipelineMultisampleStateCreateInfo();
    ~safe_VkPipelineMultisampleStateCreateInfo();
    void initialize(const VkPipelineMultisampleStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineMultisampleStateCreateInfo* src);
    VkPipelineMultisampleStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineMultisampleStateCreateInfo *>(this); }
    VkPipelineMultisampleStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineMultisampleStateCreateInfo const *>(this); }
};

struct safe_VkPipelineDepthStencilStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineDepthStencilStateCreateFlags flags;
    VkBool32 depthTestEnable;
    VkBool32 depthWriteEnable;
    VkCompareOp depthCompareOp;
    VkBool32 depthBoundsTestEnable;
    VkBool32 stencilTestEnable;
    VkStencilOpState front;
    VkStencilOpState back;
    float minDepthBounds;
    float maxDepthBounds;
    safe_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo* in_struct);
    safe_VkPipelineDepthStencilStateCreateInfo(const safe_VkPipelineDepthStencilStateCreateInfo& src);
    safe_VkPipelineDepthStencilStateCreateInfo& operator=(const safe_VkPipelineDepthStencilStateCreateInfo& src);
    safe_VkPipelineDepthStencilStateCreateInfo();
    ~safe_VkPipelineDepthStencilStateCreateInfo();
    void initialize(const VkPipelineDepthStencilStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineDepthStencilStateCreateInfo* src);
    VkPipelineDepthStencilStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo *>(this); }
    VkPipelineDepthStencilStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo const *>(this); }
};

struct safe_VkPipelineColorBlendStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineColorBlendStateCreateFlags flags;
    VkBool32 logicOpEnable;
    VkLogicOp logicOp;
    uint32_t attachmentCount;
    const VkPipelineColorBlendAttachmentState* pAttachments;
    float blendConstants[4];
    safe_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo* in_struct);
    safe_VkPipelineColorBlendStateCreateInfo(const safe_VkPipelineColorBlendStateCreateInfo& src);
    safe_VkPipelineColorBlendStateCreateInfo& operator=(const safe_VkPipelineColorBlendStateCreateInfo& src);
    safe_VkPipelineColorBlendStateCreateInfo();
    ~safe_VkPipelineColorBlendStateCreateInfo();
    void initialize(const VkPipelineColorBlendStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineColorBlendStateCreateInfo* src);
    VkPipelineColorBlendStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineColorBlendStateCreateInfo *>(this); }
    VkPipelineColorBlendStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineColorBlendStateCreateInfo const *>(this); }
};

struct safe_VkPipelineDynamicStateCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineDynamicStateCreateFlags flags;
    uint32_t dynamicStateCount;
    const VkDynamicState* pDynamicStates;
    safe_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* in_struct);
    safe_VkPipelineDynamicStateCreateInfo(const safe_VkPipelineDynamicStateCreateInfo& src);
    safe_VkPipelineDynamicStateCreateInfo& operator=(const safe_VkPipelineDynamicStateCreateInfo& src);
    safe_VkPipelineDynamicStateCreateInfo();
    ~safe_VkPipelineDynamicStateCreateInfo();
    void initialize(const VkPipelineDynamicStateCreateInfo* in_struct);
    void initialize(const safe_VkPipelineDynamicStateCreateInfo* src);
    VkPipelineDynamicStateCreateInfo *ptr() { return reinterpret_cast<VkPipelineDynamicStateCreateInfo *>(this); }
    VkPipelineDynamicStateCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineDynamicStateCreateInfo const *>(this); }
};

struct safe_VkGraphicsPipelineCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCreateFlags flags;
    uint32_t stageCount;
    safe_VkPipelineShaderStageCreateInfo* pStages;
    safe_VkPipelineVertexInputStateCreateInfo* pVertexInputState;
    safe_VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState;
    safe_VkPipelineTessellationStateCreateInfo* pTessellationState;
    safe_VkPipelineViewportStateCreateInfo* pViewportState;
    safe_VkPipelineRasterizationStateCreateInfo* pRasterizationState;
    safe_VkPipelineMultisampleStateCreateInfo* pMultisampleState;
    safe_VkPipelineDepthStencilStateCreateInfo* pDepthStencilState;
    safe_VkPipelineColorBlendStateCreateInfo* pColorBlendState;
    safe_VkPipelineDynamicStateCreateInfo* pDynamicState;
    VkPipelineLayout layout;
    VkRenderPass renderPass;
    uint32_t subpass;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;
    safe_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment, const bool uses_depthstencil_attachment);
    safe_VkGraphicsPipelineCreateInfo(const safe_VkGraphicsPipelineCreateInfo& src);
    safe_VkGraphicsPipelineCreateInfo& operator=(const safe_VkGraphicsPipelineCreateInfo& src);
    safe_VkGraphicsPipelineCreateInfo();
    ~safe_VkGraphicsPipelineCreateInfo();
    void initialize(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment, const bool uses_depthstencil_attachment);
    void initialize(const safe_VkGraphicsPipelineCreateInfo* src);
    VkGraphicsPipelineCreateInfo *ptr() { return reinterpret_cast<VkGraphicsPipelineCreateInfo *>(this); }
    VkGraphicsPipelineCreateInfo const *ptr() const { return reinterpret_cast<VkGraphicsPipelineCreateInfo const *>(this); }
};

struct safe_VkComputePipelineCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCreateFlags flags;
    safe_VkPipelineShaderStageCreateInfo stage;
    VkPipelineLayout layout;
    VkPipeline basePipelineHandle;
    int32_t basePipelineIndex;
    safe_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo* in_struct);
    safe_VkComputePipelineCreateInfo(const safe_VkComputePipelineCreateInfo& src);
    safe_VkComputePipelineCreateInfo& operator=(const safe_VkComputePipelineCreateInfo& src);
    safe_VkComputePipelineCreateInfo();
    ~safe_VkComputePipelineCreateInfo();
    void initialize(const VkComputePipelineCreateInfo* in_struct);
    void initialize(const safe_VkComputePipelineCreateInfo* src);
    VkComputePipelineCreateInfo *ptr() { return reinterpret_cast<VkComputePipelineCreateInfo *>(this); }
    VkComputePipelineCreateInfo const *ptr() const { return reinterpret_cast<VkComputePipelineCreateInfo const *>(this); }
};

struct safe_VkPipelineLayoutCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkPipelineLayoutCreateFlags flags;
    uint32_t setLayoutCount;
    VkDescriptorSetLayout* pSetLayouts;
    uint32_t pushConstantRangeCount;
    const VkPushConstantRange* pPushConstantRanges;
    safe_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* in_struct);
    safe_VkPipelineLayoutCreateInfo(const safe_VkPipelineLayoutCreateInfo& src);
    safe_VkPipelineLayoutCreateInfo& operator=(const safe_VkPipelineLayoutCreateInfo& src);
    safe_VkPipelineLayoutCreateInfo();
    ~safe_VkPipelineLayoutCreateInfo();
    void initialize(const VkPipelineLayoutCreateInfo* in_struct);
    void initialize(const safe_VkPipelineLayoutCreateInfo* src);
    VkPipelineLayoutCreateInfo *ptr() { return reinterpret_cast<VkPipelineLayoutCreateInfo *>(this); }
    VkPipelineLayoutCreateInfo const *ptr() const { return reinterpret_cast<VkPipelineLayoutCreateInfo const *>(this); }
};

struct safe_VkSamplerCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkSamplerCreateFlags flags;
    VkFilter magFilter;
    VkFilter minFilter;
    VkSamplerMipmapMode mipmapMode;
    VkSamplerAddressMode addressModeU;
    VkSamplerAddressMode addressModeV;
    VkSamplerAddressMode addressModeW;
    float mipLodBias;
    VkBool32 anisotropyEnable;
    float maxAnisotropy;
    VkBool32 compareEnable;
    VkCompareOp compareOp;
    float minLod;
    float maxLod;
    VkBorderColor borderColor;
    VkBool32 unnormalizedCoordinates;
    safe_VkSamplerCreateInfo(const VkSamplerCreateInfo* in_struct);
    safe_VkSamplerCreateInfo(const safe_VkSamplerCreateInfo& src);
    safe_VkSamplerCreateInfo& operator=(const safe_VkSamplerCreateInfo& src);
    safe_VkSamplerCreateInfo();
    ~safe_VkSamplerCreateInfo();
    void initialize(const VkSamplerCreateInfo* in_struct);
    void initialize(const safe_VkSamplerCreateInfo* src);
    VkSamplerCreateInfo *ptr() { return reinterpret_cast<VkSamplerCreateInfo *>(this); }
    VkSamplerCreateInfo const *ptr() const { return reinterpret_cast<VkSamplerCreateInfo const *>(this); }
};

struct safe_VkDescriptorSetLayoutBinding {
    uint32_t binding;
    VkDescriptorType descriptorType;
    uint32_t descriptorCount;
    VkShaderStageFlags stageFlags;
    VkSampler* pImmutableSamplers;
    safe_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* in_struct);
    safe_VkDescriptorSetLayoutBinding(const safe_VkDescriptorSetLayoutBinding& src);
    safe_VkDescriptorSetLayoutBinding& operator=(const safe_VkDescriptorSetLayoutBinding& src);
    safe_VkDescriptorSetLayoutBinding();
    ~safe_VkDescriptorSetLayoutBinding();
    void initialize(const VkDescriptorSetLayoutBinding* in_struct);
    void initialize(const safe_VkDescriptorSetLayoutBinding* src);
    VkDescriptorSetLayoutBinding *ptr() { return reinterpret_cast<VkDescriptorSetLayoutBinding *>(this); }
    VkDescriptorSetLayoutBinding const *ptr() const { return reinterpret_cast<VkDescriptorSetLayoutBinding const *>(this); }
};

struct safe_VkDescriptorSetLayoutCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorSetLayoutCreateFlags flags;
    uint32_t bindingCount;
    safe_VkDescriptorSetLayoutBinding* pBindings;
    safe_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* in_struct);
    safe_VkDescriptorSetLayoutCreateInfo(const safe_VkDescriptorSetLayoutCreateInfo& src);
    safe_VkDescriptorSetLayoutCreateInfo& operator=(const safe_VkDescriptorSetLayoutCreateInfo& src);
    safe_VkDescriptorSetLayoutCreateInfo();
    ~safe_VkDescriptorSetLayoutCreateInfo();
    void initialize(const VkDescriptorSetLayoutCreateInfo* in_struct);
    void initialize(const safe_VkDescriptorSetLayoutCreateInfo* src);
    VkDescriptorSetLayoutCreateInfo *ptr() { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo *>(this); }
    VkDescriptorSetLayoutCreateInfo const *ptr() const { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo const *>(this); }
};

struct safe_VkDescriptorPoolCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorPoolCreateFlags flags;
    uint32_t maxSets;
    uint32_t poolSizeCount;
    const VkDescriptorPoolSize* pPoolSizes;
    safe_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* in_struct);
    safe_VkDescriptorPoolCreateInfo(const safe_VkDescriptorPoolCreateInfo& src);
    safe_VkDescriptorPoolCreateInfo& operator=(const safe_VkDescriptorPoolCreateInfo& src);
    safe_VkDescriptorPoolCreateInfo();
    ~safe_VkDescriptorPoolCreateInfo();
    void initialize(const VkDescriptorPoolCreateInfo* in_struct);
    void initialize(const safe_VkDescriptorPoolCreateInfo* src);
    VkDescriptorPoolCreateInfo *ptr() { return reinterpret_cast<VkDescriptorPoolCreateInfo *>(this); }
    VkDescriptorPoolCreateInfo const *ptr() const { return reinterpret_cast<VkDescriptorPoolCreateInfo const *>(this); }
};

struct safe_VkDescriptorSetAllocateInfo {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorPool descriptorPool;
    uint32_t descriptorSetCount;
    VkDescriptorSetLayout* pSetLayouts;
    safe_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* in_struct);
    safe_VkDescriptorSetAllocateInfo(const safe_VkDescriptorSetAllocateInfo& src);
    safe_VkDescriptorSetAllocateInfo& operator=(const safe_VkDescriptorSetAllocateInfo& src);
    safe_VkDescriptorSetAllocateInfo();
    ~safe_VkDescriptorSetAllocateInfo();
    void initialize(const VkDescriptorSetAllocateInfo* in_struct);
    void initialize(const safe_VkDescriptorSetAllocateInfo* src);
    VkDescriptorSetAllocateInfo *ptr() { return reinterpret_cast<VkDescriptorSetAllocateInfo *>(this); }
    VkDescriptorSetAllocateInfo const *ptr() const { return reinterpret_cast<VkDescriptorSetAllocateInfo const *>(this); }
};

struct safe_VkWriteDescriptorSet {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;
    VkDescriptorType descriptorType;
    VkDescriptorImageInfo* pImageInfo;
    VkDescriptorBufferInfo* pBufferInfo;
    VkBufferView* pTexelBufferView;
    safe_VkWriteDescriptorSet(const VkWriteDescriptorSet* in_struct);
    safe_VkWriteDescriptorSet(const safe_VkWriteDescriptorSet& src);
    safe_VkWriteDescriptorSet& operator=(const safe_VkWriteDescriptorSet& src);
    safe_VkWriteDescriptorSet();
    ~safe_VkWriteDescriptorSet();
    void initialize(const VkWriteDescriptorSet* in_struct);
    void initialize(const safe_VkWriteDescriptorSet* src);
    VkWriteDescriptorSet *ptr() { return reinterpret_cast<VkWriteDescriptorSet *>(this); }
    VkWriteDescriptorSet const *ptr() const { return reinterpret_cast<VkWriteDescriptorSet const *>(this); }
};

struct safe_VkCopyDescriptorSet {
    VkStructureType sType;
    const void* pNext;
    VkDescriptorSet srcSet;
    uint32_t srcBinding;
    uint32_t srcArrayElement;
    VkDescriptorSet dstSet;
    uint32_t dstBinding;
    uint32_t dstArrayElement;
    uint32_t descriptorCount;
    safe_VkCopyDescriptorSet(const VkCopyDescriptorSet* in_struct);
    safe_VkCopyDescriptorSet(const safe_VkCopyDescriptorSet& src);
    safe_VkCopyDescriptorSet& operator=(const safe_VkCopyDescriptorSet& src);
    safe_VkCopyDescriptorSet();
    ~safe_VkCopyDescriptorSet();
    void initialize(const VkCopyDescriptorSet* in_struct);
    void initialize(const safe_VkCopyDescriptorSet* src);
    VkCopyDescriptorSet *ptr() { return reinterpret_cast<VkCopyDescriptorSet *>(this); }
    VkCopyDescriptorSet const *ptr() const { return reinterpret_cast<VkCopyDescriptorSet const *>(this); }
};

struct safe_VkFramebufferCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkFramebufferCreateFlags flags;
    VkRenderPass renderPass;
    uint32_t attachmentCount;
    VkImageView* pAttachments;
    uint32_t width;
    uint32_t height;
    uint32_t layers;
    safe_VkFramebufferCreateInfo(const VkFramebufferCreateInfo* in_struct);
    safe_VkFramebufferCreateInfo(const safe_VkFramebufferCreateInfo& src);
    safe_VkFramebufferCreateInfo& operator=(const safe_VkFramebufferCreateInfo& src);
    safe_VkFramebufferCreateInfo();
    ~safe_VkFramebufferCreateInfo();
    void initialize(const VkFramebufferCreateInfo* in_struct);
    void initialize(const safe_VkFramebufferCreateInfo* src);
    VkFramebufferCreateInfo *ptr() { return reinterpret_cast<VkFramebufferCreateInfo *>(this); }
    VkFramebufferCreateInfo const *ptr() const { return reinterpret_cast<VkFramebufferCreateInfo const *>(this); }
};

struct safe_VkSubpassDescription {
    VkSubpassDescriptionFlags flags;
    VkPipelineBindPoint pipelineBindPoint;
    uint32_t inputAttachmentCount;
    const VkAttachmentReference* pInputAttachments;
    uint32_t colorAttachmentCount;
    const VkAttachmentReference* pColorAttachments;
    const VkAttachmentReference* pResolveAttachments;
    const VkAttachmentReference* pDepthStencilAttachment;
    uint32_t preserveAttachmentCount;
    const uint32_t* pPreserveAttachments;
    safe_VkSubpassDescription(const VkSubpassDescription* in_struct);
    safe_VkSubpassDescription(const safe_VkSubpassDescription& src);
    safe_VkSubpassDescription& operator=(const safe_VkSubpassDescription& src);
    safe_VkSubpassDescription();
    ~safe_VkSubpassDescription();
    void initialize(const VkSubpassDescription* in_struct);
    void initialize(const safe_VkSubpassDescription* src);
    VkSubpassDescription *ptr() { return reinterpret_cast<VkSubpassDescription *>(this); }
    VkSubpassDescription const *ptr() const { return reinterpret_cast<VkSubpassDescription const *>(this); }
};

struct safe_VkRenderPassCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkRenderPassCreateFlags flags;
    uint32_t attachmentCount;
    const VkAttachmentDescription* pAttachments;
    uint32_t subpassCount;
    safe_VkSubpassDescription* pSubpasses;
    uint32_t dependencyCount;
    const VkSubpassDependency* pDependencies;
    safe_VkRenderPassCreateInfo(const VkRenderPassCreateInfo* in_struct);
    safe_VkRenderPassCreateInfo(const safe_VkRenderPassCreateInfo& src);
    safe_VkRenderPassCreateInfo& operator=(const safe_VkRenderPassCreateInfo& src);
    safe_VkRenderPassCreateInfo();
    ~safe_VkRenderPassCreateInfo();
    void initialize(const VkRenderPassCreateInfo* in_struct);
    void initialize(const safe_VkRenderPassCreateInfo* src);
    VkRenderPassCreateInfo *ptr() { return reinterpret_cast<VkRenderPassCreateInfo *>(this); }
    VkRenderPassCreateInfo const *ptr() const { return reinterpret_cast<VkRenderPassCreateInfo const *>(this); }
};

struct safe_VkCommandPoolCreateInfo {
    VkStructureType sType;
    const void* pNext;
    VkCommandPoolCreateFlags flags;
    uint32_t queueFamilyIndex;
    safe_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo* in_struct);
    safe_VkCommandPoolCreateInfo(const safe_VkCommandPoolCreateInfo& src);
    safe_VkCommandPoolCreateInfo& operator=(const safe_VkCommandPoolCreateInfo& src);
    safe_VkCommandPoolCreateInfo();
    ~safe_VkCommandPoolCreateInfo();
    void initialize(const VkCommandPoolCreateInfo* in_struct);
    void initialize(const safe_VkCommandPoolCreateInfo* src);
    VkCommandPoolCreateInfo *ptr() { return reinterpret_cast<VkCommandPoolCreateInfo *>(this); }
    VkCommandPoolCreateInfo const *ptr() const { return reinterpret_cast<VkCommandPoolCreateInfo const *>(this); }
};

struct safe_VkCommandBufferAllocateInfo {
    VkStructureType sType;
    const void* pNext;
    VkCommandPool commandPool;
    VkCommandBufferLevel level;
    uint32_t commandBufferCount;
    safe_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* in_struct);
    safe_VkCommandBufferAllocateInfo(const safe_VkCommandBufferAllocateInfo& src);
    safe_VkCommandBufferAllocateInfo& operator=(const safe_VkCommandBufferAllocateInfo& src);
    safe_VkCommandBufferAllocateInfo();
    ~safe_VkCommandBufferAllocateInfo();
    void initialize(const VkCommandBufferAllocateInfo* in_struct);
    void initialize(const safe_VkCommandBufferAllocateInfo* src);
    VkCommandBufferAllocateInfo *ptr() { return reinterpret_cast<VkCommandBufferAllocateInfo *>(this); }
    VkCommandBufferAllocateInfo const *ptr() const { return reinterpret_cast<VkCommandBufferAllocateInfo const *>(this); }
};

struct safe_VkCommandBufferInheritanceInfo {
    VkStructureType sType;
    const void* pNext;
    VkRenderPass renderPass;
    uint32_t subpass;
    VkFramebuffer framebuffer;
    VkBool32 occlusionQueryEnable;
    VkQueryControlFlags queryFlags;
    VkQueryPipelineStatisticFlags pipelineStatistics;
    safe_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* in_struct);
    safe_VkCommandBufferInheritanceInfo(const safe_VkCommandBufferInheritanceInfo& src);
    safe_VkCommandBufferInheritanceInfo& operator=(const safe_VkCommandBufferInheritanceInfo& src);
    safe_VkCommandBufferInheritanceInfo();
    ~safe_VkCommandBufferInheritanceInfo();
    void initialize(const VkCommandBufferInheritanceInfo* in_struct);
    void initialize(const safe_VkCommandBufferInheritanceInfo* src);
    VkCommandBufferInheritanceInfo *ptr() { return reinterpret_cast<VkCommandBufferInheritanceInfo *>(this); }
    VkCommandBufferInheritanceInfo const *ptr() const { return reinterpret_cast<VkCommandBufferInheritanceInfo const *>(this); }
};

struct safe_VkCommandBufferBeginInfo {
    VkStructureType sType;
    const void* pNext;
    VkCommandBufferUsageFlags flags;
    safe_VkCommandBufferInheritanceInfo* pInheritanceInfo;
    safe_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo* in_struct);
    safe_VkCommandBufferBeginInfo(const safe_VkCommandBufferBeginInfo& src);
    safe_VkCommandBufferBeginInfo& operator=(const safe_VkCommandBufferBeginInfo& src);
    safe_VkCommandBufferBeginInfo();
    ~safe_VkCommandBufferBeginInfo();
    void initialize(const VkCommandBufferBeginInfo* in_struct);
    void initialize(const safe_VkCommandBufferBeginInfo* src);
    VkCommandBufferBeginInfo *ptr() { return reinterpret_cast<VkCommandBufferBeginInfo *>(this); }
    VkCommandBufferBeginInfo const *ptr() const { return reinterpret_cast<VkCommandBufferBeginInfo const *>(this); }
};

struct safe_VkMemoryBarrier {
    VkStructureType sType;
    const void* pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    safe_VkMemoryBarrier(const VkMemoryBarrier* in_struct);
    safe_VkMemoryBarrier(const safe_VkMemoryBarrier& src);
    safe_VkMemoryBarrier& operator=(const safe_VkMemoryBarrier& src);
    safe_VkMemoryBarrier();
    ~safe_VkMemoryBarrier();
    void initialize(const VkMemoryBarrier* in_struct);
    void initialize(const safe_VkMemoryBarrier* src);
    VkMemoryBarrier *ptr() { return reinterpret_cast<VkMemoryBarrier *>(this); }
    VkMemoryBarrier const *ptr() const { return reinterpret_cast<VkMemoryBarrier const *>(this); }
};

struct safe_VkBufferMemoryBarrier {
    VkStructureType sType;
    const void* pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkBuffer buffer;
    VkDeviceSize offset;
    VkDeviceSize size;
    safe_VkBufferMemoryBarrier(const VkBufferMemoryBarrier* in_struct);
    safe_VkBufferMemoryBarrier(const safe_VkBufferMemoryBarrier& src);
    safe_VkBufferMemoryBarrier& operator=(const safe_VkBufferMemoryBarrier& src);
    safe_VkBufferMemoryBarrier();
    ~safe_VkBufferMemoryBarrier();
    void initialize(const VkBufferMemoryBarrier* in_struct);
    void initialize(const safe_VkBufferMemoryBarrier* src);
    VkBufferMemoryBarrier *ptr() { return reinterpret_cast<VkBufferMemoryBarrier *>(this); }
    VkBufferMemoryBarrier const *ptr() const { return reinterpret_cast<VkBufferMemoryBarrier const *>(this); }
};

struct safe_VkImageMemoryBarrier {
    VkStructureType sType;
    const void* pNext;
    VkAccessFlags srcAccessMask;
    VkAccessFlags dstAccessMask;
    VkImageLayout oldLayout;
    VkImageLayout newLayout;
    uint32_t srcQueueFamilyIndex;
    uint32_t dstQueueFamilyIndex;
    VkImage image;
    VkImageSubresourceRange subresourceRange;
    safe_VkImageMemoryBarrier(const VkImageMemoryBarrier* in_struct);
    safe_VkImageMemoryBarrier(const safe_VkImageMemoryBarrier& src);
    safe_VkImageMemoryBarrier& operator=(const safe_VkImageMemoryBarrier& src);
    safe_VkImageMemoryBarrier();
    ~safe_VkImageMemoryBarrier();
    void initialize(const VkImageMemoryBarrier* in_struct);
    void initialize(const safe_VkImageMemoryBarrier* src);
    VkImageMemoryBarrier *ptr() { return reinterpret_cast<VkImageMemoryBarrier *>(this); }
    VkImageMemoryBarrier const *ptr() const { return reinterpret_cast<VkImageMemoryBarrier const *>(this); }
};

struct safe_VkRenderPassBeginInfo {
    VkStructureType sType;
    const void* pNext;
    VkRenderPass renderPass;
    VkFramebuffer framebuffer;
    VkRect2D renderArea;
    uint32_t clearValueCount;
    const VkClearValue* pClearValues;
    safe_VkRenderPassBeginInfo(const VkRenderPassBeginInfo* in_struct);
    safe_VkRenderPassBeginInfo(const safe_VkRenderPassBeginInfo& src);
    safe_VkRenderPassBeginInfo& operator=(const safe_VkRenderPassBeginInfo& src);
    safe_VkRenderPassBeginInfo();
    ~safe_VkRenderPassBeginInfo();
    void initialize(const VkRenderPassBeginInfo* in_struct);
    void initialize(const safe_VkRenderPassBeginInfo* src);
    VkRenderPassBeginInfo *ptr() { return reinterpret_cast<VkRenderPassBeginInfo *>(this); }
    VkRenderPassBeginInfo const *ptr() const { return reinterpret_cast<VkRenderPassBeginInfo const *>(this); }
};

struct safe_VkSwapchainCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainCreateFlagsKHR flags;
    VkSurfaceKHR surface;
    uint32_t minImageCount;
    VkFormat imageFormat;
    VkColorSpaceKHR imageColorSpace;
    VkExtent2D imageExtent;
    uint32_t imageArrayLayers;
    VkImageUsageFlags imageUsage;
    VkSharingMode imageSharingMode;
    uint32_t queueFamilyIndexCount;
    const uint32_t* pQueueFamilyIndices;
    VkSurfaceTransformFlagBitsKHR preTransform;
    VkCompositeAlphaFlagBitsKHR compositeAlpha;
    VkPresentModeKHR presentMode;
    VkBool32 clipped;
    VkSwapchainKHR oldSwapchain;
    safe_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR* in_struct);
    safe_VkSwapchainCreateInfoKHR(const safe_VkSwapchainCreateInfoKHR& src);
    safe_VkSwapchainCreateInfoKHR& operator=(const safe_VkSwapchainCreateInfoKHR& src);
    safe_VkSwapchainCreateInfoKHR();
    ~safe_VkSwapchainCreateInfoKHR();
    void initialize(const VkSwapchainCreateInfoKHR* in_struct);
    void initialize(const safe_VkSwapchainCreateInfoKHR* src);
    VkSwapchainCreateInfoKHR *ptr() { return reinterpret_cast<VkSwapchainCreateInfoKHR *>(this); }
    VkSwapchainCreateInfoKHR const *ptr() const { return reinterpret_cast<VkSwapchainCreateInfoKHR const *>(this); }
};

struct safe_VkPresentInfoKHR {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    VkSemaphore* pWaitSemaphores;
    uint32_t swapchainCount;
    VkSwapchainKHR* pSwapchains;
    const uint32_t* pImageIndices;
    VkResult* pResults;
    safe_VkPresentInfoKHR(const VkPresentInfoKHR* in_struct);
    safe_VkPresentInfoKHR(const safe_VkPresentInfoKHR& src);
    safe_VkPresentInfoKHR& operator=(const safe_VkPresentInfoKHR& src);
    safe_VkPresentInfoKHR();
    ~safe_VkPresentInfoKHR();
    void initialize(const VkPresentInfoKHR* in_struct);
    void initialize(const safe_VkPresentInfoKHR* src);
    VkPresentInfoKHR *ptr() { return reinterpret_cast<VkPresentInfoKHR *>(this); }
    VkPresentInfoKHR const *ptr() const { return reinterpret_cast<VkPresentInfoKHR const *>(this); }
};

struct safe_VkDisplayPropertiesKHR {
    VkDisplayKHR display;
    const char* displayName;
    VkExtent2D physicalDimensions;
    VkExtent2D physicalResolution;
    VkSurfaceTransformFlagsKHR supportedTransforms;
    VkBool32 planeReorderPossible;
    VkBool32 persistentContent;
    safe_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR* in_struct);
    safe_VkDisplayPropertiesKHR(const safe_VkDisplayPropertiesKHR& src);
    safe_VkDisplayPropertiesKHR& operator=(const safe_VkDisplayPropertiesKHR& src);
    safe_VkDisplayPropertiesKHR();
    ~safe_VkDisplayPropertiesKHR();
    void initialize(const VkDisplayPropertiesKHR* in_struct);
    void initialize(const safe_VkDisplayPropertiesKHR* src);
    VkDisplayPropertiesKHR *ptr() { return reinterpret_cast<VkDisplayPropertiesKHR *>(this); }
    VkDisplayPropertiesKHR const *ptr() const { return reinterpret_cast<VkDisplayPropertiesKHR const *>(this); }
};

struct safe_VkDisplayModeCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkDisplayModeCreateFlagsKHR flags;
    VkDisplayModeParametersKHR parameters;
    safe_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR* in_struct);
    safe_VkDisplayModeCreateInfoKHR(const safe_VkDisplayModeCreateInfoKHR& src);
    safe_VkDisplayModeCreateInfoKHR& operator=(const safe_VkDisplayModeCreateInfoKHR& src);
    safe_VkDisplayModeCreateInfoKHR();
    ~safe_VkDisplayModeCreateInfoKHR();
    void initialize(const VkDisplayModeCreateInfoKHR* in_struct);
    void initialize(const safe_VkDisplayModeCreateInfoKHR* src);
    VkDisplayModeCreateInfoKHR *ptr() { return reinterpret_cast<VkDisplayModeCreateInfoKHR *>(this); }
    VkDisplayModeCreateInfoKHR const *ptr() const { return reinterpret_cast<VkDisplayModeCreateInfoKHR const *>(this); }
};

struct safe_VkDisplaySurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkDisplaySurfaceCreateFlagsKHR flags;
    VkDisplayModeKHR displayMode;
    uint32_t planeIndex;
    uint32_t planeStackIndex;
    VkSurfaceTransformFlagBitsKHR transform;
    float globalAlpha;
    VkDisplayPlaneAlphaFlagBitsKHR alphaMode;
    VkExtent2D imageExtent;
    safe_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR* in_struct);
    safe_VkDisplaySurfaceCreateInfoKHR(const safe_VkDisplaySurfaceCreateInfoKHR& src);
    safe_VkDisplaySurfaceCreateInfoKHR& operator=(const safe_VkDisplaySurfaceCreateInfoKHR& src);
    safe_VkDisplaySurfaceCreateInfoKHR();
    ~safe_VkDisplaySurfaceCreateInfoKHR();
    void initialize(const VkDisplaySurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkDisplaySurfaceCreateInfoKHR* src);
    VkDisplaySurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR *>(this); }
    VkDisplaySurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR const *>(this); }
};

struct safe_VkDisplayPresentInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkRect2D srcRect;
    VkRect2D dstRect;
    VkBool32 persistent;
    safe_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR* in_struct);
    safe_VkDisplayPresentInfoKHR(const safe_VkDisplayPresentInfoKHR& src);
    safe_VkDisplayPresentInfoKHR& operator=(const safe_VkDisplayPresentInfoKHR& src);
    safe_VkDisplayPresentInfoKHR();
    ~safe_VkDisplayPresentInfoKHR();
    void initialize(const VkDisplayPresentInfoKHR* in_struct);
    void initialize(const safe_VkDisplayPresentInfoKHR* src);
    VkDisplayPresentInfoKHR *ptr() { return reinterpret_cast<VkDisplayPresentInfoKHR *>(this); }
    VkDisplayPresentInfoKHR const *ptr() const { return reinterpret_cast<VkDisplayPresentInfoKHR const *>(this); }
};

#ifdef VK_USE_PLATFORM_XLIB_KHR
struct safe_VkXlibSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkXlibSurfaceCreateFlagsKHR flags;
    Display* dpy;
    Window window;
    safe_VkXlibSurfaceCreateInfoKHR(const VkXlibSurfaceCreateInfoKHR* in_struct);
    safe_VkXlibSurfaceCreateInfoKHR(const safe_VkXlibSurfaceCreateInfoKHR& src);
    safe_VkXlibSurfaceCreateInfoKHR& operator=(const safe_VkXlibSurfaceCreateInfoKHR& src);
    safe_VkXlibSurfaceCreateInfoKHR();
    ~safe_VkXlibSurfaceCreateInfoKHR();
    void initialize(const VkXlibSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkXlibSurfaceCreateInfoKHR* src);
    VkXlibSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkXlibSurfaceCreateInfoKHR *>(this); }
    VkXlibSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkXlibSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
struct safe_VkXcbSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkXcbSurfaceCreateFlagsKHR flags;
    xcb_connection_t* connection;
    xcb_window_t window;
    safe_VkXcbSurfaceCreateInfoKHR(const VkXcbSurfaceCreateInfoKHR* in_struct);
    safe_VkXcbSurfaceCreateInfoKHR(const safe_VkXcbSurfaceCreateInfoKHR& src);
    safe_VkXcbSurfaceCreateInfoKHR& operator=(const safe_VkXcbSurfaceCreateInfoKHR& src);
    safe_VkXcbSurfaceCreateInfoKHR();
    ~safe_VkXcbSurfaceCreateInfoKHR();
    void initialize(const VkXcbSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkXcbSurfaceCreateInfoKHR* src);
    VkXcbSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkXcbSurfaceCreateInfoKHR *>(this); }
    VkXcbSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkXcbSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
struct safe_VkWaylandSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkWaylandSurfaceCreateFlagsKHR flags;
    struct wl_display* display;
    struct wl_surface* surface;
    safe_VkWaylandSurfaceCreateInfoKHR(const VkWaylandSurfaceCreateInfoKHR* in_struct);
    safe_VkWaylandSurfaceCreateInfoKHR(const safe_VkWaylandSurfaceCreateInfoKHR& src);
    safe_VkWaylandSurfaceCreateInfoKHR& operator=(const safe_VkWaylandSurfaceCreateInfoKHR& src);
    safe_VkWaylandSurfaceCreateInfoKHR();
    ~safe_VkWaylandSurfaceCreateInfoKHR();
    void initialize(const VkWaylandSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkWaylandSurfaceCreateInfoKHR* src);
    VkWaylandSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkWaylandSurfaceCreateInfoKHR *>(this); }
    VkWaylandSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkWaylandSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR
struct safe_VkMirSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkMirSurfaceCreateFlagsKHR flags;
    MirConnection* connection;
    MirSurface* mirSurface;
    safe_VkMirSurfaceCreateInfoKHR(const VkMirSurfaceCreateInfoKHR* in_struct);
    safe_VkMirSurfaceCreateInfoKHR(const safe_VkMirSurfaceCreateInfoKHR& src);
    safe_VkMirSurfaceCreateInfoKHR& operator=(const safe_VkMirSurfaceCreateInfoKHR& src);
    safe_VkMirSurfaceCreateInfoKHR();
    ~safe_VkMirSurfaceCreateInfoKHR();
    void initialize(const VkMirSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkMirSurfaceCreateInfoKHR* src);
    VkMirSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkMirSurfaceCreateInfoKHR *>(this); }
    VkMirSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkMirSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct safe_VkAndroidSurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkAndroidSurfaceCreateFlagsKHR flags;
    ANativeWindow* window;
    safe_VkAndroidSurfaceCreateInfoKHR(const VkAndroidSurfaceCreateInfoKHR* in_struct);
    safe_VkAndroidSurfaceCreateInfoKHR(const safe_VkAndroidSurfaceCreateInfoKHR& src);
    safe_VkAndroidSurfaceCreateInfoKHR& operator=(const safe_VkAndroidSurfaceCreateInfoKHR& src);
    safe_VkAndroidSurfaceCreateInfoKHR();
    ~safe_VkAndroidSurfaceCreateInfoKHR();
    void initialize(const VkAndroidSurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkAndroidSurfaceCreateInfoKHR* src);
    VkAndroidSurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkAndroidSurfaceCreateInfoKHR *>(this); }
    VkAndroidSurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkAndroidSurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkWin32SurfaceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkWin32SurfaceCreateFlagsKHR flags;
    HINSTANCE hinstance;
    HWND hwnd;
    safe_VkWin32SurfaceCreateInfoKHR(const VkWin32SurfaceCreateInfoKHR* in_struct);
    safe_VkWin32SurfaceCreateInfoKHR(const safe_VkWin32SurfaceCreateInfoKHR& src);
    safe_VkWin32SurfaceCreateInfoKHR& operator=(const safe_VkWin32SurfaceCreateInfoKHR& src);
    safe_VkWin32SurfaceCreateInfoKHR();
    ~safe_VkWin32SurfaceCreateInfoKHR();
    void initialize(const VkWin32SurfaceCreateInfoKHR* in_struct);
    void initialize(const safe_VkWin32SurfaceCreateInfoKHR* src);
    VkWin32SurfaceCreateInfoKHR *ptr() { return reinterpret_cast<VkWin32SurfaceCreateInfoKHR *>(this); }
    VkWin32SurfaceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkWin32SurfaceCreateInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkPhysicalDeviceFeatures2KHR {
    VkStructureType sType;
    void* pNext;
    VkPhysicalDeviceFeatures features;
    safe_VkPhysicalDeviceFeatures2KHR(const VkPhysicalDeviceFeatures2KHR* in_struct);
    safe_VkPhysicalDeviceFeatures2KHR(const safe_VkPhysicalDeviceFeatures2KHR& src);
    safe_VkPhysicalDeviceFeatures2KHR& operator=(const safe_VkPhysicalDeviceFeatures2KHR& src);
    safe_VkPhysicalDeviceFeatures2KHR();
    ~safe_VkPhysicalDeviceFeatures2KHR();
    void initialize(const VkPhysicalDeviceFeatures2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceFeatures2KHR* src);
    VkPhysicalDeviceFeatures2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceFeatures2KHR *>(this); }
    VkPhysicalDeviceFeatures2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceFeatures2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkPhysicalDeviceProperties properties;
    safe_VkPhysicalDeviceProperties2KHR(const VkPhysicalDeviceProperties2KHR* in_struct);
    safe_VkPhysicalDeviceProperties2KHR(const safe_VkPhysicalDeviceProperties2KHR& src);
    safe_VkPhysicalDeviceProperties2KHR& operator=(const safe_VkPhysicalDeviceProperties2KHR& src);
    safe_VkPhysicalDeviceProperties2KHR();
    ~safe_VkPhysicalDeviceProperties2KHR();
    void initialize(const VkPhysicalDeviceProperties2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceProperties2KHR* src);
    VkPhysicalDeviceProperties2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceProperties2KHR *>(this); }
    VkPhysicalDeviceProperties2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceProperties2KHR const *>(this); }
};

struct safe_VkFormatProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkFormatProperties formatProperties;
    safe_VkFormatProperties2KHR(const VkFormatProperties2KHR* in_struct);
    safe_VkFormatProperties2KHR(const safe_VkFormatProperties2KHR& src);
    safe_VkFormatProperties2KHR& operator=(const safe_VkFormatProperties2KHR& src);
    safe_VkFormatProperties2KHR();
    ~safe_VkFormatProperties2KHR();
    void initialize(const VkFormatProperties2KHR* in_struct);
    void initialize(const safe_VkFormatProperties2KHR* src);
    VkFormatProperties2KHR *ptr() { return reinterpret_cast<VkFormatProperties2KHR *>(this); }
    VkFormatProperties2KHR const *ptr() const { return reinterpret_cast<VkFormatProperties2KHR const *>(this); }
};

struct safe_VkImageFormatProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkImageFormatProperties imageFormatProperties;
    safe_VkImageFormatProperties2KHR(const VkImageFormatProperties2KHR* in_struct);
    safe_VkImageFormatProperties2KHR(const safe_VkImageFormatProperties2KHR& src);
    safe_VkImageFormatProperties2KHR& operator=(const safe_VkImageFormatProperties2KHR& src);
    safe_VkImageFormatProperties2KHR();
    ~safe_VkImageFormatProperties2KHR();
    void initialize(const VkImageFormatProperties2KHR* in_struct);
    void initialize(const safe_VkImageFormatProperties2KHR* src);
    VkImageFormatProperties2KHR *ptr() { return reinterpret_cast<VkImageFormatProperties2KHR *>(this); }
    VkImageFormatProperties2KHR const *ptr() const { return reinterpret_cast<VkImageFormatProperties2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceImageFormatInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkFormat format;
    VkImageType type;
    VkImageTiling tiling;
    VkImageUsageFlags usage;
    VkImageCreateFlags flags;
    safe_VkPhysicalDeviceImageFormatInfo2KHR(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct);
    safe_VkPhysicalDeviceImageFormatInfo2KHR(const safe_VkPhysicalDeviceImageFormatInfo2KHR& src);
    safe_VkPhysicalDeviceImageFormatInfo2KHR& operator=(const safe_VkPhysicalDeviceImageFormatInfo2KHR& src);
    safe_VkPhysicalDeviceImageFormatInfo2KHR();
    ~safe_VkPhysicalDeviceImageFormatInfo2KHR();
    void initialize(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceImageFormatInfo2KHR* src);
    VkPhysicalDeviceImageFormatInfo2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHR *>(this); }
    VkPhysicalDeviceImageFormatInfo2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2KHR const *>(this); }
};

struct safe_VkQueueFamilyProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkQueueFamilyProperties queueFamilyProperties;
    safe_VkQueueFamilyProperties2KHR(const VkQueueFamilyProperties2KHR* in_struct);
    safe_VkQueueFamilyProperties2KHR(const safe_VkQueueFamilyProperties2KHR& src);
    safe_VkQueueFamilyProperties2KHR& operator=(const safe_VkQueueFamilyProperties2KHR& src);
    safe_VkQueueFamilyProperties2KHR();
    ~safe_VkQueueFamilyProperties2KHR();
    void initialize(const VkQueueFamilyProperties2KHR* in_struct);
    void initialize(const safe_VkQueueFamilyProperties2KHR* src);
    VkQueueFamilyProperties2KHR *ptr() { return reinterpret_cast<VkQueueFamilyProperties2KHR *>(this); }
    VkQueueFamilyProperties2KHR const *ptr() const { return reinterpret_cast<VkQueueFamilyProperties2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceMemoryProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkPhysicalDeviceMemoryProperties memoryProperties;
    safe_VkPhysicalDeviceMemoryProperties2KHR(const VkPhysicalDeviceMemoryProperties2KHR* in_struct);
    safe_VkPhysicalDeviceMemoryProperties2KHR(const safe_VkPhysicalDeviceMemoryProperties2KHR& src);
    safe_VkPhysicalDeviceMemoryProperties2KHR& operator=(const safe_VkPhysicalDeviceMemoryProperties2KHR& src);
    safe_VkPhysicalDeviceMemoryProperties2KHR();
    ~safe_VkPhysicalDeviceMemoryProperties2KHR();
    void initialize(const VkPhysicalDeviceMemoryProperties2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceMemoryProperties2KHR* src);
    VkPhysicalDeviceMemoryProperties2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceMemoryProperties2KHR *>(this); }
    VkPhysicalDeviceMemoryProperties2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMemoryProperties2KHR const *>(this); }
};

struct safe_VkSparseImageFormatProperties2KHR {
    VkStructureType sType;
    void* pNext;
    VkSparseImageFormatProperties properties;
    safe_VkSparseImageFormatProperties2KHR(const VkSparseImageFormatProperties2KHR* in_struct);
    safe_VkSparseImageFormatProperties2KHR(const safe_VkSparseImageFormatProperties2KHR& src);
    safe_VkSparseImageFormatProperties2KHR& operator=(const safe_VkSparseImageFormatProperties2KHR& src);
    safe_VkSparseImageFormatProperties2KHR();
    ~safe_VkSparseImageFormatProperties2KHR();
    void initialize(const VkSparseImageFormatProperties2KHR* in_struct);
    void initialize(const safe_VkSparseImageFormatProperties2KHR* src);
    VkSparseImageFormatProperties2KHR *ptr() { return reinterpret_cast<VkSparseImageFormatProperties2KHR *>(this); }
    VkSparseImageFormatProperties2KHR const *ptr() const { return reinterpret_cast<VkSparseImageFormatProperties2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceSparseImageFormatInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkFormat format;
    VkImageType type;
    VkSampleCountFlagBits samples;
    VkImageUsageFlags usage;
    VkImageTiling tiling;
    safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct);
    safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& src);
    safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& operator=(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& src);
    safe_VkPhysicalDeviceSparseImageFormatInfo2KHR();
    ~safe_VkPhysicalDeviceSparseImageFormatInfo2KHR();
    void initialize(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR* src);
    VkPhysicalDeviceSparseImageFormatInfo2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2KHR *>(this); }
    VkPhysicalDeviceSparseImageFormatInfo2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceExternalImageFormatInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagBitsKHR handleType;
    safe_VkPhysicalDeviceExternalImageFormatInfoKHR(const VkPhysicalDeviceExternalImageFormatInfoKHR* in_struct);
    safe_VkPhysicalDeviceExternalImageFormatInfoKHR(const safe_VkPhysicalDeviceExternalImageFormatInfoKHR& src);
    safe_VkPhysicalDeviceExternalImageFormatInfoKHR& operator=(const safe_VkPhysicalDeviceExternalImageFormatInfoKHR& src);
    safe_VkPhysicalDeviceExternalImageFormatInfoKHR();
    ~safe_VkPhysicalDeviceExternalImageFormatInfoKHR();
    void initialize(const VkPhysicalDeviceExternalImageFormatInfoKHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalImageFormatInfoKHR* src);
    VkPhysicalDeviceExternalImageFormatInfoKHR *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfoKHR *>(this); }
    VkPhysicalDeviceExternalImageFormatInfoKHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfoKHR const *>(this); }
};

struct safe_VkExternalImageFormatPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    VkExternalMemoryPropertiesKHR externalMemoryProperties;
    safe_VkExternalImageFormatPropertiesKHR(const VkExternalImageFormatPropertiesKHR* in_struct);
    safe_VkExternalImageFormatPropertiesKHR(const safe_VkExternalImageFormatPropertiesKHR& src);
    safe_VkExternalImageFormatPropertiesKHR& operator=(const safe_VkExternalImageFormatPropertiesKHR& src);
    safe_VkExternalImageFormatPropertiesKHR();
    ~safe_VkExternalImageFormatPropertiesKHR();
    void initialize(const VkExternalImageFormatPropertiesKHR* in_struct);
    void initialize(const safe_VkExternalImageFormatPropertiesKHR* src);
    VkExternalImageFormatPropertiesKHR *ptr() { return reinterpret_cast<VkExternalImageFormatPropertiesKHR *>(this); }
    VkExternalImageFormatPropertiesKHR const *ptr() const { return reinterpret_cast<VkExternalImageFormatPropertiesKHR const *>(this); }
};

struct safe_VkPhysicalDeviceExternalBufferInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkBufferCreateFlags flags;
    VkBufferUsageFlags usage;
    VkExternalMemoryHandleTypeFlagBitsKHR handleType;
    safe_VkPhysicalDeviceExternalBufferInfoKHR(const VkPhysicalDeviceExternalBufferInfoKHR* in_struct);
    safe_VkPhysicalDeviceExternalBufferInfoKHR(const safe_VkPhysicalDeviceExternalBufferInfoKHR& src);
    safe_VkPhysicalDeviceExternalBufferInfoKHR& operator=(const safe_VkPhysicalDeviceExternalBufferInfoKHR& src);
    safe_VkPhysicalDeviceExternalBufferInfoKHR();
    ~safe_VkPhysicalDeviceExternalBufferInfoKHR();
    void initialize(const VkPhysicalDeviceExternalBufferInfoKHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalBufferInfoKHR* src);
    VkPhysicalDeviceExternalBufferInfoKHR *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalBufferInfoKHR *>(this); }
    VkPhysicalDeviceExternalBufferInfoKHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalBufferInfoKHR const *>(this); }
};

struct safe_VkExternalBufferPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    VkExternalMemoryPropertiesKHR externalMemoryProperties;
    safe_VkExternalBufferPropertiesKHR(const VkExternalBufferPropertiesKHR* in_struct);
    safe_VkExternalBufferPropertiesKHR(const safe_VkExternalBufferPropertiesKHR& src);
    safe_VkExternalBufferPropertiesKHR& operator=(const safe_VkExternalBufferPropertiesKHR& src);
    safe_VkExternalBufferPropertiesKHR();
    ~safe_VkExternalBufferPropertiesKHR();
    void initialize(const VkExternalBufferPropertiesKHR* in_struct);
    void initialize(const safe_VkExternalBufferPropertiesKHR* src);
    VkExternalBufferPropertiesKHR *ptr() { return reinterpret_cast<VkExternalBufferPropertiesKHR *>(this); }
    VkExternalBufferPropertiesKHR const *ptr() const { return reinterpret_cast<VkExternalBufferPropertiesKHR const *>(this); }
};

struct safe_VkPhysicalDeviceIDPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    uint8_t deviceUUID[VK_UUID_SIZE];
    uint8_t driverUUID[VK_UUID_SIZE];
    uint8_t deviceLUID[VK_LUID_SIZE_KHR];
    uint32_t deviceNodeMask;
    VkBool32 deviceLUIDValid;
    safe_VkPhysicalDeviceIDPropertiesKHR(const VkPhysicalDeviceIDPropertiesKHR* in_struct);
    safe_VkPhysicalDeviceIDPropertiesKHR(const safe_VkPhysicalDeviceIDPropertiesKHR& src);
    safe_VkPhysicalDeviceIDPropertiesKHR& operator=(const safe_VkPhysicalDeviceIDPropertiesKHR& src);
    safe_VkPhysicalDeviceIDPropertiesKHR();
    ~safe_VkPhysicalDeviceIDPropertiesKHR();
    void initialize(const VkPhysicalDeviceIDPropertiesKHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceIDPropertiesKHR* src);
    VkPhysicalDeviceIDPropertiesKHR *ptr() { return reinterpret_cast<VkPhysicalDeviceIDPropertiesKHR *>(this); }
    VkPhysicalDeviceIDPropertiesKHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceIDPropertiesKHR const *>(this); }
};

struct safe_VkExternalMemoryImageCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsKHR handleTypes;
    safe_VkExternalMemoryImageCreateInfoKHR(const VkExternalMemoryImageCreateInfoKHR* in_struct);
    safe_VkExternalMemoryImageCreateInfoKHR(const safe_VkExternalMemoryImageCreateInfoKHR& src);
    safe_VkExternalMemoryImageCreateInfoKHR& operator=(const safe_VkExternalMemoryImageCreateInfoKHR& src);
    safe_VkExternalMemoryImageCreateInfoKHR();
    ~safe_VkExternalMemoryImageCreateInfoKHR();
    void initialize(const VkExternalMemoryImageCreateInfoKHR* in_struct);
    void initialize(const safe_VkExternalMemoryImageCreateInfoKHR* src);
    VkExternalMemoryImageCreateInfoKHR *ptr() { return reinterpret_cast<VkExternalMemoryImageCreateInfoKHR *>(this); }
    VkExternalMemoryImageCreateInfoKHR const *ptr() const { return reinterpret_cast<VkExternalMemoryImageCreateInfoKHR const *>(this); }
};

struct safe_VkExternalMemoryBufferCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsKHR handleTypes;
    safe_VkExternalMemoryBufferCreateInfoKHR(const VkExternalMemoryBufferCreateInfoKHR* in_struct);
    safe_VkExternalMemoryBufferCreateInfoKHR(const safe_VkExternalMemoryBufferCreateInfoKHR& src);
    safe_VkExternalMemoryBufferCreateInfoKHR& operator=(const safe_VkExternalMemoryBufferCreateInfoKHR& src);
    safe_VkExternalMemoryBufferCreateInfoKHR();
    ~safe_VkExternalMemoryBufferCreateInfoKHR();
    void initialize(const VkExternalMemoryBufferCreateInfoKHR* in_struct);
    void initialize(const safe_VkExternalMemoryBufferCreateInfoKHR* src);
    VkExternalMemoryBufferCreateInfoKHR *ptr() { return reinterpret_cast<VkExternalMemoryBufferCreateInfoKHR *>(this); }
    VkExternalMemoryBufferCreateInfoKHR const *ptr() const { return reinterpret_cast<VkExternalMemoryBufferCreateInfoKHR const *>(this); }
};

struct safe_VkExportMemoryAllocateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsKHR handleTypes;
    safe_VkExportMemoryAllocateInfoKHR(const VkExportMemoryAllocateInfoKHR* in_struct);
    safe_VkExportMemoryAllocateInfoKHR(const safe_VkExportMemoryAllocateInfoKHR& src);
    safe_VkExportMemoryAllocateInfoKHR& operator=(const safe_VkExportMemoryAllocateInfoKHR& src);
    safe_VkExportMemoryAllocateInfoKHR();
    ~safe_VkExportMemoryAllocateInfoKHR();
    void initialize(const VkExportMemoryAllocateInfoKHR* in_struct);
    void initialize(const safe_VkExportMemoryAllocateInfoKHR* src);
    VkExportMemoryAllocateInfoKHR *ptr() { return reinterpret_cast<VkExportMemoryAllocateInfoKHR *>(this); }
    VkExportMemoryAllocateInfoKHR const *ptr() const { return reinterpret_cast<VkExportMemoryAllocateInfoKHR const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportMemoryWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagBitsKHR handleType;
    HANDLE handle;
    LPCWSTR name;
    safe_VkImportMemoryWin32HandleInfoKHR(const VkImportMemoryWin32HandleInfoKHR* in_struct);
    safe_VkImportMemoryWin32HandleInfoKHR(const safe_VkImportMemoryWin32HandleInfoKHR& src);
    safe_VkImportMemoryWin32HandleInfoKHR& operator=(const safe_VkImportMemoryWin32HandleInfoKHR& src);
    safe_VkImportMemoryWin32HandleInfoKHR();
    ~safe_VkImportMemoryWin32HandleInfoKHR();
    void initialize(const VkImportMemoryWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkImportMemoryWin32HandleInfoKHR* src);
    VkImportMemoryWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkImportMemoryWin32HandleInfoKHR *>(this); }
    VkImportMemoryWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkImportMemoryWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkExportMemoryWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    const SECURITY_ATTRIBUTES* pAttributes;
    DWORD dwAccess;
    LPCWSTR name;
    safe_VkExportMemoryWin32HandleInfoKHR(const VkExportMemoryWin32HandleInfoKHR* in_struct);
    safe_VkExportMemoryWin32HandleInfoKHR(const safe_VkExportMemoryWin32HandleInfoKHR& src);
    safe_VkExportMemoryWin32HandleInfoKHR& operator=(const safe_VkExportMemoryWin32HandleInfoKHR& src);
    safe_VkExportMemoryWin32HandleInfoKHR();
    ~safe_VkExportMemoryWin32HandleInfoKHR();
    void initialize(const VkExportMemoryWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkExportMemoryWin32HandleInfoKHR* src);
    VkExportMemoryWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkExportMemoryWin32HandleInfoKHR *>(this); }
    VkExportMemoryWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkExportMemoryWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkMemoryWin32HandlePropertiesKHR {
    VkStructureType sType;
    void* pNext;
    uint32_t memoryTypeBits;
    safe_VkMemoryWin32HandlePropertiesKHR(const VkMemoryWin32HandlePropertiesKHR* in_struct);
    safe_VkMemoryWin32HandlePropertiesKHR(const safe_VkMemoryWin32HandlePropertiesKHR& src);
    safe_VkMemoryWin32HandlePropertiesKHR& operator=(const safe_VkMemoryWin32HandlePropertiesKHR& src);
    safe_VkMemoryWin32HandlePropertiesKHR();
    ~safe_VkMemoryWin32HandlePropertiesKHR();
    void initialize(const VkMemoryWin32HandlePropertiesKHR* in_struct);
    void initialize(const safe_VkMemoryWin32HandlePropertiesKHR* src);
    VkMemoryWin32HandlePropertiesKHR *ptr() { return reinterpret_cast<VkMemoryWin32HandlePropertiesKHR *>(this); }
    VkMemoryWin32HandlePropertiesKHR const *ptr() const { return reinterpret_cast<VkMemoryWin32HandlePropertiesKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkMemoryGetWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkDeviceMemory memory;
    VkExternalMemoryHandleTypeFlagBitsKHR handleType;
    safe_VkMemoryGetWin32HandleInfoKHR(const VkMemoryGetWin32HandleInfoKHR* in_struct);
    safe_VkMemoryGetWin32HandleInfoKHR(const safe_VkMemoryGetWin32HandleInfoKHR& src);
    safe_VkMemoryGetWin32HandleInfoKHR& operator=(const safe_VkMemoryGetWin32HandleInfoKHR& src);
    safe_VkMemoryGetWin32HandleInfoKHR();
    ~safe_VkMemoryGetWin32HandleInfoKHR();
    void initialize(const VkMemoryGetWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkMemoryGetWin32HandleInfoKHR* src);
    VkMemoryGetWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkMemoryGetWin32HandleInfoKHR *>(this); }
    VkMemoryGetWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkMemoryGetWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkImportMemoryFdInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagBitsKHR handleType;
    int fd;
    safe_VkImportMemoryFdInfoKHR(const VkImportMemoryFdInfoKHR* in_struct);
    safe_VkImportMemoryFdInfoKHR(const safe_VkImportMemoryFdInfoKHR& src);
    safe_VkImportMemoryFdInfoKHR& operator=(const safe_VkImportMemoryFdInfoKHR& src);
    safe_VkImportMemoryFdInfoKHR();
    ~safe_VkImportMemoryFdInfoKHR();
    void initialize(const VkImportMemoryFdInfoKHR* in_struct);
    void initialize(const safe_VkImportMemoryFdInfoKHR* src);
    VkImportMemoryFdInfoKHR *ptr() { return reinterpret_cast<VkImportMemoryFdInfoKHR *>(this); }
    VkImportMemoryFdInfoKHR const *ptr() const { return reinterpret_cast<VkImportMemoryFdInfoKHR const *>(this); }
};

struct safe_VkMemoryFdPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    uint32_t memoryTypeBits;
    safe_VkMemoryFdPropertiesKHR(const VkMemoryFdPropertiesKHR* in_struct);
    safe_VkMemoryFdPropertiesKHR(const safe_VkMemoryFdPropertiesKHR& src);
    safe_VkMemoryFdPropertiesKHR& operator=(const safe_VkMemoryFdPropertiesKHR& src);
    safe_VkMemoryFdPropertiesKHR();
    ~safe_VkMemoryFdPropertiesKHR();
    void initialize(const VkMemoryFdPropertiesKHR* in_struct);
    void initialize(const safe_VkMemoryFdPropertiesKHR* src);
    VkMemoryFdPropertiesKHR *ptr() { return reinterpret_cast<VkMemoryFdPropertiesKHR *>(this); }
    VkMemoryFdPropertiesKHR const *ptr() const { return reinterpret_cast<VkMemoryFdPropertiesKHR const *>(this); }
};

struct safe_VkMemoryGetFdInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkDeviceMemory memory;
    VkExternalMemoryHandleTypeFlagBitsKHR handleType;
    safe_VkMemoryGetFdInfoKHR(const VkMemoryGetFdInfoKHR* in_struct);
    safe_VkMemoryGetFdInfoKHR(const safe_VkMemoryGetFdInfoKHR& src);
    safe_VkMemoryGetFdInfoKHR& operator=(const safe_VkMemoryGetFdInfoKHR& src);
    safe_VkMemoryGetFdInfoKHR();
    ~safe_VkMemoryGetFdInfoKHR();
    void initialize(const VkMemoryGetFdInfoKHR* in_struct);
    void initialize(const safe_VkMemoryGetFdInfoKHR* src);
    VkMemoryGetFdInfoKHR *ptr() { return reinterpret_cast<VkMemoryGetFdInfoKHR *>(this); }
    VkMemoryGetFdInfoKHR const *ptr() const { return reinterpret_cast<VkMemoryGetFdInfoKHR const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkWin32KeyedMutexAcquireReleaseInfoKHR {
    VkStructureType sType;
    const void* pNext;
    uint32_t acquireCount;
    VkDeviceMemory* pAcquireSyncs;
    const uint64_t* pAcquireKeys;
    const uint32_t* pAcquireTimeouts;
    uint32_t releaseCount;
    VkDeviceMemory* pReleaseSyncs;
    const uint64_t* pReleaseKeys;
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& operator=(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoKHR();
    ~safe_VkWin32KeyedMutexAcquireReleaseInfoKHR();
    void initialize(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct);
    void initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR* src);
    VkWin32KeyedMutexAcquireReleaseInfoKHR *ptr() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR *>(this); }
    VkWin32KeyedMutexAcquireReleaseInfoKHR const *ptr() const { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkPhysicalDeviceExternalSemaphoreInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalSemaphoreHandleTypeFlagBitsKHR handleType;
    safe_VkPhysicalDeviceExternalSemaphoreInfoKHR(const VkPhysicalDeviceExternalSemaphoreInfoKHR* in_struct);
    safe_VkPhysicalDeviceExternalSemaphoreInfoKHR(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHR& src);
    safe_VkPhysicalDeviceExternalSemaphoreInfoKHR& operator=(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHR& src);
    safe_VkPhysicalDeviceExternalSemaphoreInfoKHR();
    ~safe_VkPhysicalDeviceExternalSemaphoreInfoKHR();
    void initialize(const VkPhysicalDeviceExternalSemaphoreInfoKHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHR* src);
    VkPhysicalDeviceExternalSemaphoreInfoKHR *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfoKHR *>(this); }
    VkPhysicalDeviceExternalSemaphoreInfoKHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfoKHR const *>(this); }
};

struct safe_VkExternalSemaphorePropertiesKHR {
    VkStructureType sType;
    void* pNext;
    VkExternalSemaphoreHandleTypeFlagsKHR exportFromImportedHandleTypes;
    VkExternalSemaphoreHandleTypeFlagsKHR compatibleHandleTypes;
    VkExternalSemaphoreFeatureFlagsKHR externalSemaphoreFeatures;
    safe_VkExternalSemaphorePropertiesKHR(const VkExternalSemaphorePropertiesKHR* in_struct);
    safe_VkExternalSemaphorePropertiesKHR(const safe_VkExternalSemaphorePropertiesKHR& src);
    safe_VkExternalSemaphorePropertiesKHR& operator=(const safe_VkExternalSemaphorePropertiesKHR& src);
    safe_VkExternalSemaphorePropertiesKHR();
    ~safe_VkExternalSemaphorePropertiesKHR();
    void initialize(const VkExternalSemaphorePropertiesKHR* in_struct);
    void initialize(const safe_VkExternalSemaphorePropertiesKHR* src);
    VkExternalSemaphorePropertiesKHR *ptr() { return reinterpret_cast<VkExternalSemaphorePropertiesKHR *>(this); }
    VkExternalSemaphorePropertiesKHR const *ptr() const { return reinterpret_cast<VkExternalSemaphorePropertiesKHR const *>(this); }
};

struct safe_VkExportSemaphoreCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalSemaphoreHandleTypeFlagsKHR handleTypes;
    safe_VkExportSemaphoreCreateInfoKHR(const VkExportSemaphoreCreateInfoKHR* in_struct);
    safe_VkExportSemaphoreCreateInfoKHR(const safe_VkExportSemaphoreCreateInfoKHR& src);
    safe_VkExportSemaphoreCreateInfoKHR& operator=(const safe_VkExportSemaphoreCreateInfoKHR& src);
    safe_VkExportSemaphoreCreateInfoKHR();
    ~safe_VkExportSemaphoreCreateInfoKHR();
    void initialize(const VkExportSemaphoreCreateInfoKHR* in_struct);
    void initialize(const safe_VkExportSemaphoreCreateInfoKHR* src);
    VkExportSemaphoreCreateInfoKHR *ptr() { return reinterpret_cast<VkExportSemaphoreCreateInfoKHR *>(this); }
    VkExportSemaphoreCreateInfoKHR const *ptr() const { return reinterpret_cast<VkExportSemaphoreCreateInfoKHR const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportSemaphoreWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkSemaphore semaphore;
    VkSemaphoreImportFlagsKHR flags;
    VkExternalSemaphoreHandleTypeFlagBitsKHR handleType;
    HANDLE handle;
    LPCWSTR name;
    safe_VkImportSemaphoreWin32HandleInfoKHR(const VkImportSemaphoreWin32HandleInfoKHR* in_struct);
    safe_VkImportSemaphoreWin32HandleInfoKHR(const safe_VkImportSemaphoreWin32HandleInfoKHR& src);
    safe_VkImportSemaphoreWin32HandleInfoKHR& operator=(const safe_VkImportSemaphoreWin32HandleInfoKHR& src);
    safe_VkImportSemaphoreWin32HandleInfoKHR();
    ~safe_VkImportSemaphoreWin32HandleInfoKHR();
    void initialize(const VkImportSemaphoreWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkImportSemaphoreWin32HandleInfoKHR* src);
    VkImportSemaphoreWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHR *>(this); }
    VkImportSemaphoreWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkExportSemaphoreWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    const SECURITY_ATTRIBUTES* pAttributes;
    DWORD dwAccess;
    LPCWSTR name;
    safe_VkExportSemaphoreWin32HandleInfoKHR(const VkExportSemaphoreWin32HandleInfoKHR* in_struct);
    safe_VkExportSemaphoreWin32HandleInfoKHR(const safe_VkExportSemaphoreWin32HandleInfoKHR& src);
    safe_VkExportSemaphoreWin32HandleInfoKHR& operator=(const safe_VkExportSemaphoreWin32HandleInfoKHR& src);
    safe_VkExportSemaphoreWin32HandleInfoKHR();
    ~safe_VkExportSemaphoreWin32HandleInfoKHR();
    void initialize(const VkExportSemaphoreWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkExportSemaphoreWin32HandleInfoKHR* src);
    VkExportSemaphoreWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHR *>(this); }
    VkExportSemaphoreWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkD3D12FenceSubmitInfoKHR {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreValuesCount;
    const uint64_t* pWaitSemaphoreValues;
    uint32_t signalSemaphoreValuesCount;
    const uint64_t* pSignalSemaphoreValues;
    safe_VkD3D12FenceSubmitInfoKHR(const VkD3D12FenceSubmitInfoKHR* in_struct);
    safe_VkD3D12FenceSubmitInfoKHR(const safe_VkD3D12FenceSubmitInfoKHR& src);
    safe_VkD3D12FenceSubmitInfoKHR& operator=(const safe_VkD3D12FenceSubmitInfoKHR& src);
    safe_VkD3D12FenceSubmitInfoKHR();
    ~safe_VkD3D12FenceSubmitInfoKHR();
    void initialize(const VkD3D12FenceSubmitInfoKHR* in_struct);
    void initialize(const safe_VkD3D12FenceSubmitInfoKHR* src);
    VkD3D12FenceSubmitInfoKHR *ptr() { return reinterpret_cast<VkD3D12FenceSubmitInfoKHR *>(this); }
    VkD3D12FenceSubmitInfoKHR const *ptr() const { return reinterpret_cast<VkD3D12FenceSubmitInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkSemaphoreGetWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkSemaphore semaphore;
    VkExternalSemaphoreHandleTypeFlagBitsKHR handleType;
    safe_VkSemaphoreGetWin32HandleInfoKHR(const VkSemaphoreGetWin32HandleInfoKHR* in_struct);
    safe_VkSemaphoreGetWin32HandleInfoKHR(const safe_VkSemaphoreGetWin32HandleInfoKHR& src);
    safe_VkSemaphoreGetWin32HandleInfoKHR& operator=(const safe_VkSemaphoreGetWin32HandleInfoKHR& src);
    safe_VkSemaphoreGetWin32HandleInfoKHR();
    ~safe_VkSemaphoreGetWin32HandleInfoKHR();
    void initialize(const VkSemaphoreGetWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkSemaphoreGetWin32HandleInfoKHR* src);
    VkSemaphoreGetWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkSemaphoreGetWin32HandleInfoKHR *>(this); }
    VkSemaphoreGetWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkSemaphoreGetWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkImportSemaphoreFdInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkSemaphore semaphore;
    VkSemaphoreImportFlagsKHR flags;
    VkExternalSemaphoreHandleTypeFlagBitsKHR handleType;
    int fd;
    safe_VkImportSemaphoreFdInfoKHR(const VkImportSemaphoreFdInfoKHR* in_struct);
    safe_VkImportSemaphoreFdInfoKHR(const safe_VkImportSemaphoreFdInfoKHR& src);
    safe_VkImportSemaphoreFdInfoKHR& operator=(const safe_VkImportSemaphoreFdInfoKHR& src);
    safe_VkImportSemaphoreFdInfoKHR();
    ~safe_VkImportSemaphoreFdInfoKHR();
    void initialize(const VkImportSemaphoreFdInfoKHR* in_struct);
    void initialize(const safe_VkImportSemaphoreFdInfoKHR* src);
    VkImportSemaphoreFdInfoKHR *ptr() { return reinterpret_cast<VkImportSemaphoreFdInfoKHR *>(this); }
    VkImportSemaphoreFdInfoKHR const *ptr() const { return reinterpret_cast<VkImportSemaphoreFdInfoKHR const *>(this); }
};

struct safe_VkSemaphoreGetFdInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkSemaphore semaphore;
    VkExternalSemaphoreHandleTypeFlagBitsKHR handleType;
    safe_VkSemaphoreGetFdInfoKHR(const VkSemaphoreGetFdInfoKHR* in_struct);
    safe_VkSemaphoreGetFdInfoKHR(const safe_VkSemaphoreGetFdInfoKHR& src);
    safe_VkSemaphoreGetFdInfoKHR& operator=(const safe_VkSemaphoreGetFdInfoKHR& src);
    safe_VkSemaphoreGetFdInfoKHR();
    ~safe_VkSemaphoreGetFdInfoKHR();
    void initialize(const VkSemaphoreGetFdInfoKHR* in_struct);
    void initialize(const safe_VkSemaphoreGetFdInfoKHR* src);
    VkSemaphoreGetFdInfoKHR *ptr() { return reinterpret_cast<VkSemaphoreGetFdInfoKHR *>(this); }
    VkSemaphoreGetFdInfoKHR const *ptr() const { return reinterpret_cast<VkSemaphoreGetFdInfoKHR const *>(this); }
};

struct safe_VkPhysicalDevicePushDescriptorPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    uint32_t maxPushDescriptors;
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& src);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR& operator=(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& src);
    safe_VkPhysicalDevicePushDescriptorPropertiesKHR();
    ~safe_VkPhysicalDevicePushDescriptorPropertiesKHR();
    void initialize(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct);
    void initialize(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR* src);
    VkPhysicalDevicePushDescriptorPropertiesKHR *ptr() { return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR *>(this); }
    VkPhysicalDevicePushDescriptorPropertiesKHR const *ptr() const { return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR const *>(this); }
};

struct safe_VkPhysicalDevice16BitStorageFeaturesKHR {
    VkStructureType sType;
    void* pNext;
    VkBool32 storageBuffer16BitAccess;
    VkBool32 uniformAndStorageBuffer16BitAccess;
    VkBool32 storagePushConstant16;
    VkBool32 storageInputOutput16;
    safe_VkPhysicalDevice16BitStorageFeaturesKHR(const VkPhysicalDevice16BitStorageFeaturesKHR* in_struct);
    safe_VkPhysicalDevice16BitStorageFeaturesKHR(const safe_VkPhysicalDevice16BitStorageFeaturesKHR& src);
    safe_VkPhysicalDevice16BitStorageFeaturesKHR& operator=(const safe_VkPhysicalDevice16BitStorageFeaturesKHR& src);
    safe_VkPhysicalDevice16BitStorageFeaturesKHR();
    ~safe_VkPhysicalDevice16BitStorageFeaturesKHR();
    void initialize(const VkPhysicalDevice16BitStorageFeaturesKHR* in_struct);
    void initialize(const safe_VkPhysicalDevice16BitStorageFeaturesKHR* src);
    VkPhysicalDevice16BitStorageFeaturesKHR *ptr() { return reinterpret_cast<VkPhysicalDevice16BitStorageFeaturesKHR *>(this); }
    VkPhysicalDevice16BitStorageFeaturesKHR const *ptr() const { return reinterpret_cast<VkPhysicalDevice16BitStorageFeaturesKHR const *>(this); }
};

struct safe_VkPresentRegionKHR {
    uint32_t rectangleCount;
    const VkRectLayerKHR* pRectangles;
    safe_VkPresentRegionKHR(const VkPresentRegionKHR* in_struct);
    safe_VkPresentRegionKHR(const safe_VkPresentRegionKHR& src);
    safe_VkPresentRegionKHR& operator=(const safe_VkPresentRegionKHR& src);
    safe_VkPresentRegionKHR();
    ~safe_VkPresentRegionKHR();
    void initialize(const VkPresentRegionKHR* in_struct);
    void initialize(const safe_VkPresentRegionKHR* src);
    VkPresentRegionKHR *ptr() { return reinterpret_cast<VkPresentRegionKHR *>(this); }
    VkPresentRegionKHR const *ptr() const { return reinterpret_cast<VkPresentRegionKHR const *>(this); }
};

struct safe_VkPresentRegionsKHR {
    VkStructureType sType;
    const void* pNext;
    uint32_t swapchainCount;
    safe_VkPresentRegionKHR* pRegions;
    safe_VkPresentRegionsKHR(const VkPresentRegionsKHR* in_struct);
    safe_VkPresentRegionsKHR(const safe_VkPresentRegionsKHR& src);
    safe_VkPresentRegionsKHR& operator=(const safe_VkPresentRegionsKHR& src);
    safe_VkPresentRegionsKHR();
    ~safe_VkPresentRegionsKHR();
    void initialize(const VkPresentRegionsKHR* in_struct);
    void initialize(const safe_VkPresentRegionsKHR* src);
    VkPresentRegionsKHR *ptr() { return reinterpret_cast<VkPresentRegionsKHR *>(this); }
    VkPresentRegionsKHR const *ptr() const { return reinterpret_cast<VkPresentRegionsKHR const *>(this); }
};

struct safe_VkDescriptorUpdateTemplateCreateInfoKHR {
    VkStructureType sType;
    void* pNext;
    VkDescriptorUpdateTemplateCreateFlagsKHR flags;
    uint32_t descriptorUpdateEntryCount;
    const VkDescriptorUpdateTemplateEntryKHR* pDescriptorUpdateEntries;
    VkDescriptorUpdateTemplateTypeKHR templateType;
    VkDescriptorSetLayout descriptorSetLayout;
    VkPipelineBindPoint pipelineBindPoint;
    VkPipelineLayout pipelineLayout;
    uint32_t set;
    safe_VkDescriptorUpdateTemplateCreateInfoKHR(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct);
    safe_VkDescriptorUpdateTemplateCreateInfoKHR(const safe_VkDescriptorUpdateTemplateCreateInfoKHR& src);
    safe_VkDescriptorUpdateTemplateCreateInfoKHR& operator=(const safe_VkDescriptorUpdateTemplateCreateInfoKHR& src);
    safe_VkDescriptorUpdateTemplateCreateInfoKHR();
    ~safe_VkDescriptorUpdateTemplateCreateInfoKHR();
    void initialize(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct);
    void initialize(const safe_VkDescriptorUpdateTemplateCreateInfoKHR* src);
    VkDescriptorUpdateTemplateCreateInfoKHR *ptr() { return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfoKHR *>(this); }
    VkDescriptorUpdateTemplateCreateInfoKHR const *ptr() const { return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfoKHR const *>(this); }
};

struct safe_VkSharedPresentSurfaceCapabilitiesKHR {
    VkStructureType sType;
    void* pNext;
    VkImageUsageFlags sharedPresentSupportedUsageFlags;
    safe_VkSharedPresentSurfaceCapabilitiesKHR(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct);
    safe_VkSharedPresentSurfaceCapabilitiesKHR(const safe_VkSharedPresentSurfaceCapabilitiesKHR& src);
    safe_VkSharedPresentSurfaceCapabilitiesKHR& operator=(const safe_VkSharedPresentSurfaceCapabilitiesKHR& src);
    safe_VkSharedPresentSurfaceCapabilitiesKHR();
    ~safe_VkSharedPresentSurfaceCapabilitiesKHR();
    void initialize(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct);
    void initialize(const safe_VkSharedPresentSurfaceCapabilitiesKHR* src);
    VkSharedPresentSurfaceCapabilitiesKHR *ptr() { return reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR *>(this); }
    VkSharedPresentSurfaceCapabilitiesKHR const *ptr() const { return reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR const *>(this); }
};

struct safe_VkPhysicalDeviceExternalFenceInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalFenceHandleTypeFlagBitsKHR handleType;
    safe_VkPhysicalDeviceExternalFenceInfoKHR(const VkPhysicalDeviceExternalFenceInfoKHR* in_struct);
    safe_VkPhysicalDeviceExternalFenceInfoKHR(const safe_VkPhysicalDeviceExternalFenceInfoKHR& src);
    safe_VkPhysicalDeviceExternalFenceInfoKHR& operator=(const safe_VkPhysicalDeviceExternalFenceInfoKHR& src);
    safe_VkPhysicalDeviceExternalFenceInfoKHR();
    ~safe_VkPhysicalDeviceExternalFenceInfoKHR();
    void initialize(const VkPhysicalDeviceExternalFenceInfoKHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalFenceInfoKHR* src);
    VkPhysicalDeviceExternalFenceInfoKHR *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalFenceInfoKHR *>(this); }
    VkPhysicalDeviceExternalFenceInfoKHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalFenceInfoKHR const *>(this); }
};

struct safe_VkExternalFencePropertiesKHR {
    VkStructureType sType;
    void* pNext;
    VkExternalFenceHandleTypeFlagsKHR exportFromImportedHandleTypes;
    VkExternalFenceHandleTypeFlagsKHR compatibleHandleTypes;
    VkExternalFenceFeatureFlagsKHR externalFenceFeatures;
    safe_VkExternalFencePropertiesKHR(const VkExternalFencePropertiesKHR* in_struct);
    safe_VkExternalFencePropertiesKHR(const safe_VkExternalFencePropertiesKHR& src);
    safe_VkExternalFencePropertiesKHR& operator=(const safe_VkExternalFencePropertiesKHR& src);
    safe_VkExternalFencePropertiesKHR();
    ~safe_VkExternalFencePropertiesKHR();
    void initialize(const VkExternalFencePropertiesKHR* in_struct);
    void initialize(const safe_VkExternalFencePropertiesKHR* src);
    VkExternalFencePropertiesKHR *ptr() { return reinterpret_cast<VkExternalFencePropertiesKHR *>(this); }
    VkExternalFencePropertiesKHR const *ptr() const { return reinterpret_cast<VkExternalFencePropertiesKHR const *>(this); }
};

struct safe_VkExportFenceCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkExternalFenceHandleTypeFlagsKHR handleTypes;
    safe_VkExportFenceCreateInfoKHR(const VkExportFenceCreateInfoKHR* in_struct);
    safe_VkExportFenceCreateInfoKHR(const safe_VkExportFenceCreateInfoKHR& src);
    safe_VkExportFenceCreateInfoKHR& operator=(const safe_VkExportFenceCreateInfoKHR& src);
    safe_VkExportFenceCreateInfoKHR();
    ~safe_VkExportFenceCreateInfoKHR();
    void initialize(const VkExportFenceCreateInfoKHR* in_struct);
    void initialize(const safe_VkExportFenceCreateInfoKHR* src);
    VkExportFenceCreateInfoKHR *ptr() { return reinterpret_cast<VkExportFenceCreateInfoKHR *>(this); }
    VkExportFenceCreateInfoKHR const *ptr() const { return reinterpret_cast<VkExportFenceCreateInfoKHR const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportFenceWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkFence fence;
    VkFenceImportFlagsKHR flags;
    VkExternalFenceHandleTypeFlagBitsKHR handleType;
    HANDLE handle;
    LPCWSTR name;
    safe_VkImportFenceWin32HandleInfoKHR(const VkImportFenceWin32HandleInfoKHR* in_struct);
    safe_VkImportFenceWin32HandleInfoKHR(const safe_VkImportFenceWin32HandleInfoKHR& src);
    safe_VkImportFenceWin32HandleInfoKHR& operator=(const safe_VkImportFenceWin32HandleInfoKHR& src);
    safe_VkImportFenceWin32HandleInfoKHR();
    ~safe_VkImportFenceWin32HandleInfoKHR();
    void initialize(const VkImportFenceWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkImportFenceWin32HandleInfoKHR* src);
    VkImportFenceWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkImportFenceWin32HandleInfoKHR *>(this); }
    VkImportFenceWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkImportFenceWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkExportFenceWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    const SECURITY_ATTRIBUTES* pAttributes;
    DWORD dwAccess;
    LPCWSTR name;
    safe_VkExportFenceWin32HandleInfoKHR(const VkExportFenceWin32HandleInfoKHR* in_struct);
    safe_VkExportFenceWin32HandleInfoKHR(const safe_VkExportFenceWin32HandleInfoKHR& src);
    safe_VkExportFenceWin32HandleInfoKHR& operator=(const safe_VkExportFenceWin32HandleInfoKHR& src);
    safe_VkExportFenceWin32HandleInfoKHR();
    ~safe_VkExportFenceWin32HandleInfoKHR();
    void initialize(const VkExportFenceWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkExportFenceWin32HandleInfoKHR* src);
    VkExportFenceWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkExportFenceWin32HandleInfoKHR *>(this); }
    VkExportFenceWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkExportFenceWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkFenceGetWin32HandleInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkFence fence;
    VkExternalFenceHandleTypeFlagBitsKHR handleType;
    safe_VkFenceGetWin32HandleInfoKHR(const VkFenceGetWin32HandleInfoKHR* in_struct);
    safe_VkFenceGetWin32HandleInfoKHR(const safe_VkFenceGetWin32HandleInfoKHR& src);
    safe_VkFenceGetWin32HandleInfoKHR& operator=(const safe_VkFenceGetWin32HandleInfoKHR& src);
    safe_VkFenceGetWin32HandleInfoKHR();
    ~safe_VkFenceGetWin32HandleInfoKHR();
    void initialize(const VkFenceGetWin32HandleInfoKHR* in_struct);
    void initialize(const safe_VkFenceGetWin32HandleInfoKHR* src);
    VkFenceGetWin32HandleInfoKHR *ptr() { return reinterpret_cast<VkFenceGetWin32HandleInfoKHR *>(this); }
    VkFenceGetWin32HandleInfoKHR const *ptr() const { return reinterpret_cast<VkFenceGetWin32HandleInfoKHR const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkImportFenceFdInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkFence fence;
    VkFenceImportFlagsKHR flags;
    VkExternalFenceHandleTypeFlagBitsKHR handleType;
    int fd;
    safe_VkImportFenceFdInfoKHR(const VkImportFenceFdInfoKHR* in_struct);
    safe_VkImportFenceFdInfoKHR(const safe_VkImportFenceFdInfoKHR& src);
    safe_VkImportFenceFdInfoKHR& operator=(const safe_VkImportFenceFdInfoKHR& src);
    safe_VkImportFenceFdInfoKHR();
    ~safe_VkImportFenceFdInfoKHR();
    void initialize(const VkImportFenceFdInfoKHR* in_struct);
    void initialize(const safe_VkImportFenceFdInfoKHR* src);
    VkImportFenceFdInfoKHR *ptr() { return reinterpret_cast<VkImportFenceFdInfoKHR *>(this); }
    VkImportFenceFdInfoKHR const *ptr() const { return reinterpret_cast<VkImportFenceFdInfoKHR const *>(this); }
};

struct safe_VkFenceGetFdInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkFence fence;
    VkExternalFenceHandleTypeFlagBitsKHR handleType;
    safe_VkFenceGetFdInfoKHR(const VkFenceGetFdInfoKHR* in_struct);
    safe_VkFenceGetFdInfoKHR(const safe_VkFenceGetFdInfoKHR& src);
    safe_VkFenceGetFdInfoKHR& operator=(const safe_VkFenceGetFdInfoKHR& src);
    safe_VkFenceGetFdInfoKHR();
    ~safe_VkFenceGetFdInfoKHR();
    void initialize(const VkFenceGetFdInfoKHR* in_struct);
    void initialize(const safe_VkFenceGetFdInfoKHR* src);
    VkFenceGetFdInfoKHR *ptr() { return reinterpret_cast<VkFenceGetFdInfoKHR *>(this); }
    VkFenceGetFdInfoKHR const *ptr() const { return reinterpret_cast<VkFenceGetFdInfoKHR const *>(this); }
};

struct safe_VkPhysicalDevicePointClippingPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    VkPointClippingBehaviorKHR pointClippingBehavior;
    safe_VkPhysicalDevicePointClippingPropertiesKHR(const VkPhysicalDevicePointClippingPropertiesKHR* in_struct);
    safe_VkPhysicalDevicePointClippingPropertiesKHR(const safe_VkPhysicalDevicePointClippingPropertiesKHR& src);
    safe_VkPhysicalDevicePointClippingPropertiesKHR& operator=(const safe_VkPhysicalDevicePointClippingPropertiesKHR& src);
    safe_VkPhysicalDevicePointClippingPropertiesKHR();
    ~safe_VkPhysicalDevicePointClippingPropertiesKHR();
    void initialize(const VkPhysicalDevicePointClippingPropertiesKHR* in_struct);
    void initialize(const safe_VkPhysicalDevicePointClippingPropertiesKHR* src);
    VkPhysicalDevicePointClippingPropertiesKHR *ptr() { return reinterpret_cast<VkPhysicalDevicePointClippingPropertiesKHR *>(this); }
    VkPhysicalDevicePointClippingPropertiesKHR const *ptr() const { return reinterpret_cast<VkPhysicalDevicePointClippingPropertiesKHR const *>(this); }
};

struct safe_VkRenderPassInputAttachmentAspectCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    uint32_t aspectReferenceCount;
    const VkInputAttachmentAspectReferenceKHR* pAspectReferences;
    safe_VkRenderPassInputAttachmentAspectCreateInfoKHR(const VkRenderPassInputAttachmentAspectCreateInfoKHR* in_struct);
    safe_VkRenderPassInputAttachmentAspectCreateInfoKHR(const safe_VkRenderPassInputAttachmentAspectCreateInfoKHR& src);
    safe_VkRenderPassInputAttachmentAspectCreateInfoKHR& operator=(const safe_VkRenderPassInputAttachmentAspectCreateInfoKHR& src);
    safe_VkRenderPassInputAttachmentAspectCreateInfoKHR();
    ~safe_VkRenderPassInputAttachmentAspectCreateInfoKHR();
    void initialize(const VkRenderPassInputAttachmentAspectCreateInfoKHR* in_struct);
    void initialize(const safe_VkRenderPassInputAttachmentAspectCreateInfoKHR* src);
    VkRenderPassInputAttachmentAspectCreateInfoKHR *ptr() { return reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfoKHR *>(this); }
    VkRenderPassInputAttachmentAspectCreateInfoKHR const *ptr() const { return reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfoKHR const *>(this); }
};

struct safe_VkImageViewUsageCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkImageUsageFlags usage;
    safe_VkImageViewUsageCreateInfoKHR(const VkImageViewUsageCreateInfoKHR* in_struct);
    safe_VkImageViewUsageCreateInfoKHR(const safe_VkImageViewUsageCreateInfoKHR& src);
    safe_VkImageViewUsageCreateInfoKHR& operator=(const safe_VkImageViewUsageCreateInfoKHR& src);
    safe_VkImageViewUsageCreateInfoKHR();
    ~safe_VkImageViewUsageCreateInfoKHR();
    void initialize(const VkImageViewUsageCreateInfoKHR* in_struct);
    void initialize(const safe_VkImageViewUsageCreateInfoKHR* src);
    VkImageViewUsageCreateInfoKHR *ptr() { return reinterpret_cast<VkImageViewUsageCreateInfoKHR *>(this); }
    VkImageViewUsageCreateInfoKHR const *ptr() const { return reinterpret_cast<VkImageViewUsageCreateInfoKHR const *>(this); }
};

struct safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkTessellationDomainOriginKHR domainOrigin;
    safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR(const VkPipelineTessellationDomainOriginStateCreateInfoKHR* in_struct);
    safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR(const safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR& src);
    safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR& operator=(const safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR& src);
    safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR();
    ~safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR();
    void initialize(const VkPipelineTessellationDomainOriginStateCreateInfoKHR* in_struct);
    void initialize(const safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR* src);
    VkPipelineTessellationDomainOriginStateCreateInfoKHR *ptr() { return reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfoKHR *>(this); }
    VkPipelineTessellationDomainOriginStateCreateInfoKHR const *ptr() const { return reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfoKHR const *>(this); }
};

struct safe_VkPhysicalDeviceSurfaceInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkSurfaceKHR surface;
    safe_VkPhysicalDeviceSurfaceInfo2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct);
    safe_VkPhysicalDeviceSurfaceInfo2KHR(const safe_VkPhysicalDeviceSurfaceInfo2KHR& src);
    safe_VkPhysicalDeviceSurfaceInfo2KHR& operator=(const safe_VkPhysicalDeviceSurfaceInfo2KHR& src);
    safe_VkPhysicalDeviceSurfaceInfo2KHR();
    ~safe_VkPhysicalDeviceSurfaceInfo2KHR();
    void initialize(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceSurfaceInfo2KHR* src);
    VkPhysicalDeviceSurfaceInfo2KHR *ptr() { return reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR *>(this); }
    VkPhysicalDeviceSurfaceInfo2KHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR const *>(this); }
};

struct safe_VkSurfaceCapabilities2KHR {
    VkStructureType sType;
    void* pNext;
    VkSurfaceCapabilitiesKHR surfaceCapabilities;
    safe_VkSurfaceCapabilities2KHR(const VkSurfaceCapabilities2KHR* in_struct);
    safe_VkSurfaceCapabilities2KHR(const safe_VkSurfaceCapabilities2KHR& src);
    safe_VkSurfaceCapabilities2KHR& operator=(const safe_VkSurfaceCapabilities2KHR& src);
    safe_VkSurfaceCapabilities2KHR();
    ~safe_VkSurfaceCapabilities2KHR();
    void initialize(const VkSurfaceCapabilities2KHR* in_struct);
    void initialize(const safe_VkSurfaceCapabilities2KHR* src);
    VkSurfaceCapabilities2KHR *ptr() { return reinterpret_cast<VkSurfaceCapabilities2KHR *>(this); }
    VkSurfaceCapabilities2KHR const *ptr() const { return reinterpret_cast<VkSurfaceCapabilities2KHR const *>(this); }
};

struct safe_VkSurfaceFormat2KHR {
    VkStructureType sType;
    void* pNext;
    VkSurfaceFormatKHR surfaceFormat;
    safe_VkSurfaceFormat2KHR(const VkSurfaceFormat2KHR* in_struct);
    safe_VkSurfaceFormat2KHR(const safe_VkSurfaceFormat2KHR& src);
    safe_VkSurfaceFormat2KHR& operator=(const safe_VkSurfaceFormat2KHR& src);
    safe_VkSurfaceFormat2KHR();
    ~safe_VkSurfaceFormat2KHR();
    void initialize(const VkSurfaceFormat2KHR* in_struct);
    void initialize(const safe_VkSurfaceFormat2KHR* src);
    VkSurfaceFormat2KHR *ptr() { return reinterpret_cast<VkSurfaceFormat2KHR *>(this); }
    VkSurfaceFormat2KHR const *ptr() const { return reinterpret_cast<VkSurfaceFormat2KHR const *>(this); }
};

struct safe_VkPhysicalDeviceVariablePointerFeaturesKHR {
    VkStructureType sType;
    void* pNext;
    VkBool32 variablePointersStorageBuffer;
    VkBool32 variablePointers;
    safe_VkPhysicalDeviceVariablePointerFeaturesKHR(const VkPhysicalDeviceVariablePointerFeaturesKHR* in_struct);
    safe_VkPhysicalDeviceVariablePointerFeaturesKHR(const safe_VkPhysicalDeviceVariablePointerFeaturesKHR& src);
    safe_VkPhysicalDeviceVariablePointerFeaturesKHR& operator=(const safe_VkPhysicalDeviceVariablePointerFeaturesKHR& src);
    safe_VkPhysicalDeviceVariablePointerFeaturesKHR();
    ~safe_VkPhysicalDeviceVariablePointerFeaturesKHR();
    void initialize(const VkPhysicalDeviceVariablePointerFeaturesKHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceVariablePointerFeaturesKHR* src);
    VkPhysicalDeviceVariablePointerFeaturesKHR *ptr() { return reinterpret_cast<VkPhysicalDeviceVariablePointerFeaturesKHR *>(this); }
    VkPhysicalDeviceVariablePointerFeaturesKHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceVariablePointerFeaturesKHR const *>(this); }
};

struct safe_VkMemoryDedicatedRequirementsKHR {
    VkStructureType sType;
    void* pNext;
    VkBool32 prefersDedicatedAllocation;
    VkBool32 requiresDedicatedAllocation;
    safe_VkMemoryDedicatedRequirementsKHR(const VkMemoryDedicatedRequirementsKHR* in_struct);
    safe_VkMemoryDedicatedRequirementsKHR(const safe_VkMemoryDedicatedRequirementsKHR& src);
    safe_VkMemoryDedicatedRequirementsKHR& operator=(const safe_VkMemoryDedicatedRequirementsKHR& src);
    safe_VkMemoryDedicatedRequirementsKHR();
    ~safe_VkMemoryDedicatedRequirementsKHR();
    void initialize(const VkMemoryDedicatedRequirementsKHR* in_struct);
    void initialize(const safe_VkMemoryDedicatedRequirementsKHR* src);
    VkMemoryDedicatedRequirementsKHR *ptr() { return reinterpret_cast<VkMemoryDedicatedRequirementsKHR *>(this); }
    VkMemoryDedicatedRequirementsKHR const *ptr() const { return reinterpret_cast<VkMemoryDedicatedRequirementsKHR const *>(this); }
};

struct safe_VkMemoryDedicatedAllocateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkImage image;
    VkBuffer buffer;
    safe_VkMemoryDedicatedAllocateInfoKHR(const VkMemoryDedicatedAllocateInfoKHR* in_struct);
    safe_VkMemoryDedicatedAllocateInfoKHR(const safe_VkMemoryDedicatedAllocateInfoKHR& src);
    safe_VkMemoryDedicatedAllocateInfoKHR& operator=(const safe_VkMemoryDedicatedAllocateInfoKHR& src);
    safe_VkMemoryDedicatedAllocateInfoKHR();
    ~safe_VkMemoryDedicatedAllocateInfoKHR();
    void initialize(const VkMemoryDedicatedAllocateInfoKHR* in_struct);
    void initialize(const safe_VkMemoryDedicatedAllocateInfoKHR* src);
    VkMemoryDedicatedAllocateInfoKHR *ptr() { return reinterpret_cast<VkMemoryDedicatedAllocateInfoKHR *>(this); }
    VkMemoryDedicatedAllocateInfoKHR const *ptr() const { return reinterpret_cast<VkMemoryDedicatedAllocateInfoKHR const *>(this); }
};

struct safe_VkBufferMemoryRequirementsInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkBuffer buffer;
    safe_VkBufferMemoryRequirementsInfo2KHR(const VkBufferMemoryRequirementsInfo2KHR* in_struct);
    safe_VkBufferMemoryRequirementsInfo2KHR(const safe_VkBufferMemoryRequirementsInfo2KHR& src);
    safe_VkBufferMemoryRequirementsInfo2KHR& operator=(const safe_VkBufferMemoryRequirementsInfo2KHR& src);
    safe_VkBufferMemoryRequirementsInfo2KHR();
    ~safe_VkBufferMemoryRequirementsInfo2KHR();
    void initialize(const VkBufferMemoryRequirementsInfo2KHR* in_struct);
    void initialize(const safe_VkBufferMemoryRequirementsInfo2KHR* src);
    VkBufferMemoryRequirementsInfo2KHR *ptr() { return reinterpret_cast<VkBufferMemoryRequirementsInfo2KHR *>(this); }
    VkBufferMemoryRequirementsInfo2KHR const *ptr() const { return reinterpret_cast<VkBufferMemoryRequirementsInfo2KHR const *>(this); }
};

struct safe_VkImageMemoryRequirementsInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkImage image;
    safe_VkImageMemoryRequirementsInfo2KHR(const VkImageMemoryRequirementsInfo2KHR* in_struct);
    safe_VkImageMemoryRequirementsInfo2KHR(const safe_VkImageMemoryRequirementsInfo2KHR& src);
    safe_VkImageMemoryRequirementsInfo2KHR& operator=(const safe_VkImageMemoryRequirementsInfo2KHR& src);
    safe_VkImageMemoryRequirementsInfo2KHR();
    ~safe_VkImageMemoryRequirementsInfo2KHR();
    void initialize(const VkImageMemoryRequirementsInfo2KHR* in_struct);
    void initialize(const safe_VkImageMemoryRequirementsInfo2KHR* src);
    VkImageMemoryRequirementsInfo2KHR *ptr() { return reinterpret_cast<VkImageMemoryRequirementsInfo2KHR *>(this); }
    VkImageMemoryRequirementsInfo2KHR const *ptr() const { return reinterpret_cast<VkImageMemoryRequirementsInfo2KHR const *>(this); }
};

struct safe_VkImageSparseMemoryRequirementsInfo2KHR {
    VkStructureType sType;
    const void* pNext;
    VkImage image;
    safe_VkImageSparseMemoryRequirementsInfo2KHR(const VkImageSparseMemoryRequirementsInfo2KHR* in_struct);
    safe_VkImageSparseMemoryRequirementsInfo2KHR(const safe_VkImageSparseMemoryRequirementsInfo2KHR& src);
    safe_VkImageSparseMemoryRequirementsInfo2KHR& operator=(const safe_VkImageSparseMemoryRequirementsInfo2KHR& src);
    safe_VkImageSparseMemoryRequirementsInfo2KHR();
    ~safe_VkImageSparseMemoryRequirementsInfo2KHR();
    void initialize(const VkImageSparseMemoryRequirementsInfo2KHR* in_struct);
    void initialize(const safe_VkImageSparseMemoryRequirementsInfo2KHR* src);
    VkImageSparseMemoryRequirementsInfo2KHR *ptr() { return reinterpret_cast<VkImageSparseMemoryRequirementsInfo2KHR *>(this); }
    VkImageSparseMemoryRequirementsInfo2KHR const *ptr() const { return reinterpret_cast<VkImageSparseMemoryRequirementsInfo2KHR const *>(this); }
};

struct safe_VkMemoryRequirements2KHR {
    VkStructureType sType;
    void* pNext;
    VkMemoryRequirements memoryRequirements;
    safe_VkMemoryRequirements2KHR(const VkMemoryRequirements2KHR* in_struct);
    safe_VkMemoryRequirements2KHR(const safe_VkMemoryRequirements2KHR& src);
    safe_VkMemoryRequirements2KHR& operator=(const safe_VkMemoryRequirements2KHR& src);
    safe_VkMemoryRequirements2KHR();
    ~safe_VkMemoryRequirements2KHR();
    void initialize(const VkMemoryRequirements2KHR* in_struct);
    void initialize(const safe_VkMemoryRequirements2KHR* src);
    VkMemoryRequirements2KHR *ptr() { return reinterpret_cast<VkMemoryRequirements2KHR *>(this); }
    VkMemoryRequirements2KHR const *ptr() const { return reinterpret_cast<VkMemoryRequirements2KHR const *>(this); }
};

struct safe_VkSparseImageMemoryRequirements2KHR {
    VkStructureType sType;
    void* pNext;
    VkSparseImageMemoryRequirements memoryRequirements;
    safe_VkSparseImageMemoryRequirements2KHR(const VkSparseImageMemoryRequirements2KHR* in_struct);
    safe_VkSparseImageMemoryRequirements2KHR(const safe_VkSparseImageMemoryRequirements2KHR& src);
    safe_VkSparseImageMemoryRequirements2KHR& operator=(const safe_VkSparseImageMemoryRequirements2KHR& src);
    safe_VkSparseImageMemoryRequirements2KHR();
    ~safe_VkSparseImageMemoryRequirements2KHR();
    void initialize(const VkSparseImageMemoryRequirements2KHR* in_struct);
    void initialize(const safe_VkSparseImageMemoryRequirements2KHR* src);
    VkSparseImageMemoryRequirements2KHR *ptr() { return reinterpret_cast<VkSparseImageMemoryRequirements2KHR *>(this); }
    VkSparseImageMemoryRequirements2KHR const *ptr() const { return reinterpret_cast<VkSparseImageMemoryRequirements2KHR const *>(this); }
};

struct safe_VkImageFormatListCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    uint32_t viewFormatCount;
    const VkFormat* pViewFormats;
    safe_VkImageFormatListCreateInfoKHR(const VkImageFormatListCreateInfoKHR* in_struct);
    safe_VkImageFormatListCreateInfoKHR(const safe_VkImageFormatListCreateInfoKHR& src);
    safe_VkImageFormatListCreateInfoKHR& operator=(const safe_VkImageFormatListCreateInfoKHR& src);
    safe_VkImageFormatListCreateInfoKHR();
    ~safe_VkImageFormatListCreateInfoKHR();
    void initialize(const VkImageFormatListCreateInfoKHR* in_struct);
    void initialize(const safe_VkImageFormatListCreateInfoKHR* src);
    VkImageFormatListCreateInfoKHR *ptr() { return reinterpret_cast<VkImageFormatListCreateInfoKHR *>(this); }
    VkImageFormatListCreateInfoKHR const *ptr() const { return reinterpret_cast<VkImageFormatListCreateInfoKHR const *>(this); }
};

struct safe_VkSamplerYcbcrConversionCreateInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkFormat format;
    VkSamplerYcbcrModelConversionKHR ycbcrModel;
    VkSamplerYcbcrRangeKHR ycbcrRange;
    VkComponentMapping components;
    VkChromaLocationKHR xChromaOffset;
    VkChromaLocationKHR yChromaOffset;
    VkFilter chromaFilter;
    VkBool32 forceExplicitReconstruction;
    safe_VkSamplerYcbcrConversionCreateInfoKHR(const VkSamplerYcbcrConversionCreateInfoKHR* in_struct);
    safe_VkSamplerYcbcrConversionCreateInfoKHR(const safe_VkSamplerYcbcrConversionCreateInfoKHR& src);
    safe_VkSamplerYcbcrConversionCreateInfoKHR& operator=(const safe_VkSamplerYcbcrConversionCreateInfoKHR& src);
    safe_VkSamplerYcbcrConversionCreateInfoKHR();
    ~safe_VkSamplerYcbcrConversionCreateInfoKHR();
    void initialize(const VkSamplerYcbcrConversionCreateInfoKHR* in_struct);
    void initialize(const safe_VkSamplerYcbcrConversionCreateInfoKHR* src);
    VkSamplerYcbcrConversionCreateInfoKHR *ptr() { return reinterpret_cast<VkSamplerYcbcrConversionCreateInfoKHR *>(this); }
    VkSamplerYcbcrConversionCreateInfoKHR const *ptr() const { return reinterpret_cast<VkSamplerYcbcrConversionCreateInfoKHR const *>(this); }
};

struct safe_VkSamplerYcbcrConversionInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkSamplerYcbcrConversionKHR conversion;
    safe_VkSamplerYcbcrConversionInfoKHR(const VkSamplerYcbcrConversionInfoKHR* in_struct);
    safe_VkSamplerYcbcrConversionInfoKHR(const safe_VkSamplerYcbcrConversionInfoKHR& src);
    safe_VkSamplerYcbcrConversionInfoKHR& operator=(const safe_VkSamplerYcbcrConversionInfoKHR& src);
    safe_VkSamplerYcbcrConversionInfoKHR();
    ~safe_VkSamplerYcbcrConversionInfoKHR();
    void initialize(const VkSamplerYcbcrConversionInfoKHR* in_struct);
    void initialize(const safe_VkSamplerYcbcrConversionInfoKHR* src);
    VkSamplerYcbcrConversionInfoKHR *ptr() { return reinterpret_cast<VkSamplerYcbcrConversionInfoKHR *>(this); }
    VkSamplerYcbcrConversionInfoKHR const *ptr() const { return reinterpret_cast<VkSamplerYcbcrConversionInfoKHR const *>(this); }
};

struct safe_VkBindImagePlaneMemoryInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkImageAspectFlagBits planeAspect;
    safe_VkBindImagePlaneMemoryInfoKHR(const VkBindImagePlaneMemoryInfoKHR* in_struct);
    safe_VkBindImagePlaneMemoryInfoKHR(const safe_VkBindImagePlaneMemoryInfoKHR& src);
    safe_VkBindImagePlaneMemoryInfoKHR& operator=(const safe_VkBindImagePlaneMemoryInfoKHR& src);
    safe_VkBindImagePlaneMemoryInfoKHR();
    ~safe_VkBindImagePlaneMemoryInfoKHR();
    void initialize(const VkBindImagePlaneMemoryInfoKHR* in_struct);
    void initialize(const safe_VkBindImagePlaneMemoryInfoKHR* src);
    VkBindImagePlaneMemoryInfoKHR *ptr() { return reinterpret_cast<VkBindImagePlaneMemoryInfoKHR *>(this); }
    VkBindImagePlaneMemoryInfoKHR const *ptr() const { return reinterpret_cast<VkBindImagePlaneMemoryInfoKHR const *>(this); }
};

struct safe_VkImagePlaneMemoryRequirementsInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkImageAspectFlagBits planeAspect;
    safe_VkImagePlaneMemoryRequirementsInfoKHR(const VkImagePlaneMemoryRequirementsInfoKHR* in_struct);
    safe_VkImagePlaneMemoryRequirementsInfoKHR(const safe_VkImagePlaneMemoryRequirementsInfoKHR& src);
    safe_VkImagePlaneMemoryRequirementsInfoKHR& operator=(const safe_VkImagePlaneMemoryRequirementsInfoKHR& src);
    safe_VkImagePlaneMemoryRequirementsInfoKHR();
    ~safe_VkImagePlaneMemoryRequirementsInfoKHR();
    void initialize(const VkImagePlaneMemoryRequirementsInfoKHR* in_struct);
    void initialize(const safe_VkImagePlaneMemoryRequirementsInfoKHR* src);
    VkImagePlaneMemoryRequirementsInfoKHR *ptr() { return reinterpret_cast<VkImagePlaneMemoryRequirementsInfoKHR *>(this); }
    VkImagePlaneMemoryRequirementsInfoKHR const *ptr() const { return reinterpret_cast<VkImagePlaneMemoryRequirementsInfoKHR const *>(this); }
};

struct safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR {
    VkStructureType sType;
    void* pNext;
    VkBool32 samplerYcbcrConversion;
    safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(const VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR* in_struct);
    safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(const safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR& src);
    safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR& operator=(const safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR& src);
    safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR();
    ~safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR();
    void initialize(const VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR* in_struct);
    void initialize(const safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR* src);
    VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR *ptr() { return reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR *>(this); }
    VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR const *ptr() const { return reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR const *>(this); }
};

struct safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR {
    VkStructureType sType;
    void* pNext;
    uint32_t combinedImageSamplerDescriptorCount;
    safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR(const VkSamplerYcbcrConversionImageFormatPropertiesKHR* in_struct);
    safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR(const safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR& src);
    safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR& operator=(const safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR& src);
    safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR();
    ~safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR();
    void initialize(const VkSamplerYcbcrConversionImageFormatPropertiesKHR* in_struct);
    void initialize(const safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR* src);
    VkSamplerYcbcrConversionImageFormatPropertiesKHR *ptr() { return reinterpret_cast<VkSamplerYcbcrConversionImageFormatPropertiesKHR *>(this); }
    VkSamplerYcbcrConversionImageFormatPropertiesKHR const *ptr() const { return reinterpret_cast<VkSamplerYcbcrConversionImageFormatPropertiesKHR const *>(this); }
};

struct safe_VkBindBufferMemoryInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkBuffer buffer;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    safe_VkBindBufferMemoryInfoKHR(const VkBindBufferMemoryInfoKHR* in_struct);
    safe_VkBindBufferMemoryInfoKHR(const safe_VkBindBufferMemoryInfoKHR& src);
    safe_VkBindBufferMemoryInfoKHR& operator=(const safe_VkBindBufferMemoryInfoKHR& src);
    safe_VkBindBufferMemoryInfoKHR();
    ~safe_VkBindBufferMemoryInfoKHR();
    void initialize(const VkBindBufferMemoryInfoKHR* in_struct);
    void initialize(const safe_VkBindBufferMemoryInfoKHR* src);
    VkBindBufferMemoryInfoKHR *ptr() { return reinterpret_cast<VkBindBufferMemoryInfoKHR *>(this); }
    VkBindBufferMemoryInfoKHR const *ptr() const { return reinterpret_cast<VkBindBufferMemoryInfoKHR const *>(this); }
};

struct safe_VkBindImageMemoryInfoKHR {
    VkStructureType sType;
    const void* pNext;
    VkImage image;
    VkDeviceMemory memory;
    VkDeviceSize memoryOffset;
    safe_VkBindImageMemoryInfoKHR(const VkBindImageMemoryInfoKHR* in_struct);
    safe_VkBindImageMemoryInfoKHR(const safe_VkBindImageMemoryInfoKHR& src);
    safe_VkBindImageMemoryInfoKHR& operator=(const safe_VkBindImageMemoryInfoKHR& src);
    safe_VkBindImageMemoryInfoKHR();
    ~safe_VkBindImageMemoryInfoKHR();
    void initialize(const VkBindImageMemoryInfoKHR* in_struct);
    void initialize(const safe_VkBindImageMemoryInfoKHR* src);
    VkBindImageMemoryInfoKHR *ptr() { return reinterpret_cast<VkBindImageMemoryInfoKHR *>(this); }
    VkBindImageMemoryInfoKHR const *ptr() const { return reinterpret_cast<VkBindImageMemoryInfoKHR const *>(this); }
};

struct safe_VkDebugReportCallbackCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDebugReportFlagsEXT flags;
    PFN_vkDebugReportCallbackEXT pfnCallback;
    void* pUserData;
    safe_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT* in_struct);
    safe_VkDebugReportCallbackCreateInfoEXT(const safe_VkDebugReportCallbackCreateInfoEXT& src);
    safe_VkDebugReportCallbackCreateInfoEXT& operator=(const safe_VkDebugReportCallbackCreateInfoEXT& src);
    safe_VkDebugReportCallbackCreateInfoEXT();
    ~safe_VkDebugReportCallbackCreateInfoEXT();
    void initialize(const VkDebugReportCallbackCreateInfoEXT* in_struct);
    void initialize(const safe_VkDebugReportCallbackCreateInfoEXT* src);
    VkDebugReportCallbackCreateInfoEXT *ptr() { return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT *>(this); }
    VkDebugReportCallbackCreateInfoEXT const *ptr() const { return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT const *>(this); }
};

struct safe_VkPipelineRasterizationStateRasterizationOrderAMD {
    VkStructureType sType;
    const void* pNext;
    VkRasterizationOrderAMD rasterizationOrder;
    safe_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD(const safe_VkPipelineRasterizationStateRasterizationOrderAMD& src);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD& operator=(const safe_VkPipelineRasterizationStateRasterizationOrderAMD& src);
    safe_VkPipelineRasterizationStateRasterizationOrderAMD();
    ~safe_VkPipelineRasterizationStateRasterizationOrderAMD();
    void initialize(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct);
    void initialize(const safe_VkPipelineRasterizationStateRasterizationOrderAMD* src);
    VkPipelineRasterizationStateRasterizationOrderAMD *ptr() { return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD *>(this); }
    VkPipelineRasterizationStateRasterizationOrderAMD const *ptr() const { return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD const *>(this); }
};

struct safe_VkDebugMarkerObjectNameInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    const char* pObjectName;
    safe_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT* in_struct);
    safe_VkDebugMarkerObjectNameInfoEXT(const safe_VkDebugMarkerObjectNameInfoEXT& src);
    safe_VkDebugMarkerObjectNameInfoEXT& operator=(const safe_VkDebugMarkerObjectNameInfoEXT& src);
    safe_VkDebugMarkerObjectNameInfoEXT();
    ~safe_VkDebugMarkerObjectNameInfoEXT();
    void initialize(const VkDebugMarkerObjectNameInfoEXT* in_struct);
    void initialize(const safe_VkDebugMarkerObjectNameInfoEXT* src);
    VkDebugMarkerObjectNameInfoEXT *ptr() { return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT *>(this); }
    VkDebugMarkerObjectNameInfoEXT const *ptr() const { return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT const *>(this); }
};

struct safe_VkDebugMarkerObjectTagInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDebugReportObjectTypeEXT objectType;
    uint64_t object;
    uint64_t tagName;
    size_t tagSize;
    const void* pTag;
    safe_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT* in_struct);
    safe_VkDebugMarkerObjectTagInfoEXT(const safe_VkDebugMarkerObjectTagInfoEXT& src);
    safe_VkDebugMarkerObjectTagInfoEXT& operator=(const safe_VkDebugMarkerObjectTagInfoEXT& src);
    safe_VkDebugMarkerObjectTagInfoEXT();
    ~safe_VkDebugMarkerObjectTagInfoEXT();
    void initialize(const VkDebugMarkerObjectTagInfoEXT* in_struct);
    void initialize(const safe_VkDebugMarkerObjectTagInfoEXT* src);
    VkDebugMarkerObjectTagInfoEXT *ptr() { return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT *>(this); }
    VkDebugMarkerObjectTagInfoEXT const *ptr() const { return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT const *>(this); }
};

struct safe_VkDebugMarkerMarkerInfoEXT {
    VkStructureType sType;
    const void* pNext;
    const char* pMarkerName;
    float color[4];
    safe_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT* in_struct);
    safe_VkDebugMarkerMarkerInfoEXT(const safe_VkDebugMarkerMarkerInfoEXT& src);
    safe_VkDebugMarkerMarkerInfoEXT& operator=(const safe_VkDebugMarkerMarkerInfoEXT& src);
    safe_VkDebugMarkerMarkerInfoEXT();
    ~safe_VkDebugMarkerMarkerInfoEXT();
    void initialize(const VkDebugMarkerMarkerInfoEXT* in_struct);
    void initialize(const safe_VkDebugMarkerMarkerInfoEXT* src);
    VkDebugMarkerMarkerInfoEXT *ptr() { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT *>(this); }
    VkDebugMarkerMarkerInfoEXT const *ptr() const { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT const *>(this); }
};

struct safe_VkDedicatedAllocationImageCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkBool32 dedicatedAllocation;
    safe_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV* in_struct);
    safe_VkDedicatedAllocationImageCreateInfoNV(const safe_VkDedicatedAllocationImageCreateInfoNV& src);
    safe_VkDedicatedAllocationImageCreateInfoNV& operator=(const safe_VkDedicatedAllocationImageCreateInfoNV& src);
    safe_VkDedicatedAllocationImageCreateInfoNV();
    ~safe_VkDedicatedAllocationImageCreateInfoNV();
    void initialize(const VkDedicatedAllocationImageCreateInfoNV* in_struct);
    void initialize(const safe_VkDedicatedAllocationImageCreateInfoNV* src);
    VkDedicatedAllocationImageCreateInfoNV *ptr() { return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV *>(this); }
    VkDedicatedAllocationImageCreateInfoNV const *ptr() const { return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV const *>(this); }
};

struct safe_VkDedicatedAllocationBufferCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkBool32 dedicatedAllocation;
    safe_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV* in_struct);
    safe_VkDedicatedAllocationBufferCreateInfoNV(const safe_VkDedicatedAllocationBufferCreateInfoNV& src);
    safe_VkDedicatedAllocationBufferCreateInfoNV& operator=(const safe_VkDedicatedAllocationBufferCreateInfoNV& src);
    safe_VkDedicatedAllocationBufferCreateInfoNV();
    ~safe_VkDedicatedAllocationBufferCreateInfoNV();
    void initialize(const VkDedicatedAllocationBufferCreateInfoNV* in_struct);
    void initialize(const safe_VkDedicatedAllocationBufferCreateInfoNV* src);
    VkDedicatedAllocationBufferCreateInfoNV *ptr() { return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV *>(this); }
    VkDedicatedAllocationBufferCreateInfoNV const *ptr() const { return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV const *>(this); }
};

struct safe_VkDedicatedAllocationMemoryAllocateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkImage image;
    VkBuffer buffer;
    safe_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& src);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV& operator=(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& src);
    safe_VkDedicatedAllocationMemoryAllocateInfoNV();
    ~safe_VkDedicatedAllocationMemoryAllocateInfoNV();
    void initialize(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct);
    void initialize(const safe_VkDedicatedAllocationMemoryAllocateInfoNV* src);
    VkDedicatedAllocationMemoryAllocateInfoNV *ptr() { return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV *>(this); }
    VkDedicatedAllocationMemoryAllocateInfoNV const *ptr() const { return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV const *>(this); }
};

struct safe_VkTextureLODGatherFormatPropertiesAMD {
    VkStructureType sType;
    void* pNext;
    VkBool32 supportsTextureGatherLODBiasAMD;
    safe_VkTextureLODGatherFormatPropertiesAMD(const VkTextureLODGatherFormatPropertiesAMD* in_struct);
    safe_VkTextureLODGatherFormatPropertiesAMD(const safe_VkTextureLODGatherFormatPropertiesAMD& src);
    safe_VkTextureLODGatherFormatPropertiesAMD& operator=(const safe_VkTextureLODGatherFormatPropertiesAMD& src);
    safe_VkTextureLODGatherFormatPropertiesAMD();
    ~safe_VkTextureLODGatherFormatPropertiesAMD();
    void initialize(const VkTextureLODGatherFormatPropertiesAMD* in_struct);
    void initialize(const safe_VkTextureLODGatherFormatPropertiesAMD* src);
    VkTextureLODGatherFormatPropertiesAMD *ptr() { return reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD *>(this); }
    VkTextureLODGatherFormatPropertiesAMD const *ptr() const { return reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD const *>(this); }
};

struct safe_VkRenderPassMultiviewCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t subpassCount;
    const uint32_t* pViewMasks;
    uint32_t dependencyCount;
    const int32_t* pViewOffsets;
    uint32_t correlationMaskCount;
    const uint32_t* pCorrelationMasks;
    safe_VkRenderPassMultiviewCreateInfoKHX(const VkRenderPassMultiviewCreateInfoKHX* in_struct);
    safe_VkRenderPassMultiviewCreateInfoKHX(const safe_VkRenderPassMultiviewCreateInfoKHX& src);
    safe_VkRenderPassMultiviewCreateInfoKHX& operator=(const safe_VkRenderPassMultiviewCreateInfoKHX& src);
    safe_VkRenderPassMultiviewCreateInfoKHX();
    ~safe_VkRenderPassMultiviewCreateInfoKHX();
    void initialize(const VkRenderPassMultiviewCreateInfoKHX* in_struct);
    void initialize(const safe_VkRenderPassMultiviewCreateInfoKHX* src);
    VkRenderPassMultiviewCreateInfoKHX *ptr() { return reinterpret_cast<VkRenderPassMultiviewCreateInfoKHX *>(this); }
    VkRenderPassMultiviewCreateInfoKHX const *ptr() const { return reinterpret_cast<VkRenderPassMultiviewCreateInfoKHX const *>(this); }
};

struct safe_VkPhysicalDeviceMultiviewFeaturesKHX {
    VkStructureType sType;
    void* pNext;
    VkBool32 multiview;
    VkBool32 multiviewGeometryShader;
    VkBool32 multiviewTessellationShader;
    safe_VkPhysicalDeviceMultiviewFeaturesKHX(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct);
    safe_VkPhysicalDeviceMultiviewFeaturesKHX(const safe_VkPhysicalDeviceMultiviewFeaturesKHX& src);
    safe_VkPhysicalDeviceMultiviewFeaturesKHX& operator=(const safe_VkPhysicalDeviceMultiviewFeaturesKHX& src);
    safe_VkPhysicalDeviceMultiviewFeaturesKHX();
    ~safe_VkPhysicalDeviceMultiviewFeaturesKHX();
    void initialize(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceMultiviewFeaturesKHX* src);
    VkPhysicalDeviceMultiviewFeaturesKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceMultiviewFeaturesKHX *>(this); }
    VkPhysicalDeviceMultiviewFeaturesKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMultiviewFeaturesKHX const *>(this); }
};

struct safe_VkPhysicalDeviceMultiviewPropertiesKHX {
    VkStructureType sType;
    void* pNext;
    uint32_t maxMultiviewViewCount;
    uint32_t maxMultiviewInstanceIndex;
    safe_VkPhysicalDeviceMultiviewPropertiesKHX(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct);
    safe_VkPhysicalDeviceMultiviewPropertiesKHX(const safe_VkPhysicalDeviceMultiviewPropertiesKHX& src);
    safe_VkPhysicalDeviceMultiviewPropertiesKHX& operator=(const safe_VkPhysicalDeviceMultiviewPropertiesKHX& src);
    safe_VkPhysicalDeviceMultiviewPropertiesKHX();
    ~safe_VkPhysicalDeviceMultiviewPropertiesKHX();
    void initialize(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceMultiviewPropertiesKHX* src);
    VkPhysicalDeviceMultiviewPropertiesKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceMultiviewPropertiesKHX *>(this); }
    VkPhysicalDeviceMultiviewPropertiesKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMultiviewPropertiesKHX const *>(this); }
};

struct safe_VkExternalMemoryImageCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsNV handleTypes;
    safe_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV* in_struct);
    safe_VkExternalMemoryImageCreateInfoNV(const safe_VkExternalMemoryImageCreateInfoNV& src);
    safe_VkExternalMemoryImageCreateInfoNV& operator=(const safe_VkExternalMemoryImageCreateInfoNV& src);
    safe_VkExternalMemoryImageCreateInfoNV();
    ~safe_VkExternalMemoryImageCreateInfoNV();
    void initialize(const VkExternalMemoryImageCreateInfoNV* in_struct);
    void initialize(const safe_VkExternalMemoryImageCreateInfoNV* src);
    VkExternalMemoryImageCreateInfoNV *ptr() { return reinterpret_cast<VkExternalMemoryImageCreateInfoNV *>(this); }
    VkExternalMemoryImageCreateInfoNV const *ptr() const { return reinterpret_cast<VkExternalMemoryImageCreateInfoNV const *>(this); }
};

struct safe_VkExportMemoryAllocateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsNV handleTypes;
    safe_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV* in_struct);
    safe_VkExportMemoryAllocateInfoNV(const safe_VkExportMemoryAllocateInfoNV& src);
    safe_VkExportMemoryAllocateInfoNV& operator=(const safe_VkExportMemoryAllocateInfoNV& src);
    safe_VkExportMemoryAllocateInfoNV();
    ~safe_VkExportMemoryAllocateInfoNV();
    void initialize(const VkExportMemoryAllocateInfoNV* in_struct);
    void initialize(const safe_VkExportMemoryAllocateInfoNV* src);
    VkExportMemoryAllocateInfoNV *ptr() { return reinterpret_cast<VkExportMemoryAllocateInfoNV *>(this); }
    VkExportMemoryAllocateInfoNV const *ptr() const { return reinterpret_cast<VkExportMemoryAllocateInfoNV const *>(this); }
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkImportMemoryWin32HandleInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagsNV handleType;
    HANDLE handle;
    safe_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV* in_struct);
    safe_VkImportMemoryWin32HandleInfoNV(const safe_VkImportMemoryWin32HandleInfoNV& src);
    safe_VkImportMemoryWin32HandleInfoNV& operator=(const safe_VkImportMemoryWin32HandleInfoNV& src);
    safe_VkImportMemoryWin32HandleInfoNV();
    ~safe_VkImportMemoryWin32HandleInfoNV();
    void initialize(const VkImportMemoryWin32HandleInfoNV* in_struct);
    void initialize(const safe_VkImportMemoryWin32HandleInfoNV* src);
    VkImportMemoryWin32HandleInfoNV *ptr() { return reinterpret_cast<VkImportMemoryWin32HandleInfoNV *>(this); }
    VkImportMemoryWin32HandleInfoNV const *ptr() const { return reinterpret_cast<VkImportMemoryWin32HandleInfoNV const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkExportMemoryWin32HandleInfoNV {
    VkStructureType sType;
    const void* pNext;
    const SECURITY_ATTRIBUTES* pAttributes;
    DWORD dwAccess;
    safe_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV* in_struct);
    safe_VkExportMemoryWin32HandleInfoNV(const safe_VkExportMemoryWin32HandleInfoNV& src);
    safe_VkExportMemoryWin32HandleInfoNV& operator=(const safe_VkExportMemoryWin32HandleInfoNV& src);
    safe_VkExportMemoryWin32HandleInfoNV();
    ~safe_VkExportMemoryWin32HandleInfoNV();
    void initialize(const VkExportMemoryWin32HandleInfoNV* in_struct);
    void initialize(const safe_VkExportMemoryWin32HandleInfoNV* src);
    VkExportMemoryWin32HandleInfoNV *ptr() { return reinterpret_cast<VkExportMemoryWin32HandleInfoNV *>(this); }
    VkExportMemoryWin32HandleInfoNV const *ptr() const { return reinterpret_cast<VkExportMemoryWin32HandleInfoNV const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct safe_VkWin32KeyedMutexAcquireReleaseInfoNV {
    VkStructureType sType;
    const void* pNext;
    uint32_t acquireCount;
    VkDeviceMemory* pAcquireSyncs;
    const uint64_t* pAcquireKeys;
    const uint32_t* pAcquireTimeoutMilliseconds;
    uint32_t releaseCount;
    VkDeviceMemory* pReleaseSyncs;
    const uint64_t* pReleaseKeys;
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV& operator=(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& src);
    safe_VkWin32KeyedMutexAcquireReleaseInfoNV();
    ~safe_VkWin32KeyedMutexAcquireReleaseInfoNV();
    void initialize(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct);
    void initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV* src);
    VkWin32KeyedMutexAcquireReleaseInfoNV *ptr() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV *>(this); }
    VkWin32KeyedMutexAcquireReleaseInfoNV const *ptr() const { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV const *>(this); }
};
#endif // VK_USE_PLATFORM_WIN32_KHR

struct safe_VkMemoryAllocateFlagsInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkMemoryAllocateFlagsKHX flags;
    uint32_t deviceMask;
    safe_VkMemoryAllocateFlagsInfoKHX(const VkMemoryAllocateFlagsInfoKHX* in_struct);
    safe_VkMemoryAllocateFlagsInfoKHX(const safe_VkMemoryAllocateFlagsInfoKHX& src);
    safe_VkMemoryAllocateFlagsInfoKHX& operator=(const safe_VkMemoryAllocateFlagsInfoKHX& src);
    safe_VkMemoryAllocateFlagsInfoKHX();
    ~safe_VkMemoryAllocateFlagsInfoKHX();
    void initialize(const VkMemoryAllocateFlagsInfoKHX* in_struct);
    void initialize(const safe_VkMemoryAllocateFlagsInfoKHX* src);
    VkMemoryAllocateFlagsInfoKHX *ptr() { return reinterpret_cast<VkMemoryAllocateFlagsInfoKHX *>(this); }
    VkMemoryAllocateFlagsInfoKHX const *ptr() const { return reinterpret_cast<VkMemoryAllocateFlagsInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupRenderPassBeginInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t deviceMask;
    uint32_t deviceRenderAreaCount;
    const VkRect2D* pDeviceRenderAreas;
    safe_VkDeviceGroupRenderPassBeginInfoKHX(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct);
    safe_VkDeviceGroupRenderPassBeginInfoKHX(const safe_VkDeviceGroupRenderPassBeginInfoKHX& src);
    safe_VkDeviceGroupRenderPassBeginInfoKHX& operator=(const safe_VkDeviceGroupRenderPassBeginInfoKHX& src);
    safe_VkDeviceGroupRenderPassBeginInfoKHX();
    ~safe_VkDeviceGroupRenderPassBeginInfoKHX();
    void initialize(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupRenderPassBeginInfoKHX* src);
    VkDeviceGroupRenderPassBeginInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfoKHX *>(this); }
    VkDeviceGroupRenderPassBeginInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupCommandBufferBeginInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t deviceMask;
    safe_VkDeviceGroupCommandBufferBeginInfoKHX(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct);
    safe_VkDeviceGroupCommandBufferBeginInfoKHX(const safe_VkDeviceGroupCommandBufferBeginInfoKHX& src);
    safe_VkDeviceGroupCommandBufferBeginInfoKHX& operator=(const safe_VkDeviceGroupCommandBufferBeginInfoKHX& src);
    safe_VkDeviceGroupCommandBufferBeginInfoKHX();
    ~safe_VkDeviceGroupCommandBufferBeginInfoKHX();
    void initialize(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupCommandBufferBeginInfoKHX* src);
    VkDeviceGroupCommandBufferBeginInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfoKHX *>(this); }
    VkDeviceGroupCommandBufferBeginInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupSubmitInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t waitSemaphoreCount;
    const uint32_t* pWaitSemaphoreDeviceIndices;
    uint32_t commandBufferCount;
    const uint32_t* pCommandBufferDeviceMasks;
    uint32_t signalSemaphoreCount;
    const uint32_t* pSignalSemaphoreDeviceIndices;
    safe_VkDeviceGroupSubmitInfoKHX(const VkDeviceGroupSubmitInfoKHX* in_struct);
    safe_VkDeviceGroupSubmitInfoKHX(const safe_VkDeviceGroupSubmitInfoKHX& src);
    safe_VkDeviceGroupSubmitInfoKHX& operator=(const safe_VkDeviceGroupSubmitInfoKHX& src);
    safe_VkDeviceGroupSubmitInfoKHX();
    ~safe_VkDeviceGroupSubmitInfoKHX();
    void initialize(const VkDeviceGroupSubmitInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupSubmitInfoKHX* src);
    VkDeviceGroupSubmitInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupSubmitInfoKHX *>(this); }
    VkDeviceGroupSubmitInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupSubmitInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupBindSparseInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t resourceDeviceIndex;
    uint32_t memoryDeviceIndex;
    safe_VkDeviceGroupBindSparseInfoKHX(const VkDeviceGroupBindSparseInfoKHX* in_struct);
    safe_VkDeviceGroupBindSparseInfoKHX(const safe_VkDeviceGroupBindSparseInfoKHX& src);
    safe_VkDeviceGroupBindSparseInfoKHX& operator=(const safe_VkDeviceGroupBindSparseInfoKHX& src);
    safe_VkDeviceGroupBindSparseInfoKHX();
    ~safe_VkDeviceGroupBindSparseInfoKHX();
    void initialize(const VkDeviceGroupBindSparseInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupBindSparseInfoKHX* src);
    VkDeviceGroupBindSparseInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupBindSparseInfoKHX *>(this); }
    VkDeviceGroupBindSparseInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupBindSparseInfoKHX const *>(this); }
};

struct safe_VkBindBufferMemoryDeviceGroupInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t deviceIndexCount;
    const uint32_t* pDeviceIndices;
    safe_VkBindBufferMemoryDeviceGroupInfoKHX(const VkBindBufferMemoryDeviceGroupInfoKHX* in_struct);
    safe_VkBindBufferMemoryDeviceGroupInfoKHX(const safe_VkBindBufferMemoryDeviceGroupInfoKHX& src);
    safe_VkBindBufferMemoryDeviceGroupInfoKHX& operator=(const safe_VkBindBufferMemoryDeviceGroupInfoKHX& src);
    safe_VkBindBufferMemoryDeviceGroupInfoKHX();
    ~safe_VkBindBufferMemoryDeviceGroupInfoKHX();
    void initialize(const VkBindBufferMemoryDeviceGroupInfoKHX* in_struct);
    void initialize(const safe_VkBindBufferMemoryDeviceGroupInfoKHX* src);
    VkBindBufferMemoryDeviceGroupInfoKHX *ptr() { return reinterpret_cast<VkBindBufferMemoryDeviceGroupInfoKHX *>(this); }
    VkBindBufferMemoryDeviceGroupInfoKHX const *ptr() const { return reinterpret_cast<VkBindBufferMemoryDeviceGroupInfoKHX const *>(this); }
};

struct safe_VkBindImageMemoryDeviceGroupInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t deviceIndexCount;
    const uint32_t* pDeviceIndices;
    uint32_t SFRRectCount;
    const VkRect2D* pSFRRects;
    safe_VkBindImageMemoryDeviceGroupInfoKHX(const VkBindImageMemoryDeviceGroupInfoKHX* in_struct);
    safe_VkBindImageMemoryDeviceGroupInfoKHX(const safe_VkBindImageMemoryDeviceGroupInfoKHX& src);
    safe_VkBindImageMemoryDeviceGroupInfoKHX& operator=(const safe_VkBindImageMemoryDeviceGroupInfoKHX& src);
    safe_VkBindImageMemoryDeviceGroupInfoKHX();
    ~safe_VkBindImageMemoryDeviceGroupInfoKHX();
    void initialize(const VkBindImageMemoryDeviceGroupInfoKHX* in_struct);
    void initialize(const safe_VkBindImageMemoryDeviceGroupInfoKHX* src);
    VkBindImageMemoryDeviceGroupInfoKHX *ptr() { return reinterpret_cast<VkBindImageMemoryDeviceGroupInfoKHX *>(this); }
    VkBindImageMemoryDeviceGroupInfoKHX const *ptr() const { return reinterpret_cast<VkBindImageMemoryDeviceGroupInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupPresentCapabilitiesKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE_KHX];
    VkDeviceGroupPresentModeFlagsKHX modes;
    safe_VkDeviceGroupPresentCapabilitiesKHX(const VkDeviceGroupPresentCapabilitiesKHX* in_struct);
    safe_VkDeviceGroupPresentCapabilitiesKHX(const safe_VkDeviceGroupPresentCapabilitiesKHX& src);
    safe_VkDeviceGroupPresentCapabilitiesKHX& operator=(const safe_VkDeviceGroupPresentCapabilitiesKHX& src);
    safe_VkDeviceGroupPresentCapabilitiesKHX();
    ~safe_VkDeviceGroupPresentCapabilitiesKHX();
    void initialize(const VkDeviceGroupPresentCapabilitiesKHX* in_struct);
    void initialize(const safe_VkDeviceGroupPresentCapabilitiesKHX* src);
    VkDeviceGroupPresentCapabilitiesKHX *ptr() { return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHX *>(this); }
    VkDeviceGroupPresentCapabilitiesKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHX const *>(this); }
};

struct safe_VkImageSwapchainCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainKHR swapchain;
    safe_VkImageSwapchainCreateInfoKHX(const VkImageSwapchainCreateInfoKHX* in_struct);
    safe_VkImageSwapchainCreateInfoKHX(const safe_VkImageSwapchainCreateInfoKHX& src);
    safe_VkImageSwapchainCreateInfoKHX& operator=(const safe_VkImageSwapchainCreateInfoKHX& src);
    safe_VkImageSwapchainCreateInfoKHX();
    ~safe_VkImageSwapchainCreateInfoKHX();
    void initialize(const VkImageSwapchainCreateInfoKHX* in_struct);
    void initialize(const safe_VkImageSwapchainCreateInfoKHX* src);
    VkImageSwapchainCreateInfoKHX *ptr() { return reinterpret_cast<VkImageSwapchainCreateInfoKHX *>(this); }
    VkImageSwapchainCreateInfoKHX const *ptr() const { return reinterpret_cast<VkImageSwapchainCreateInfoKHX const *>(this); }
};

struct safe_VkBindImageMemorySwapchainInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainKHR swapchain;
    uint32_t imageIndex;
    safe_VkBindImageMemorySwapchainInfoKHX(const VkBindImageMemorySwapchainInfoKHX* in_struct);
    safe_VkBindImageMemorySwapchainInfoKHX(const safe_VkBindImageMemorySwapchainInfoKHX& src);
    safe_VkBindImageMemorySwapchainInfoKHX& operator=(const safe_VkBindImageMemorySwapchainInfoKHX& src);
    safe_VkBindImageMemorySwapchainInfoKHX();
    ~safe_VkBindImageMemorySwapchainInfoKHX();
    void initialize(const VkBindImageMemorySwapchainInfoKHX* in_struct);
    void initialize(const safe_VkBindImageMemorySwapchainInfoKHX* src);
    VkBindImageMemorySwapchainInfoKHX *ptr() { return reinterpret_cast<VkBindImageMemorySwapchainInfoKHX *>(this); }
    VkBindImageMemorySwapchainInfoKHX const *ptr() const { return reinterpret_cast<VkBindImageMemorySwapchainInfoKHX const *>(this); }
};

struct safe_VkAcquireNextImageInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkSwapchainKHR swapchain;
    uint64_t timeout;
    VkSemaphore semaphore;
    VkFence fence;
    uint32_t deviceMask;
    safe_VkAcquireNextImageInfoKHX(const VkAcquireNextImageInfoKHX* in_struct);
    safe_VkAcquireNextImageInfoKHX(const safe_VkAcquireNextImageInfoKHX& src);
    safe_VkAcquireNextImageInfoKHX& operator=(const safe_VkAcquireNextImageInfoKHX& src);
    safe_VkAcquireNextImageInfoKHX();
    ~safe_VkAcquireNextImageInfoKHX();
    void initialize(const VkAcquireNextImageInfoKHX* in_struct);
    void initialize(const safe_VkAcquireNextImageInfoKHX* src);
    VkAcquireNextImageInfoKHX *ptr() { return reinterpret_cast<VkAcquireNextImageInfoKHX *>(this); }
    VkAcquireNextImageInfoKHX const *ptr() const { return reinterpret_cast<VkAcquireNextImageInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupPresentInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t swapchainCount;
    const uint32_t* pDeviceMasks;
    VkDeviceGroupPresentModeFlagBitsKHX mode;
    safe_VkDeviceGroupPresentInfoKHX(const VkDeviceGroupPresentInfoKHX* in_struct);
    safe_VkDeviceGroupPresentInfoKHX(const safe_VkDeviceGroupPresentInfoKHX& src);
    safe_VkDeviceGroupPresentInfoKHX& operator=(const safe_VkDeviceGroupPresentInfoKHX& src);
    safe_VkDeviceGroupPresentInfoKHX();
    ~safe_VkDeviceGroupPresentInfoKHX();
    void initialize(const VkDeviceGroupPresentInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupPresentInfoKHX* src);
    VkDeviceGroupPresentInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupPresentInfoKHX *>(this); }
    VkDeviceGroupPresentInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupPresentInfoKHX const *>(this); }
};

struct safe_VkDeviceGroupSwapchainCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    VkDeviceGroupPresentModeFlagsKHX modes;
    safe_VkDeviceGroupSwapchainCreateInfoKHX(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct);
    safe_VkDeviceGroupSwapchainCreateInfoKHX(const safe_VkDeviceGroupSwapchainCreateInfoKHX& src);
    safe_VkDeviceGroupSwapchainCreateInfoKHX& operator=(const safe_VkDeviceGroupSwapchainCreateInfoKHX& src);
    safe_VkDeviceGroupSwapchainCreateInfoKHX();
    ~safe_VkDeviceGroupSwapchainCreateInfoKHX();
    void initialize(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupSwapchainCreateInfoKHX* src);
    VkDeviceGroupSwapchainCreateInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHX *>(this); }
    VkDeviceGroupSwapchainCreateInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHX const *>(this); }
};

struct safe_VkValidationFlagsEXT {
    VkStructureType sType;
    const void* pNext;
    uint32_t disabledValidationCheckCount;
    VkValidationCheckEXT* pDisabledValidationChecks;
    safe_VkValidationFlagsEXT(const VkValidationFlagsEXT* in_struct);
    safe_VkValidationFlagsEXT(const safe_VkValidationFlagsEXT& src);
    safe_VkValidationFlagsEXT& operator=(const safe_VkValidationFlagsEXT& src);
    safe_VkValidationFlagsEXT();
    ~safe_VkValidationFlagsEXT();
    void initialize(const VkValidationFlagsEXT* in_struct);
    void initialize(const safe_VkValidationFlagsEXT* src);
    VkValidationFlagsEXT *ptr() { return reinterpret_cast<VkValidationFlagsEXT *>(this); }
    VkValidationFlagsEXT const *ptr() const { return reinterpret_cast<VkValidationFlagsEXT const *>(this); }
};

#ifdef VK_USE_PLATFORM_VI_NN
struct safe_VkViSurfaceCreateInfoNN {
    VkStructureType sType;
    const void* pNext;
    VkViSurfaceCreateFlagsNN flags;
    void* window;
    safe_VkViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN* in_struct);
    safe_VkViSurfaceCreateInfoNN(const safe_VkViSurfaceCreateInfoNN& src);
    safe_VkViSurfaceCreateInfoNN& operator=(const safe_VkViSurfaceCreateInfoNN& src);
    safe_VkViSurfaceCreateInfoNN();
    ~safe_VkViSurfaceCreateInfoNN();
    void initialize(const VkViSurfaceCreateInfoNN* in_struct);
    void initialize(const safe_VkViSurfaceCreateInfoNN* src);
    VkViSurfaceCreateInfoNN *ptr() { return reinterpret_cast<VkViSurfaceCreateInfoNN *>(this); }
    VkViSurfaceCreateInfoNN const *ptr() const { return reinterpret_cast<VkViSurfaceCreateInfoNN const *>(this); }
};
#endif // VK_USE_PLATFORM_VI_NN

struct safe_VkPhysicalDeviceGroupPropertiesKHX {
    VkStructureType sType;
    void* pNext;
    uint32_t physicalDeviceCount;
    VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE_KHX];
    VkBool32 subsetAllocation;
    safe_VkPhysicalDeviceGroupPropertiesKHX(const VkPhysicalDeviceGroupPropertiesKHX* in_struct);
    safe_VkPhysicalDeviceGroupPropertiesKHX(const safe_VkPhysicalDeviceGroupPropertiesKHX& src);
    safe_VkPhysicalDeviceGroupPropertiesKHX& operator=(const safe_VkPhysicalDeviceGroupPropertiesKHX& src);
    safe_VkPhysicalDeviceGroupPropertiesKHX();
    ~safe_VkPhysicalDeviceGroupPropertiesKHX();
    void initialize(const VkPhysicalDeviceGroupPropertiesKHX* in_struct);
    void initialize(const safe_VkPhysicalDeviceGroupPropertiesKHX* src);
    VkPhysicalDeviceGroupPropertiesKHX *ptr() { return reinterpret_cast<VkPhysicalDeviceGroupPropertiesKHX *>(this); }
    VkPhysicalDeviceGroupPropertiesKHX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceGroupPropertiesKHX const *>(this); }
};

struct safe_VkDeviceGroupDeviceCreateInfoKHX {
    VkStructureType sType;
    const void* pNext;
    uint32_t physicalDeviceCount;
    VkPhysicalDevice* pPhysicalDevices;
    safe_VkDeviceGroupDeviceCreateInfoKHX(const VkDeviceGroupDeviceCreateInfoKHX* in_struct);
    safe_VkDeviceGroupDeviceCreateInfoKHX(const safe_VkDeviceGroupDeviceCreateInfoKHX& src);
    safe_VkDeviceGroupDeviceCreateInfoKHX& operator=(const safe_VkDeviceGroupDeviceCreateInfoKHX& src);
    safe_VkDeviceGroupDeviceCreateInfoKHX();
    ~safe_VkDeviceGroupDeviceCreateInfoKHX();
    void initialize(const VkDeviceGroupDeviceCreateInfoKHX* in_struct);
    void initialize(const safe_VkDeviceGroupDeviceCreateInfoKHX* src);
    VkDeviceGroupDeviceCreateInfoKHX *ptr() { return reinterpret_cast<VkDeviceGroupDeviceCreateInfoKHX *>(this); }
    VkDeviceGroupDeviceCreateInfoKHX const *ptr() const { return reinterpret_cast<VkDeviceGroupDeviceCreateInfoKHX const *>(this); }
};

struct safe_VkDeviceGeneratedCommandsFeaturesNVX {
    VkStructureType sType;
    const void* pNext;
    VkBool32 computeBindingPointSupport;
    safe_VkDeviceGeneratedCommandsFeaturesNVX(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct);
    safe_VkDeviceGeneratedCommandsFeaturesNVX(const safe_VkDeviceGeneratedCommandsFeaturesNVX& src);
    safe_VkDeviceGeneratedCommandsFeaturesNVX& operator=(const safe_VkDeviceGeneratedCommandsFeaturesNVX& src);
    safe_VkDeviceGeneratedCommandsFeaturesNVX();
    ~safe_VkDeviceGeneratedCommandsFeaturesNVX();
    void initialize(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct);
    void initialize(const safe_VkDeviceGeneratedCommandsFeaturesNVX* src);
    VkDeviceGeneratedCommandsFeaturesNVX *ptr() { return reinterpret_cast<VkDeviceGeneratedCommandsFeaturesNVX *>(this); }
    VkDeviceGeneratedCommandsFeaturesNVX const *ptr() const { return reinterpret_cast<VkDeviceGeneratedCommandsFeaturesNVX const *>(this); }
};

struct safe_VkDeviceGeneratedCommandsLimitsNVX {
    VkStructureType sType;
    const void* pNext;
    uint32_t maxIndirectCommandsLayoutTokenCount;
    uint32_t maxObjectEntryCounts;
    uint32_t minSequenceCountBufferOffsetAlignment;
    uint32_t minSequenceIndexBufferOffsetAlignment;
    uint32_t minCommandsTokenBufferOffsetAlignment;
    safe_VkDeviceGeneratedCommandsLimitsNVX(const VkDeviceGeneratedCommandsLimitsNVX* in_struct);
    safe_VkDeviceGeneratedCommandsLimitsNVX(const safe_VkDeviceGeneratedCommandsLimitsNVX& src);
    safe_VkDeviceGeneratedCommandsLimitsNVX& operator=(const safe_VkDeviceGeneratedCommandsLimitsNVX& src);
    safe_VkDeviceGeneratedCommandsLimitsNVX();
    ~safe_VkDeviceGeneratedCommandsLimitsNVX();
    void initialize(const VkDeviceGeneratedCommandsLimitsNVX* in_struct);
    void initialize(const safe_VkDeviceGeneratedCommandsLimitsNVX* src);
    VkDeviceGeneratedCommandsLimitsNVX *ptr() { return reinterpret_cast<VkDeviceGeneratedCommandsLimitsNVX *>(this); }
    VkDeviceGeneratedCommandsLimitsNVX const *ptr() const { return reinterpret_cast<VkDeviceGeneratedCommandsLimitsNVX const *>(this); }
};

struct safe_VkIndirectCommandsLayoutCreateInfoNVX {
    VkStructureType sType;
    const void* pNext;
    VkPipelineBindPoint pipelineBindPoint;
    VkIndirectCommandsLayoutUsageFlagsNVX flags;
    uint32_t tokenCount;
    const VkIndirectCommandsLayoutTokenNVX* pTokens;
    safe_VkIndirectCommandsLayoutCreateInfoNVX(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct);
    safe_VkIndirectCommandsLayoutCreateInfoNVX(const safe_VkIndirectCommandsLayoutCreateInfoNVX& src);
    safe_VkIndirectCommandsLayoutCreateInfoNVX& operator=(const safe_VkIndirectCommandsLayoutCreateInfoNVX& src);
    safe_VkIndirectCommandsLayoutCreateInfoNVX();
    ~safe_VkIndirectCommandsLayoutCreateInfoNVX();
    void initialize(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct);
    void initialize(const safe_VkIndirectCommandsLayoutCreateInfoNVX* src);
    VkIndirectCommandsLayoutCreateInfoNVX *ptr() { return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNVX *>(this); }
    VkIndirectCommandsLayoutCreateInfoNVX const *ptr() const { return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNVX const *>(this); }
};

struct safe_VkCmdProcessCommandsInfoNVX {
    VkStructureType sType;
    const void* pNext;
    VkObjectTableNVX objectTable;
    VkIndirectCommandsLayoutNVX indirectCommandsLayout;
    uint32_t indirectCommandsTokenCount;
    VkIndirectCommandsTokenNVX* pIndirectCommandsTokens;
    uint32_t maxSequencesCount;
    VkCommandBuffer targetCommandBuffer;
    VkBuffer sequencesCountBuffer;
    VkDeviceSize sequencesCountOffset;
    VkBuffer sequencesIndexBuffer;
    VkDeviceSize sequencesIndexOffset;
    safe_VkCmdProcessCommandsInfoNVX(const VkCmdProcessCommandsInfoNVX* in_struct);
    safe_VkCmdProcessCommandsInfoNVX(const safe_VkCmdProcessCommandsInfoNVX& src);
    safe_VkCmdProcessCommandsInfoNVX& operator=(const safe_VkCmdProcessCommandsInfoNVX& src);
    safe_VkCmdProcessCommandsInfoNVX();
    ~safe_VkCmdProcessCommandsInfoNVX();
    void initialize(const VkCmdProcessCommandsInfoNVX* in_struct);
    void initialize(const safe_VkCmdProcessCommandsInfoNVX* src);
    VkCmdProcessCommandsInfoNVX *ptr() { return reinterpret_cast<VkCmdProcessCommandsInfoNVX *>(this); }
    VkCmdProcessCommandsInfoNVX const *ptr() const { return reinterpret_cast<VkCmdProcessCommandsInfoNVX const *>(this); }
};

struct safe_VkCmdReserveSpaceForCommandsInfoNVX {
    VkStructureType sType;
    const void* pNext;
    VkObjectTableNVX objectTable;
    VkIndirectCommandsLayoutNVX indirectCommandsLayout;
    uint32_t maxSequencesCount;
    safe_VkCmdReserveSpaceForCommandsInfoNVX(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct);
    safe_VkCmdReserveSpaceForCommandsInfoNVX(const safe_VkCmdReserveSpaceForCommandsInfoNVX& src);
    safe_VkCmdReserveSpaceForCommandsInfoNVX& operator=(const safe_VkCmdReserveSpaceForCommandsInfoNVX& src);
    safe_VkCmdReserveSpaceForCommandsInfoNVX();
    ~safe_VkCmdReserveSpaceForCommandsInfoNVX();
    void initialize(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct);
    void initialize(const safe_VkCmdReserveSpaceForCommandsInfoNVX* src);
    VkCmdReserveSpaceForCommandsInfoNVX *ptr() { return reinterpret_cast<VkCmdReserveSpaceForCommandsInfoNVX *>(this); }
    VkCmdReserveSpaceForCommandsInfoNVX const *ptr() const { return reinterpret_cast<VkCmdReserveSpaceForCommandsInfoNVX const *>(this); }
};

struct safe_VkObjectTableCreateInfoNVX {
    VkStructureType sType;
    const void* pNext;
    uint32_t objectCount;
    const VkObjectEntryTypeNVX* pObjectEntryTypes;
    const uint32_t* pObjectEntryCounts;
    const VkObjectEntryUsageFlagsNVX* pObjectEntryUsageFlags;
    uint32_t maxUniformBuffersPerDescriptor;
    uint32_t maxStorageBuffersPerDescriptor;
    uint32_t maxStorageImagesPerDescriptor;
    uint32_t maxSampledImagesPerDescriptor;
    uint32_t maxPipelineLayouts;
    safe_VkObjectTableCreateInfoNVX(const VkObjectTableCreateInfoNVX* in_struct);
    safe_VkObjectTableCreateInfoNVX(const safe_VkObjectTableCreateInfoNVX& src);
    safe_VkObjectTableCreateInfoNVX& operator=(const safe_VkObjectTableCreateInfoNVX& src);
    safe_VkObjectTableCreateInfoNVX();
    ~safe_VkObjectTableCreateInfoNVX();
    void initialize(const VkObjectTableCreateInfoNVX* in_struct);
    void initialize(const safe_VkObjectTableCreateInfoNVX* src);
    VkObjectTableCreateInfoNVX *ptr() { return reinterpret_cast<VkObjectTableCreateInfoNVX *>(this); }
    VkObjectTableCreateInfoNVX const *ptr() const { return reinterpret_cast<VkObjectTableCreateInfoNVX const *>(this); }
};

struct safe_VkPipelineViewportWScalingStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkBool32 viewportWScalingEnable;
    uint32_t viewportCount;
    const VkViewportWScalingNV* pViewportWScalings;
    safe_VkPipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct);
    safe_VkPipelineViewportWScalingStateCreateInfoNV(const safe_VkPipelineViewportWScalingStateCreateInfoNV& src);
    safe_VkPipelineViewportWScalingStateCreateInfoNV& operator=(const safe_VkPipelineViewportWScalingStateCreateInfoNV& src);
    safe_VkPipelineViewportWScalingStateCreateInfoNV();
    ~safe_VkPipelineViewportWScalingStateCreateInfoNV();
    void initialize(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct);
    void initialize(const safe_VkPipelineViewportWScalingStateCreateInfoNV* src);
    VkPipelineViewportWScalingStateCreateInfoNV *ptr() { return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV *>(this); }
    VkPipelineViewportWScalingStateCreateInfoNV const *ptr() const { return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV const *>(this); }
};

struct safe_VkSurfaceCapabilities2EXT {
    VkStructureType sType;
    void* pNext;
    uint32_t minImageCount;
    uint32_t maxImageCount;
    VkExtent2D currentExtent;
    VkExtent2D minImageExtent;
    VkExtent2D maxImageExtent;
    uint32_t maxImageArrayLayers;
    VkSurfaceTransformFlagsKHR supportedTransforms;
    VkSurfaceTransformFlagBitsKHR currentTransform;
    VkCompositeAlphaFlagsKHR supportedCompositeAlpha;
    VkImageUsageFlags supportedUsageFlags;
    VkSurfaceCounterFlagsEXT supportedSurfaceCounters;
    safe_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* in_struct);
    safe_VkSurfaceCapabilities2EXT(const safe_VkSurfaceCapabilities2EXT& src);
    safe_VkSurfaceCapabilities2EXT& operator=(const safe_VkSurfaceCapabilities2EXT& src);
    safe_VkSurfaceCapabilities2EXT();
    ~safe_VkSurfaceCapabilities2EXT();
    void initialize(const VkSurfaceCapabilities2EXT* in_struct);
    void initialize(const safe_VkSurfaceCapabilities2EXT* src);
    VkSurfaceCapabilities2EXT *ptr() { return reinterpret_cast<VkSurfaceCapabilities2EXT *>(this); }
    VkSurfaceCapabilities2EXT const *ptr() const { return reinterpret_cast<VkSurfaceCapabilities2EXT const *>(this); }
};

struct safe_VkDisplayPowerInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDisplayPowerStateEXT powerState;
    safe_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* in_struct);
    safe_VkDisplayPowerInfoEXT(const safe_VkDisplayPowerInfoEXT& src);
    safe_VkDisplayPowerInfoEXT& operator=(const safe_VkDisplayPowerInfoEXT& src);
    safe_VkDisplayPowerInfoEXT();
    ~safe_VkDisplayPowerInfoEXT();
    void initialize(const VkDisplayPowerInfoEXT* in_struct);
    void initialize(const safe_VkDisplayPowerInfoEXT* src);
    VkDisplayPowerInfoEXT *ptr() { return reinterpret_cast<VkDisplayPowerInfoEXT *>(this); }
    VkDisplayPowerInfoEXT const *ptr() const { return reinterpret_cast<VkDisplayPowerInfoEXT const *>(this); }
};

struct safe_VkDeviceEventInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDeviceEventTypeEXT deviceEvent;
    safe_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT* in_struct);
    safe_VkDeviceEventInfoEXT(const safe_VkDeviceEventInfoEXT& src);
    safe_VkDeviceEventInfoEXT& operator=(const safe_VkDeviceEventInfoEXT& src);
    safe_VkDeviceEventInfoEXT();
    ~safe_VkDeviceEventInfoEXT();
    void initialize(const VkDeviceEventInfoEXT* in_struct);
    void initialize(const safe_VkDeviceEventInfoEXT* src);
    VkDeviceEventInfoEXT *ptr() { return reinterpret_cast<VkDeviceEventInfoEXT *>(this); }
    VkDeviceEventInfoEXT const *ptr() const { return reinterpret_cast<VkDeviceEventInfoEXT const *>(this); }
};

struct safe_VkDisplayEventInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkDisplayEventTypeEXT displayEvent;
    safe_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT* in_struct);
    safe_VkDisplayEventInfoEXT(const safe_VkDisplayEventInfoEXT& src);
    safe_VkDisplayEventInfoEXT& operator=(const safe_VkDisplayEventInfoEXT& src);
    safe_VkDisplayEventInfoEXT();
    ~safe_VkDisplayEventInfoEXT();
    void initialize(const VkDisplayEventInfoEXT* in_struct);
    void initialize(const safe_VkDisplayEventInfoEXT* src);
    VkDisplayEventInfoEXT *ptr() { return reinterpret_cast<VkDisplayEventInfoEXT *>(this); }
    VkDisplayEventInfoEXT const *ptr() const { return reinterpret_cast<VkDisplayEventInfoEXT const *>(this); }
};

struct safe_VkSwapchainCounterCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkSurfaceCounterFlagsEXT surfaceCounters;
    safe_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* in_struct);
    safe_VkSwapchainCounterCreateInfoEXT(const safe_VkSwapchainCounterCreateInfoEXT& src);
    safe_VkSwapchainCounterCreateInfoEXT& operator=(const safe_VkSwapchainCounterCreateInfoEXT& src);
    safe_VkSwapchainCounterCreateInfoEXT();
    ~safe_VkSwapchainCounterCreateInfoEXT();
    void initialize(const VkSwapchainCounterCreateInfoEXT* in_struct);
    void initialize(const safe_VkSwapchainCounterCreateInfoEXT* src);
    VkSwapchainCounterCreateInfoEXT *ptr() { return reinterpret_cast<VkSwapchainCounterCreateInfoEXT *>(this); }
    VkSwapchainCounterCreateInfoEXT const *ptr() const { return reinterpret_cast<VkSwapchainCounterCreateInfoEXT const *>(this); }
};

struct safe_VkPresentTimesInfoGOOGLE {
    VkStructureType sType;
    const void* pNext;
    uint32_t swapchainCount;
    const VkPresentTimeGOOGLE* pTimes;
    safe_VkPresentTimesInfoGOOGLE(const VkPresentTimesInfoGOOGLE* in_struct);
    safe_VkPresentTimesInfoGOOGLE(const safe_VkPresentTimesInfoGOOGLE& src);
    safe_VkPresentTimesInfoGOOGLE& operator=(const safe_VkPresentTimesInfoGOOGLE& src);
    safe_VkPresentTimesInfoGOOGLE();
    ~safe_VkPresentTimesInfoGOOGLE();
    void initialize(const VkPresentTimesInfoGOOGLE* in_struct);
    void initialize(const safe_VkPresentTimesInfoGOOGLE* src);
    VkPresentTimesInfoGOOGLE *ptr() { return reinterpret_cast<VkPresentTimesInfoGOOGLE *>(this); }
    VkPresentTimesInfoGOOGLE const *ptr() const { return reinterpret_cast<VkPresentTimesInfoGOOGLE const *>(this); }
};

struct safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
    VkStructureType sType;
    void* pNext;
    VkBool32 perViewPositionAllComponents;
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& src);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& operator=(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& src);
    safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX();
    ~safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX();
    void initialize(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct);
    void initialize(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* src);
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *ptr() { return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(this); }
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const *ptr() const { return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const *>(this); }
};

struct safe_VkPipelineViewportSwizzleStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkPipelineViewportSwizzleStateCreateFlagsNV flags;
    uint32_t viewportCount;
    const VkViewportSwizzleNV* pViewportSwizzles;
    safe_VkPipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& src);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV& operator=(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& src);
    safe_VkPipelineViewportSwizzleStateCreateInfoNV();
    ~safe_VkPipelineViewportSwizzleStateCreateInfoNV();
    void initialize(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct);
    void initialize(const safe_VkPipelineViewportSwizzleStateCreateInfoNV* src);
    VkPipelineViewportSwizzleStateCreateInfoNV *ptr() { return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV *>(this); }
    VkPipelineViewportSwizzleStateCreateInfoNV const *ptr() const { return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV const *>(this); }
};

struct safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT {
    VkStructureType sType;
    void* pNext;
    uint32_t maxDiscardRectangles;
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& src);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& operator=(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& src);
    safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT();
    ~safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT();
    void initialize(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT* src);
    VkPhysicalDeviceDiscardRectanglePropertiesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(this); }
    VkPhysicalDeviceDiscardRectanglePropertiesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT const *>(this); }
};

struct safe_VkPipelineDiscardRectangleStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkPipelineDiscardRectangleStateCreateFlagsEXT flags;
    VkDiscardRectangleModeEXT discardRectangleMode;
    uint32_t discardRectangleCount;
    const VkRect2D* pDiscardRectangles;
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& src);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT& operator=(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& src);
    safe_VkPipelineDiscardRectangleStateCreateInfoEXT();
    ~safe_VkPipelineDiscardRectangleStateCreateInfoEXT();
    void initialize(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct);
    void initialize(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT* src);
    VkPipelineDiscardRectangleStateCreateInfoEXT *ptr() { return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT *>(this); }
    VkPipelineDiscardRectangleStateCreateInfoEXT const *ptr() const { return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT const *>(this); }
};

struct safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT {
    VkStructureType sType;
    void* pNext;
    float primitiveOverestimationSize;
    float maxExtraPrimitiveOverestimationSize;
    float extraPrimitiveOverestimationSizeGranularity;
    VkBool32 primitiveUnderestimation;
    VkBool32 conservativePointAndLineRasterization;
    VkBool32 degenerateTrianglesRasterized;
    VkBool32 degenerateLinesRasterized;
    VkBool32 fullyCoveredFragmentShaderInputVariable;
    VkBool32 conservativeRasterizationPostDepthCoverage;
    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct);
    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& src);
    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& operator=(const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& src);
    safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT();
    ~safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT();
    void initialize(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT* src);
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(this); }
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT const *>(this); }
};

struct safe_VkPipelineRasterizationConservativeStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkPipelineRasterizationConservativeStateCreateFlagsEXT flags;
    VkConservativeRasterizationModeEXT conservativeRasterizationMode;
    float extraPrimitiveOverestimationSize;
    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct);
    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& src);
    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& operator=(const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& src);
    safe_VkPipelineRasterizationConservativeStateCreateInfoEXT();
    ~safe_VkPipelineRasterizationConservativeStateCreateInfoEXT();
    void initialize(const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct);
    void initialize(const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT* src);
    VkPipelineRasterizationConservativeStateCreateInfoEXT *ptr() { return reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT *>(this); }
    VkPipelineRasterizationConservativeStateCreateInfoEXT const *ptr() const { return reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT const *>(this); }
};

struct safe_VkHdrMetadataEXT {
    VkStructureType sType;
    const void* pNext;
    VkXYColorEXT displayPrimaryRed;
    VkXYColorEXT displayPrimaryGreen;
    VkXYColorEXT displayPrimaryBlue;
    VkXYColorEXT whitePoint;
    float maxLuminance;
    float minLuminance;
    float maxContentLightLevel;
    float maxFrameAverageLightLevel;
    safe_VkHdrMetadataEXT(const VkHdrMetadataEXT* in_struct);
    safe_VkHdrMetadataEXT(const safe_VkHdrMetadataEXT& src);
    safe_VkHdrMetadataEXT& operator=(const safe_VkHdrMetadataEXT& src);
    safe_VkHdrMetadataEXT();
    ~safe_VkHdrMetadataEXT();
    void initialize(const VkHdrMetadataEXT* in_struct);
    void initialize(const safe_VkHdrMetadataEXT* src);
    VkHdrMetadataEXT *ptr() { return reinterpret_cast<VkHdrMetadataEXT *>(this); }
    VkHdrMetadataEXT const *ptr() const { return reinterpret_cast<VkHdrMetadataEXT const *>(this); }
};

#ifdef VK_USE_PLATFORM_IOS_MVK
struct safe_VkIOSSurfaceCreateInfoMVK {
    VkStructureType sType;
    const void* pNext;
    VkIOSSurfaceCreateFlagsMVK flags;
    const void* pView;
    safe_VkIOSSurfaceCreateInfoMVK(const VkIOSSurfaceCreateInfoMVK* in_struct);
    safe_VkIOSSurfaceCreateInfoMVK(const safe_VkIOSSurfaceCreateInfoMVK& src);
    safe_VkIOSSurfaceCreateInfoMVK& operator=(const safe_VkIOSSurfaceCreateInfoMVK& src);
    safe_VkIOSSurfaceCreateInfoMVK();
    ~safe_VkIOSSurfaceCreateInfoMVK();
    void initialize(const VkIOSSurfaceCreateInfoMVK* in_struct);
    void initialize(const safe_VkIOSSurfaceCreateInfoMVK* src);
    VkIOSSurfaceCreateInfoMVK *ptr() { return reinterpret_cast<VkIOSSurfaceCreateInfoMVK *>(this); }
    VkIOSSurfaceCreateInfoMVK const *ptr() const { return reinterpret_cast<VkIOSSurfaceCreateInfoMVK const *>(this); }
};
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK
struct safe_VkMacOSSurfaceCreateInfoMVK {
    VkStructureType sType;
    const void* pNext;
    VkMacOSSurfaceCreateFlagsMVK flags;
    const void* pView;
    safe_VkMacOSSurfaceCreateInfoMVK(const VkMacOSSurfaceCreateInfoMVK* in_struct);
    safe_VkMacOSSurfaceCreateInfoMVK(const safe_VkMacOSSurfaceCreateInfoMVK& src);
    safe_VkMacOSSurfaceCreateInfoMVK& operator=(const safe_VkMacOSSurfaceCreateInfoMVK& src);
    safe_VkMacOSSurfaceCreateInfoMVK();
    ~safe_VkMacOSSurfaceCreateInfoMVK();
    void initialize(const VkMacOSSurfaceCreateInfoMVK* in_struct);
    void initialize(const safe_VkMacOSSurfaceCreateInfoMVK* src);
    VkMacOSSurfaceCreateInfoMVK *ptr() { return reinterpret_cast<VkMacOSSurfaceCreateInfoMVK *>(this); }
    VkMacOSSurfaceCreateInfoMVK const *ptr() const { return reinterpret_cast<VkMacOSSurfaceCreateInfoMVK const *>(this); }
};
#endif // VK_USE_PLATFORM_MACOS_MVK

struct safe_VkSamplerReductionModeCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkSamplerReductionModeEXT reductionMode;
    safe_VkSamplerReductionModeCreateInfoEXT(const VkSamplerReductionModeCreateInfoEXT* in_struct);
    safe_VkSamplerReductionModeCreateInfoEXT(const safe_VkSamplerReductionModeCreateInfoEXT& src);
    safe_VkSamplerReductionModeCreateInfoEXT& operator=(const safe_VkSamplerReductionModeCreateInfoEXT& src);
    safe_VkSamplerReductionModeCreateInfoEXT();
    ~safe_VkSamplerReductionModeCreateInfoEXT();
    void initialize(const VkSamplerReductionModeCreateInfoEXT* in_struct);
    void initialize(const safe_VkSamplerReductionModeCreateInfoEXT* src);
    VkSamplerReductionModeCreateInfoEXT *ptr() { return reinterpret_cast<VkSamplerReductionModeCreateInfoEXT *>(this); }
    VkSamplerReductionModeCreateInfoEXT const *ptr() const { return reinterpret_cast<VkSamplerReductionModeCreateInfoEXT const *>(this); }
};

struct safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT {
    VkStructureType sType;
    void* pNext;
    VkBool32 filterMinmaxSingleComponentFormats;
    VkBool32 filterMinmaxImageComponentMapping;
    safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* in_struct);
    safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(const safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& src);
    safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& operator=(const safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& src);
    safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT();
    ~safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT();
    void initialize(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* src);
    VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *>(this); }
    VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT const *>(this); }
};

struct safe_VkSampleLocationsInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkSampleCountFlagBits sampleLocationsPerPixel;
    VkExtent2D sampleLocationGridSize;
    uint32_t sampleLocationsCount;
    const VkSampleLocationEXT* pSampleLocations;
    safe_VkSampleLocationsInfoEXT(const VkSampleLocationsInfoEXT* in_struct);
    safe_VkSampleLocationsInfoEXT(const safe_VkSampleLocationsInfoEXT& src);
    safe_VkSampleLocationsInfoEXT& operator=(const safe_VkSampleLocationsInfoEXT& src);
    safe_VkSampleLocationsInfoEXT();
    ~safe_VkSampleLocationsInfoEXT();
    void initialize(const VkSampleLocationsInfoEXT* in_struct);
    void initialize(const safe_VkSampleLocationsInfoEXT* src);
    VkSampleLocationsInfoEXT *ptr() { return reinterpret_cast<VkSampleLocationsInfoEXT *>(this); }
    VkSampleLocationsInfoEXT const *ptr() const { return reinterpret_cast<VkSampleLocationsInfoEXT const *>(this); }
};

struct safe_VkRenderPassSampleLocationsBeginInfoEXT {
    VkStructureType sType;
    const void* pNext;
    uint32_t attachmentInitialSampleLocationsCount;
    const VkAttachmentSampleLocationsEXT* pAttachmentInitialSampleLocations;
    uint32_t postSubpassSampleLocationsCount;
    const VkSubpassSampleLocationsEXT* pPostSubpassSampleLocations;
    safe_VkRenderPassSampleLocationsBeginInfoEXT(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct);
    safe_VkRenderPassSampleLocationsBeginInfoEXT(const safe_VkRenderPassSampleLocationsBeginInfoEXT& src);
    safe_VkRenderPassSampleLocationsBeginInfoEXT& operator=(const safe_VkRenderPassSampleLocationsBeginInfoEXT& src);
    safe_VkRenderPassSampleLocationsBeginInfoEXT();
    ~safe_VkRenderPassSampleLocationsBeginInfoEXT();
    void initialize(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct);
    void initialize(const safe_VkRenderPassSampleLocationsBeginInfoEXT* src);
    VkRenderPassSampleLocationsBeginInfoEXT *ptr() { return reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT *>(this); }
    VkRenderPassSampleLocationsBeginInfoEXT const *ptr() const { return reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT const *>(this); }
};

struct safe_VkPipelineSampleLocationsStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkBool32 sampleLocationsEnable;
    safe_VkSampleLocationsInfoEXT sampleLocationsInfo;
    safe_VkPipelineSampleLocationsStateCreateInfoEXT(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct);
    safe_VkPipelineSampleLocationsStateCreateInfoEXT(const safe_VkPipelineSampleLocationsStateCreateInfoEXT& src);
    safe_VkPipelineSampleLocationsStateCreateInfoEXT& operator=(const safe_VkPipelineSampleLocationsStateCreateInfoEXT& src);
    safe_VkPipelineSampleLocationsStateCreateInfoEXT();
    ~safe_VkPipelineSampleLocationsStateCreateInfoEXT();
    void initialize(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct);
    void initialize(const safe_VkPipelineSampleLocationsStateCreateInfoEXT* src);
    VkPipelineSampleLocationsStateCreateInfoEXT *ptr() { return reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT *>(this); }
    VkPipelineSampleLocationsStateCreateInfoEXT const *ptr() const { return reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT const *>(this); }
};

struct safe_VkPhysicalDeviceSampleLocationsPropertiesEXT {
    VkStructureType sType;
    void* pNext;
    VkSampleCountFlags sampleLocationSampleCounts;
    VkExtent2D maxSampleLocationGridSize;
    float sampleLocationCoordinateRange[2];
    uint32_t sampleLocationSubPixelBits;
    VkBool32 variableSampleLocations;
    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct);
    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& src);
    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& operator=(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& src);
    safe_VkPhysicalDeviceSampleLocationsPropertiesEXT();
    ~safe_VkPhysicalDeviceSampleLocationsPropertiesEXT();
    void initialize(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT* src);
    VkPhysicalDeviceSampleLocationsPropertiesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT *>(this); }
    VkPhysicalDeviceSampleLocationsPropertiesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT const *>(this); }
};

struct safe_VkMultisamplePropertiesEXT {
    VkStructureType sType;
    void* pNext;
    VkExtent2D maxSampleLocationGridSize;
    safe_VkMultisamplePropertiesEXT(const VkMultisamplePropertiesEXT* in_struct);
    safe_VkMultisamplePropertiesEXT(const safe_VkMultisamplePropertiesEXT& src);
    safe_VkMultisamplePropertiesEXT& operator=(const safe_VkMultisamplePropertiesEXT& src);
    safe_VkMultisamplePropertiesEXT();
    ~safe_VkMultisamplePropertiesEXT();
    void initialize(const VkMultisamplePropertiesEXT* in_struct);
    void initialize(const safe_VkMultisamplePropertiesEXT* src);
    VkMultisamplePropertiesEXT *ptr() { return reinterpret_cast<VkMultisamplePropertiesEXT *>(this); }
    VkMultisamplePropertiesEXT const *ptr() const { return reinterpret_cast<VkMultisamplePropertiesEXT const *>(this); }
};

struct safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT {
    VkStructureType sType;
    void* pNext;
    VkBool32 advancedBlendCoherentOperations;
    safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* in_struct);
    safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(const safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& src);
    safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& operator=(const safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& src);
    safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT();
    ~safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT();
    void initialize(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* src);
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(this); }
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const *>(this); }
};

struct safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT {
    VkStructureType sType;
    void* pNext;
    uint32_t advancedBlendMaxColorAttachments;
    VkBool32 advancedBlendIndependentBlend;
    VkBool32 advancedBlendNonPremultipliedSrcColor;
    VkBool32 advancedBlendNonPremultipliedDstColor;
    VkBool32 advancedBlendCorrelatedOverlap;
    VkBool32 advancedBlendAllOperations;
    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct);
    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& src);
    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& operator=(const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& src);
    safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT();
    ~safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT();
    void initialize(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* src);
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(this); }
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const *>(this); }
};

struct safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkBool32 srcPremultiplied;
    VkBool32 dstPremultiplied;
    VkBlendOverlapEXT blendOverlap;
    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct);
    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& src);
    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& operator=(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& src);
    safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT();
    ~safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT();
    void initialize(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct);
    void initialize(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT* src);
    VkPipelineColorBlendAdvancedStateCreateInfoEXT *ptr() { return reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(this); }
    VkPipelineColorBlendAdvancedStateCreateInfoEXT const *ptr() const { return reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT const *>(this); }
};

struct safe_VkPipelineCoverageToColorStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCoverageToColorStateCreateFlagsNV flags;
    VkBool32 coverageToColorEnable;
    uint32_t coverageToColorLocation;
    safe_VkPipelineCoverageToColorStateCreateInfoNV(const VkPipelineCoverageToColorStateCreateInfoNV* in_struct);
    safe_VkPipelineCoverageToColorStateCreateInfoNV(const safe_VkPipelineCoverageToColorStateCreateInfoNV& src);
    safe_VkPipelineCoverageToColorStateCreateInfoNV& operator=(const safe_VkPipelineCoverageToColorStateCreateInfoNV& src);
    safe_VkPipelineCoverageToColorStateCreateInfoNV();
    ~safe_VkPipelineCoverageToColorStateCreateInfoNV();
    void initialize(const VkPipelineCoverageToColorStateCreateInfoNV* in_struct);
    void initialize(const safe_VkPipelineCoverageToColorStateCreateInfoNV* src);
    VkPipelineCoverageToColorStateCreateInfoNV *ptr() { return reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV *>(this); }
    VkPipelineCoverageToColorStateCreateInfoNV const *ptr() const { return reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV const *>(this); }
};

struct safe_VkPipelineCoverageModulationStateCreateInfoNV {
    VkStructureType sType;
    const void* pNext;
    VkPipelineCoverageModulationStateCreateFlagsNV flags;
    VkCoverageModulationModeNV coverageModulationMode;
    VkBool32 coverageModulationTableEnable;
    uint32_t coverageModulationTableCount;
    const float* pCoverageModulationTable;
    safe_VkPipelineCoverageModulationStateCreateInfoNV(const VkPipelineCoverageModulationStateCreateInfoNV* in_struct);
    safe_VkPipelineCoverageModulationStateCreateInfoNV(const safe_VkPipelineCoverageModulationStateCreateInfoNV& src);
    safe_VkPipelineCoverageModulationStateCreateInfoNV& operator=(const safe_VkPipelineCoverageModulationStateCreateInfoNV& src);
    safe_VkPipelineCoverageModulationStateCreateInfoNV();
    ~safe_VkPipelineCoverageModulationStateCreateInfoNV();
    void initialize(const VkPipelineCoverageModulationStateCreateInfoNV* in_struct);
    void initialize(const safe_VkPipelineCoverageModulationStateCreateInfoNV* src);
    VkPipelineCoverageModulationStateCreateInfoNV *ptr() { return reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV *>(this); }
    VkPipelineCoverageModulationStateCreateInfoNV const *ptr() const { return reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV const *>(this); }
};

struct safe_VkValidationCacheCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkValidationCacheCreateFlagsEXT flags;
    size_t initialDataSize;
    const void* pInitialData;
    safe_VkValidationCacheCreateInfoEXT(const VkValidationCacheCreateInfoEXT* in_struct);
    safe_VkValidationCacheCreateInfoEXT(const safe_VkValidationCacheCreateInfoEXT& src);
    safe_VkValidationCacheCreateInfoEXT& operator=(const safe_VkValidationCacheCreateInfoEXT& src);
    safe_VkValidationCacheCreateInfoEXT();
    ~safe_VkValidationCacheCreateInfoEXT();
    void initialize(const VkValidationCacheCreateInfoEXT* in_struct);
    void initialize(const safe_VkValidationCacheCreateInfoEXT* src);
    VkValidationCacheCreateInfoEXT *ptr() { return reinterpret_cast<VkValidationCacheCreateInfoEXT *>(this); }
    VkValidationCacheCreateInfoEXT const *ptr() const { return reinterpret_cast<VkValidationCacheCreateInfoEXT const *>(this); }
};

struct safe_VkShaderModuleValidationCacheCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkValidationCacheEXT validationCache;
    safe_VkShaderModuleValidationCacheCreateInfoEXT(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct);
    safe_VkShaderModuleValidationCacheCreateInfoEXT(const safe_VkShaderModuleValidationCacheCreateInfoEXT& src);
    safe_VkShaderModuleValidationCacheCreateInfoEXT& operator=(const safe_VkShaderModuleValidationCacheCreateInfoEXT& src);
    safe_VkShaderModuleValidationCacheCreateInfoEXT();
    ~safe_VkShaderModuleValidationCacheCreateInfoEXT();
    void initialize(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct);
    void initialize(const safe_VkShaderModuleValidationCacheCreateInfoEXT* src);
    VkShaderModuleValidationCacheCreateInfoEXT *ptr() { return reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT *>(this); }
    VkShaderModuleValidationCacheCreateInfoEXT const *ptr() const { return reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT const *>(this); }
};

struct safe_VkDeviceQueueGlobalPriorityCreateInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkQueueGlobalPriorityEXT globalPriority;
    safe_VkDeviceQueueGlobalPriorityCreateInfoEXT(const VkDeviceQueueGlobalPriorityCreateInfoEXT* in_struct);
    safe_VkDeviceQueueGlobalPriorityCreateInfoEXT(const safe_VkDeviceQueueGlobalPriorityCreateInfoEXT& src);
    safe_VkDeviceQueueGlobalPriorityCreateInfoEXT& operator=(const safe_VkDeviceQueueGlobalPriorityCreateInfoEXT& src);
    safe_VkDeviceQueueGlobalPriorityCreateInfoEXT();
    ~safe_VkDeviceQueueGlobalPriorityCreateInfoEXT();
    void initialize(const VkDeviceQueueGlobalPriorityCreateInfoEXT* in_struct);
    void initialize(const safe_VkDeviceQueueGlobalPriorityCreateInfoEXT* src);
    VkDeviceQueueGlobalPriorityCreateInfoEXT *ptr() { return reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoEXT *>(this); }
    VkDeviceQueueGlobalPriorityCreateInfoEXT const *ptr() const { return reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoEXT const *>(this); }
};

struct safe_VkImportMemoryHostPointerInfoEXT {
    VkStructureType sType;
    const void* pNext;
    VkExternalMemoryHandleTypeFlagBitsKHR handleType;
    void* pHostPointer;
    safe_VkImportMemoryHostPointerInfoEXT(const VkImportMemoryHostPointerInfoEXT* in_struct);
    safe_VkImportMemoryHostPointerInfoEXT(const safe_VkImportMemoryHostPointerInfoEXT& src);
    safe_VkImportMemoryHostPointerInfoEXT& operator=(const safe_VkImportMemoryHostPointerInfoEXT& src);
    safe_VkImportMemoryHostPointerInfoEXT();
    ~safe_VkImportMemoryHostPointerInfoEXT();
    void initialize(const VkImportMemoryHostPointerInfoEXT* in_struct);
    void initialize(const safe_VkImportMemoryHostPointerInfoEXT* src);
    VkImportMemoryHostPointerInfoEXT *ptr() { return reinterpret_cast<VkImportMemoryHostPointerInfoEXT *>(this); }
    VkImportMemoryHostPointerInfoEXT const *ptr() const { return reinterpret_cast<VkImportMemoryHostPointerInfoEXT const *>(this); }
};

struct safe_VkMemoryHostPointerPropertiesEXT {
    VkStructureType sType;
    void* pNext;
    uint32_t memoryTypeBits;
    safe_VkMemoryHostPointerPropertiesEXT(const VkMemoryHostPointerPropertiesEXT* in_struct);
    safe_VkMemoryHostPointerPropertiesEXT(const safe_VkMemoryHostPointerPropertiesEXT& src);
    safe_VkMemoryHostPointerPropertiesEXT& operator=(const safe_VkMemoryHostPointerPropertiesEXT& src);
    safe_VkMemoryHostPointerPropertiesEXT();
    ~safe_VkMemoryHostPointerPropertiesEXT();
    void initialize(const VkMemoryHostPointerPropertiesEXT* in_struct);
    void initialize(const safe_VkMemoryHostPointerPropertiesEXT* src);
    VkMemoryHostPointerPropertiesEXT *ptr() { return reinterpret_cast<VkMemoryHostPointerPropertiesEXT *>(this); }
    VkMemoryHostPointerPropertiesEXT const *ptr() const { return reinterpret_cast<VkMemoryHostPointerPropertiesEXT const *>(this); }
};

struct safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT {
    VkStructureType sType;
    void* pNext;
    VkDeviceSize minImportedHostPointerAlignment;
    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct);
    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& src);
    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& operator=(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& src);
    safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT();
    ~safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT();
    void initialize(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct);
    void initialize(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT* src);
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT *ptr() { return reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(this); }
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT const *ptr() const { return reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT const *>(this); }
};
