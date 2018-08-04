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


#ifndef VK_EXTENSION_HELPER_H_
#define VK_EXTENSION_HELPER_H_
#include <vulkan/vulkan.h>
#include <string.h>
#include <utility>


struct InstanceExtensions { 
    bool vk_khr_xlib_surface{false};
    bool vk_khr_get_physical_device_properties_2{false};
    bool vk_khr_external_semaphore_capabilities{false};
    bool vk_khr_external_memory_capabilities{false};
    bool vk_nv_external_memory_capabilities{false};
    bool vk_khr_wayland_surface{false};
    bool vk_mvk_macos_surface{false};
    bool vk_khr_external_fence_capabilities{false};
    bool vk_khx_device_group_creation{false};
    bool vk_khr_display{false};
    bool vk_ext_validation_flags{false};
    bool vk_nn_vi_surface{false};
    bool vk_khr_win32_surface{false};
    bool vk_khr_xcb_surface{false};
    bool vk_khr_mir_surface{false};
    bool vk_mvk_ios_surface{false};
    bool vk_ext_swapchain_color_space{false};
    bool vk_ext_display_surface_counter{false};
    bool vk_khr_get_surface_capabilities_2{false};
    bool vk_ext_debug_report{false};
    bool vk_khr_android_surface{false};
    bool vk_khr_surface{false};
    bool vk_ext_acquire_xlib_display{false};
    bool vk_ext_direct_mode_display{false};

    void InitFromInstanceCreateInfo(const VkInstanceCreateInfo *pCreateInfo) {

        static const std::pair<char const *, bool InstanceExtensions::*> known_extensions[]{
#ifdef VK_USE_PLATFORM_XLIB_KHR
            {VK_KHR_XLIB_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_khr_xlib_surface},
#endif
            {VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME, &InstanceExtensions::vk_khr_get_physical_device_properties_2},
            {VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME, &InstanceExtensions::vk_khr_external_semaphore_capabilities},
            {VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME, &InstanceExtensions::vk_khr_external_memory_capabilities},
            {VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME, &InstanceExtensions::vk_nv_external_memory_capabilities},
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
            {VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_khr_wayland_surface},
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
            {VK_MVK_MACOS_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_mvk_macos_surface},
#endif
            {VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME, &InstanceExtensions::vk_khr_external_fence_capabilities},
            {VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME, &InstanceExtensions::vk_khx_device_group_creation},
            {VK_KHR_DISPLAY_EXTENSION_NAME, &InstanceExtensions::vk_khr_display},
            {VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME, &InstanceExtensions::vk_ext_validation_flags},
#ifdef VK_USE_PLATFORM_VI_NN
            {VK_NN_VI_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_nn_vi_surface},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
            {VK_KHR_WIN32_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_khr_win32_surface},
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
            {VK_KHR_XCB_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_khr_xcb_surface},
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
            {VK_KHR_MIR_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_khr_mir_surface},
#endif
#ifdef VK_USE_PLATFORM_IOS_MVK
            {VK_MVK_IOS_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_mvk_ios_surface},
#endif
            {VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME, &InstanceExtensions::vk_ext_swapchain_color_space},
            {VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME, &InstanceExtensions::vk_ext_display_surface_counter},
            {VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME, &InstanceExtensions::vk_khr_get_surface_capabilities_2},
            {VK_EXT_DEBUG_REPORT_EXTENSION_NAME, &InstanceExtensions::vk_ext_debug_report},
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            {VK_KHR_ANDROID_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_khr_android_surface},
#endif
            {VK_KHR_SURFACE_EXTENSION_NAME, &InstanceExtensions::vk_khr_surface},
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
            {VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME, &InstanceExtensions::vk_ext_acquire_xlib_display},
#endif
            {VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME, &InstanceExtensions::vk_ext_direct_mode_display},
        };

        // Initialize struct data

        for (uint32_t i = 0; i < pCreateInfo->enabledExtensionCount; i++) {
            for (auto ext : known_extensions) {
                if (!strcmp(ext.first, pCreateInfo->ppEnabledExtensionNames[i])) {
                    this->*(ext.second) = true;
                    break;
                }
            }
        }
    }
};

static const char * const kInstanceExtensionNames = 
#ifdef VK_USE_PLATFORM_XLIB_KHR
    VK_KHR_XLIB_SURFACE_EXTENSION_NAME
#endif
    VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME
    VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME
    VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME
    VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
    VK_MVK_MACOS_SURFACE_EXTENSION_NAME
#endif
    VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME
    VK_KHX_DEVICE_GROUP_CREATION_EXTENSION_NAME
    VK_KHR_DISPLAY_EXTENSION_NAME
    VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_VI_NN
    VK_NN_VI_SURFACE_EXTENSION_NAME
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_WIN32_SURFACE_EXTENSION_NAME
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    VK_KHR_XCB_SURFACE_EXTENSION_NAME
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
    VK_KHR_MIR_SURFACE_EXTENSION_NAME
#endif
#ifdef VK_USE_PLATFORM_IOS_MVK
    VK_MVK_IOS_SURFACE_EXTENSION_NAME
#endif
    VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME
    VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME
    VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME
    VK_EXT_DEBUG_REPORT_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    VK_KHR_ANDROID_SURFACE_EXTENSION_NAME
#endif
    VK_KHR_SURFACE_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME
#endif
    VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME
;

struct DeviceExtensions : public InstanceExtensions { 
    bool vk_khr_shared_presentable_image{false};
    bool vk_ext_post_depth_coverage{false};
    bool vk_ext_external_memory_host{false};
    bool vk_img_format_pvrtc{false};
    bool vk_ext_depth_range_unrestricted{false};
    bool vk_nv_fill_rectangle{false};
    bool vk_ext_debug_marker{false};
    bool vk_khx_device_group{false};
    bool vk_nvx_device_generated_commands{false};
    bool vk_nv_viewport_array2{false};
    bool vk_ext_blend_operation_advanced{false};
    bool vk_google_display_timing{false};
    bool vk_khr_incremental_present{false};
    bool vk_khr_16bit_storage{false};
    bool vk_khr_image_format_list{false};
    bool vk_khr_maintenance1{false};
    bool vk_ext_discard_rectangles{false};
    bool vk_khr_bind_memory_2{false};
    bool vk_ext_shader_subgroup_ballot{false};
    bool vk_khr_external_memory{false};
    bool vk_amd_shader_trinary_minmax{false};
    bool vk_khr_external_fence{false};
    bool vk_nv_external_memory{false};
    bool vk_amd_draw_indirect_count{false};
    bool vk_ext_shader_subgroup_vote{false};
    bool vk_ext_external_memory_dma_buf{false};
    bool vk_khr_sampler_ycbcr_conversion{false};
    bool vk_nv_win32_keyed_mutex{false};
    bool vk_ext_queue_family_foreign{false};
    bool vk_ext_display_control{false};
    bool vk_khr_maintenance2{false};
    bool vk_ext_hdr_metadata{false};
    bool vk_img_filter_cubic{false};
    bool vk_khr_relaxed_block_layout{false};
    bool vk_nv_dedicated_allocation{false};
    bool vk_amd_texture_gather_bias_lod{false};
    bool vk_amd_shader_explicit_vertex_parameter{false};
    bool vk_nv_framebuffer_mixed_samples{false};
    bool vk_amd_shader_info{false};
    bool vk_khr_variable_pointers{false};
    bool vk_khr_external_memory_fd{false};
    bool vk_khr_shader_draw_parameters{false};
    bool vk_ext_validation_cache{false};
    bool vk_khr_external_semaphore{false};
    bool vk_ext_sample_locations{false};
    bool vk_nv_clip_space_w_scaling{false};
    bool vk_khr_external_memory_win32{false};
    bool vk_ext_global_priority{false};
    bool vk_khr_external_semaphore_win32{false};
    bool vk_khr_win32_keyed_mutex{false};
    bool vk_ext_shader_viewport_index_layer{false};
    bool vk_nvx_multiview_per_view_attributes{false};
    bool vk_amd_gcn_shader{false};
    bool vk_amd_buffer_marker{false};
    bool vk_nv_geometry_shader_passthrough{false};
    bool vk_khr_external_fence_fd{false};
    bool vk_nv_sample_mask_override_coverage{false};
    bool vk_khr_get_memory_requirements_2{false};
    bool vk_khr_external_semaphore_fd{false};
    bool vk_khr_sampler_mirror_clamp_to_edge{false};
    bool vk_amd_shader_fragment_mask{false};
    bool vk_amd_rasterization_order{false};
    bool vk_amd_shader_image_load_store_lod{false};
    bool vk_khr_external_fence_win32{false};
    bool vk_khr_display_swapchain{false};
    bool vk_amd_gpu_shader_half_float{false};
    bool vk_nv_external_memory_win32{false};
    bool vk_amd_negative_viewport_height{false};
    bool vk_nv_glsl_shader{false};
    bool vk_khx_multiview{false};
    bool vk_ext_shader_stencil_export{false};
    bool vk_khr_descriptor_update_template{false};
    bool vk_amd_gpu_shader_int16{false};
    bool vk_nv_fragment_coverage_to_color{false};
    bool vk_khr_storage_buffer_storage_class{false};
    bool vk_ext_sampler_filter_minmax{false};
    bool vk_ext_conservative_rasterization{false};
    bool vk_khr_push_descriptor{false};
    bool vk_khr_swapchain{false};
    bool vk_khr_dedicated_allocation{false};
    bool vk_amd_mixed_attachment_samples{false};
    bool vk_amd_shader_ballot{false};
    bool vk_nv_viewport_swizzle{false};

    void InitFromDeviceCreateInfo(const InstanceExtensions *instance_extensions, const VkDeviceCreateInfo *pCreateInfo) {

        static const std::pair<char const *, bool DeviceExtensions::*> known_extensions[]{
            {VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME, &DeviceExtensions::vk_khr_shared_presentable_image},
            {VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME, &DeviceExtensions::vk_ext_post_depth_coverage},
            {VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME, &DeviceExtensions::vk_ext_external_memory_host},
            {VK_IMG_FORMAT_PVRTC_EXTENSION_NAME, &DeviceExtensions::vk_img_format_pvrtc},
            {VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME, &DeviceExtensions::vk_ext_depth_range_unrestricted},
            {VK_NV_FILL_RECTANGLE_EXTENSION_NAME, &DeviceExtensions::vk_nv_fill_rectangle},
            {VK_EXT_DEBUG_MARKER_EXTENSION_NAME, &DeviceExtensions::vk_ext_debug_marker},
            {VK_KHX_DEVICE_GROUP_EXTENSION_NAME, &DeviceExtensions::vk_khx_device_group},
            {VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME, &DeviceExtensions::vk_nvx_device_generated_commands},
            {VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME, &DeviceExtensions::vk_nv_viewport_array2},
            {VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME, &DeviceExtensions::vk_ext_blend_operation_advanced},
            {VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME, &DeviceExtensions::vk_google_display_timing},
            {VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME, &DeviceExtensions::vk_khr_incremental_present},
            {VK_KHR_16BIT_STORAGE_EXTENSION_NAME, &DeviceExtensions::vk_khr_16bit_storage},
            {VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME, &DeviceExtensions::vk_khr_image_format_list},
            {VK_KHR_MAINTENANCE1_EXTENSION_NAME, &DeviceExtensions::vk_khr_maintenance1},
            {VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME, &DeviceExtensions::vk_ext_discard_rectangles},
            {VK_KHR_BIND_MEMORY_2_EXTENSION_NAME, &DeviceExtensions::vk_khr_bind_memory_2},
            {VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME, &DeviceExtensions::vk_ext_shader_subgroup_ballot},
            {VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_memory},
            {VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME, &DeviceExtensions::vk_amd_shader_trinary_minmax},
            {VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_fence},
            {VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME, &DeviceExtensions::vk_nv_external_memory},
            {VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME, &DeviceExtensions::vk_amd_draw_indirect_count},
            {VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME, &DeviceExtensions::vk_ext_shader_subgroup_vote},
            {VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME, &DeviceExtensions::vk_ext_external_memory_dma_buf},
            {VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME, &DeviceExtensions::vk_khr_sampler_ycbcr_conversion},
#ifdef VK_USE_PLATFORM_WIN32_KHR
            {VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME, &DeviceExtensions::vk_nv_win32_keyed_mutex},
#endif
            {VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME, &DeviceExtensions::vk_ext_queue_family_foreign},
            {VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME, &DeviceExtensions::vk_ext_display_control},
            {VK_KHR_MAINTENANCE2_EXTENSION_NAME, &DeviceExtensions::vk_khr_maintenance2},
            {VK_EXT_HDR_METADATA_EXTENSION_NAME, &DeviceExtensions::vk_ext_hdr_metadata},
            {VK_IMG_FILTER_CUBIC_EXTENSION_NAME, &DeviceExtensions::vk_img_filter_cubic},
            {VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME, &DeviceExtensions::vk_khr_relaxed_block_layout},
            {VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME, &DeviceExtensions::vk_nv_dedicated_allocation},
            {VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME, &DeviceExtensions::vk_amd_texture_gather_bias_lod},
            {VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME, &DeviceExtensions::vk_amd_shader_explicit_vertex_parameter},
            {VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME, &DeviceExtensions::vk_nv_framebuffer_mixed_samples},
            {VK_AMD_SHADER_INFO_EXTENSION_NAME, &DeviceExtensions::vk_amd_shader_info},
            {VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME, &DeviceExtensions::vk_khr_variable_pointers},
            {VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_memory_fd},
            {VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME, &DeviceExtensions::vk_khr_shader_draw_parameters},
            {VK_EXT_VALIDATION_CACHE_EXTENSION_NAME, &DeviceExtensions::vk_ext_validation_cache},
            {VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_semaphore},
            {VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME, &DeviceExtensions::vk_ext_sample_locations},
            {VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME, &DeviceExtensions::vk_nv_clip_space_w_scaling},
#ifdef VK_USE_PLATFORM_WIN32_KHR
            {VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_memory_win32},
#endif
            {VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME, &DeviceExtensions::vk_ext_global_priority},
#ifdef VK_USE_PLATFORM_WIN32_KHR
            {VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_semaphore_win32},
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
            {VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME, &DeviceExtensions::vk_khr_win32_keyed_mutex},
#endif
            {VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME, &DeviceExtensions::vk_ext_shader_viewport_index_layer},
            {VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME, &DeviceExtensions::vk_nvx_multiview_per_view_attributes},
            {VK_AMD_GCN_SHADER_EXTENSION_NAME, &DeviceExtensions::vk_amd_gcn_shader},
            {VK_AMD_BUFFER_MARKER_EXTENSION_NAME, &DeviceExtensions::vk_amd_buffer_marker},
            {VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME, &DeviceExtensions::vk_nv_geometry_shader_passthrough},
            {VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_fence_fd},
            {VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME, &DeviceExtensions::vk_nv_sample_mask_override_coverage},
            {VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME, &DeviceExtensions::vk_khr_get_memory_requirements_2},
            {VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_semaphore_fd},
            {VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME, &DeviceExtensions::vk_khr_sampler_mirror_clamp_to_edge},
            {VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME, &DeviceExtensions::vk_amd_shader_fragment_mask},
            {VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME, &DeviceExtensions::vk_amd_rasterization_order},
            {VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME, &DeviceExtensions::vk_amd_shader_image_load_store_lod},
#ifdef VK_USE_PLATFORM_WIN32_KHR
            {VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME, &DeviceExtensions::vk_khr_external_fence_win32},
#endif
            {VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME, &DeviceExtensions::vk_khr_display_swapchain},
            {VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME, &DeviceExtensions::vk_amd_gpu_shader_half_float},
#ifdef VK_USE_PLATFORM_WIN32_KHR
            {VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME, &DeviceExtensions::vk_nv_external_memory_win32},
#endif
            {VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME, &DeviceExtensions::vk_amd_negative_viewport_height},
            {VK_NV_GLSL_SHADER_EXTENSION_NAME, &DeviceExtensions::vk_nv_glsl_shader},
            {VK_KHX_MULTIVIEW_EXTENSION_NAME, &DeviceExtensions::vk_khx_multiview},
            {VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME, &DeviceExtensions::vk_ext_shader_stencil_export},
            {VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME, &DeviceExtensions::vk_khr_descriptor_update_template},
            {VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME, &DeviceExtensions::vk_amd_gpu_shader_int16},
            {VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME, &DeviceExtensions::vk_nv_fragment_coverage_to_color},
            {VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME, &DeviceExtensions::vk_khr_storage_buffer_storage_class},
            {VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME, &DeviceExtensions::vk_ext_sampler_filter_minmax},
            {VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME, &DeviceExtensions::vk_ext_conservative_rasterization},
            {VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME, &DeviceExtensions::vk_khr_push_descriptor},
            {VK_KHR_SWAPCHAIN_EXTENSION_NAME, &DeviceExtensions::vk_khr_swapchain},
            {VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME, &DeviceExtensions::vk_khr_dedicated_allocation},
            {VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME, &DeviceExtensions::vk_amd_mixed_attachment_samples},
            {VK_AMD_SHADER_BALLOT_EXTENSION_NAME, &DeviceExtensions::vk_amd_shader_ballot},
            {VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME, &DeviceExtensions::vk_nv_viewport_swizzle},
        };

        // Initialize struct data
        vk_khr_xlib_surface = instance_extensions->vk_khr_xlib_surface;
        vk_khr_get_physical_device_properties_2 = instance_extensions->vk_khr_get_physical_device_properties_2;
        vk_khr_external_semaphore_capabilities = instance_extensions->vk_khr_external_semaphore_capabilities;
        vk_khr_external_memory_capabilities = instance_extensions->vk_khr_external_memory_capabilities;
        vk_nv_external_memory_capabilities = instance_extensions->vk_nv_external_memory_capabilities;
        vk_khr_wayland_surface = instance_extensions->vk_khr_wayland_surface;
        vk_mvk_macos_surface = instance_extensions->vk_mvk_macos_surface;
        vk_khr_external_fence_capabilities = instance_extensions->vk_khr_external_fence_capabilities;
        vk_khx_device_group_creation = instance_extensions->vk_khx_device_group_creation;
        vk_khr_display = instance_extensions->vk_khr_display;
        vk_ext_validation_flags = instance_extensions->vk_ext_validation_flags;
        vk_nn_vi_surface = instance_extensions->vk_nn_vi_surface;
        vk_khr_win32_surface = instance_extensions->vk_khr_win32_surface;
        vk_khr_xcb_surface = instance_extensions->vk_khr_xcb_surface;
        vk_khr_mir_surface = instance_extensions->vk_khr_mir_surface;
        vk_mvk_ios_surface = instance_extensions->vk_mvk_ios_surface;
        vk_ext_swapchain_color_space = instance_extensions->vk_ext_swapchain_color_space;
        vk_ext_display_surface_counter = instance_extensions->vk_ext_display_surface_counter;
        vk_khr_get_surface_capabilities_2 = instance_extensions->vk_khr_get_surface_capabilities_2;
        vk_ext_debug_report = instance_extensions->vk_ext_debug_report;
        vk_khr_android_surface = instance_extensions->vk_khr_android_surface;
        vk_khr_surface = instance_extensions->vk_khr_surface;
        vk_ext_acquire_xlib_display = instance_extensions->vk_ext_acquire_xlib_display;
        vk_ext_direct_mode_display = instance_extensions->vk_ext_direct_mode_display;

        for (uint32_t i = 0; i < pCreateInfo->enabledExtensionCount; i++) {
            for (auto ext : known_extensions) {
                if (!strcmp(ext.first, pCreateInfo->ppEnabledExtensionNames[i])) {
                    this->*(ext.second) = true;
                    break;
                }
            }
        }
    }
};

static const char * const kDeviceExtensionNames = 
    VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME
    VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME
    VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME
    VK_IMG_FORMAT_PVRTC_EXTENSION_NAME
    VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME
    VK_NV_FILL_RECTANGLE_EXTENSION_NAME
    VK_EXT_DEBUG_MARKER_EXTENSION_NAME
    VK_KHX_DEVICE_GROUP_EXTENSION_NAME
    VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME
    VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME
    VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME
    VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME
    VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME
    VK_KHR_16BIT_STORAGE_EXTENSION_NAME
    VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME
    VK_KHR_MAINTENANCE1_EXTENSION_NAME
    VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME
    VK_KHR_BIND_MEMORY_2_EXTENSION_NAME
    VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME
    VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME
    VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME
    VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME
    VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME
    VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME
    VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME
    VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME
    VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME
#endif
    VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME
    VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME
    VK_KHR_MAINTENANCE2_EXTENSION_NAME
    VK_EXT_HDR_METADATA_EXTENSION_NAME
    VK_IMG_FILTER_CUBIC_EXTENSION_NAME
    VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME
    VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME
    VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME
    VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME
    VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME
    VK_AMD_SHADER_INFO_EXTENSION_NAME
    VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME
    VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME
    VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME
    VK_EXT_VALIDATION_CACHE_EXTENSION_NAME
    VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME
    VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME
    VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME
#endif
    VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME
#endif
    VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME
    VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME
    VK_AMD_GCN_SHADER_EXTENSION_NAME
    VK_AMD_BUFFER_MARKER_EXTENSION_NAME
    VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME
    VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME
    VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME
    VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME
    VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME
    VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME
    VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME
    VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME
    VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME
#endif
    VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME
    VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME
#endif
    VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME
    VK_NV_GLSL_SHADER_EXTENSION_NAME
    VK_KHX_MULTIVIEW_EXTENSION_NAME
    VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME
    VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME
    VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME
    VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME
    VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME
    VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME
    VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME
    VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME
    VK_KHR_SWAPCHAIN_EXTENSION_NAME
    VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME
    VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME
    VK_AMD_SHADER_BALLOT_EXTENSION_NAME
    VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME
;


#endif // VK_EXTENSION_HELPER_H_
