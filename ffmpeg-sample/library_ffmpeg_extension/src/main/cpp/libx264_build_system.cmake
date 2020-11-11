cmake_minimum_required(VERSION 3.10.2)

if (${STEP} STREQUAL configure)
    # Encoding string to list
    string(REPLACE "|" ";" CONFIGURE_EXTRAS_ENCODED "${CONFIGURE_EXTRAS}")
    list(REMOVE_ITEM CONFIGURE_EXTRAS_ENCODED "")

    set(CONFIGURE_COMMAND
            ./configure
            --extra-cflags=${C_FLAGS}
            --extra-ldflags=${LD_FLAGS}
            --extra-asflags=${AS_FLAGS}
            --sysroot=${SYSROOT}
            --host=${HOST}
            --enable-pic
            --enable-shared
            --libdir=${PREFIX}
            --prefix=${PREFIX}
            ${CONFIGURE_EXTRAS_ENCODED}
    )

    execute_process(COMMAND ${CONFIGURE_COMMAND})
elseif(${STEP} STREQUAL build)
    execute_process(COMMAND ${HOST_TOOLCHAIN}/make -j${NJOBS})
elseif(${STEP} STREQUAL install)
    execute_process(COMMAND ${HOST_TOOLCHAIN}/make install)
endif()