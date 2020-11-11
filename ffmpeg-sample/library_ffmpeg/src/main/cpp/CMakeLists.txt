cmake_minimum_required(VERSION 3.10.2)

# SET DIRECTORIES SECTION: START

# We add both directories in the very beggining to make sure all targets specified below can use libs from there
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
include_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include)

# SET DIRECTORIES SECTION: END

include(ExternalProject)

set(FFMPEG_LIBS avutil swresample avcodec avformat swscale avfilter avdevice)
set(FFMPEG_CONFIGURE_EXTRAS --enable-jni --enable-mediacodec)
IF (${LIB_X264_ENABLED})
    include(libx264.cmake)

    set(FFMPEG_DEPENDS libx264_target)
    set(FFMPEG_EXTRA_LD_FLAGS "-L${CMAKE_LIBRARY_OUTPUT_DIRECTORY}") 
    set(FFMPEG_EXTRA_C_FLAGS "-I${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include")

    list(APPEND FFMPEG_CONFIGURE_EXTRAS --enable-gpl --enable-libx264 --enable-nonfree)
    list(APPEND FFMPEG_LIBS postproc x264)
ENDIF()

include(ffmpeg.cmake)

add_library(native-lib SHARED native-lib.c ${ffmpeg_src})
add_dependencies(native-lib ffmpeg_target)
find_library(log-lib log)
target_link_libraries(native-lib ${log-lib} ${FFMPEG_LIBS})