#!/bin/sh

#  build.sh
#  Builds all supported architectures of FFmpeg for Android.
#  Versions: NDK - r17b, FFmpeg - 4.0.2
#  Created by Ilja Kosynkin on 28/07/2018.
#  

DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PARENT="$(dirname "${DIR}")"
NDK="$(dirname "${PARENT}")"
PROJECT="$(dirname "${NDK}")/JNI/app"
PROJECT_JNI="$(dirname "${NDK}")/JNI/app/jni"
PROJECT_LIBS="$(dirname "${NDK}")/JNI/app/libs"
SYSROOT="$NDK/sysroot"
HOST="darwin-x86_64"
LLVM_TOOLCHAIN="$NDK/toolchains/llvm/prebuilt/$HOST/bin"

CFLAGS="-O3 -fPIC"
LDFLAGS="-lc"

# Takes two arguments:
# First: ARCH, suppoerted values: armeabi-v7a, arm64-v8a, x86, x86_64
# Second: platform level. Range: 14-19, 21-24, 26-28
function build {
    ARCH=$1
    LEVEL=$2

    case $ARCH in
        "armeabi-v7a")
            TARGET="arm-linux-androideabi"
            CLANG_FLAGS="-target thumbv7-none-linux-androideabi -mfpu=vfpv3-d16 -mfloat-abi=soft"
            LDFLAGS="--fix-cortex-a8 $LDFLAGS"
            PLATFORM_ARCH="arm"
            TOOLCHAIN_FOLDER=$TARGET
        ;;
        "arm64-v8a")
            TARGET="aarch64-linux-android"
            CLANG_FLAGS="-target aarch64-none-linux-android -mfpu=neon -mfloat-abi=soft"
            PLATFORM_ARCH="arm64"
            TOOLCHAIN_FOLDER=$TARGET
        ;;
        "x86")
            TARGET="i686-linux-android"
            CLANG_FLAGS="-target i686-none-linux-androideabi -mtune=intel -mssse3 -mfpmath=sse -m32"
            PLATFORM_ARCH="x86"
            TOOLCHAIN_FOLDER=$PLATFORM_ARCH
        ;;
        "x86_64")
            TARGET="x86_64-linux-android"
            CLANG_FLAGS="-target x86_64-none-linux-androideabi -msse4.2 -mpopcnt -m64 -mtune=intel"
            PLATFORM_ARCH="x86_64"
            TOOLCHAIN_FOLDER=$PLATFORM_ARCH
        ;;
    esac

    TOOLCHAIN=$NDK/toolchains/$TOOLCHAIN_FOLDER-4.9/prebuilt/$HOST/bin

    CC=$LLVM_TOOLCHAIN/clang
    CXX=$LLVM_TOOLCHAIN/clang++
    AR=$TOOLCHAIN/$TARGET-ar
    LD=$TOOLCHAIN/$TARGET-ld
    STRIP=$TOOLCHAIN/$TARGET-strip

    PREFIX="android/$ARCH"

    ./configure --prefix=$PREFIX  \
                --disable-asm --enable-cross-compile --disable-static --disable-programs --disable-doc --enable-shared --enable-protocol=file --enable-pic --enable-small \
                --ar=$AR --strip=$STRIP --ld=$LD --as=$CC --cc=$CC --cxx=$CXX \
                --target-os=linux \
                --extra-cflags="$CLANG_FLAGS -I$SYSROOT/usr/include/$TARGET $CFLAGS" \
                --extra-ldflags="-L$NDK/toolchains/$TOOLCHAIN_FOLDER-4.9/prebuilt/$HOST/lib/gcc/$TARGET/4.9.x -L$NDK/platforms/android-$LEVEL/arch-$PLATFORM_ARCH/usr/lib $LDFLAGS" \
                --sysroot=$SYSROOT --extra-libs=-lgcc

    $NDK/prebuilt/darwin-x86_64/bin/make clean
    $NDK/prebuilt/darwin-x86_64/bin/make -j2
    $NDK/prebuilt/darwin-x86_64/bin/make install

    export NDK=$NDK
    export ARCH=$ARCH
    export PLATFORM="android-$LEVEL"
    export NDK_PROJECT_PATH=$PROJECT

    yes | cp -rf Android.mk "$PREFIX/Android.mk"

    $NDK/ndk-build
}

build "arm64-v8a" "28"
