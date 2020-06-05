cmake_minimum_required(VERSION 3.10.2)

# LIBX264 FETCH SECTION: START

set(LIBX264_URL https://code.videolan.org/videolan/x264/-/archive/master/x264-master.tar.bz2)

get_filename_component(LIBX264_ARCHIVE_NAME ${LIBX264_URL} NAME)
get_filename_component(LIBX264_NAME ${LIBX264_URL} NAME_WE)

IF (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_NAME})
    file(DOWNLOAD ${LIBX264_URL} ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_ARCHIVE_NAME})

    execute_process(
            COMMAND ${CMAKE_COMMAND} -E tar xzf ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_ARCHIVE_NAME}
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    # We're patching install step manually because it installs libx264 with version suffix and Android won't have it
    file(READ ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_NAME}/configure configure_src)
    string(REPLACE "echo \"SONAME=libx264.so.$API\" >> config.mak" "echo \"SONAME=libx264.so\" >> config.mak" configure_src "${configure_src}")
    file(WRITE ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_NAME}/configure "${configure_src}")

    file(READ ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_NAME}/Makefile makefile_src)
    string(REPLACE "ln -f -s $(SONAME) $(DESTDIR)$(libdir)/libx264.$(SOSUFFIX)" "# ln -f -s $(SONAME) $(DESTDIR)$(libdir)/libx264.$(SOSUFFIX)" makefile_src "${makefile_src}")
    file(WRITE ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_NAME}/Makefile "${makefile_src}")
ENDIF()

file(
        COPY ${CMAKE_CURRENT_SOURCE_DIR}/libx264_build_system.cmake
        DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_NAME}
        FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
)

# LIBX264 FETCH SECTION: END

# ANDROID BUILD TOOLS SECTION: START

# We set custom variables for all build tools in case we want to make changes to in certain situations
set(LIBX264_CC ${CMAKE_C_COMPILER})
set(LIBX264_AR ${ANDROID_AR})
set(LIBX264_AS ${ANDROID_ASM_COMPILER})

# Taken from https://android.googlesource.com/platform/ndk/+/master/build/cmake/android.toolchain.cmake
# Remove when toolchain actually will include it
set(LIBX264_RANLIB ${ANDROID_TOOLCHAIN_PREFIX}ranlib${ANDROID_TOOLCHAIN_SUFFIX})
set(LIBX264_STRIP ${ANDROID_TOOLCHAIN_ROOT}/bin/llvm-strip${ANDROID_TOOLCHAIN_SUFFIX})

# ANDROID BUILD TOOLS SECTION: END

# ANDROID FLAGS SECTION: START

# We remove --fatal-warnings in such blatant way because somebody at Google decided it's an excellent idea
# to put it into LD flags in toolchain without any way to turn it off.
string(REPLACE " -Wl,--fatal-warnings" "" LIBX264_LD_FLAGS ${CMAKE_SHARED_LINKER_FLAGS})

string(STRIP ${CMAKE_C_FLAGS} LIBX264_C_FLAGS)
string(STRIP ${LIBX264_LD_FLAGS} LIBX264_LD_FLAGS)

set(LIBX264_C_FLAGS "${LIBX264_C_FLAGS} --target=${ANDROID_LLVM_TRIPLE} --gcc-toolchain=${ANDROID_TOOLCHAIN_ROOT}")
set(LIBX264_ASM_FLAGS "${CMAKE_ASM_FLAGS} --target=${ANDROID_LLVM_TRIPLE}")
set(LIBX264_LD_FLAGS "${LIBX264_C_FLAGS} ${LIBX264_LD_FLAGS}")

# ANDROID FLAGS SECTION: END

# MISC VARIABLES SECTION: START

set(NJOBS 4)
set(HOST_BIN ${ANDROID_NDK}/prebuilt/${ANDROID_HOST_TAG}/bin)

# MISC VARIABLES SECTION: END

# CONFIGURATION FLAGS SECTION: START

set(LIBX264_CONFIGURE_EXTRAS "")
IF (${CMAKE_ANDROID_ARCH_ABI} MATCHES ^x86)
    # We use NASM since YASM is severely outdated and libx264 won't compile with it
    find_program(NASM_EXE nasm)

    IF (NASM_EXE)
        SET(LIBX264_AS ${NASM_EXE})
        SET(LIBX264_ASM_FLAGS "") # We don't set any flags since those are set in libx264 configure
    ENDIF()

    # We explicitly disable assembler on x86 because of -mstackrealign causing inline assembly
    # to take up too many registers on API < 24
    IF(NOT NASM_EXE OR ${CMAKE_ANDROID_ARCH_ABI} STREQUAL x86)
        list(APPEND LIBX264_CONFIGURE_EXTRAS --disable-asm) # no nasm, disable assembler for x86
    ENDIF()
ENDIF()

string(REPLACE ";" "|" LIBX264_CONFIGURE_EXTRAS_ENCODED "${LIBX264_CONFIGURE_EXTRAS}")

# CONFIGURATION FLAGS SECTION: END

# LIBX264 EXTERNAL PROJECT CONFIG SECTION: START
ExternalProject_Add(libx264_target
        PREFIX libx264_pref
        URL ${CMAKE_CURRENT_SOURCE_DIR}/${LIBX264_NAME}
        DOWNLOAD_NO_EXTRACT 1
        CONFIGURE_COMMAND ${CMAKE_COMMAND} -E env
            CC=${LIBX264_CC}
            AS=${LIBX264_AS}
            AR=${LIBX264_AR}
            RANLIB=${LIBX264_RANLIB}
            STRIP=${LIBX264_STRIP}
            ${CMAKE_COMMAND}
                -DSTEP:STRING=configure
                -DHOST:STRING=${ANDROID_LLVM_TRIPLE}
                -DSYSROOT:STRING=${CMAKE_SYSROOT}
                -DC_FLAGS:STRING=${LIBX264_C_FLAGS}
                -DAS_FLAGS:STRING=${LIBX264_ASM_FLAGS}
                -DLD_FLAGS:STRING=${LIBX264_LD_FLAGS}
                -DPREFIX:STRING=${CMAKE_LIBRARY_OUTPUT_DIRECTORY}
                -DCONFIGURE_EXTRAS:STRING=${LIBX264_CONFIGURE_EXTRAS_ENCODED}
            -P libx264_build_system.cmake
        BUILD_COMMAND ${CMAKE_COMMAND}
            -DSTEP:STRING=build
            -DNJOBS:STRING=${NJOBS}
            -DHOST_TOOLCHAIN:STRING=${HOST_BIN}
        -P libx264_build_system.cmake
        BUILD_IN_SOURCE 1
        INSTALL_COMMAND ${CMAKE_COMMAND}
            -DSTEP:STRING=install
            -DHOST_TOOLCHAIN:STRING=${HOST_BIN}
        -P libx264_build_system.cmake
        LOG_BUILD 1
        LOG_INSTALL 1
        LOG_CONFIGURE 1
)

# LIBX264 EXTERNAL PROJECT CONFIG SECTION: END