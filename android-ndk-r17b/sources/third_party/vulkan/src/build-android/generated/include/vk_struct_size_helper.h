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


#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <vulkan/vulkan.h>

// Function Prototypes
size_t get_struct_chain_size(const void* struct_ptr);
size_t get_struct_size(const void* struct_ptr);
size_t vk_size_vkapplicationinfo(const VkApplicationInfo* struct_ptr);
size_t vk_size_vkinstancecreateinfo(const VkInstanceCreateInfo* struct_ptr);
size_t vk_size_vkallocationcallbacks(const VkAllocationCallbacks* struct_ptr);
size_t vk_size_vkphysicaldevicefeatures(const VkPhysicalDeviceFeatures* struct_ptr);
size_t vk_size_vkformatproperties(const VkFormatProperties* struct_ptr);
size_t vk_size_vkextent3d(const VkExtent3D* struct_ptr);
size_t vk_size_vkimageformatproperties(const VkImageFormatProperties* struct_ptr);
size_t vk_size_vkphysicaldevicelimits(const VkPhysicalDeviceLimits* struct_ptr);
size_t vk_size_vkphysicaldevicesparseproperties(const VkPhysicalDeviceSparseProperties* struct_ptr);
size_t vk_size_vkphysicaldeviceproperties(const VkPhysicalDeviceProperties* struct_ptr);
size_t vk_size_vkqueuefamilyproperties(const VkQueueFamilyProperties* struct_ptr);
size_t vk_size_vkmemorytype(const VkMemoryType* struct_ptr);
size_t vk_size_vkmemoryheap(const VkMemoryHeap* struct_ptr);
size_t vk_size_vkphysicaldevicememoryproperties(const VkPhysicalDeviceMemoryProperties* struct_ptr);
size_t vk_size_vkdevicequeuecreateinfo(const VkDeviceQueueCreateInfo* struct_ptr);
size_t vk_size_vkdevicecreateinfo(const VkDeviceCreateInfo* struct_ptr);
size_t vk_size_vkextensionproperties(const VkExtensionProperties* struct_ptr);
size_t vk_size_vklayerproperties(const VkLayerProperties* struct_ptr);
size_t vk_size_vksubmitinfo(const VkSubmitInfo* struct_ptr);
size_t vk_size_vkmemoryallocateinfo(const VkMemoryAllocateInfo* struct_ptr);
size_t vk_size_vkmappedmemoryrange(const VkMappedMemoryRange* struct_ptr);
size_t vk_size_vkmemoryrequirements(const VkMemoryRequirements* struct_ptr);
size_t vk_size_vksparseimageformatproperties(const VkSparseImageFormatProperties* struct_ptr);
size_t vk_size_vksparseimagememoryrequirements(const VkSparseImageMemoryRequirements* struct_ptr);
size_t vk_size_vksparsememorybind(const VkSparseMemoryBind* struct_ptr);
size_t vk_size_vksparsebuffermemorybindinfo(const VkSparseBufferMemoryBindInfo* struct_ptr);
size_t vk_size_vksparseimageopaquememorybindinfo(const VkSparseImageOpaqueMemoryBindInfo* struct_ptr);
size_t vk_size_vkimagesubresource(const VkImageSubresource* struct_ptr);
size_t vk_size_vkoffset3d(const VkOffset3D* struct_ptr);
size_t vk_size_vksparseimagememorybind(const VkSparseImageMemoryBind* struct_ptr);
size_t vk_size_vksparseimagememorybindinfo(const VkSparseImageMemoryBindInfo* struct_ptr);
size_t vk_size_vkbindsparseinfo(const VkBindSparseInfo* struct_ptr);
size_t vk_size_vkfencecreateinfo(const VkFenceCreateInfo* struct_ptr);
size_t vk_size_vksemaphorecreateinfo(const VkSemaphoreCreateInfo* struct_ptr);
size_t vk_size_vkeventcreateinfo(const VkEventCreateInfo* struct_ptr);
size_t vk_size_vkquerypoolcreateinfo(const VkQueryPoolCreateInfo* struct_ptr);
size_t vk_size_vkbuffercreateinfo(const VkBufferCreateInfo* struct_ptr);
size_t vk_size_vkbufferviewcreateinfo(const VkBufferViewCreateInfo* struct_ptr);
size_t vk_size_vkimagecreateinfo(const VkImageCreateInfo* struct_ptr);
size_t vk_size_vksubresourcelayout(const VkSubresourceLayout* struct_ptr);
size_t vk_size_vkcomponentmapping(const VkComponentMapping* struct_ptr);
size_t vk_size_vkimagesubresourcerange(const VkImageSubresourceRange* struct_ptr);
size_t vk_size_vkimageviewcreateinfo(const VkImageViewCreateInfo* struct_ptr);
size_t vk_size_vkshadermodulecreateinfo(const VkShaderModuleCreateInfo* struct_ptr);
size_t vk_size_vkpipelinecachecreateinfo(const VkPipelineCacheCreateInfo* struct_ptr);
size_t vk_size_vkspecializationmapentry(const VkSpecializationMapEntry* struct_ptr);
size_t vk_size_vkspecializationinfo(const VkSpecializationInfo* struct_ptr);
size_t vk_size_vkpipelineshaderstagecreateinfo(const VkPipelineShaderStageCreateInfo* struct_ptr);
size_t vk_size_vkvertexinputbindingdescription(const VkVertexInputBindingDescription* struct_ptr);
size_t vk_size_vkvertexinputattributedescription(const VkVertexInputAttributeDescription* struct_ptr);
size_t vk_size_vkpipelinevertexinputstatecreateinfo(const VkPipelineVertexInputStateCreateInfo* struct_ptr);
size_t vk_size_vkpipelineinputassemblystatecreateinfo(const VkPipelineInputAssemblyStateCreateInfo* struct_ptr);
size_t vk_size_vkpipelinetessellationstatecreateinfo(const VkPipelineTessellationStateCreateInfo* struct_ptr);
size_t vk_size_vkviewport(const VkViewport* struct_ptr);
size_t vk_size_vkoffset2d(const VkOffset2D* struct_ptr);
size_t vk_size_vkextent2d(const VkExtent2D* struct_ptr);
size_t vk_size_vkrect2d(const VkRect2D* struct_ptr);
size_t vk_size_vkpipelineviewportstatecreateinfo(const VkPipelineViewportStateCreateInfo* struct_ptr);
size_t vk_size_vkpipelinerasterizationstatecreateinfo(const VkPipelineRasterizationStateCreateInfo* struct_ptr);
size_t vk_size_vkpipelinemultisamplestatecreateinfo(const VkPipelineMultisampleStateCreateInfo* struct_ptr);
size_t vk_size_vkstencilopstate(const VkStencilOpState* struct_ptr);
size_t vk_size_vkpipelinedepthstencilstatecreateinfo(const VkPipelineDepthStencilStateCreateInfo* struct_ptr);
size_t vk_size_vkpipelinecolorblendattachmentstate(const VkPipelineColorBlendAttachmentState* struct_ptr);
size_t vk_size_vkpipelinecolorblendstatecreateinfo(const VkPipelineColorBlendStateCreateInfo* struct_ptr);
size_t vk_size_vkpipelinedynamicstatecreateinfo(const VkPipelineDynamicStateCreateInfo* struct_ptr);
size_t vk_size_vkgraphicspipelinecreateinfo(const VkGraphicsPipelineCreateInfo* struct_ptr);
size_t vk_size_vkcomputepipelinecreateinfo(const VkComputePipelineCreateInfo* struct_ptr);
size_t vk_size_vkpushconstantrange(const VkPushConstantRange* struct_ptr);
size_t vk_size_vkpipelinelayoutcreateinfo(const VkPipelineLayoutCreateInfo* struct_ptr);
size_t vk_size_vksamplercreateinfo(const VkSamplerCreateInfo* struct_ptr);
size_t vk_size_vkdescriptorsetlayoutbinding(const VkDescriptorSetLayoutBinding* struct_ptr);
size_t vk_size_vkdescriptorsetlayoutcreateinfo(const VkDescriptorSetLayoutCreateInfo* struct_ptr);
size_t vk_size_vkdescriptorpoolsize(const VkDescriptorPoolSize* struct_ptr);
size_t vk_size_vkdescriptorpoolcreateinfo(const VkDescriptorPoolCreateInfo* struct_ptr);
size_t vk_size_vkdescriptorsetallocateinfo(const VkDescriptorSetAllocateInfo* struct_ptr);
size_t vk_size_vkdescriptorimageinfo(const VkDescriptorImageInfo* struct_ptr);
size_t vk_size_vkdescriptorbufferinfo(const VkDescriptorBufferInfo* struct_ptr);
size_t vk_size_vkwritedescriptorset(const VkWriteDescriptorSet* struct_ptr);
size_t vk_size_vkcopydescriptorset(const VkCopyDescriptorSet* struct_ptr);
size_t vk_size_vkframebuffercreateinfo(const VkFramebufferCreateInfo* struct_ptr);
size_t vk_size_vkattachmentdescription(const VkAttachmentDescription* struct_ptr);
size_t vk_size_vkattachmentreference(const VkAttachmentReference* struct_ptr);
size_t vk_size_vksubpassdescription(const VkSubpassDescription* struct_ptr);
size_t vk_size_vksubpassdependency(const VkSubpassDependency* struct_ptr);
size_t vk_size_vkrenderpasscreateinfo(const VkRenderPassCreateInfo* struct_ptr);
size_t vk_size_vkcommandpoolcreateinfo(const VkCommandPoolCreateInfo* struct_ptr);
size_t vk_size_vkcommandbufferallocateinfo(const VkCommandBufferAllocateInfo* struct_ptr);
size_t vk_size_vkcommandbufferinheritanceinfo(const VkCommandBufferInheritanceInfo* struct_ptr);
size_t vk_size_vkcommandbufferbegininfo(const VkCommandBufferBeginInfo* struct_ptr);
size_t vk_size_vkbuffercopy(const VkBufferCopy* struct_ptr);
size_t vk_size_vkimagesubresourcelayers(const VkImageSubresourceLayers* struct_ptr);
size_t vk_size_vkimagecopy(const VkImageCopy* struct_ptr);
size_t vk_size_vkimageblit(const VkImageBlit* struct_ptr);
size_t vk_size_vkbufferimagecopy(const VkBufferImageCopy* struct_ptr);
size_t vk_size_vkclearcolorvalue(const VkClearColorValue* struct_ptr);
size_t vk_size_vkcleardepthstencilvalue(const VkClearDepthStencilValue* struct_ptr);
size_t vk_size_vkclearvalue(const VkClearValue* struct_ptr);
size_t vk_size_vkclearattachment(const VkClearAttachment* struct_ptr);
size_t vk_size_vkclearrect(const VkClearRect* struct_ptr);
size_t vk_size_vkimageresolve(const VkImageResolve* struct_ptr);
size_t vk_size_vkmemorybarrier(const VkMemoryBarrier* struct_ptr);
size_t vk_size_vkbuffermemorybarrier(const VkBufferMemoryBarrier* struct_ptr);
size_t vk_size_vkimagememorybarrier(const VkImageMemoryBarrier* struct_ptr);
size_t vk_size_vkrenderpassbegininfo(const VkRenderPassBeginInfo* struct_ptr);
size_t vk_size_vkdispatchindirectcommand(const VkDispatchIndirectCommand* struct_ptr);
size_t vk_size_vkdrawindexedindirectcommand(const VkDrawIndexedIndirectCommand* struct_ptr);
size_t vk_size_vkdrawindirectcommand(const VkDrawIndirectCommand* struct_ptr);
size_t vk_size_vksurfacecapabilitieskhr(const VkSurfaceCapabilitiesKHR* struct_ptr);
size_t vk_size_vksurfaceformatkhr(const VkSurfaceFormatKHR* struct_ptr);
size_t vk_size_vkswapchaincreateinfokhr(const VkSwapchainCreateInfoKHR* struct_ptr);
size_t vk_size_vkpresentinfokhr(const VkPresentInfoKHR* struct_ptr);
size_t vk_size_vkdisplaypropertieskhr(const VkDisplayPropertiesKHR* struct_ptr);
size_t vk_size_vkdisplaymodeparameterskhr(const VkDisplayModeParametersKHR* struct_ptr);
size_t vk_size_vkdisplaymodepropertieskhr(const VkDisplayModePropertiesKHR* struct_ptr);
size_t vk_size_vkdisplaymodecreateinfokhr(const VkDisplayModeCreateInfoKHR* struct_ptr);
size_t vk_size_vkdisplayplanecapabilitieskhr(const VkDisplayPlaneCapabilitiesKHR* struct_ptr);
size_t vk_size_vkdisplayplanepropertieskhr(const VkDisplayPlanePropertiesKHR* struct_ptr);
size_t vk_size_vkdisplaysurfacecreateinfokhr(const VkDisplaySurfaceCreateInfoKHR* struct_ptr);
size_t vk_size_vkdisplaypresentinfokhr(const VkDisplayPresentInfoKHR* struct_ptr);
#ifdef VK_USE_PLATFORM_XLIB_KHR
size_t vk_size_vkxlibsurfacecreateinfokhr(const VkXlibSurfaceCreateInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
size_t vk_size_vkxcbsurfacecreateinfokhr(const VkXcbSurfaceCreateInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
size_t vk_size_vkwaylandsurfacecreateinfokhr(const VkWaylandSurfaceCreateInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_MIR_KHR
size_t vk_size_vkmirsurfacecreateinfokhr(const VkMirSurfaceCreateInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_MIR_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
size_t vk_size_vkandroidsurfacecreateinfokhr(const VkAndroidSurfaceCreateInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkwin32surfacecreateinfokhr(const VkWin32SurfaceCreateInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkphysicaldevicefeatures2khr(const VkPhysicalDeviceFeatures2KHR* struct_ptr);
size_t vk_size_vkphysicaldeviceproperties2khr(const VkPhysicalDeviceProperties2KHR* struct_ptr);
size_t vk_size_vkformatproperties2khr(const VkFormatProperties2KHR* struct_ptr);
size_t vk_size_vkimageformatproperties2khr(const VkImageFormatProperties2KHR* struct_ptr);
size_t vk_size_vkphysicaldeviceimageformatinfo2khr(const VkPhysicalDeviceImageFormatInfo2KHR* struct_ptr);
size_t vk_size_vkqueuefamilyproperties2khr(const VkQueueFamilyProperties2KHR* struct_ptr);
size_t vk_size_vkphysicaldevicememoryproperties2khr(const VkPhysicalDeviceMemoryProperties2KHR* struct_ptr);
size_t vk_size_vksparseimageformatproperties2khr(const VkSparseImageFormatProperties2KHR* struct_ptr);
size_t vk_size_vkphysicaldevicesparseimageformatinfo2khr(const VkPhysicalDeviceSparseImageFormatInfo2KHR* struct_ptr);
size_t vk_size_vkexternalmemorypropertieskhr(const VkExternalMemoryPropertiesKHR* struct_ptr);
size_t vk_size_vkphysicaldeviceexternalimageformatinfokhr(const VkPhysicalDeviceExternalImageFormatInfoKHR* struct_ptr);
size_t vk_size_vkexternalimageformatpropertieskhr(const VkExternalImageFormatPropertiesKHR* struct_ptr);
size_t vk_size_vkphysicaldeviceexternalbufferinfokhr(const VkPhysicalDeviceExternalBufferInfoKHR* struct_ptr);
size_t vk_size_vkexternalbufferpropertieskhr(const VkExternalBufferPropertiesKHR* struct_ptr);
size_t vk_size_vkphysicaldeviceidpropertieskhr(const VkPhysicalDeviceIDPropertiesKHR* struct_ptr);
size_t vk_size_vkexternalmemoryimagecreateinfokhr(const VkExternalMemoryImageCreateInfoKHR* struct_ptr);
size_t vk_size_vkexternalmemorybuffercreateinfokhr(const VkExternalMemoryBufferCreateInfoKHR* struct_ptr);
size_t vk_size_vkexportmemoryallocateinfokhr(const VkExportMemoryAllocateInfoKHR* struct_ptr);
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportmemorywin32handleinfokhr(const VkImportMemoryWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkexportmemorywin32handleinfokhr(const VkExportMemoryWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkmemorywin32handlepropertieskhr(const VkMemoryWin32HandlePropertiesKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkmemorygetwin32handleinfokhr(const VkMemoryGetWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportmemoryfdinfokhr(const VkImportMemoryFdInfoKHR* struct_ptr);
size_t vk_size_vkmemoryfdpropertieskhr(const VkMemoryFdPropertiesKHR* struct_ptr);
size_t vk_size_vkmemorygetfdinfokhr(const VkMemoryGetFdInfoKHR* struct_ptr);
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkwin32keyedmutexacquirereleaseinfokhr(const VkWin32KeyedMutexAcquireReleaseInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkphysicaldeviceexternalsemaphoreinfokhr(const VkPhysicalDeviceExternalSemaphoreInfoKHR* struct_ptr);
size_t vk_size_vkexternalsemaphorepropertieskhr(const VkExternalSemaphorePropertiesKHR* struct_ptr);
size_t vk_size_vkexportsemaphorecreateinfokhr(const VkExportSemaphoreCreateInfoKHR* struct_ptr);
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportsemaphorewin32handleinfokhr(const VkImportSemaphoreWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkexportsemaphorewin32handleinfokhr(const VkExportSemaphoreWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkd3d12fencesubmitinfokhr(const VkD3D12FenceSubmitInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vksemaphoregetwin32handleinfokhr(const VkSemaphoreGetWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportsemaphorefdinfokhr(const VkImportSemaphoreFdInfoKHR* struct_ptr);
size_t vk_size_vksemaphoregetfdinfokhr(const VkSemaphoreGetFdInfoKHR* struct_ptr);
size_t vk_size_vkphysicaldevicepushdescriptorpropertieskhr(const VkPhysicalDevicePushDescriptorPropertiesKHR* struct_ptr);
size_t vk_size_vkphysicaldevice16bitstoragefeatureskhr(const VkPhysicalDevice16BitStorageFeaturesKHR* struct_ptr);
size_t vk_size_vkrectlayerkhr(const VkRectLayerKHR* struct_ptr);
size_t vk_size_vkpresentregionkhr(const VkPresentRegionKHR* struct_ptr);
size_t vk_size_vkpresentregionskhr(const VkPresentRegionsKHR* struct_ptr);
size_t vk_size_vkdescriptorupdatetemplateentrykhr(const VkDescriptorUpdateTemplateEntryKHR* struct_ptr);
size_t vk_size_vkdescriptorupdatetemplatecreateinfokhr(const VkDescriptorUpdateTemplateCreateInfoKHR* struct_ptr);
size_t vk_size_vksharedpresentsurfacecapabilitieskhr(const VkSharedPresentSurfaceCapabilitiesKHR* struct_ptr);
size_t vk_size_vkphysicaldeviceexternalfenceinfokhr(const VkPhysicalDeviceExternalFenceInfoKHR* struct_ptr);
size_t vk_size_vkexternalfencepropertieskhr(const VkExternalFencePropertiesKHR* struct_ptr);
size_t vk_size_vkexportfencecreateinfokhr(const VkExportFenceCreateInfoKHR* struct_ptr);
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportfencewin32handleinfokhr(const VkImportFenceWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkexportfencewin32handleinfokhr(const VkExportFenceWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkfencegetwin32handleinfokhr(const VkFenceGetWin32HandleInfoKHR* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportfencefdinfokhr(const VkImportFenceFdInfoKHR* struct_ptr);
size_t vk_size_vkfencegetfdinfokhr(const VkFenceGetFdInfoKHR* struct_ptr);
size_t vk_size_vkphysicaldevicepointclippingpropertieskhr(const VkPhysicalDevicePointClippingPropertiesKHR* struct_ptr);
size_t vk_size_vkinputattachmentaspectreferencekhr(const VkInputAttachmentAspectReferenceKHR* struct_ptr);
size_t vk_size_vkrenderpassinputattachmentaspectcreateinfokhr(const VkRenderPassInputAttachmentAspectCreateInfoKHR* struct_ptr);
size_t vk_size_vkimageviewusagecreateinfokhr(const VkImageViewUsageCreateInfoKHR* struct_ptr);
size_t vk_size_vkpipelinetessellationdomainoriginstatecreateinfokhr(const VkPipelineTessellationDomainOriginStateCreateInfoKHR* struct_ptr);
size_t vk_size_vkphysicaldevicesurfaceinfo2khr(const VkPhysicalDeviceSurfaceInfo2KHR* struct_ptr);
size_t vk_size_vksurfacecapabilities2khr(const VkSurfaceCapabilities2KHR* struct_ptr);
size_t vk_size_vksurfaceformat2khr(const VkSurfaceFormat2KHR* struct_ptr);
size_t vk_size_vkphysicaldevicevariablepointerfeatureskhr(const VkPhysicalDeviceVariablePointerFeaturesKHR* struct_ptr);
size_t vk_size_vkmemorydedicatedrequirementskhr(const VkMemoryDedicatedRequirementsKHR* struct_ptr);
size_t vk_size_vkmemorydedicatedallocateinfokhr(const VkMemoryDedicatedAllocateInfoKHR* struct_ptr);
size_t vk_size_vkbuffermemoryrequirementsinfo2khr(const VkBufferMemoryRequirementsInfo2KHR* struct_ptr);
size_t vk_size_vkimagememoryrequirementsinfo2khr(const VkImageMemoryRequirementsInfo2KHR* struct_ptr);
size_t vk_size_vkimagesparsememoryrequirementsinfo2khr(const VkImageSparseMemoryRequirementsInfo2KHR* struct_ptr);
size_t vk_size_vkmemoryrequirements2khr(const VkMemoryRequirements2KHR* struct_ptr);
size_t vk_size_vksparseimagememoryrequirements2khr(const VkSparseImageMemoryRequirements2KHR* struct_ptr);
size_t vk_size_vkimageformatlistcreateinfokhr(const VkImageFormatListCreateInfoKHR* struct_ptr);
size_t vk_size_vksamplerycbcrconversioncreateinfokhr(const VkSamplerYcbcrConversionCreateInfoKHR* struct_ptr);
size_t vk_size_vksamplerycbcrconversioninfokhr(const VkSamplerYcbcrConversionInfoKHR* struct_ptr);
size_t vk_size_vkbindimageplanememoryinfokhr(const VkBindImagePlaneMemoryInfoKHR* struct_ptr);
size_t vk_size_vkimageplanememoryrequirementsinfokhr(const VkImagePlaneMemoryRequirementsInfoKHR* struct_ptr);
size_t vk_size_vkphysicaldevicesamplerycbcrconversionfeatureskhr(const VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR* struct_ptr);
size_t vk_size_vksamplerycbcrconversionimageformatpropertieskhr(const VkSamplerYcbcrConversionImageFormatPropertiesKHR* struct_ptr);
size_t vk_size_vkbindbuffermemoryinfokhr(const VkBindBufferMemoryInfoKHR* struct_ptr);
size_t vk_size_vkbindimagememoryinfokhr(const VkBindImageMemoryInfoKHR* struct_ptr);
size_t vk_size_vkdebugreportcallbackcreateinfoext(const VkDebugReportCallbackCreateInfoEXT* struct_ptr);
size_t vk_size_vkpipelinerasterizationstaterasterizationorderamd(const VkPipelineRasterizationStateRasterizationOrderAMD* struct_ptr);
size_t vk_size_vkdebugmarkerobjectnameinfoext(const VkDebugMarkerObjectNameInfoEXT* struct_ptr);
size_t vk_size_vkdebugmarkerobjecttaginfoext(const VkDebugMarkerObjectTagInfoEXT* struct_ptr);
size_t vk_size_vkdebugmarkermarkerinfoext(const VkDebugMarkerMarkerInfoEXT* struct_ptr);
size_t vk_size_vkdedicatedallocationimagecreateinfonv(const VkDedicatedAllocationImageCreateInfoNV* struct_ptr);
size_t vk_size_vkdedicatedallocationbuffercreateinfonv(const VkDedicatedAllocationBufferCreateInfoNV* struct_ptr);
size_t vk_size_vkdedicatedallocationmemoryallocateinfonv(const VkDedicatedAllocationMemoryAllocateInfoNV* struct_ptr);
size_t vk_size_vktexturelodgatherformatpropertiesamd(const VkTextureLODGatherFormatPropertiesAMD* struct_ptr);
size_t vk_size_vkshaderresourceusageamd(const VkShaderResourceUsageAMD* struct_ptr);
size_t vk_size_vkshaderstatisticsinfoamd(const VkShaderStatisticsInfoAMD* struct_ptr);
size_t vk_size_vkrenderpassmultiviewcreateinfokhx(const VkRenderPassMultiviewCreateInfoKHX* struct_ptr);
size_t vk_size_vkphysicaldevicemultiviewfeatureskhx(const VkPhysicalDeviceMultiviewFeaturesKHX* struct_ptr);
size_t vk_size_vkphysicaldevicemultiviewpropertieskhx(const VkPhysicalDeviceMultiviewPropertiesKHX* struct_ptr);
size_t vk_size_vkexternalimageformatpropertiesnv(const VkExternalImageFormatPropertiesNV* struct_ptr);
size_t vk_size_vkexternalmemoryimagecreateinfonv(const VkExternalMemoryImageCreateInfoNV* struct_ptr);
size_t vk_size_vkexportmemoryallocateinfonv(const VkExportMemoryAllocateInfoNV* struct_ptr);
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkimportmemorywin32handleinfonv(const VkImportMemoryWin32HandleInfoNV* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkexportmemorywin32handleinfonv(const VkExportMemoryWin32HandleInfoNV* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkwin32keyedmutexacquirereleaseinfonv(const VkWin32KeyedMutexAcquireReleaseInfoNV* struct_ptr);
#endif // VK_USE_PLATFORM_WIN32_KHR
size_t vk_size_vkmemoryallocateflagsinfokhx(const VkMemoryAllocateFlagsInfoKHX* struct_ptr);
size_t vk_size_vkdevicegrouprenderpassbegininfokhx(const VkDeviceGroupRenderPassBeginInfoKHX* struct_ptr);
size_t vk_size_vkdevicegroupcommandbufferbegininfokhx(const VkDeviceGroupCommandBufferBeginInfoKHX* struct_ptr);
size_t vk_size_vkdevicegroupsubmitinfokhx(const VkDeviceGroupSubmitInfoKHX* struct_ptr);
size_t vk_size_vkdevicegroupbindsparseinfokhx(const VkDeviceGroupBindSparseInfoKHX* struct_ptr);
size_t vk_size_vkbindbuffermemorydevicegroupinfokhx(const VkBindBufferMemoryDeviceGroupInfoKHX* struct_ptr);
size_t vk_size_vkbindimagememorydevicegroupinfokhx(const VkBindImageMemoryDeviceGroupInfoKHX* struct_ptr);
size_t vk_size_vkdevicegrouppresentcapabilitieskhx(const VkDeviceGroupPresentCapabilitiesKHX* struct_ptr);
size_t vk_size_vkimageswapchaincreateinfokhx(const VkImageSwapchainCreateInfoKHX* struct_ptr);
size_t vk_size_vkbindimagememoryswapchaininfokhx(const VkBindImageMemorySwapchainInfoKHX* struct_ptr);
size_t vk_size_vkacquirenextimageinfokhx(const VkAcquireNextImageInfoKHX* struct_ptr);
size_t vk_size_vkdevicegrouppresentinfokhx(const VkDeviceGroupPresentInfoKHX* struct_ptr);
size_t vk_size_vkdevicegroupswapchaincreateinfokhx(const VkDeviceGroupSwapchainCreateInfoKHX* struct_ptr);
size_t vk_size_vkvalidationflagsext(const VkValidationFlagsEXT* struct_ptr);
#ifdef VK_USE_PLATFORM_VI_NN
size_t vk_size_vkvisurfacecreateinfonn(const VkViSurfaceCreateInfoNN* struct_ptr);
#endif // VK_USE_PLATFORM_VI_NN
size_t vk_size_vkphysicaldevicegrouppropertieskhx(const VkPhysicalDeviceGroupPropertiesKHX* struct_ptr);
size_t vk_size_vkdevicegroupdevicecreateinfokhx(const VkDeviceGroupDeviceCreateInfoKHX* struct_ptr);
size_t vk_size_vkdevicegeneratedcommandsfeaturesnvx(const VkDeviceGeneratedCommandsFeaturesNVX* struct_ptr);
size_t vk_size_vkdevicegeneratedcommandslimitsnvx(const VkDeviceGeneratedCommandsLimitsNVX* struct_ptr);
size_t vk_size_vkindirectcommandstokennvx(const VkIndirectCommandsTokenNVX* struct_ptr);
size_t vk_size_vkindirectcommandslayouttokennvx(const VkIndirectCommandsLayoutTokenNVX* struct_ptr);
size_t vk_size_vkindirectcommandslayoutcreateinfonvx(const VkIndirectCommandsLayoutCreateInfoNVX* struct_ptr);
size_t vk_size_vkcmdprocesscommandsinfonvx(const VkCmdProcessCommandsInfoNVX* struct_ptr);
size_t vk_size_vkcmdreservespaceforcommandsinfonvx(const VkCmdReserveSpaceForCommandsInfoNVX* struct_ptr);
size_t vk_size_vkobjecttablecreateinfonvx(const VkObjectTableCreateInfoNVX* struct_ptr);
size_t vk_size_vkobjecttableentrynvx(const VkObjectTableEntryNVX* struct_ptr);
size_t vk_size_vkobjecttablepipelineentrynvx(const VkObjectTablePipelineEntryNVX* struct_ptr);
size_t vk_size_vkobjecttabledescriptorsetentrynvx(const VkObjectTableDescriptorSetEntryNVX* struct_ptr);
size_t vk_size_vkobjecttablevertexbufferentrynvx(const VkObjectTableVertexBufferEntryNVX* struct_ptr);
size_t vk_size_vkobjecttableindexbufferentrynvx(const VkObjectTableIndexBufferEntryNVX* struct_ptr);
size_t vk_size_vkobjecttablepushconstantentrynvx(const VkObjectTablePushConstantEntryNVX* struct_ptr);
size_t vk_size_vkviewportwscalingnv(const VkViewportWScalingNV* struct_ptr);
size_t vk_size_vkpipelineviewportwscalingstatecreateinfonv(const VkPipelineViewportWScalingStateCreateInfoNV* struct_ptr);
size_t vk_size_vksurfacecapabilities2ext(const VkSurfaceCapabilities2EXT* struct_ptr);
size_t vk_size_vkdisplaypowerinfoext(const VkDisplayPowerInfoEXT* struct_ptr);
size_t vk_size_vkdeviceeventinfoext(const VkDeviceEventInfoEXT* struct_ptr);
size_t vk_size_vkdisplayeventinfoext(const VkDisplayEventInfoEXT* struct_ptr);
size_t vk_size_vkswapchaincountercreateinfoext(const VkSwapchainCounterCreateInfoEXT* struct_ptr);
size_t vk_size_vkrefreshcycledurationgoogle(const VkRefreshCycleDurationGOOGLE* struct_ptr);
size_t vk_size_vkpastpresentationtiminggoogle(const VkPastPresentationTimingGOOGLE* struct_ptr);
size_t vk_size_vkpresenttimegoogle(const VkPresentTimeGOOGLE* struct_ptr);
size_t vk_size_vkpresenttimesinfogoogle(const VkPresentTimesInfoGOOGLE* struct_ptr);
size_t vk_size_vkphysicaldevicemultiviewperviewattributespropertiesnvx(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* struct_ptr);
size_t vk_size_vkviewportswizzlenv(const VkViewportSwizzleNV* struct_ptr);
size_t vk_size_vkpipelineviewportswizzlestatecreateinfonv(const VkPipelineViewportSwizzleStateCreateInfoNV* struct_ptr);
size_t vk_size_vkphysicaldevicediscardrectanglepropertiesext(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* struct_ptr);
size_t vk_size_vkpipelinediscardrectanglestatecreateinfoext(const VkPipelineDiscardRectangleStateCreateInfoEXT* struct_ptr);
size_t vk_size_vkphysicaldeviceconservativerasterizationpropertiesext(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* struct_ptr);
size_t vk_size_vkpipelinerasterizationconservativestatecreateinfoext(const VkPipelineRasterizationConservativeStateCreateInfoEXT* struct_ptr);
size_t vk_size_vkxycolorext(const VkXYColorEXT* struct_ptr);
size_t vk_size_vkhdrmetadataext(const VkHdrMetadataEXT* struct_ptr);
#ifdef VK_USE_PLATFORM_IOS_MVK
size_t vk_size_vkiossurfacecreateinfomvk(const VkIOSSurfaceCreateInfoMVK* struct_ptr);
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
size_t vk_size_vkmacossurfacecreateinfomvk(const VkMacOSSurfaceCreateInfoMVK* struct_ptr);
#endif // VK_USE_PLATFORM_MACOS_MVK
size_t vk_size_vksamplerreductionmodecreateinfoext(const VkSamplerReductionModeCreateInfoEXT* struct_ptr);
size_t vk_size_vkphysicaldevicesamplerfilterminmaxpropertiesext(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* struct_ptr);
size_t vk_size_vksamplelocationext(const VkSampleLocationEXT* struct_ptr);
size_t vk_size_vksamplelocationsinfoext(const VkSampleLocationsInfoEXT* struct_ptr);
size_t vk_size_vkattachmentsamplelocationsext(const VkAttachmentSampleLocationsEXT* struct_ptr);
size_t vk_size_vksubpasssamplelocationsext(const VkSubpassSampleLocationsEXT* struct_ptr);
size_t vk_size_vkrenderpasssamplelocationsbegininfoext(const VkRenderPassSampleLocationsBeginInfoEXT* struct_ptr);
size_t vk_size_vkpipelinesamplelocationsstatecreateinfoext(const VkPipelineSampleLocationsStateCreateInfoEXT* struct_ptr);
size_t vk_size_vkphysicaldevicesamplelocationspropertiesext(const VkPhysicalDeviceSampleLocationsPropertiesEXT* struct_ptr);
size_t vk_size_vkmultisamplepropertiesext(const VkMultisamplePropertiesEXT* struct_ptr);
size_t vk_size_vkphysicaldeviceblendoperationadvancedfeaturesext(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* struct_ptr);
size_t vk_size_vkphysicaldeviceblendoperationadvancedpropertiesext(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* struct_ptr);
size_t vk_size_vkpipelinecolorblendadvancedstatecreateinfoext(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* struct_ptr);
size_t vk_size_vkpipelinecoveragetocolorstatecreateinfonv(const VkPipelineCoverageToColorStateCreateInfoNV* struct_ptr);
size_t vk_size_vkpipelinecoveragemodulationstatecreateinfonv(const VkPipelineCoverageModulationStateCreateInfoNV* struct_ptr);
size_t vk_size_vkvalidationcachecreateinfoext(const VkValidationCacheCreateInfoEXT* struct_ptr);
size_t vk_size_vkshadermodulevalidationcachecreateinfoext(const VkShaderModuleValidationCacheCreateInfoEXT* struct_ptr);
size_t vk_size_vkdevicequeueglobalprioritycreateinfoext(const VkDeviceQueueGlobalPriorityCreateInfoEXT* struct_ptr);
size_t vk_size_vkimportmemoryhostpointerinfoext(const VkImportMemoryHostPointerInfoEXT* struct_ptr);
size_t vk_size_vkmemoryhostpointerpropertiesext(const VkMemoryHostPointerPropertiesEXT* struct_ptr);
size_t vk_size_vkphysicaldeviceexternalmemoryhostpropertiesext(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* struct_ptr);
#ifdef __cplusplus
}
#endif
