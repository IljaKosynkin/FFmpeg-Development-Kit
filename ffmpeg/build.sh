#!/bin/sh

#  build.sh
#  Builds all supported architectures of FFmpeg for Android.
#  Versions: NDK - r17b, FFmpeg - 4.0.2
#  Arguments: -t|--toolchain=clang|gcc
#  Created by Ilja Kosynkin on 28/07/2018.

DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PARENT="$(dirname "${DIR}")"
NDK="$(dirname "${PARENT}")"
PROJECT="$(dirname "${NDK}")/JNI/app"
PROJECT_JNI="$PROJECT/jni"
PROJECT_LIBS="$PROJECT/libs"
SYSROOT="$NDK/sysroot"
HOST="darwin-x86_64"
LLVM_TOOLCHAIN="$NDK/toolchains/llvm/prebuilt/$HOST/bin"
IS_CLANG=1

CFLAGS="-O3 -fPIC"
LDFLAGS="-lc"

for i in "$@"; do
    case $i in
        -t=*|--toolchain=*)
            EXTENSION="${i#*=}"
            if [ $EXTENSION = "gcc" ]; then
                IS_CLANG=0
            fi
            shift
        ;;

        *)
            # unknown option
        ;;
    esac
done

# Takes three arguments:
# First: ARCH, supported values: armeabi-v7a, arm64-v8a, x86, x86_64
# Second: platform level. Range: 14-19, 21-24, 26-28
# Third: additinal configuration flags. Already present flags: --enable-cross-compile --disable-static --disable-programs --disable-doc --enable-shared --enable-protocol=file --enable-pic --enable-small
build () {
    ARCH=$1
    LEVEL=$2
    CONFIGURATION="--disable-asm --enable-cross-compile --disable-static --disable-programs --disable-doc --enable-shared --enable-protocol=file --enable-pic --enable-small $3"
    LIB_FOLDER="lib"

    case $ARCH in
        "armeabi-v7a")
            TARGET="arm-linux-androideabi"

            if [ $IS_CLANG = 1 ]; then
                CC_FLAGS="-target thumbv7-none-linux-androideabi -mfpu=vfpv3-d16 -mfloat-abi=soft"
            else
                CC_FLAGS="-mfpu=vfpv3-d16 -mfloat-abi=soft"
            fi

            LDFLAGS="--fix-cortex-a8 $LDFLAGS"
            PLATFORM_ARCH="arm"
            TOOLCHAIN_FOLDER=$TARGET
        ;;
        "arm64-v8a")
            TARGET="aarch64-linux-android"

            if [ $IS_CLANG = 1 ]; then
                CC_FLAGS="-target aarch64-none-linux-android -mfpu=neon -mfloat-abi=soft"
            else
                CC_FLAGS=""
            fi

            PLATFORM_ARCH="arm64"
            CONFIGURATION="$CONFIGURATION --disable-pthreads"
            TOOLCHAIN_FOLDER=$TARGET
        ;;
        "x86")
            TARGET="i686-linux-android"

            if [ $IS_CLANG = 1 ]; then
                CC_FLAGS="-target i686-none-linux-androideabi -mtune=intel -mssse3 -mfpmath=sse -m32"
            else
                CC_FLAGS="-mtune=intel -mssse3 -mfpmath=sse -m32"
            fi

            PLATFORM_ARCH="x86"
            TOOLCHAIN_FOLDER=$PLATFORM_ARCH
        ;;
        "x86_64")
            TARGET="x86_64-linux-android"

            if [ $IS_CLANG = 1 ]; then
                CC_FLAGS="-target x86_64-none-linux-androideabi -msse4.2 -mpopcnt -m64 -mtune=intel"
            else
                CC_FLAGS="-msse4.2 -mpopcnt -m64 -mtune=intel"
            fi

            PLATFORM_ARCH="x86_64"
            LIB_FOLDER="lib64"
            TOOLCHAIN_FOLDER=$PLATFORM_ARCH
        ;;
    esac

    TOOLCHAIN=$NDK/toolchains/$TOOLCHAIN_FOLDER-4.9/prebuilt/$HOST/bin

    if [ $IS_CLANG = 1 ]; then
        CC=$LLVM_TOOLCHAIN/clang
        CXX=$LLVM_TOOLCHAIN/clang++
        AS=$CC
    else
        CC=$TOOLCHAIN/$TARGET-gcc
        CXX=$TOOLCHAIN/$TARGET-g++
        AS=$TOOLCHAIN/$TARGET-as
    fi

    AR=$TOOLCHAIN/$TARGET-ar
    LD=$TOOLCHAIN/$TARGET-ld
    STRIP=$TOOLCHAIN/$TARGET-strip

    PREFIX="android/$ARCH"

    ./configure --prefix=$PREFIX  \
                $CONFIGURATION \
                --ar=$AR --strip=$STRIP --ld=$LD --cc=$CC --cxx=$CXX --as=$AS \
                --target-os=android \
                --extra-cflags="$CC_FLAGS -I$SYSROOT/usr/include/$TARGET $CFLAGS" \
                --extra-ldflags="-L$NDK/toolchains/$TOOLCHAIN_FOLDER-4.9/prebuilt/$HOST/lib/gcc/$TARGET/4.9.x -L$NDK/platforms/android-$LEVEL/arch-$PLATFORM_ARCH/usr/$LIB_FOLDER $LDFLAGS" \
                --sysroot=$SYSROOT --extra-libs=-lgcc

    $NDK/prebuilt/$HOST/bin/make clean
    $NDK/prebuilt/$HOST/bin/make -j2
    $NDK/prebuilt/$HOST/bin/make install

    export NDK=$NDK
    export ARCH=$ARCH
    export PLATFORM="android-$LEVEL"
    export NDK_PROJECT_PATH=$PROJECT

    yes | cp -rf Android.mk "$PREFIX/Android.mk"

    $NDK/ndk-build

    if [ ! -d "$PROJECT/out" ]; then
        mkdir -p "$PROJECT/out"
    fi

    yes | cp -rf "$PROJECT_LIBS/$ARCH" "$PROJECT/out/$ARCH"
}

build "armeabi-v7a" "14"
build "arm64-v8a" "21"
build "x86_64" "21"
build "x86" "14"
