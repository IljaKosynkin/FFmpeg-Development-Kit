/*
 * Copyright (C) 2014 The Android Open Source Project
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

/**
 * @addtogroup Media
 * @{
 */

/**
 * @file NdkMediaExtractor.h
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

#ifndef _NDK_MEDIA_EXTRACTOR_H
#define _NDK_MEDIA_EXTRACTOR_H

#include <sys/cdefs.h>
#include <sys/types.h>

#include "NdkMediaCodec.h"
#include "NdkMediaDataSource.h"
#include "NdkMediaFormat.h"
#include "NdkMediaCrypto.h"

__BEGIN_DECLS

struct AMediaExtractor;
typedef struct AMediaExtractor AMediaExtractor;

#if __ANDROID_API__ >= 21

/**
 * Create new media extractor
 */
AMediaExtractor* AMediaExtractor_new();

/**
 * Delete a previously created media extractor
 */
media_status_t AMediaExtractor_delete(AMediaExtractor*);

/**
 *  Set the file descriptor from which the extractor will read.
 */
media_status_t AMediaExtractor_setDataSourceFd(AMediaExtractor*, int fd, off64_t offset,
        off64_t length);

/**
 * Set the URI from which the extractor will read.
 */
media_status_t AMediaExtractor_setDataSource(AMediaExtractor*, const char *location);
        // TODO support headers

#if __ANDROID_API__ >= 28

/**
 * Set the custom data source implementation from which the extractor will read.
 */
media_status_t AMediaExtractor_setDataSourceCustom(AMediaExtractor*, AMediaDataSource *src);

#endif /* __ANDROID_API__ >= 28 */

/**
 * Return the number of tracks in the previously specified media file
 */
size_t AMediaExtractor_getTrackCount(AMediaExtractor*);

/**
 * Return the format of the specified track. The caller must free the returned format
 */
AMediaFormat* AMediaExtractor_getTrackFormat(AMediaExtractor*, size_t idx);

/**
 * Select the specified track. Subsequent calls to readSampleData, getSampleTrackIndex and
 * getSampleTime only retrieve information for the subset of tracks selected.
 * Selecting the same track multiple times has no effect, the track is
 * only selected once.
 */
media_status_t AMediaExtractor_selectTrack(AMediaExtractor*, size_t idx);

/**
 * Unselect the specified track. Subsequent calls to readSampleData, getSampleTrackIndex and
 * getSampleTime only retrieve information for the subset of tracks selected..
 */
media_status_t AMediaExtractor_unselectTrack(AMediaExtractor*, size_t idx);

/**
 * Read the current sample.
 */
ssize_t AMediaExtractor_readSampleData(AMediaExtractor*, uint8_t *buffer, size_t capacity);

/**
 * Read the current sample's flags.
 */
uint32_t AMediaExtractor_getSampleFlags(AMediaExtractor*); // see definitions below

/**
 * Returns the track index the current sample originates from (or -1
 * if no more samples are available)
 */
int AMediaExtractor_getSampleTrackIndex(AMediaExtractor*);

/**
 * Returns the current sample's presentation time in microseconds.
 * or -1 if no more samples are available.
 */
int64_t AMediaExtractor_getSampleTime(AMediaExtractor*);

/**
 * Advance to the next sample. Returns false if no more sample data
 * is available (end of stream).
 */
bool AMediaExtractor_advance(AMediaExtractor*);

typedef enum {
    AMEDIAEXTRACTOR_SEEK_PREVIOUS_SYNC,
    AMEDIAEXTRACTOR_SEEK_NEXT_SYNC,
    AMEDIAEXTRACTOR_SEEK_CLOSEST_SYNC
} SeekMode;

/**
 *
 */
media_status_t AMediaExtractor_seekTo(AMediaExtractor*, int64_t seekPosUs, SeekMode mode);

/**
 * mapping of crypto scheme uuid to the scheme specific data for that scheme
 */
typedef struct PsshEntry {
    AMediaUUID uuid;
    size_t datalen;
    void *data;
} PsshEntry;

/**
 * list of crypto schemes and their data
 */
typedef struct PsshInfo {
    size_t numentries;
    PsshEntry entries[0];
} PsshInfo;

/**
 * Get the PSSH info if present.
 */
PsshInfo* AMediaExtractor_getPsshInfo(AMediaExtractor*);


AMediaCodecCryptoInfo *AMediaExtractor_getSampleCryptoInfo(AMediaExtractor *);

enum {
    AMEDIAEXTRACTOR_SAMPLE_FLAG_SYNC = 1,
    AMEDIAEXTRACTOR_SAMPLE_FLAG_ENCRYPTED = 2,
};

#if __ANDROID_API__ >= 28

/**
 * Returns the format of the extractor. The caller must free the returned format
 * using AMediaFormat_delete(format).
 *
 * This function will always return a format; however, the format could be empty
 * (no key-value pairs) if the media container does not provide format information.
 */
AMediaFormat* AMediaExtractor_getFileFormat(AMediaExtractor*);

/**
 * Returns the size of the current sample in bytes, or -1 when no samples are
 * available (end of stream). This API can be used in in conjunction with
 * AMediaExtractor_readSampleData:
 *
 * ssize_t sampleSize = AMediaExtractor_getSampleSize(ex);
 * uint8_t *buf = new uint8_t[sampleSize];
 * AMediaExtractor_readSampleData(ex, buf, sampleSize);
 *
 */
ssize_t AMediaExtractor_getSampleSize(AMediaExtractor*);

/**
 * Returns the duration of cached media samples downloaded from a network data source
 * (AMediaExtractor_setDataSource with a "http(s)" URI) in microseconds.
 *
 * This information is calculated using total bitrate; if total bitrate is not in the
 * media container it is calculated using total duration and file size.
 *
 * Returns -1 when the extractor is not reading from a network data source, or when the
 * cached duration cannot be calculated (bitrate, duration, and file size information
 * not available).
 */
int64_t AMediaExtractor_getCachedDuration(AMediaExtractor *);

/**
 * Read the current sample's metadata format into |fmt|. Examples of sample metadata are
 * SEI (supplemental enhancement information) and MPEG user data, both of which can embed
 * closed-caption data.
 *
 * Returns AMEDIA_OK on success or AMEDIA_ERROR_* to indicate failure reason.
 * Existing key-value pairs in |fmt| would be removed if this API returns AMEDIA_OK.
 * The contents of |fmt| is undefined if this API returns AMEDIA_ERROR_*.
 */
media_status_t AMediaExtractor_getSampleFormat(AMediaExtractor *ex, AMediaFormat *fmt);

#endif /* __ANDROID_API__ >= 28 */

#endif /* __ANDROID_API__ >= 21 */

__END_DECLS

#endif // _NDK_MEDIA_EXTRACTOR_H

/** @} */
