/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef KFD_IOCTL_H_INCLUDED
#define KFD_IOCTL_H_INCLUDED
#include <drm/drm.h>
#include <linux/ioctl.h>
#define KFD_IOCTL_MAJOR_VERSION 1
#define KFD_IOCTL_MINOR_VERSION 1
struct kfd_ioctl_get_version_args {
  __u32 major_version;
  __u32 minor_version;
};
#define KFD_IOC_QUEUE_TYPE_COMPUTE 0
#define KFD_IOC_QUEUE_TYPE_SDMA 1
#define KFD_IOC_QUEUE_TYPE_COMPUTE_AQL 2
#define KFD_MAX_QUEUE_PERCENTAGE 100
#define KFD_MAX_QUEUE_PRIORITY 15
struct kfd_ioctl_create_queue_args {
  __u64 ring_base_address;
  __u64 write_pointer_address;
  __u64 read_pointer_address;
  __u64 doorbell_offset;
  __u32 ring_size;
  __u32 gpu_id;
  __u32 queue_type;
  __u32 queue_percentage;
  __u32 queue_priority;
  __u32 queue_id;
  __u64 eop_buffer_address;
  __u64 eop_buffer_size;
  __u64 ctx_save_restore_address;
  __u64 ctx_save_restore_size;
};
struct kfd_ioctl_destroy_queue_args {
  __u32 queue_id;
  __u32 pad;
};
struct kfd_ioctl_update_queue_args {
  __u64 ring_base_address;
  __u32 queue_id;
  __u32 ring_size;
  __u32 queue_percentage;
  __u32 queue_priority;
};
#define KFD_IOC_CACHE_POLICY_COHERENT 0
#define KFD_IOC_CACHE_POLICY_NONCOHERENT 1
struct kfd_ioctl_set_memory_policy_args {
  __u64 alternate_aperture_base;
  __u64 alternate_aperture_size;
  __u32 gpu_id;
  __u32 default_policy;
  __u32 alternate_policy;
  __u32 pad;
};
struct kfd_ioctl_get_clock_counters_args {
  __u64 gpu_clock_counter;
  __u64 cpu_clock_counter;
  __u64 system_clock_counter;
  __u64 system_clock_freq;
  __u32 gpu_id;
  __u32 pad;
};
#define NUM_OF_SUPPORTED_GPUS 7
struct kfd_process_device_apertures {
  __u64 lds_base;
  __u64 lds_limit;
  __u64 scratch_base;
  __u64 scratch_limit;
  __u64 gpuvm_base;
  __u64 gpuvm_limit;
  __u32 gpu_id;
  __u32 pad;
};
struct kfd_ioctl_get_process_apertures_args {
  struct kfd_process_device_apertures process_apertures[NUM_OF_SUPPORTED_GPUS];
  __u32 num_of_nodes;
  __u32 pad;
};
#define MAX_ALLOWED_NUM_POINTS 100
#define MAX_ALLOWED_AW_BUFF_SIZE 4096
#define MAX_ALLOWED_WAC_BUFF_SIZE 128
struct kfd_ioctl_dbg_register_args {
  __u32 gpu_id;
  __u32 pad;
};
struct kfd_ioctl_dbg_unregister_args {
  __u32 gpu_id;
  __u32 pad;
};
struct kfd_ioctl_dbg_address_watch_args {
  __u64 content_ptr;
  __u32 gpu_id;
  __u32 buf_size_in_bytes;
};
struct kfd_ioctl_dbg_wave_control_args {
  __u64 content_ptr;
  __u32 gpu_id;
  __u32 buf_size_in_bytes;
};
#define KFD_IOC_EVENT_SIGNAL 0
#define KFD_IOC_EVENT_NODECHANGE 1
#define KFD_IOC_EVENT_DEVICESTATECHANGE 2
#define KFD_IOC_EVENT_HW_EXCEPTION 3
#define KFD_IOC_EVENT_SYSTEM_EVENT 4
#define KFD_IOC_EVENT_DEBUG_EVENT 5
#define KFD_IOC_EVENT_PROFILE_EVENT 6
#define KFD_IOC_EVENT_QUEUE_EVENT 7
#define KFD_IOC_EVENT_MEMORY 8
#define KFD_IOC_WAIT_RESULT_COMPLETE 0
#define KFD_IOC_WAIT_RESULT_TIMEOUT 1
#define KFD_IOC_WAIT_RESULT_FAIL 2
#define KFD_SIGNAL_EVENT_LIMIT 4096
struct kfd_ioctl_create_event_args {
  __u64 event_page_offset;
  __u32 event_trigger_data;
  __u32 event_type;
  __u32 auto_reset;
  __u32 node_id;
  __u32 event_id;
  __u32 event_slot_index;
};
struct kfd_ioctl_destroy_event_args {
  __u32 event_id;
  __u32 pad;
};
struct kfd_ioctl_set_event_args {
  __u32 event_id;
  __u32 pad;
};
struct kfd_ioctl_reset_event_args {
  __u32 event_id;
  __u32 pad;
};
struct kfd_memory_exception_failure {
  __u32 NotPresent;
  __u32 ReadOnly;
  __u32 NoExecute;
  __u32 pad;
};
struct kfd_hsa_memory_exception_data {
  struct kfd_memory_exception_failure failure;
  __u64 va;
  __u32 gpu_id;
  __u32 pad;
};
struct kfd_event_data {
  union {
    struct kfd_hsa_memory_exception_data memory_exception_data;
  };
  __u64 kfd_event_data_ext;
  __u32 event_id;
  __u32 pad;
};
struct kfd_ioctl_wait_events_args {
  __u64 events_ptr;
  __u32 num_events;
  __u32 wait_for_all;
  __u32 timeout;
  __u32 wait_result;
};
struct kfd_ioctl_set_scratch_backing_va_args {
  __u64 va_addr;
  __u32 gpu_id;
  __u32 pad;
};
struct kfd_ioctl_get_tile_config_args {
  __u64 tile_config_ptr;
  __u64 macro_tile_config_ptr;
  __u32 num_tile_configs;
  __u32 num_macro_tile_configs;
  __u32 gpu_id;
  __u32 gb_addr_config;
  __u32 num_banks;
  __u32 num_ranks;
};
#define AMDKFD_IOCTL_BASE 'K'
#define AMDKFD_IO(nr) _IO(AMDKFD_IOCTL_BASE, nr)
#define AMDKFD_IOR(nr,type) _IOR(AMDKFD_IOCTL_BASE, nr, type)
#define AMDKFD_IOW(nr,type) _IOW(AMDKFD_IOCTL_BASE, nr, type)
#define AMDKFD_IOWR(nr,type) _IOWR(AMDKFD_IOCTL_BASE, nr, type)
#define AMDKFD_IOC_GET_VERSION AMDKFD_IOR(0x01, struct kfd_ioctl_get_version_args)
#define AMDKFD_IOC_CREATE_QUEUE AMDKFD_IOWR(0x02, struct kfd_ioctl_create_queue_args)
#define AMDKFD_IOC_DESTROY_QUEUE AMDKFD_IOWR(0x03, struct kfd_ioctl_destroy_queue_args)
#define AMDKFD_IOC_SET_MEMORY_POLICY AMDKFD_IOW(0x04, struct kfd_ioctl_set_memory_policy_args)
#define AMDKFD_IOC_GET_CLOCK_COUNTERS AMDKFD_IOWR(0x05, struct kfd_ioctl_get_clock_counters_args)
#define AMDKFD_IOC_GET_PROCESS_APERTURES AMDKFD_IOR(0x06, struct kfd_ioctl_get_process_apertures_args)
#define AMDKFD_IOC_UPDATE_QUEUE AMDKFD_IOW(0x07, struct kfd_ioctl_update_queue_args)
#define AMDKFD_IOC_CREATE_EVENT AMDKFD_IOWR(0x08, struct kfd_ioctl_create_event_args)
#define AMDKFD_IOC_DESTROY_EVENT AMDKFD_IOW(0x09, struct kfd_ioctl_destroy_event_args)
#define AMDKFD_IOC_SET_EVENT AMDKFD_IOW(0x0A, struct kfd_ioctl_set_event_args)
#define AMDKFD_IOC_RESET_EVENT AMDKFD_IOW(0x0B, struct kfd_ioctl_reset_event_args)
#define AMDKFD_IOC_WAIT_EVENTS AMDKFD_IOWR(0x0C, struct kfd_ioctl_wait_events_args)
#define AMDKFD_IOC_DBG_REGISTER AMDKFD_IOW(0x0D, struct kfd_ioctl_dbg_register_args)
#define AMDKFD_IOC_DBG_UNREGISTER AMDKFD_IOW(0x0E, struct kfd_ioctl_dbg_unregister_args)
#define AMDKFD_IOC_DBG_ADDRESS_WATCH AMDKFD_IOW(0x0F, struct kfd_ioctl_dbg_address_watch_args)
#define AMDKFD_IOC_DBG_WAVE_CONTROL AMDKFD_IOW(0x10, struct kfd_ioctl_dbg_wave_control_args)
#define AMDKFD_IOC_SET_SCRATCH_BACKING_VA AMDKFD_IOWR(0x11, struct kfd_ioctl_set_scratch_backing_va_args)
#define AMDKFD_IOC_GET_TILE_CONFIG AMDKFD_IOWR(0x12, struct kfd_ioctl_get_tile_config_args)
#define AMDKFD_COMMAND_START 0x01
#define AMDKFD_COMMAND_END 0x13
#endif
