cmake_minimum_required(VERSION 3.10.2)

# SET DIRECTORIES SECTION: START

# We add both directories in the very beggining to make sure all targets specified below can use libs from there
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
include_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include)

# SET DIRECTORIES SECTION: END

include(ExternalProject)

set(FFMPEG_LIBS avutil swresample avcodec avformat swscale avfilter avdevice)
set(FFMPEG_CONFIGURE_EXTRAS --enable-jni)

include(ffmpeg.cmake)

add_library(native-lib SHARED native-lib.c ${ffmpeg_src})
add_dependencies(native-lib ffmpeg_target)
find_library(log-lib log)
target_link_libraries(native-lib ${log-lib} ${FFMPEG_LIBS})