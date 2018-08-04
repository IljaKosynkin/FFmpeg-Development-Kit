LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := videokit
LOCAL_LDLIBS := -llog -ljnigraphics -lz -landroid
ANDROID_LIB := -landroid
LOCAL_CFLAGS := -I$(NDK)/sources/ffmpeg
LOCAL_LDFLAGS := --verbose
LOCAL_SRC_FILES :=  videokit.c ffmpeg.c ffmpeg_filter.c ffmpeg_opt.c cmdutils.c ffmpeg_cuvid.c ffmpeg_hw.c
LOCAL_SHARED_LIBRARIES := libavformat libavcodec libswscale libavutil libswresample libavfilter libavdevice

include $(BUILD_SHARED_LIBRARY)
$(call import-module, ffmpeg/android/$(ARCH))
