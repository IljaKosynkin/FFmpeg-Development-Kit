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
 * @file NdkMediaFormat.h
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

#ifndef _NDK_MEDIA_FORMAT_H
#define _NDK_MEDIA_FORMAT_H

#include <sys/cdefs.h>
#include <sys/types.h>

#include "NdkMediaError.h"

__BEGIN_DECLS

struct AMediaFormat;
typedef struct AMediaFormat AMediaFormat;

#if __ANDROID_API__ >= 21

AMediaFormat *AMediaFormat_new();
media_status_t AMediaFormat_delete(AMediaFormat*);

/**
 * Human readable representation of the format. The returned string is owned by the format,
 * and remains valid until the next call to toString, or until the format is deleted.
 */
const char* AMediaFormat_toString(AMediaFormat*);

bool AMediaFormat_getInt32(AMediaFormat*, const char *name, int32_t *out);
bool AMediaFormat_getInt64(AMediaFormat*, const char *name, int64_t *out);
bool AMediaFormat_getFloat(AMediaFormat*, const char *name, float *out);
bool AMediaFormat_getSize(AMediaFormat*, const char *name, size_t *out);
/**
 * The returned data is owned by the format and remains valid as long as the named entry
 * is part of the format.
 */
bool AMediaFormat_getBuffer(AMediaFormat*, const char *name, void** data, size_t *size);
/**
 * The returned string is owned by the format, and remains valid until the next call to getString,
 * or until the format is deleted.
 */
bool AMediaFormat_getString(AMediaFormat*, const char *name, const char **out);


void AMediaFormat_setInt32(AMediaFormat*, const char* name, int32_t value);
void AMediaFormat_setInt64(AMediaFormat*, const char* name, int64_t value);
void AMediaFormat_setFloat(AMediaFormat*, const char* name, float value);
/**
 * The provided string is copied into the format.
 */
void AMediaFormat_setString(AMediaFormat*, const char* name, const char* value);
/**
 * The provided data is copied into the format.
 */
void AMediaFormat_setBuffer(AMediaFormat*, const char* name, void* data, size_t size);



/**
 * XXX should these be ints/enums that we look up in a table as needed?
 */
extern const char* AMEDIAFORMAT_KEY_AAC_DRC_ATTENUATION_FACTOR;
extern const char* AMEDIAFORMAT_KEY_AAC_DRC_BOOST_FACTOR;
extern const char* AMEDIAFORMAT_KEY_AAC_DRC_HEAVY_COMPRESSION;
extern const char* AMEDIAFORMAT_KEY_AAC_DRC_TARGET_REFERENCE_LEVEL;
extern const char* AMEDIAFORMAT_KEY_AAC_ENCODED_TARGET_LEVEL;
extern const char* AMEDIAFORMAT_KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT;
extern const char* AMEDIAFORMAT_KEY_AAC_PROFILE;
extern const char* AMEDIAFORMAT_KEY_AAC_SBR_MODE;
extern const char* AMEDIAFORMAT_KEY_AUDIO_SESSION_ID;
extern const char* AMEDIAFORMAT_KEY_BITRATE_MODE;
extern const char* AMEDIAFORMAT_KEY_BIT_RATE;
extern const char* AMEDIAFORMAT_KEY_CAPTURE_RATE;
extern const char* AMEDIAFORMAT_KEY_CHANNEL_COUNT;
extern const char* AMEDIAFORMAT_KEY_CHANNEL_MASK;
extern const char* AMEDIAFORMAT_KEY_COLOR_FORMAT;
extern const char* AMEDIAFORMAT_KEY_COLOR_RANGE;
extern const char* AMEDIAFORMAT_KEY_COLOR_STANDARD;
extern const char* AMEDIAFORMAT_KEY_COLOR_TRANSFER;
extern const char* AMEDIAFORMAT_KEY_COMPLEXITY;
extern const char* AMEDIAFORMAT_KEY_CSD;
extern const char* AMEDIAFORMAT_KEY_CSD_0;
extern const char* AMEDIAFORMAT_KEY_CSD_1;
extern const char* AMEDIAFORMAT_KEY_CSD_2;
extern const char* AMEDIAFORMAT_KEY_DISPLAY_CROP;
extern const char* AMEDIAFORMAT_KEY_DISPLAY_HEIGHT;
extern const char* AMEDIAFORMAT_KEY_DISPLAY_WIDTH;
extern const char* AMEDIAFORMAT_KEY_DURATION;
extern const char* AMEDIAFORMAT_KEY_FLAC_COMPRESSION_LEVEL;
extern const char* AMEDIAFORMAT_KEY_FRAME_RATE;
extern const char* AMEDIAFORMAT_KEY_GRID_COLUMNS;
extern const char* AMEDIAFORMAT_KEY_GRID_ROWS;
extern const char* AMEDIAFORMAT_KEY_HDR_STATIC_INFO;
extern const char* AMEDIAFORMAT_KEY_HEIGHT;
extern const char* AMEDIAFORMAT_KEY_INTRA_REFRESH_PERIOD;
extern const char* AMEDIAFORMAT_KEY_IS_ADTS;
extern const char* AMEDIAFORMAT_KEY_IS_AUTOSELECT;
extern const char* AMEDIAFORMAT_KEY_IS_DEFAULT;
extern const char* AMEDIAFORMAT_KEY_IS_FORCED_SUBTITLE;
extern const char* AMEDIAFORMAT_KEY_I_FRAME_INTERVAL;
extern const char* AMEDIAFORMAT_KEY_LANGUAGE;
extern const char* AMEDIAFORMAT_KEY_LATENCY;
extern const char* AMEDIAFORMAT_KEY_LEVEL;
extern const char* AMEDIAFORMAT_KEY_MAX_HEIGHT;
extern const char* AMEDIAFORMAT_KEY_MAX_INPUT_SIZE;
extern const char* AMEDIAFORMAT_KEY_MAX_WIDTH;
extern const char* AMEDIAFORMAT_KEY_MIME;
extern const char* AMEDIAFORMAT_KEY_MPEG_USER_DATA;
extern const char* AMEDIAFORMAT_KEY_OPERATING_RATE;
extern const char* AMEDIAFORMAT_KEY_PCM_ENCODING;
extern const char* AMEDIAFORMAT_KEY_PRIORITY;
extern const char* AMEDIAFORMAT_KEY_PROFILE;
extern const char* AMEDIAFORMAT_KEY_PUSH_BLANK_BUFFERS_ON_STOP;
extern const char* AMEDIAFORMAT_KEY_REPEAT_PREVIOUS_FRAME_AFTER;
extern const char* AMEDIAFORMAT_KEY_ROTATION;
extern const char* AMEDIAFORMAT_KEY_SAMPLE_RATE;
extern const char* AMEDIAFORMAT_KEY_SEI;
extern const char* AMEDIAFORMAT_KEY_SLICE_HEIGHT;
extern const char* AMEDIAFORMAT_KEY_STRIDE;
extern const char* AMEDIAFORMAT_KEY_TEMPORAL_LAYER_ID;
extern const char* AMEDIAFORMAT_KEY_TEMPORAL_LAYERING;
extern const char* AMEDIAFORMAT_KEY_TILE_HEIGHT;
extern const char* AMEDIAFORMAT_KEY_TILE_WIDTH;
extern const char* AMEDIAFORMAT_KEY_TIME_US;
extern const char* AMEDIAFORMAT_KEY_TRACK_ID;
extern const char* AMEDIAFORMAT_KEY_TRACK_INDEX;
extern const char* AMEDIAFORMAT_KEY_WIDTH;

#endif /* __ANDROID_API__ >= 21 */

#if __ANDROID_API__ >= 28
bool AMediaFormat_getDouble(AMediaFormat*, const char *name, double *out);
bool AMediaFormat_getRect(AMediaFormat*, const char *name,
                          int32_t *left, int32_t *top, int32_t *right, int32_t *bottom);

void AMediaFormat_setDouble(AMediaFormat*, const char* name, double value);
void AMediaFormat_setSize(AMediaFormat*, const char* name, size_t value);
void AMediaFormat_setRect(AMediaFormat*, const char* name,
                          int32_t left, int32_t top, int32_t right, int32_t bottom);
#endif /* __ANDROID_API__ >= 28 */

__END_DECLS

#endif // _NDK_MEDIA_FORMAT_H

/** @} */
