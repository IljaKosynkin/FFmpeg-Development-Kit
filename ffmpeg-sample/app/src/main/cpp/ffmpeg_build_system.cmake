cmake_minimum_required(VERSION 3.10.2)

if (${STEP} STREQUAL configure)
    # Encoding string to list
    string(REPLACE "|" ";" CONFIGURE_EXTRAS_ENCODED "${CONFIGURE_EXTRAS}")
    list(REMOVE_ITEM CONFIGURE_EXTRAS_ENCODED "")

    # Note that we don't pass LD, Clang sets it internally based of --target
    set(CONFIGURE_COMMAND
            ./configure
            --cc=${CC}
            --ar=${AR}
            --strip=${STRIP}
            --ranlib=${RANLIB}
            --as=${AS}
            --nm=${NM}
            --target-os=android
            --arch=${ARCH}
            --extra-cflags=${C_FLAGS}
            --extra-ldflags=${LD_FLAGS}
            --sysroot=${SYSROOT}
            --enable-cross-compile
            --disable-static
            --disable-programs
            --disable-doc
            --enable-shared
            --enable-protocol=file
            --enable-pic
            --shlibdir=${PREFIX}
            --prefix=${PREFIX}
            ${CONFIGURE_EXTRAS_ENCODED}
    )

    execute_process(COMMAND ${CONFIGURE_COMMAND})
elseif(${STEP} STREQUAL build)
    execute_process(COMMAND ${HOST_TOOLCHAIN}/make -j${NJOBS})
elseif(${STEP} STREQUAL install)
    execute_process(COMMAND ${HOST_TOOLCHAIN}/make install)
endif()