#
# Copyright (C) 2016 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Note that the platform modules are defined in the Android.bp. This file is
# used for the NDK, but is also how we define the tests for the platform.

LOCAL_PATH := $(call my-dir)

# Defines a test module.
#
# The upstream gtest configuration builds each of these as separate executables.
# It's a pain for how we run tests in the platform, but we can handle that with
# a test running script.
#
# $(1): Test name. test/$(1).cc will automatically be added to sources.
# $(2): Additional source files.
# $(3): "libgtest_main" or empty.
# $(4): Variant. Can be "_host", "_ndk", or empty.
# $(5): NDK STL if $(4) is "_ndk", else empty.
#
# Use -Wno-unnamed-type-template-args because gtest_unittest.cc wants anonymous enum type.
define gtest-unit-test
    $(eval include $(CLEAR_VARS)) \
    $(eval LOCAL_MODULE := \
        $(1)$(if $(findstring _ndk,$(4)),$(4))$(if $(5),_$(5))) \
    $(eval LOCAL_CPP_EXTENSION := .cc) \
    $(eval LOCAL_SRC_FILES := test/$(strip $(1)).cc $(2)) \
    $(eval LOCAL_C_INCLUDES := $(LOCAL_PATH)/include) \
    $(eval LOCAL_CPP_FEATURES := rtti) \
    $(eval LOCAL_CFLAGS := -Wall -Werror -Wno-sign-compare -Wno-unnamed-type-template-args) \
    $(eval LOCAL_STATIC_LIBRARIES := \
        $(if $(3),$(3)$(4)$(if $(5),_$(5))) libgtest$(4)$(if $(5),_$(5))) \
    $(if $(findstring _ndk,$(4)),$(eval LOCAL_LDLIBS := -ldl)) \
    $(if $(findstring _ndk,$(4)),$(eval LOCAL_SDK_VERSION := 9)) \
    $(if $(findstring _ndk,$(4)),$(eval LOCAL_NDK_STL_VARIANT := $(5)_static)) \
    $(if $(findstring _host,$(4)),,\
        $(eval LOCAL_MODULE_PATH := $(TARGET_OUT_DATA_NATIVE_TESTS))) \
    $(eval $(if $(findstring _host,$(4)), \
        include $(BUILD_HOST_EXECUTABLE), \
        include $(BUILD_EXECUTABLE)))
endef

# Create modules for each test in the suite.
#
# $(1): Variant. Can be "_host", "_ndk", or empty.
# $(2): NDK STL if $(1) is "_ndk", else empty.
#
# The NDK variant of gtest-death-test_test is disabled because we don't have
# pthread_atfork on android-9.
define gtest-test-suite
    $(eval $(call gtest-unit-test, \
        gtest-death-test_test,,libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_environment_test,,,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-filepath_test,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-linked_ptr_test,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-listener_test,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_main_unittest,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-message_test,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_no_test_unittest,,,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-options_test,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-param-test_test, \
        test/gtest-param-test2_test.cc,,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-port_test,,libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_pred_impl_unittest,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_premature_exit_test,,,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_prod_test,test/production.cc, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_repeat_test,,,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_sole_header_test,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_stress_test,,,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-test-part_test,, \
        libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test, \
        gtest-typed-test_test,test/gtest-typed-test2_test.cc, \
            libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest_unittest,,libgtest_main,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-unittest-api_test,,,$(1),$(2))) \
    $(eval $(call gtest-unit-test,gtest-printers_test,,libgtest_main,$(1),$(2)))
endef

# Test is disabled because Android doesn't build gtest with exceptions.
# $(eval $(call gtest-unit-test,gtest_throw_on_failure_ex_test,,,$(1),$(2)))

# If we're being invoked from ndk-build, we'll have NDK_ROOT defined.
ifdef NDK_ROOT

include $(CLEAR_VARS)
LOCAL_MODULE := libgtest
LOCAL_SRC_FILES := src/gtest-all.cc
LOCAL_C_INCLUDES := $(LOCAL_PATH)/src $(LOCAL_PATH)/include
LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/include
LOCAL_CPP_FEATURES := rtti
include $(BUILD_STATIC_LIBRARY)

# Note: Unlike the platform, libgtest_main carries a dependency on libgtest.
# Users don't need to manually depend on both.
include $(CLEAR_VARS)
LOCAL_MODULE := libgtest_main
LOCAL_SRC_FILES := src/gtest_main.cc
LOCAL_C_INCLUDES := $(LOCAL_PATH)/src $(LOCAL_PATH)/include
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CPP_FEATURES := rtti
LOCAL_STATIC_LIBRARIES := libgtest
include $(BUILD_STATIC_LIBRARY)

# These are the old names of these libraries. They don't match the platform or
# the upstream build, but we've been requiring that people put them in their NDK
# makefiles for years.

include $(CLEAR_VARS)
LOCAL_MODULE := googletest_static
LOCAL_SRC_FILES := src/gtest-all.cc
LOCAL_C_INCLUDES := $(LOCAL_PATH)/src $(LOCAL_PATH)/include
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CPP_FEATURES := rtti
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libgoogletest_main
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := src/gtest_main.cc
LOCAL_C_INCLUDES := $(LOCAL_PATH)/src $(LOCAL_PATH)/include
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CPP_FEATURES := rtti
LOCAL_STATIC_LIBRARIES := libgtest
include $(BUILD_STATIC_LIBRARY)

# The NDK used to include shared versions of these libraries, for some reason.

include $(CLEAR_VARS)
LOCAL_MODULE := googletest_shared
LOCAL_SRC_FILES := src/gtest-all.cc
LOCAL_C_INCLUDES := $(LOCAL_PATH)/src $(LOCAL_PATH)/include
LOCAL_CFLAGS := -DGTEST_CREATE_SHARED_LIBRARY
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CPP_FEATURES := rtti
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := googletest_main_shared
LOCAL_SRC_FILES := src/gtest_main.cc
LOCAL_C_INCLUDES := $(LOCAL_PATH)/src $(LOCAL_PATH)/include
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CPP_FEATURES := rtti
LOCAL_SHARED_LIBRARIES := googletest_shared
include $(BUILD_STATIC_LIBRARY)

else

# Tests for the platform built NDK gtest.
$(call gtest-test-suite,_ndk,c++)

# Tests for the host gtest.
ifeq (,$(TARGET_BUILD_APPS))
$(call gtest-test-suite,_host,)
endif

endif

# Tests for the platform device gtest and for use in the NDK itself.
$(call gtest-test-suite,)
