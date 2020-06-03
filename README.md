# FFmpeg Development Kit
Main purpose of this repository is to help people in building FFmpeg, mainly on mobile platforms
(I tested this on Android, but armv7 shared libraries should be ok for iOS too).

## Building
The project contains Android project called `ffmpeg-sample` which should be ready to build.
- Make sure to hit "Refresh linked C++ project"
- Run "Build"
- Let it build
- Run sample app on phone or emulator

## Integrating in custom project
Navigate to `app/src/main/cpp`. Copy files `ffmpeg.cmake`, `ffmpeg_build_system.cmake` and `copy_headers.cmake`, `libx264.cmake` and `libx264_build_system.cmake` to your `cpp` folder.
In your CMakeLists.txt file include following lines:
```
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
include_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include)

include(ExternalProject)

set(FFMPEG_LIBS avutil swresample avcodec avformat swscale avfilter avdevice)
set(FFMPEG_CONFIGURE_EXTRAS --enable-jni)
IF (${LIB_X264_ENABLED})
    include(libx264.cmake)

    set(FFMPEG_DEPENDS libx264_target)
    set(FFMPEG_EXTRA_C_FLAGS "-I${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include")
    set(FFMPEG_EXTRA_LD_FLAGS "-L${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")

    list(APPEND FFMPEG_CONFIGURE_EXTRAS --enable-gpl --enable-libx264 --enable-nonfree)
    list(APPEND FFMPEG_LIBS postproc x264)
ENDIF()
include(ffmpeg.cmake)
```
and modify your native library to include `${ffmpeg_src}` and add dependency to the FFmpeg's target:
```
add_dependencies(<your target> ffmpeg_target)
```
Also make sure to link FFmpeg libs to your target:
```
target_link_libraries(<your target> ${log-lib} ${FFMPEG_LIBS})
```
Also add flag indicating if you want to add libx264 to your project or not to your module build.gradle like this:
```
externalNativeBuild {
    cmake {
        arguments "-DLIB_X264_ENABLED:BOOL=ON|OFF"
    }
}
```
That should be it. Sync your project with Gradle and you should have FFmpeg integrated. 
