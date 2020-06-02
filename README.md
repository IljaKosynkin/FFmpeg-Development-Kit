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
Navigate to `app/src/main/cpp`. Copy files `ffmpeg.cmake`, `ffmpeg_build_system.cmake` and `copy_headers.cmake` to your `cpp` folder.
In your CMakeLists.txt file include following lines:
```
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
include_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include)

include(ExternalProject)

set(FFMPEG_LIBS avutil swresample avcodec avformat swscale avfilter avdevice)
set(FFMPEG_CONFIGURE_EXTRAS --enable-jni)

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
That should be it. Hit "Refresh linked C++ project" and "Build" and you should be able to use FFmpeg now.
