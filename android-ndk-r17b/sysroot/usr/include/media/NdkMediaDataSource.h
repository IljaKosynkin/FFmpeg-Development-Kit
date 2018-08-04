/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


/*
 * This file defines an NDK API.
 * Do not remove methods.
 * Do not change method signatures.
 * Do not change the value of constants.
 * Do not change the size of any of the classes defined in here.
 * Do not reference types that are not part of the NDK.
 * Do not #include files that aren't part of the NDK.
 */

#ifndef _NDK_MEDIA_DATASOURCE_H
#define _NDK_MEDIA_DATASOURCE_H

#include <sys/cdefs.h>
#include <sys/types.h>

#include <media/NdkMediaError.h>

__BEGIN_DECLS

struct AMediaDataSource;
typedef struct AMediaDataSource AMediaDataSource;

#if __ANDROID_API__ >= 28

/*
 * AMediaDataSource's callbacks will be invoked on an implementation-defined thread
 * or thread pool. No guarantees are provided about which thread(s) will be used for
 * callbacks. However, it is guaranteed that AMediaDataSource's callbacks will only
 * ever be invoked by a single thread at a time.
 *
 * There will be a thread synchronization point between each call to ensure that
 * modifications to the state of your AMediaDataSource are visible to future
 * calls. This means you don't need to do your own synchronization unless you're
 * modifying the AMediaDataSource from another thread while it's being used by the
 * framework.
 */

/**
 * Called to request data from the given |offset|.
 *
 * Implementations should should write up to |size| bytes into
 * |buffer|, and return the number of bytes written.
 *
 * Return 0 if size is zero (thus no bytes are read).
 *
 * Return -1 to indicate that end of stream is reached.
 */
typedef ssize_t (*AMediaDataSourceReadAt)(
        void *userdata, off64_t offset, void * buffer, size_t size);

/**
 * Called to get the size of the data source.
 *
 * Return the size of data source in bytes, or -1 if the size is unknown.
 */
typedef ssize_t (*AMediaDataSourceGetSize)(void *userdata);

/**
 * Called to close the data source and release associated resources.
 * The NDK media framework guarantees that after |close| is called
 * no future callbacks will be invoked on the data source.
 */
typedef void (*AMediaDataSourceClose)(void *userdata);

/**
 * Create new media data source. Returns NULL if memory allocation
 * for the new data source object fails.
 */
AMediaDataSource* AMediaDataSource_new();

/**
 * Delete a previously created media data source.
 */
void AMediaDataSource_delete(AMediaDataSource*);

/**
 * Set an user provided opaque handle. This opaque handle is passed as
 * the first argument to the data source callbacks.
 */
void AMediaDataSource_setUserdata(
        AMediaDataSource*, void *userdata);

/**
 * Set a custom callback for supplying random access media data to the
 * NDK media framework.
 *
 * Implement this if your app has special requirements for the way media
 * data is obtained, or if you need a callback when data is read by the
 * NDK media framework.
 *
 * Please refer to the definition of AMediaDataSourceReadAt for
 * additional details.
 */
void AMediaDataSource_setReadAt(
        AMediaDataSource*,
        AMediaDataSourceReadAt);

/**
 * Set a custom callback for supplying the size of the data source to the
 * NDK media framework.
 *
 * Please refer to the definition of AMediaDataSourceGetSize for
 * additional details.
 */
void AMediaDataSource_setGetSize(
        AMediaDataSource*,
        AMediaDataSourceGetSize);

/**
 * Set a custom callback to receive signal from the NDK media framework
 * when the data source is closed.
 *
 * Please refer to the definition of AMediaDataSourceClose for
 * additional details.
 */
void AMediaDataSource_setClose(
        AMediaDataSource*,
        AMediaDataSourceClose);

#endif  /*__ANDROID_API__ >= 28 */

__END_DECLS

#endif // _NDK_MEDIA_DATASOURCE_H
