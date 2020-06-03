package com.syllogismobile.ffmpeg_sample

internal class VideoKit {
    companion object {
        init {
            if (BuildConfig.LIB_X264_ENABLED) {
                System.loadLibrary("x264")
                System.loadLibrary("postproc")
            }
            System.loadLibrary("avutil")
            System.loadLibrary("swresample")
            System.loadLibrary("avcodec")
            System.loadLibrary("avformat")
            System.loadLibrary("swscale")
            System.loadLibrary("avfilter")
            System.loadLibrary("avdevice")
            System.loadLibrary("native-lib")
        }
    }

    external fun run(args: Array<String>): Int
}