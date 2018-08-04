APP_OPTIM := release
APP_PLATFORM := $(PLATFORM)
APP_ABI := $(ARCH)
APP_PIE := true
APP_STL := c++_static

APP_CFLAGS := -O3 -pipe \
    -ffast-math \
    -fstrict-aliasing -Werror=strict-aliasing \
    -Wno-psabi -Wa,--noexecstack \
    -DANDROID
