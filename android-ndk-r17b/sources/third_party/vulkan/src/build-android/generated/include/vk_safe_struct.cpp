// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See helper_file_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2015-2017 The Khronos Group Inc.
 * Copyright (c) 2015-2017 Valve Corporation
 * Copyright (c) 2015-2017 LunarG, Inc.
 * Copyright (c) 2015-2017 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Mark Lobodzinski <mark@lunarg.com>
 * Author: Courtney Goeltzenleuchter <courtneygo@google.com>
 * Author: Tobin Ehlis <tobine@google.com>
 * Author: Chris Forbes <chrisforbes@google.com>
 * Author: John Zulauf<jzulauf@lunarg.com>
 *
 ****************************************************************************/


#include "vk_safe_struct.h"
#include <string.h>


safe_VkApplicationInfo::safe_VkApplicationInfo(const VkApplicationInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pApplicationName(in_struct->pApplicationName),
    applicationVersion(in_struct->applicationVersion),
    pEngineName(in_struct->pEngineName),
    engineVersion(in_struct->engineVersion),
    apiVersion(in_struct->apiVersion)
{
}

safe_VkApplicationInfo::safe_VkApplicationInfo()
{}

safe_VkApplicationInfo::safe_VkApplicationInfo(const safe_VkApplicationInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pApplicationName = src.pApplicationName;
    applicationVersion = src.applicationVersion;
    pEngineName = src.pEngineName;
    engineVersion = src.engineVersion;
    apiVersion = src.apiVersion;
}

safe_VkApplicationInfo& safe_VkApplicationInfo::operator=(const safe_VkApplicationInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    pApplicationName = src.pApplicationName;
    applicationVersion = src.applicationVersion;
    pEngineName = src.pEngineName;
    engineVersion = src.engineVersion;
    apiVersion = src.apiVersion;

    return *this;
}

safe_VkApplicationInfo::~safe_VkApplicationInfo()
{
}

void safe_VkApplicationInfo::initialize(const VkApplicationInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pApplicationName = in_struct->pApplicationName;
    applicationVersion = in_struct->applicationVersion;
    pEngineName = in_struct->pEngineName;
    engineVersion = in_struct->engineVersion;
    apiVersion = in_struct->apiVersion;
}

void safe_VkApplicationInfo::initialize(const safe_VkApplicationInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pApplicationName = src->pApplicationName;
    applicationVersion = src->applicationVersion;
    pEngineName = src->pEngineName;
    engineVersion = src->engineVersion;
    apiVersion = src->apiVersion;
}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo(const VkInstanceCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    enabledLayerCount(in_struct->enabledLayerCount),
    ppEnabledLayerNames(in_struct->ppEnabledLayerNames),
    enabledExtensionCount(in_struct->enabledExtensionCount),
    ppEnabledExtensionNames(in_struct->ppEnabledExtensionNames)
{
    if (in_struct->pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(in_struct->pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo()
{}

safe_VkInstanceCreateInfo::safe_VkInstanceCreateInfo(const safe_VkInstanceCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    enabledLayerCount = src.enabledLayerCount;
    ppEnabledLayerNames = src.ppEnabledLayerNames;
    enabledExtensionCount = src.enabledExtensionCount;
    ppEnabledExtensionNames = src.ppEnabledExtensionNames;
    if (src.pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(*src.pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

safe_VkInstanceCreateInfo& safe_VkInstanceCreateInfo::operator=(const safe_VkInstanceCreateInfo& src)
{
    if (&src == this) return *this;

    if (pApplicationInfo)
        delete pApplicationInfo;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    enabledLayerCount = src.enabledLayerCount;
    ppEnabledLayerNames = src.ppEnabledLayerNames;
    enabledExtensionCount = src.enabledExtensionCount;
    ppEnabledExtensionNames = src.ppEnabledExtensionNames;
    if (src.pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(*src.pApplicationInfo);
    else
        pApplicationInfo = NULL;

    return *this;
}

safe_VkInstanceCreateInfo::~safe_VkInstanceCreateInfo()
{
    if (pApplicationInfo)
        delete pApplicationInfo;
}

void safe_VkInstanceCreateInfo::initialize(const VkInstanceCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    enabledLayerCount = in_struct->enabledLayerCount;
    ppEnabledLayerNames = in_struct->ppEnabledLayerNames;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    ppEnabledExtensionNames = in_struct->ppEnabledExtensionNames;
    if (in_struct->pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(in_struct->pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

void safe_VkInstanceCreateInfo::initialize(const safe_VkInstanceCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    enabledLayerCount = src->enabledLayerCount;
    ppEnabledLayerNames = src->ppEnabledLayerNames;
    enabledExtensionCount = src->enabledExtensionCount;
    ppEnabledExtensionNames = src->ppEnabledExtensionNames;
    if (src->pApplicationInfo)
        pApplicationInfo = new safe_VkApplicationInfo(*src->pApplicationInfo);
    else
        pApplicationInfo = NULL;
}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks(const VkAllocationCallbacks* in_struct) :
    pUserData(in_struct->pUserData),
    pfnAllocation(in_struct->pfnAllocation),
    pfnReallocation(in_struct->pfnReallocation),
    pfnFree(in_struct->pfnFree),
    pfnInternalAllocation(in_struct->pfnInternalAllocation),
    pfnInternalFree(in_struct->pfnInternalFree)
{
}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks()
{}

safe_VkAllocationCallbacks::safe_VkAllocationCallbacks(const safe_VkAllocationCallbacks& src)
{
    pUserData = src.pUserData;
    pfnAllocation = src.pfnAllocation;
    pfnReallocation = src.pfnReallocation;
    pfnFree = src.pfnFree;
    pfnInternalAllocation = src.pfnInternalAllocation;
    pfnInternalFree = src.pfnInternalFree;
}

safe_VkAllocationCallbacks& safe_VkAllocationCallbacks::operator=(const safe_VkAllocationCallbacks& src)
{
    if (&src == this) return *this;


    pUserData = src.pUserData;
    pfnAllocation = src.pfnAllocation;
    pfnReallocation = src.pfnReallocation;
    pfnFree = src.pfnFree;
    pfnInternalAllocation = src.pfnInternalAllocation;
    pfnInternalFree = src.pfnInternalFree;

    return *this;
}

safe_VkAllocationCallbacks::~safe_VkAllocationCallbacks()
{
}

void safe_VkAllocationCallbacks::initialize(const VkAllocationCallbacks* in_struct)
{
    pUserData = in_struct->pUserData;
    pfnAllocation = in_struct->pfnAllocation;
    pfnReallocation = in_struct->pfnReallocation;
    pfnFree = in_struct->pfnFree;
    pfnInternalAllocation = in_struct->pfnInternalAllocation;
    pfnInternalFree = in_struct->pfnInternalFree;
}

void safe_VkAllocationCallbacks::initialize(const safe_VkAllocationCallbacks* src)
{
    pUserData = src->pUserData;
    pfnAllocation = src->pfnAllocation;
    pfnReallocation = src->pfnReallocation;
    pfnFree = src->pfnFree;
    pfnInternalAllocation = src->pfnInternalAllocation;
    pfnInternalFree = src->pfnInternalFree;
}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queueFamilyIndex(in_struct->queueFamilyIndex),
    queueCount(in_struct->queueCount),
    pQueuePriorities(nullptr)
{
    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy ((void *)pQueuePriorities, (void *)in_struct->pQueuePriorities, sizeof(float)*in_struct->queueCount);
    }
}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo() :
    pQueuePriorities(nullptr)
{}

safe_VkDeviceQueueCreateInfo::safe_VkDeviceQueueCreateInfo(const safe_VkDeviceQueueCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueFamilyIndex = src.queueFamilyIndex;
    queueCount = src.queueCount;
    pQueuePriorities = nullptr;
    if (src.pQueuePriorities) {
        pQueuePriorities = new float[src.queueCount];
        memcpy ((void *)pQueuePriorities, (void *)src.pQueuePriorities, sizeof(float)*src.queueCount);
    }
}

safe_VkDeviceQueueCreateInfo& safe_VkDeviceQueueCreateInfo::operator=(const safe_VkDeviceQueueCreateInfo& src)
{
    if (&src == this) return *this;

    if (pQueuePriorities)
        delete[] pQueuePriorities;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueFamilyIndex = src.queueFamilyIndex;
    queueCount = src.queueCount;
    pQueuePriorities = nullptr;
    if (src.pQueuePriorities) {
        pQueuePriorities = new float[src.queueCount];
        memcpy ((void *)pQueuePriorities, (void *)src.pQueuePriorities, sizeof(float)*src.queueCount);
    }

    return *this;
}

safe_VkDeviceQueueCreateInfo::~safe_VkDeviceQueueCreateInfo()
{
    if (pQueuePriorities)
        delete[] pQueuePriorities;
}

void safe_VkDeviceQueueCreateInfo::initialize(const VkDeviceQueueCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
    queueCount = in_struct->queueCount;
    pQueuePriorities = nullptr;
    if (in_struct->pQueuePriorities) {
        pQueuePriorities = new float[in_struct->queueCount];
        memcpy ((void *)pQueuePriorities, (void *)in_struct->pQueuePriorities, sizeof(float)*in_struct->queueCount);
    }
}

void safe_VkDeviceQueueCreateInfo::initialize(const safe_VkDeviceQueueCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queueFamilyIndex = src->queueFamilyIndex;
    queueCount = src->queueCount;
    pQueuePriorities = nullptr;
    if (src->pQueuePriorities) {
        pQueuePriorities = new float[src->queueCount];
        memcpy ((void *)pQueuePriorities, (void *)src->pQueuePriorities, sizeof(float)*src->queueCount);
    }
}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo(const VkDeviceCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queueCreateInfoCount(in_struct->queueCreateInfoCount),
    pQueueCreateInfos(nullptr),
    enabledLayerCount(in_struct->enabledLayerCount),
    ppEnabledLayerNames(in_struct->ppEnabledLayerNames),
    enabledExtensionCount(in_struct->enabledExtensionCount),
    ppEnabledExtensionNames(in_struct->ppEnabledExtensionNames),
    pEnabledFeatures(nullptr)
{
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }
    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo() :
    pQueueCreateInfos(nullptr),
    pEnabledFeatures(nullptr)
{}

safe_VkDeviceCreateInfo::safe_VkDeviceCreateInfo(const safe_VkDeviceCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueCreateInfoCount = src.queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = src.enabledLayerCount;
    ppEnabledLayerNames = src.ppEnabledLayerNames;
    enabledExtensionCount = src.enabledExtensionCount;
    ppEnabledExtensionNames = src.ppEnabledExtensionNames;
    pEnabledFeatures = nullptr;
    if (queueCreateInfoCount && src.pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&src.pQueueCreateInfos[i]);
        }
    }
    if (src.pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*src.pEnabledFeatures);
    }
}

safe_VkDeviceCreateInfo& safe_VkDeviceCreateInfo::operator=(const safe_VkDeviceCreateInfo& src)
{
    if (&src == this) return *this;

    if (pQueueCreateInfos)
        delete[] pQueueCreateInfos;
    if (pEnabledFeatures)
        delete pEnabledFeatures;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueCreateInfoCount = src.queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = src.enabledLayerCount;
    ppEnabledLayerNames = src.ppEnabledLayerNames;
    enabledExtensionCount = src.enabledExtensionCount;
    ppEnabledExtensionNames = src.ppEnabledExtensionNames;
    pEnabledFeatures = nullptr;
    if (queueCreateInfoCount && src.pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&src.pQueueCreateInfos[i]);
        }
    }
    if (src.pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*src.pEnabledFeatures);
    }

    return *this;
}

safe_VkDeviceCreateInfo::~safe_VkDeviceCreateInfo()
{
    if (pQueueCreateInfos)
        delete[] pQueueCreateInfos;
    if (pEnabledFeatures)
        delete pEnabledFeatures;
}

void safe_VkDeviceCreateInfo::initialize(const VkDeviceCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queueCreateInfoCount = in_struct->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = in_struct->enabledLayerCount;
    ppEnabledLayerNames = in_struct->ppEnabledLayerNames;
    enabledExtensionCount = in_struct->enabledExtensionCount;
    ppEnabledExtensionNames = in_struct->ppEnabledExtensionNames;
    pEnabledFeatures = nullptr;
    if (queueCreateInfoCount && in_struct->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&in_struct->pQueueCreateInfos[i]);
        }
    }
    if (in_struct->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*in_struct->pEnabledFeatures);
    }
}

void safe_VkDeviceCreateInfo::initialize(const safe_VkDeviceCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queueCreateInfoCount = src->queueCreateInfoCount;
    pQueueCreateInfos = nullptr;
    enabledLayerCount = src->enabledLayerCount;
    ppEnabledLayerNames = src->ppEnabledLayerNames;
    enabledExtensionCount = src->enabledExtensionCount;
    ppEnabledExtensionNames = src->ppEnabledExtensionNames;
    pEnabledFeatures = nullptr;
    if (queueCreateInfoCount && src->pQueueCreateInfos) {
        pQueueCreateInfos = new safe_VkDeviceQueueCreateInfo[queueCreateInfoCount];
        for (uint32_t i=0; i<queueCreateInfoCount; ++i) {
            pQueueCreateInfos[i].initialize(&src->pQueueCreateInfos[i]);
        }
    }
    if (src->pEnabledFeatures) {
        pEnabledFeatures = new VkPhysicalDeviceFeatures(*src->pEnabledFeatures);
    }
}

safe_VkSubmitInfo::safe_VkSubmitInfo(const VkSubmitInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphores(nullptr),
    pWaitDstStageMask(nullptr),
    commandBufferCount(in_struct->commandBufferCount),
    pCommandBuffers(nullptr),
    signalSemaphoreCount(in_struct->signalSemaphoreCount),
    pSignalSemaphores(nullptr)
{
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)in_struct->pWaitDstStageMask, sizeof(VkPipelineStageFlags)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)in_struct->pCommandBuffers, sizeof(VkCommandBuffer)*in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

safe_VkSubmitInfo::safe_VkSubmitInfo() :
    pWaitSemaphores(nullptr),
    pWaitDstStageMask(nullptr),
    pCommandBuffers(nullptr),
    pSignalSemaphores(nullptr)
{}

safe_VkSubmitInfo::safe_VkSubmitInfo(const safe_VkSubmitInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = src.commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (src.pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[src.waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)src.pWaitDstStageMask, sizeof(VkPipelineStageFlags)*src.waitSemaphoreCount);
    }
    if (src.pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[src.commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)src.pCommandBuffers, sizeof(VkCommandBuffer)*src.commandBufferCount);
    }
    if (signalSemaphoreCount && src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src.pSignalSemaphores[i];
        }
    }
}

safe_VkSubmitInfo& safe_VkSubmitInfo::operator=(const safe_VkSubmitInfo& src)
{
    if (&src == this) return *this;

    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pWaitDstStageMask)
        delete[] pWaitDstStageMask;
    if (pCommandBuffers)
        delete[] pCommandBuffers;
    if (pSignalSemaphores)
        delete[] pSignalSemaphores;

    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = src.commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (src.pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[src.waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)src.pWaitDstStageMask, sizeof(VkPipelineStageFlags)*src.waitSemaphoreCount);
    }
    if (src.pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[src.commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)src.pCommandBuffers, sizeof(VkCommandBuffer)*src.commandBufferCount);
    }
    if (signalSemaphoreCount && src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src.pSignalSemaphores[i];
        }
    }

    return *this;
}

safe_VkSubmitInfo::~safe_VkSubmitInfo()
{
    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pWaitDstStageMask)
        delete[] pWaitDstStageMask;
    if (pCommandBuffers)
        delete[] pCommandBuffers;
    if (pSignalSemaphores)
        delete[] pSignalSemaphores;
}

void safe_VkSubmitInfo::initialize(const VkSubmitInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (in_struct->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)in_struct->pWaitDstStageMask, sizeof(VkPipelineStageFlags)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)in_struct->pCommandBuffers, sizeof(VkCommandBuffer)*in_struct->commandBufferCount);
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void safe_VkSubmitInfo::initialize(const safe_VkSubmitInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    pWaitDstStageMask = nullptr;
    commandBufferCount = src->commandBufferCount;
    pCommandBuffers = nullptr;
    signalSemaphoreCount = src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src->pWaitSemaphores[i];
        }
    }
    if (src->pWaitDstStageMask) {
        pWaitDstStageMask = new VkPipelineStageFlags[src->waitSemaphoreCount];
        memcpy ((void *)pWaitDstStageMask, (void *)src->pWaitDstStageMask, sizeof(VkPipelineStageFlags)*src->waitSemaphoreCount);
    }
    if (src->pCommandBuffers) {
        pCommandBuffers = new VkCommandBuffer[src->commandBufferCount];
        memcpy ((void *)pCommandBuffers, (void *)src->pCommandBuffers, sizeof(VkCommandBuffer)*src->commandBufferCount);
    }
    if (signalSemaphoreCount && src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src->pSignalSemaphores[i];
        }
    }
}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo(const VkMemoryAllocateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    allocationSize(in_struct->allocationSize),
    memoryTypeIndex(in_struct->memoryTypeIndex)
{
}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo()
{}

safe_VkMemoryAllocateInfo::safe_VkMemoryAllocateInfo(const safe_VkMemoryAllocateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    allocationSize = src.allocationSize;
    memoryTypeIndex = src.memoryTypeIndex;
}

safe_VkMemoryAllocateInfo& safe_VkMemoryAllocateInfo::operator=(const safe_VkMemoryAllocateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    allocationSize = src.allocationSize;
    memoryTypeIndex = src.memoryTypeIndex;

    return *this;
}

safe_VkMemoryAllocateInfo::~safe_VkMemoryAllocateInfo()
{
}

void safe_VkMemoryAllocateInfo::initialize(const VkMemoryAllocateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    allocationSize = in_struct->allocationSize;
    memoryTypeIndex = in_struct->memoryTypeIndex;
}

void safe_VkMemoryAllocateInfo::initialize(const safe_VkMemoryAllocateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    allocationSize = src->allocationSize;
    memoryTypeIndex = src->memoryTypeIndex;
}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange(const VkMappedMemoryRange* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memory(in_struct->memory),
    offset(in_struct->offset),
    size(in_struct->size)
{
}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange()
{}

safe_VkMappedMemoryRange::safe_VkMappedMemoryRange(const safe_VkMappedMemoryRange& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memory = src.memory;
    offset = src.offset;
    size = src.size;
}

safe_VkMappedMemoryRange& safe_VkMappedMemoryRange::operator=(const safe_VkMappedMemoryRange& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memory = src.memory;
    offset = src.offset;
    size = src.size;

    return *this;
}

safe_VkMappedMemoryRange::~safe_VkMappedMemoryRange()
{
}

void safe_VkMappedMemoryRange::initialize(const VkMappedMemoryRange* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memory = in_struct->memory;
    offset = in_struct->offset;
    size = in_struct->size;
}

void safe_VkMappedMemoryRange::initialize(const safe_VkMappedMemoryRange* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memory = src->memory;
    offset = src->offset;
    size = src->size;
}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo* in_struct) :
    buffer(in_struct->buffer),
    bindCount(in_struct->bindCount),
    pBinds(nullptr)
{
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo() :
    pBinds(nullptr)
{}

safe_VkSparseBufferMemoryBindInfo::safe_VkSparseBufferMemoryBindInfo(const safe_VkSparseBufferMemoryBindInfo& src)
{
    buffer = src.buffer;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }
}

safe_VkSparseBufferMemoryBindInfo& safe_VkSparseBufferMemoryBindInfo::operator=(const safe_VkSparseBufferMemoryBindInfo& src)
{
    if (&src == this) return *this;

    if (pBinds)
        delete[] pBinds;

    buffer = src.buffer;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }

    return *this;
}

safe_VkSparseBufferMemoryBindInfo::~safe_VkSparseBufferMemoryBindInfo()
{
    if (pBinds)
        delete[] pBinds;
}

void safe_VkSparseBufferMemoryBindInfo::initialize(const VkSparseBufferMemoryBindInfo* in_struct)
{
    buffer = in_struct->buffer;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseBufferMemoryBindInfo::initialize(const safe_VkSparseBufferMemoryBindInfo* src)
{
    buffer = src->buffer;
    bindCount = src->bindCount;
    pBinds = nullptr;
    if (bindCount && src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src->pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo* in_struct) :
    image(in_struct->image),
    bindCount(in_struct->bindCount),
    pBinds(nullptr)
{
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo() :
    pBinds(nullptr)
{}

safe_VkSparseImageOpaqueMemoryBindInfo::safe_VkSparseImageOpaqueMemoryBindInfo(const safe_VkSparseImageOpaqueMemoryBindInfo& src)
{
    image = src.image;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }
}

safe_VkSparseImageOpaqueMemoryBindInfo& safe_VkSparseImageOpaqueMemoryBindInfo::operator=(const safe_VkSparseImageOpaqueMemoryBindInfo& src)
{
    if (&src == this) return *this;

    if (pBinds)
        delete[] pBinds;

    image = src.image;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }

    return *this;
}

safe_VkSparseImageOpaqueMemoryBindInfo::~safe_VkSparseImageOpaqueMemoryBindInfo()
{
    if (pBinds)
        delete[] pBinds;
}

void safe_VkSparseImageOpaqueMemoryBindInfo::initialize(const VkSparseImageOpaqueMemoryBindInfo* in_struct)
{
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseImageOpaqueMemoryBindInfo::initialize(const safe_VkSparseImageOpaqueMemoryBindInfo* src)
{
    image = src->image;
    bindCount = src->bindCount;
    pBinds = nullptr;
    if (bindCount && src->pBinds) {
        pBinds = new VkSparseMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src->pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo* in_struct) :
    image(in_struct->image),
    bindCount(in_struct->bindCount),
    pBinds(nullptr)
{
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo() :
    pBinds(nullptr)
{}

safe_VkSparseImageMemoryBindInfo::safe_VkSparseImageMemoryBindInfo(const safe_VkSparseImageMemoryBindInfo& src)
{
    image = src.image;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }
}

safe_VkSparseImageMemoryBindInfo& safe_VkSparseImageMemoryBindInfo::operator=(const safe_VkSparseImageMemoryBindInfo& src)
{
    if (&src == this) return *this;

    if (pBinds)
        delete[] pBinds;

    image = src.image;
    bindCount = src.bindCount;
    pBinds = nullptr;
    if (bindCount && src.pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src.pBinds[i];
        }
    }

    return *this;
}

safe_VkSparseImageMemoryBindInfo::~safe_VkSparseImageMemoryBindInfo()
{
    if (pBinds)
        delete[] pBinds;
}

void safe_VkSparseImageMemoryBindInfo::initialize(const VkSparseImageMemoryBindInfo* in_struct)
{
    image = in_struct->image;
    bindCount = in_struct->bindCount;
    pBinds = nullptr;
    if (bindCount && in_struct->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = in_struct->pBinds[i];
        }
    }
}

void safe_VkSparseImageMemoryBindInfo::initialize(const safe_VkSparseImageMemoryBindInfo* src)
{
    image = src->image;
    bindCount = src->bindCount;
    pBinds = nullptr;
    if (bindCount && src->pBinds) {
        pBinds = new VkSparseImageMemoryBind[bindCount];
        for (uint32_t i=0; i<bindCount; ++i) {
            pBinds[i] = src->pBinds[i];
        }
    }
}

safe_VkBindSparseInfo::safe_VkBindSparseInfo(const VkBindSparseInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphores(nullptr),
    bufferBindCount(in_struct->bufferBindCount),
    pBufferBinds(nullptr),
    imageOpaqueBindCount(in_struct->imageOpaqueBindCount),
    pImageOpaqueBinds(nullptr),
    imageBindCount(in_struct->imageBindCount),
    pImageBinds(nullptr),
    signalSemaphoreCount(in_struct->signalSemaphoreCount),
    pSignalSemaphores(nullptr)
{
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

safe_VkBindSparseInfo::safe_VkBindSparseInfo() :
    pWaitSemaphores(nullptr),
    pBufferBinds(nullptr),
    pImageOpaqueBinds(nullptr),
    pImageBinds(nullptr),
    pSignalSemaphores(nullptr)
{}

safe_VkBindSparseInfo::safe_VkBindSparseInfo(const safe_VkBindSparseInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = src.bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = src.imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = src.imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && src.pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&src.pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && src.pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&src.pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && src.pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&src.pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src.pSignalSemaphores[i];
        }
    }
}

safe_VkBindSparseInfo& safe_VkBindSparseInfo::operator=(const safe_VkBindSparseInfo& src)
{
    if (&src == this) return *this;

    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pBufferBinds)
        delete[] pBufferBinds;
    if (pImageOpaqueBinds)
        delete[] pImageOpaqueBinds;
    if (pImageBinds)
        delete[] pImageBinds;
    if (pSignalSemaphores)
        delete[] pSignalSemaphores;

    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = src.bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = src.imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = src.imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && src.pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&src.pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && src.pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&src.pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && src.pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&src.pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && src.pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src.pSignalSemaphores[i];
        }
    }

    return *this;
}

safe_VkBindSparseInfo::~safe_VkBindSparseInfo()
{
    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pBufferBinds)
        delete[] pBufferBinds;
    if (pImageOpaqueBinds)
        delete[] pImageOpaqueBinds;
    if (pImageBinds)
        delete[] pImageBinds;
    if (pSignalSemaphores)
        delete[] pSignalSemaphores;
}

void safe_VkBindSparseInfo::initialize(const VkBindSparseInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = in_struct->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = in_struct->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = in_struct->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && in_struct->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&in_struct->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && in_struct->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&in_struct->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && in_struct->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&in_struct->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && in_struct->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = in_struct->pSignalSemaphores[i];
        }
    }
}

void safe_VkBindSparseInfo::initialize(const safe_VkBindSparseInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    bufferBindCount = src->bufferBindCount;
    pBufferBinds = nullptr;
    imageOpaqueBindCount = src->imageOpaqueBindCount;
    pImageOpaqueBinds = nullptr;
    imageBindCount = src->imageBindCount;
    pImageBinds = nullptr;
    signalSemaphoreCount = src->signalSemaphoreCount;
    pSignalSemaphores = nullptr;
    if (waitSemaphoreCount && src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src->pWaitSemaphores[i];
        }
    }
    if (bufferBindCount && src->pBufferBinds) {
        pBufferBinds = new safe_VkSparseBufferMemoryBindInfo[bufferBindCount];
        for (uint32_t i=0; i<bufferBindCount; ++i) {
            pBufferBinds[i].initialize(&src->pBufferBinds[i]);
        }
    }
    if (imageOpaqueBindCount && src->pImageOpaqueBinds) {
        pImageOpaqueBinds = new safe_VkSparseImageOpaqueMemoryBindInfo[imageOpaqueBindCount];
        for (uint32_t i=0; i<imageOpaqueBindCount; ++i) {
            pImageOpaqueBinds[i].initialize(&src->pImageOpaqueBinds[i]);
        }
    }
    if (imageBindCount && src->pImageBinds) {
        pImageBinds = new safe_VkSparseImageMemoryBindInfo[imageBindCount];
        for (uint32_t i=0; i<imageBindCount; ++i) {
            pImageBinds[i].initialize(&src->pImageBinds[i]);
        }
    }
    if (signalSemaphoreCount && src->pSignalSemaphores) {
        pSignalSemaphores = new VkSemaphore[signalSemaphoreCount];
        for (uint32_t i=0; i<signalSemaphoreCount; ++i) {
            pSignalSemaphores[i] = src->pSignalSemaphores[i];
        }
    }
}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo(const VkFenceCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo()
{}

safe_VkFenceCreateInfo::safe_VkFenceCreateInfo(const safe_VkFenceCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
}

safe_VkFenceCreateInfo& safe_VkFenceCreateInfo::operator=(const safe_VkFenceCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;

    return *this;
}

safe_VkFenceCreateInfo::~safe_VkFenceCreateInfo()
{
}

void safe_VkFenceCreateInfo::initialize(const VkFenceCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
}

void safe_VkFenceCreateInfo::initialize(const safe_VkFenceCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo()
{}

safe_VkSemaphoreCreateInfo::safe_VkSemaphoreCreateInfo(const safe_VkSemaphoreCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
}

safe_VkSemaphoreCreateInfo& safe_VkSemaphoreCreateInfo::operator=(const safe_VkSemaphoreCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;

    return *this;
}

safe_VkSemaphoreCreateInfo::~safe_VkSemaphoreCreateInfo()
{
}

void safe_VkSemaphoreCreateInfo::initialize(const VkSemaphoreCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
}

void safe_VkSemaphoreCreateInfo::initialize(const safe_VkSemaphoreCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
}

safe_VkEventCreateInfo::safe_VkEventCreateInfo(const VkEventCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
}

safe_VkEventCreateInfo::safe_VkEventCreateInfo()
{}

safe_VkEventCreateInfo::safe_VkEventCreateInfo(const safe_VkEventCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
}

safe_VkEventCreateInfo& safe_VkEventCreateInfo::operator=(const safe_VkEventCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;

    return *this;
}

safe_VkEventCreateInfo::~safe_VkEventCreateInfo()
{
}

void safe_VkEventCreateInfo::initialize(const VkEventCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
}

void safe_VkEventCreateInfo::initialize(const safe_VkEventCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queryType(in_struct->queryType),
    queryCount(in_struct->queryCount),
    pipelineStatistics(in_struct->pipelineStatistics)
{
}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo()
{}

safe_VkQueryPoolCreateInfo::safe_VkQueryPoolCreateInfo(const safe_VkQueryPoolCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queryType = src.queryType;
    queryCount = src.queryCount;
    pipelineStatistics = src.pipelineStatistics;
}

safe_VkQueryPoolCreateInfo& safe_VkQueryPoolCreateInfo::operator=(const safe_VkQueryPoolCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queryType = src.queryType;
    queryCount = src.queryCount;
    pipelineStatistics = src.pipelineStatistics;

    return *this;
}

safe_VkQueryPoolCreateInfo::~safe_VkQueryPoolCreateInfo()
{
}

void safe_VkQueryPoolCreateInfo::initialize(const VkQueryPoolCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queryType = in_struct->queryType;
    queryCount = in_struct->queryCount;
    pipelineStatistics = in_struct->pipelineStatistics;
}

void safe_VkQueryPoolCreateInfo::initialize(const safe_VkQueryPoolCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queryType = src->queryType;
    queryCount = src->queryCount;
    pipelineStatistics = src->pipelineStatistics;
}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo(const VkBufferCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    size(in_struct->size),
    usage(in_struct->usage),
    sharingMode(in_struct->sharingMode),
    queueFamilyIndexCount(in_struct->queueFamilyIndexCount),
    pQueueFamilyIndices(nullptr)
{
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo() :
    pQueueFamilyIndices(nullptr)
{}

safe_VkBufferCreateInfo::safe_VkBufferCreateInfo(const safe_VkBufferCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    size = src.size;
    usage = src.usage;
    sharingMode = src.sharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }
}

safe_VkBufferCreateInfo& safe_VkBufferCreateInfo::operator=(const safe_VkBufferCreateInfo& src)
{
    if (&src == this) return *this;

    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    size = src.size;
    usage = src.usage;
    sharingMode = src.sharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }

    return *this;
}

safe_VkBufferCreateInfo::~safe_VkBufferCreateInfo()
{
    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;
}

void safe_VkBufferCreateInfo::initialize(const VkBufferCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    size = in_struct->size;
    usage = in_struct->usage;
    sharingMode = in_struct->sharingMode;
    queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

void safe_VkBufferCreateInfo::initialize(const safe_VkBufferCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    size = src->size;
    usage = src->usage;
    sharingMode = src->sharingMode;
    queueFamilyIndexCount = src->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    if (src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src->pQueueFamilyIndices, sizeof(uint32_t)*src->queueFamilyIndexCount);
    }
}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo(const VkBufferViewCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    buffer(in_struct->buffer),
    format(in_struct->format),
    offset(in_struct->offset),
    range(in_struct->range)
{
}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo()
{}

safe_VkBufferViewCreateInfo::safe_VkBufferViewCreateInfo(const safe_VkBufferViewCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    buffer = src.buffer;
    format = src.format;
    offset = src.offset;
    range = src.range;
}

safe_VkBufferViewCreateInfo& safe_VkBufferViewCreateInfo::operator=(const safe_VkBufferViewCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    buffer = src.buffer;
    format = src.format;
    offset = src.offset;
    range = src.range;

    return *this;
}

safe_VkBufferViewCreateInfo::~safe_VkBufferViewCreateInfo()
{
}

void safe_VkBufferViewCreateInfo::initialize(const VkBufferViewCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    buffer = in_struct->buffer;
    format = in_struct->format;
    offset = in_struct->offset;
    range = in_struct->range;
}

void safe_VkBufferViewCreateInfo::initialize(const safe_VkBufferViewCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    buffer = src->buffer;
    format = src->format;
    offset = src->offset;
    range = src->range;
}

safe_VkImageCreateInfo::safe_VkImageCreateInfo(const VkImageCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    imageType(in_struct->imageType),
    format(in_struct->format),
    extent(in_struct->extent),
    mipLevels(in_struct->mipLevels),
    arrayLayers(in_struct->arrayLayers),
    samples(in_struct->samples),
    tiling(in_struct->tiling),
    usage(in_struct->usage),
    sharingMode(in_struct->sharingMode),
    queueFamilyIndexCount(in_struct->queueFamilyIndexCount),
    pQueueFamilyIndices(nullptr),
    initialLayout(in_struct->initialLayout)
{
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

safe_VkImageCreateInfo::safe_VkImageCreateInfo() :
    pQueueFamilyIndices(nullptr)
{}

safe_VkImageCreateInfo::safe_VkImageCreateInfo(const safe_VkImageCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    imageType = src.imageType;
    format = src.format;
    extent = src.extent;
    mipLevels = src.mipLevels;
    arrayLayers = src.arrayLayers;
    samples = src.samples;
    tiling = src.tiling;
    usage = src.usage;
    sharingMode = src.sharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    initialLayout = src.initialLayout;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }
}

safe_VkImageCreateInfo& safe_VkImageCreateInfo::operator=(const safe_VkImageCreateInfo& src)
{
    if (&src == this) return *this;

    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    imageType = src.imageType;
    format = src.format;
    extent = src.extent;
    mipLevels = src.mipLevels;
    arrayLayers = src.arrayLayers;
    samples = src.samples;
    tiling = src.tiling;
    usage = src.usage;
    sharingMode = src.sharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    initialLayout = src.initialLayout;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }

    return *this;
}

safe_VkImageCreateInfo::~safe_VkImageCreateInfo()
{
    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;
}

void safe_VkImageCreateInfo::initialize(const VkImageCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    imageType = in_struct->imageType;
    format = in_struct->format;
    extent = in_struct->extent;
    mipLevels = in_struct->mipLevels;
    arrayLayers = in_struct->arrayLayers;
    samples = in_struct->samples;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    sharingMode = in_struct->sharingMode;
    queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    initialLayout = in_struct->initialLayout;
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

void safe_VkImageCreateInfo::initialize(const safe_VkImageCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    imageType = src->imageType;
    format = src->format;
    extent = src->extent;
    mipLevels = src->mipLevels;
    arrayLayers = src->arrayLayers;
    samples = src->samples;
    tiling = src->tiling;
    usage = src->usage;
    sharingMode = src->sharingMode;
    queueFamilyIndexCount = src->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    initialLayout = src->initialLayout;
    if (src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src->pQueueFamilyIndices, sizeof(uint32_t)*src->queueFamilyIndexCount);
    }
}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo(const VkImageViewCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    image(in_struct->image),
    viewType(in_struct->viewType),
    format(in_struct->format),
    components(in_struct->components),
    subresourceRange(in_struct->subresourceRange)
{
}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo()
{}

safe_VkImageViewCreateInfo::safe_VkImageViewCreateInfo(const safe_VkImageViewCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    image = src.image;
    viewType = src.viewType;
    format = src.format;
    components = src.components;
    subresourceRange = src.subresourceRange;
}

safe_VkImageViewCreateInfo& safe_VkImageViewCreateInfo::operator=(const safe_VkImageViewCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    image = src.image;
    viewType = src.viewType;
    format = src.format;
    components = src.components;
    subresourceRange = src.subresourceRange;

    return *this;
}

safe_VkImageViewCreateInfo::~safe_VkImageViewCreateInfo()
{
}

void safe_VkImageViewCreateInfo::initialize(const VkImageViewCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    image = in_struct->image;
    viewType = in_struct->viewType;
    format = in_struct->format;
    components = in_struct->components;
    subresourceRange = in_struct->subresourceRange;
}

void safe_VkImageViewCreateInfo::initialize(const safe_VkImageViewCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    image = src->image;
    viewType = src->viewType;
    format = src->format;
    components = src->components;
    subresourceRange = src->subresourceRange;
}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    codeSize(in_struct->codeSize),
    pCode(nullptr)
{
    if (in_struct->pCode) {
        pCode = reinterpret_cast<uint32_t *>(new uint8_t[codeSize]);
        memcpy((void *)pCode, (void *)in_struct->pCode, codeSize);
    }
}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo() :
    pCode(nullptr)
{}

safe_VkShaderModuleCreateInfo::safe_VkShaderModuleCreateInfo(const safe_VkShaderModuleCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    codeSize = src.codeSize;
    pCode = nullptr;
    if (src.pCode) {
        pCode = reinterpret_cast<uint32_t *>(new uint8_t[codeSize]);
        memcpy((void *)pCode, (void *)src.pCode, codeSize);
    }
}

safe_VkShaderModuleCreateInfo& safe_VkShaderModuleCreateInfo::operator=(const safe_VkShaderModuleCreateInfo& src)
{
    if (&src == this) return *this;

    if (pCode)
        delete[] reinterpret_cast<const uint8_t *>(pCode);

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    codeSize = src.codeSize;
    pCode = nullptr;
    if (src.pCode) {
        pCode = reinterpret_cast<uint32_t *>(new uint8_t[codeSize]);
        memcpy((void *)pCode, (void *)src.pCode, codeSize);
    }

    return *this;
}

safe_VkShaderModuleCreateInfo::~safe_VkShaderModuleCreateInfo()
{
    if (pCode)
        delete[] reinterpret_cast<const uint8_t *>(pCode);
}

void safe_VkShaderModuleCreateInfo::initialize(const VkShaderModuleCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    codeSize = in_struct->codeSize;
    pCode = nullptr;
    if (in_struct->pCode) {
        pCode = reinterpret_cast<uint32_t *>(new uint8_t[codeSize]);
        memcpy((void *)pCode, (void *)in_struct->pCode, codeSize);
    }
}

void safe_VkShaderModuleCreateInfo::initialize(const safe_VkShaderModuleCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    codeSize = src->codeSize;
    pCode = nullptr;
    if (src->pCode) {
        pCode = reinterpret_cast<uint32_t *>(new uint8_t[codeSize]);
        memcpy((void *)pCode, (void *)src->pCode, codeSize);
    }
}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    initialDataSize(in_struct->initialDataSize),
    pInitialData(in_struct->pInitialData)
{
}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo()
{}

safe_VkPipelineCacheCreateInfo::safe_VkPipelineCacheCreateInfo(const safe_VkPipelineCacheCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    initialDataSize = src.initialDataSize;
    pInitialData = src.pInitialData;
}

safe_VkPipelineCacheCreateInfo& safe_VkPipelineCacheCreateInfo::operator=(const safe_VkPipelineCacheCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    initialDataSize = src.initialDataSize;
    pInitialData = src.pInitialData;

    return *this;
}

safe_VkPipelineCacheCreateInfo::~safe_VkPipelineCacheCreateInfo()
{
}

void safe_VkPipelineCacheCreateInfo::initialize(const VkPipelineCacheCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    initialDataSize = in_struct->initialDataSize;
    pInitialData = in_struct->pInitialData;
}

void safe_VkPipelineCacheCreateInfo::initialize(const safe_VkPipelineCacheCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    initialDataSize = src->initialDataSize;
    pInitialData = src->pInitialData;
}

safe_VkSpecializationInfo::safe_VkSpecializationInfo(const VkSpecializationInfo* in_struct) :
    mapEntryCount(in_struct->mapEntryCount),
    pMapEntries(nullptr),
    dataSize(in_struct->dataSize),
    pData(in_struct->pData)
{
    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry)*in_struct->mapEntryCount);
    }
}

safe_VkSpecializationInfo::safe_VkSpecializationInfo() :
    pMapEntries(nullptr)
{}

safe_VkSpecializationInfo::safe_VkSpecializationInfo(const safe_VkSpecializationInfo& src)
{
    mapEntryCount = src.mapEntryCount;
    pMapEntries = nullptr;
    dataSize = src.dataSize;
    pData = src.pData;
    if (src.pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[src.mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)src.pMapEntries, sizeof(VkSpecializationMapEntry)*src.mapEntryCount);
    }
}

safe_VkSpecializationInfo& safe_VkSpecializationInfo::operator=(const safe_VkSpecializationInfo& src)
{
    if (&src == this) return *this;

    if (pMapEntries)
        delete[] pMapEntries;

    mapEntryCount = src.mapEntryCount;
    pMapEntries = nullptr;
    dataSize = src.dataSize;
    pData = src.pData;
    if (src.pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[src.mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)src.pMapEntries, sizeof(VkSpecializationMapEntry)*src.mapEntryCount);
    }

    return *this;
}

safe_VkSpecializationInfo::~safe_VkSpecializationInfo()
{
    if (pMapEntries)
        delete[] pMapEntries;
}

void safe_VkSpecializationInfo::initialize(const VkSpecializationInfo* in_struct)
{
    mapEntryCount = in_struct->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = in_struct->dataSize;
    pData = in_struct->pData;
    if (in_struct->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[in_struct->mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)in_struct->pMapEntries, sizeof(VkSpecializationMapEntry)*in_struct->mapEntryCount);
    }
}

void safe_VkSpecializationInfo::initialize(const safe_VkSpecializationInfo* src)
{
    mapEntryCount = src->mapEntryCount;
    pMapEntries = nullptr;
    dataSize = src->dataSize;
    pData = src->pData;
    if (src->pMapEntries) {
        pMapEntries = new VkSpecializationMapEntry[src->mapEntryCount];
        memcpy ((void *)pMapEntries, (void *)src->pMapEntries, sizeof(VkSpecializationMapEntry)*src->mapEntryCount);
    }
}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    stage(in_struct->stage),
    module(in_struct->module),
    pName(in_struct->pName)
{
    if (in_struct->pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo()
{}

safe_VkPipelineShaderStageCreateInfo::safe_VkPipelineShaderStageCreateInfo(const safe_VkPipelineShaderStageCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stage = src.stage;
    module = src.module;
    pName = src.pName;
    if (src.pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(*src.pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

safe_VkPipelineShaderStageCreateInfo& safe_VkPipelineShaderStageCreateInfo::operator=(const safe_VkPipelineShaderStageCreateInfo& src)
{
    if (&src == this) return *this;

    if (pSpecializationInfo)
        delete pSpecializationInfo;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stage = src.stage;
    module = src.module;
    pName = src.pName;
    if (src.pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(*src.pSpecializationInfo);
    else
        pSpecializationInfo = NULL;

    return *this;
}

safe_VkPipelineShaderStageCreateInfo::~safe_VkPipelineShaderStageCreateInfo()
{
    if (pSpecializationInfo)
        delete pSpecializationInfo;
}

void safe_VkPipelineShaderStageCreateInfo::initialize(const VkPipelineShaderStageCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    stage = in_struct->stage;
    module = in_struct->module;
    pName = in_struct->pName;
    if (in_struct->pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(in_struct->pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

void safe_VkPipelineShaderStageCreateInfo::initialize(const safe_VkPipelineShaderStageCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    stage = src->stage;
    module = src->module;
    pName = src->pName;
    if (src->pSpecializationInfo)
        pSpecializationInfo = new safe_VkSpecializationInfo(*src->pSpecializationInfo);
    else
        pSpecializationInfo = NULL;
}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    vertexBindingDescriptionCount(in_struct->vertexBindingDescriptionCount),
    pVertexBindingDescriptions(nullptr),
    vertexAttributeDescriptionCount(in_struct->vertexAttributeDescriptionCount),
    pVertexAttributeDescriptions(nullptr)
{
    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)in_struct->pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*in_struct->vertexBindingDescriptionCount);
    }
    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)in_struct->pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*in_struct->vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo() :
    pVertexBindingDescriptions(nullptr),
    pVertexAttributeDescriptions(nullptr)
{}

safe_VkPipelineVertexInputStateCreateInfo::safe_VkPipelineVertexInputStateCreateInfo(const safe_VkPipelineVertexInputStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    vertexBindingDescriptionCount = src.vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = src.vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    if (src.pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[src.vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)src.pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*src.vertexBindingDescriptionCount);
    }
    if (src.pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[src.vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)src.pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*src.vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineVertexInputStateCreateInfo& safe_VkPipelineVertexInputStateCreateInfo::operator=(const safe_VkPipelineVertexInputStateCreateInfo& src)
{
    if (&src == this) return *this;

    if (pVertexBindingDescriptions)
        delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions)
        delete[] pVertexAttributeDescriptions;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    vertexBindingDescriptionCount = src.vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = src.vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    if (src.pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[src.vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)src.pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*src.vertexBindingDescriptionCount);
    }
    if (src.pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[src.vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)src.pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*src.vertexAttributeDescriptionCount);
    }

    return *this;
}

safe_VkPipelineVertexInputStateCreateInfo::~safe_VkPipelineVertexInputStateCreateInfo()
{
    if (pVertexBindingDescriptions)
        delete[] pVertexBindingDescriptions;
    if (pVertexAttributeDescriptions)
        delete[] pVertexAttributeDescriptions;
}

void safe_VkPipelineVertexInputStateCreateInfo::initialize(const VkPipelineVertexInputStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    vertexBindingDescriptionCount = in_struct->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = in_struct->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    if (in_struct->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[in_struct->vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)in_struct->pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*in_struct->vertexBindingDescriptionCount);
    }
    if (in_struct->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[in_struct->vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)in_struct->pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*in_struct->vertexAttributeDescriptionCount);
    }
}

void safe_VkPipelineVertexInputStateCreateInfo::initialize(const safe_VkPipelineVertexInputStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    vertexBindingDescriptionCount = src->vertexBindingDescriptionCount;
    pVertexBindingDescriptions = nullptr;
    vertexAttributeDescriptionCount = src->vertexAttributeDescriptionCount;
    pVertexAttributeDescriptions = nullptr;
    if (src->pVertexBindingDescriptions) {
        pVertexBindingDescriptions = new VkVertexInputBindingDescription[src->vertexBindingDescriptionCount];
        memcpy ((void *)pVertexBindingDescriptions, (void *)src->pVertexBindingDescriptions, sizeof(VkVertexInputBindingDescription)*src->vertexBindingDescriptionCount);
    }
    if (src->pVertexAttributeDescriptions) {
        pVertexAttributeDescriptions = new VkVertexInputAttributeDescription[src->vertexAttributeDescriptionCount];
        memcpy ((void *)pVertexAttributeDescriptions, (void *)src->pVertexAttributeDescriptions, sizeof(VkVertexInputAttributeDescription)*src->vertexAttributeDescriptionCount);
    }
}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    topology(in_struct->topology),
    primitiveRestartEnable(in_struct->primitiveRestartEnable)
{
}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo()
{}

safe_VkPipelineInputAssemblyStateCreateInfo::safe_VkPipelineInputAssemblyStateCreateInfo(const safe_VkPipelineInputAssemblyStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    topology = src.topology;
    primitiveRestartEnable = src.primitiveRestartEnable;
}

safe_VkPipelineInputAssemblyStateCreateInfo& safe_VkPipelineInputAssemblyStateCreateInfo::operator=(const safe_VkPipelineInputAssemblyStateCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    topology = src.topology;
    primitiveRestartEnable = src.primitiveRestartEnable;

    return *this;
}

safe_VkPipelineInputAssemblyStateCreateInfo::~safe_VkPipelineInputAssemblyStateCreateInfo()
{
}

void safe_VkPipelineInputAssemblyStateCreateInfo::initialize(const VkPipelineInputAssemblyStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    topology = in_struct->topology;
    primitiveRestartEnable = in_struct->primitiveRestartEnable;
}

void safe_VkPipelineInputAssemblyStateCreateInfo::initialize(const safe_VkPipelineInputAssemblyStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    topology = src->topology;
    primitiveRestartEnable = src->primitiveRestartEnable;
}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    patchControlPoints(in_struct->patchControlPoints)
{
}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo()
{}

safe_VkPipelineTessellationStateCreateInfo::safe_VkPipelineTessellationStateCreateInfo(const safe_VkPipelineTessellationStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    patchControlPoints = src.patchControlPoints;
}

safe_VkPipelineTessellationStateCreateInfo& safe_VkPipelineTessellationStateCreateInfo::operator=(const safe_VkPipelineTessellationStateCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    patchControlPoints = src.patchControlPoints;

    return *this;
}

safe_VkPipelineTessellationStateCreateInfo::~safe_VkPipelineTessellationStateCreateInfo()
{
}

void safe_VkPipelineTessellationStateCreateInfo::initialize(const VkPipelineTessellationStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    patchControlPoints = in_struct->patchControlPoints;
}

void safe_VkPipelineTessellationStateCreateInfo::initialize(const safe_VkPipelineTessellationStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    patchControlPoints = src->patchControlPoints;
}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo* in_struct, const bool is_dynamic_viewports, const bool is_dynamic_scissors) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    viewportCount(in_struct->viewportCount),
    pViewports(nullptr),
    scissorCount(in_struct->scissorCount),
    pScissors(nullptr)
{
    if (in_struct->pViewports && !is_dynamic_viewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy ((void *)pViewports, (void *)in_struct->pViewports, sizeof(VkViewport)*in_struct->viewportCount);
    }
    else
        pViewports = NULL;
    if (in_struct->pScissors && !is_dynamic_scissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy ((void *)pScissors, (void *)in_struct->pScissors, sizeof(VkRect2D)*in_struct->scissorCount);
    }
    else
        pScissors = NULL;
}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo() :
    pViewports(nullptr),
    pScissors(nullptr)
{}

safe_VkPipelineViewportStateCreateInfo::safe_VkPipelineViewportStateCreateInfo(const safe_VkPipelineViewportStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    viewportCount = src.viewportCount;
    pViewports = nullptr;
    scissorCount = src.scissorCount;
    pScissors = nullptr;
    if (src.pViewports) {
        pViewports = new VkViewport[src.viewportCount];
        memcpy ((void *)pViewports, (void *)src.pViewports, sizeof(VkViewport)*src.viewportCount);
    }
    else
        pViewports = NULL;
    if (src.pScissors) {
        pScissors = new VkRect2D[src.scissorCount];
        memcpy ((void *)pScissors, (void *)src.pScissors, sizeof(VkRect2D)*src.scissorCount);
    }
    else
        pScissors = NULL;
}

safe_VkPipelineViewportStateCreateInfo& safe_VkPipelineViewportStateCreateInfo::operator=(const safe_VkPipelineViewportStateCreateInfo& src)
{
    if (&src == this) return *this;

    if (pViewports)
        delete[] pViewports;
    if (pScissors)
        delete[] pScissors;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    viewportCount = src.viewportCount;
    pViewports = nullptr;
    scissorCount = src.scissorCount;
    pScissors = nullptr;
    if (src.pViewports) {
        pViewports = new VkViewport[src.viewportCount];
        memcpy ((void *)pViewports, (void *)src.pViewports, sizeof(VkViewport)*src.viewportCount);
    }
    else
        pViewports = NULL;
    if (src.pScissors) {
        pScissors = new VkRect2D[src.scissorCount];
        memcpy ((void *)pScissors, (void *)src.pScissors, sizeof(VkRect2D)*src.scissorCount);
    }
    else
        pScissors = NULL;

    return *this;
}

safe_VkPipelineViewportStateCreateInfo::~safe_VkPipelineViewportStateCreateInfo()
{
    if (pViewports)
        delete[] pViewports;
    if (pScissors)
        delete[] pScissors;
}

void safe_VkPipelineViewportStateCreateInfo::initialize(const VkPipelineViewportStateCreateInfo* in_struct, const bool is_dynamic_viewports, const bool is_dynamic_scissors)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    viewportCount = in_struct->viewportCount;
    pViewports = nullptr;
    scissorCount = in_struct->scissorCount;
    pScissors = nullptr;
    if (in_struct->pViewports && !is_dynamic_viewports) {
        pViewports = new VkViewport[in_struct->viewportCount];
        memcpy ((void *)pViewports, (void *)in_struct->pViewports, sizeof(VkViewport)*in_struct->viewportCount);
    }
    else
        pViewports = NULL;
    if (in_struct->pScissors && !is_dynamic_scissors) {
        pScissors = new VkRect2D[in_struct->scissorCount];
        memcpy ((void *)pScissors, (void *)in_struct->pScissors, sizeof(VkRect2D)*in_struct->scissorCount);
    }
    else
        pScissors = NULL;
}

void safe_VkPipelineViewportStateCreateInfo::initialize(const safe_VkPipelineViewportStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    viewportCount = src->viewportCount;
    pViewports = nullptr;
    scissorCount = src->scissorCount;
    pScissors = nullptr;
    if (src->pViewports) {
        pViewports = new VkViewport[src->viewportCount];
        memcpy ((void *)pViewports, (void *)src->pViewports, sizeof(VkViewport)*src->viewportCount);
    }
    else
        pViewports = NULL;
    if (src->pScissors) {
        pScissors = new VkRect2D[src->scissorCount];
        memcpy ((void *)pScissors, (void *)src->pScissors, sizeof(VkRect2D)*src->scissorCount);
    }
    else
        pScissors = NULL;
}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    depthClampEnable(in_struct->depthClampEnable),
    rasterizerDiscardEnable(in_struct->rasterizerDiscardEnable),
    polygonMode(in_struct->polygonMode),
    cullMode(in_struct->cullMode),
    frontFace(in_struct->frontFace),
    depthBiasEnable(in_struct->depthBiasEnable),
    depthBiasConstantFactor(in_struct->depthBiasConstantFactor),
    depthBiasClamp(in_struct->depthBiasClamp),
    depthBiasSlopeFactor(in_struct->depthBiasSlopeFactor),
    lineWidth(in_struct->lineWidth)
{
}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo()
{}

safe_VkPipelineRasterizationStateCreateInfo::safe_VkPipelineRasterizationStateCreateInfo(const safe_VkPipelineRasterizationStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    depthClampEnable = src.depthClampEnable;
    rasterizerDiscardEnable = src.rasterizerDiscardEnable;
    polygonMode = src.polygonMode;
    cullMode = src.cullMode;
    frontFace = src.frontFace;
    depthBiasEnable = src.depthBiasEnable;
    depthBiasConstantFactor = src.depthBiasConstantFactor;
    depthBiasClamp = src.depthBiasClamp;
    depthBiasSlopeFactor = src.depthBiasSlopeFactor;
    lineWidth = src.lineWidth;
}

safe_VkPipelineRasterizationStateCreateInfo& safe_VkPipelineRasterizationStateCreateInfo::operator=(const safe_VkPipelineRasterizationStateCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    depthClampEnable = src.depthClampEnable;
    rasterizerDiscardEnable = src.rasterizerDiscardEnable;
    polygonMode = src.polygonMode;
    cullMode = src.cullMode;
    frontFace = src.frontFace;
    depthBiasEnable = src.depthBiasEnable;
    depthBiasConstantFactor = src.depthBiasConstantFactor;
    depthBiasClamp = src.depthBiasClamp;
    depthBiasSlopeFactor = src.depthBiasSlopeFactor;
    lineWidth = src.lineWidth;

    return *this;
}

safe_VkPipelineRasterizationStateCreateInfo::~safe_VkPipelineRasterizationStateCreateInfo()
{
}

void safe_VkPipelineRasterizationStateCreateInfo::initialize(const VkPipelineRasterizationStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    depthClampEnable = in_struct->depthClampEnable;
    rasterizerDiscardEnable = in_struct->rasterizerDiscardEnable;
    polygonMode = in_struct->polygonMode;
    cullMode = in_struct->cullMode;
    frontFace = in_struct->frontFace;
    depthBiasEnable = in_struct->depthBiasEnable;
    depthBiasConstantFactor = in_struct->depthBiasConstantFactor;
    depthBiasClamp = in_struct->depthBiasClamp;
    depthBiasSlopeFactor = in_struct->depthBiasSlopeFactor;
    lineWidth = in_struct->lineWidth;
}

void safe_VkPipelineRasterizationStateCreateInfo::initialize(const safe_VkPipelineRasterizationStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    depthClampEnable = src->depthClampEnable;
    rasterizerDiscardEnable = src->rasterizerDiscardEnable;
    polygonMode = src->polygonMode;
    cullMode = src->cullMode;
    frontFace = src->frontFace;
    depthBiasEnable = src->depthBiasEnable;
    depthBiasConstantFactor = src->depthBiasConstantFactor;
    depthBiasClamp = src->depthBiasClamp;
    depthBiasSlopeFactor = src->depthBiasSlopeFactor;
    lineWidth = src->lineWidth;
}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    rasterizationSamples(in_struct->rasterizationSamples),
    sampleShadingEnable(in_struct->sampleShadingEnable),
    minSampleShading(in_struct->minSampleShading),
    pSampleMask(nullptr),
    alphaToCoverageEnable(in_struct->alphaToCoverageEnable),
    alphaToOneEnable(in_struct->alphaToOneEnable)
{
    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo() :
    pSampleMask(nullptr)
{}

safe_VkPipelineMultisampleStateCreateInfo::safe_VkPipelineMultisampleStateCreateInfo(const safe_VkPipelineMultisampleStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    rasterizationSamples = src.rasterizationSamples;
    sampleShadingEnable = src.sampleShadingEnable;
    minSampleShading = src.minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = src.alphaToCoverageEnable;
    alphaToOneEnable = src.alphaToOneEnable;
    if (src.pSampleMask) {
        pSampleMask = new VkSampleMask(*src.pSampleMask);
    }
}

safe_VkPipelineMultisampleStateCreateInfo& safe_VkPipelineMultisampleStateCreateInfo::operator=(const safe_VkPipelineMultisampleStateCreateInfo& src)
{
    if (&src == this) return *this;

    if (pSampleMask)
        delete pSampleMask;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    rasterizationSamples = src.rasterizationSamples;
    sampleShadingEnable = src.sampleShadingEnable;
    minSampleShading = src.minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = src.alphaToCoverageEnable;
    alphaToOneEnable = src.alphaToOneEnable;
    if (src.pSampleMask) {
        pSampleMask = new VkSampleMask(*src.pSampleMask);
    }

    return *this;
}

safe_VkPipelineMultisampleStateCreateInfo::~safe_VkPipelineMultisampleStateCreateInfo()
{
    if (pSampleMask)
        delete pSampleMask;
}

void safe_VkPipelineMultisampleStateCreateInfo::initialize(const VkPipelineMultisampleStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    rasterizationSamples = in_struct->rasterizationSamples;
    sampleShadingEnable = in_struct->sampleShadingEnable;
    minSampleShading = in_struct->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = in_struct->alphaToCoverageEnable;
    alphaToOneEnable = in_struct->alphaToOneEnable;
    if (in_struct->pSampleMask) {
        pSampleMask = new VkSampleMask(*in_struct->pSampleMask);
    }
}

void safe_VkPipelineMultisampleStateCreateInfo::initialize(const safe_VkPipelineMultisampleStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    rasterizationSamples = src->rasterizationSamples;
    sampleShadingEnable = src->sampleShadingEnable;
    minSampleShading = src->minSampleShading;
    pSampleMask = nullptr;
    alphaToCoverageEnable = src->alphaToCoverageEnable;
    alphaToOneEnable = src->alphaToOneEnable;
    if (src->pSampleMask) {
        pSampleMask = new VkSampleMask(*src->pSampleMask);
    }
}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    depthTestEnable(in_struct->depthTestEnable),
    depthWriteEnable(in_struct->depthWriteEnable),
    depthCompareOp(in_struct->depthCompareOp),
    depthBoundsTestEnable(in_struct->depthBoundsTestEnable),
    stencilTestEnable(in_struct->stencilTestEnable),
    front(in_struct->front),
    back(in_struct->back),
    minDepthBounds(in_struct->minDepthBounds),
    maxDepthBounds(in_struct->maxDepthBounds)
{
}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo()
{}

safe_VkPipelineDepthStencilStateCreateInfo::safe_VkPipelineDepthStencilStateCreateInfo(const safe_VkPipelineDepthStencilStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    depthTestEnable = src.depthTestEnable;
    depthWriteEnable = src.depthWriteEnable;
    depthCompareOp = src.depthCompareOp;
    depthBoundsTestEnable = src.depthBoundsTestEnable;
    stencilTestEnable = src.stencilTestEnable;
    front = src.front;
    back = src.back;
    minDepthBounds = src.minDepthBounds;
    maxDepthBounds = src.maxDepthBounds;
}

safe_VkPipelineDepthStencilStateCreateInfo& safe_VkPipelineDepthStencilStateCreateInfo::operator=(const safe_VkPipelineDepthStencilStateCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    depthTestEnable = src.depthTestEnable;
    depthWriteEnable = src.depthWriteEnable;
    depthCompareOp = src.depthCompareOp;
    depthBoundsTestEnable = src.depthBoundsTestEnable;
    stencilTestEnable = src.stencilTestEnable;
    front = src.front;
    back = src.back;
    minDepthBounds = src.minDepthBounds;
    maxDepthBounds = src.maxDepthBounds;

    return *this;
}

safe_VkPipelineDepthStencilStateCreateInfo::~safe_VkPipelineDepthStencilStateCreateInfo()
{
}

void safe_VkPipelineDepthStencilStateCreateInfo::initialize(const VkPipelineDepthStencilStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    depthTestEnable = in_struct->depthTestEnable;
    depthWriteEnable = in_struct->depthWriteEnable;
    depthCompareOp = in_struct->depthCompareOp;
    depthBoundsTestEnable = in_struct->depthBoundsTestEnable;
    stencilTestEnable = in_struct->stencilTestEnable;
    front = in_struct->front;
    back = in_struct->back;
    minDepthBounds = in_struct->minDepthBounds;
    maxDepthBounds = in_struct->maxDepthBounds;
}

void safe_VkPipelineDepthStencilStateCreateInfo::initialize(const safe_VkPipelineDepthStencilStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    depthTestEnable = src->depthTestEnable;
    depthWriteEnable = src->depthWriteEnable;
    depthCompareOp = src->depthCompareOp;
    depthBoundsTestEnable = src->depthBoundsTestEnable;
    stencilTestEnable = src->stencilTestEnable;
    front = src->front;
    back = src->back;
    minDepthBounds = src->minDepthBounds;
    maxDepthBounds = src->maxDepthBounds;
}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    logicOpEnable(in_struct->logicOpEnable),
    logicOp(in_struct->logicOp),
    attachmentCount(in_struct->attachmentCount),
    pAttachments(nullptr)
{
    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*in_struct->attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo() :
    pAttachments(nullptr)
{}

safe_VkPipelineColorBlendStateCreateInfo::safe_VkPipelineColorBlendStateCreateInfo(const safe_VkPipelineColorBlendStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    logicOpEnable = src.logicOpEnable;
    logicOp = src.logicOp;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    if (src.pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[src.attachmentCount];
        memcpy ((void *)pAttachments, (void *)src.pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*src.attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = src.blendConstants[i];
    }
}

safe_VkPipelineColorBlendStateCreateInfo& safe_VkPipelineColorBlendStateCreateInfo::operator=(const safe_VkPipelineColorBlendStateCreateInfo& src)
{
    if (&src == this) return *this;

    if (pAttachments)
        delete[] pAttachments;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    logicOpEnable = src.logicOpEnable;
    logicOp = src.logicOp;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    if (src.pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[src.attachmentCount];
        memcpy ((void *)pAttachments, (void *)src.pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*src.attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = src.blendConstants[i];
    }

    return *this;
}

safe_VkPipelineColorBlendStateCreateInfo::~safe_VkPipelineColorBlendStateCreateInfo()
{
    if (pAttachments)
        delete[] pAttachments;
}

void safe_VkPipelineColorBlendStateCreateInfo::initialize(const VkPipelineColorBlendStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    logicOpEnable = in_struct->logicOpEnable;
    logicOp = in_struct->logicOp;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    if (in_struct->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*in_struct->attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = in_struct->blendConstants[i];
    }
}

void safe_VkPipelineColorBlendStateCreateInfo::initialize(const safe_VkPipelineColorBlendStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    logicOpEnable = src->logicOpEnable;
    logicOp = src->logicOp;
    attachmentCount = src->attachmentCount;
    pAttachments = nullptr;
    if (src->pAttachments) {
        pAttachments = new VkPipelineColorBlendAttachmentState[src->attachmentCount];
        memcpy ((void *)pAttachments, (void *)src->pAttachments, sizeof(VkPipelineColorBlendAttachmentState)*src->attachmentCount);
    }
    for (uint32_t i=0; i<4; ++i) {
        blendConstants[i] = src->blendConstants[i];
    }
}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    dynamicStateCount(in_struct->dynamicStateCount),
    pDynamicStates(nullptr)
{
    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)in_struct->pDynamicStates, sizeof(VkDynamicState)*in_struct->dynamicStateCount);
    }
}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo() :
    pDynamicStates(nullptr)
{}

safe_VkPipelineDynamicStateCreateInfo::safe_VkPipelineDynamicStateCreateInfo(const safe_VkPipelineDynamicStateCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    dynamicStateCount = src.dynamicStateCount;
    pDynamicStates = nullptr;
    if (src.pDynamicStates) {
        pDynamicStates = new VkDynamicState[src.dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)src.pDynamicStates, sizeof(VkDynamicState)*src.dynamicStateCount);
    }
}

safe_VkPipelineDynamicStateCreateInfo& safe_VkPipelineDynamicStateCreateInfo::operator=(const safe_VkPipelineDynamicStateCreateInfo& src)
{
    if (&src == this) return *this;

    if (pDynamicStates)
        delete[] pDynamicStates;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    dynamicStateCount = src.dynamicStateCount;
    pDynamicStates = nullptr;
    if (src.pDynamicStates) {
        pDynamicStates = new VkDynamicState[src.dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)src.pDynamicStates, sizeof(VkDynamicState)*src.dynamicStateCount);
    }

    return *this;
}

safe_VkPipelineDynamicStateCreateInfo::~safe_VkPipelineDynamicStateCreateInfo()
{
    if (pDynamicStates)
        delete[] pDynamicStates;
}

void safe_VkPipelineDynamicStateCreateInfo::initialize(const VkPipelineDynamicStateCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    dynamicStateCount = in_struct->dynamicStateCount;
    pDynamicStates = nullptr;
    if (in_struct->pDynamicStates) {
        pDynamicStates = new VkDynamicState[in_struct->dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)in_struct->pDynamicStates, sizeof(VkDynamicState)*in_struct->dynamicStateCount);
    }
}

void safe_VkPipelineDynamicStateCreateInfo::initialize(const safe_VkPipelineDynamicStateCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    dynamicStateCount = src->dynamicStateCount;
    pDynamicStates = nullptr;
    if (src->pDynamicStates) {
        pDynamicStates = new VkDynamicState[src->dynamicStateCount];
        memcpy ((void *)pDynamicStates, (void *)src->pDynamicStates, sizeof(VkDynamicState)*src->dynamicStateCount);
    }
}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment, const bool uses_depthstencil_attachment) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    stageCount(in_struct->stageCount),
    pStages(nullptr),
    layout(in_struct->layout),
    renderPass(in_struct->renderPass),
    subpass(in_struct->subpass),
    basePipelineHandle(in_struct->basePipelineHandle),
    basePipelineIndex(in_struct->basePipelineIndex)
{
    if (stageCount && in_struct->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = NULL;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i=0; i<stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT || pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (in_struct->pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = NULL; // original pTessellationState pointer ignored
    bool has_rasterization = in_struct->pRasterizationState ? !in_struct->pRasterizationState->rasterizerDiscardEnable : false;
    if (in_struct->pViewportState && has_rasterization) {
        bool is_dynamic_viewports = false;
        bool is_dynamic_scissors = false;
        if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_viewports; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_VIEWPORT)
                    is_dynamic_viewports = true;
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_scissors; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_SCISSOR)
                    is_dynamic_scissors = true;
        }
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(in_struct->pViewportState, is_dynamic_viewports, is_dynamic_scissors);
    } else
        pViewportState = NULL; // original pViewportState pointer ignored
    if (in_struct->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = NULL;
    if (in_struct->pMultisampleState && has_rasterization)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = NULL; // original pMultisampleState pointer ignored
    // needs a tracked subpass state uses_depthstencil_attachment
    if (in_struct->pDepthStencilState && has_rasterization && uses_depthstencil_attachment)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = NULL; // original pDepthStencilState pointer ignored
    // needs a tracked subpass state usesColorAttachment
    if (in_struct->pColorBlendState && has_rasterization && uses_color_attachment)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = NULL; // original pColorBlendState pointer ignored
    if (in_struct->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = NULL;
}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo() :
    pStages(nullptr)
{}

safe_VkGraphicsPipelineCreateInfo::safe_VkGraphicsPipelineCreateInfo(const safe_VkGraphicsPipelineCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stageCount = src.stageCount;
    pStages = nullptr;
    layout = src.layout;
    renderPass = src.renderPass;
    subpass = src.subpass;
    basePipelineHandle = src.basePipelineHandle;
    basePipelineIndex = src.basePipelineIndex;
    if (stageCount && src.pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&src.pStages[i]);
        }
    }
    if (src.pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*src.pVertexInputState);
    else
        pVertexInputState = NULL;
    if (src.pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*src.pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i=0; i<stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT || pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (src.pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*src.pTessellationState);
    else
        pTessellationState = NULL; // original pTessellationState pointer ignored
    bool has_rasterization = src.pRasterizationState ? !src.pRasterizationState->rasterizerDiscardEnable : false;
    if (src.pViewportState && has_rasterization) {
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*src.pViewportState);
    } else
        pViewportState = NULL; // original pViewportState pointer ignored
    if (src.pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*src.pRasterizationState);
    else
        pRasterizationState = NULL;
    if (src.pMultisampleState && has_rasterization)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*src.pMultisampleState);
    else
        pMultisampleState = NULL; // original pMultisampleState pointer ignored
    if (src.pDepthStencilState && has_rasterization)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*src.pDepthStencilState);
    else
        pDepthStencilState = NULL; // original pDepthStencilState pointer ignored
    if (src.pColorBlendState && has_rasterization)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*src.pColorBlendState);
    else
        pColorBlendState = NULL; // original pColorBlendState pointer ignored
    if (src.pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*src.pDynamicState);
    else
        pDynamicState = NULL;
}

safe_VkGraphicsPipelineCreateInfo& safe_VkGraphicsPipelineCreateInfo::operator=(const safe_VkGraphicsPipelineCreateInfo& src)
{
    if (&src == this) return *this;

    if (pStages)
        delete[] pStages;
    if (pVertexInputState)
        delete pVertexInputState;
    if (pInputAssemblyState)
        delete pInputAssemblyState;
    if (pTessellationState)
        delete pTessellationState;
    if (pViewportState)
        delete pViewportState;
    if (pRasterizationState)
        delete pRasterizationState;
    if (pMultisampleState)
        delete pMultisampleState;
    if (pDepthStencilState)
        delete pDepthStencilState;
    if (pColorBlendState)
        delete pColorBlendState;
    if (pDynamicState)
        delete pDynamicState;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stageCount = src.stageCount;
    pStages = nullptr;
    layout = src.layout;
    renderPass = src.renderPass;
    subpass = src.subpass;
    basePipelineHandle = src.basePipelineHandle;
    basePipelineIndex = src.basePipelineIndex;
    if (stageCount && src.pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&src.pStages[i]);
        }
    }
    if (src.pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*src.pVertexInputState);
    else
        pVertexInputState = NULL;
    if (src.pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*src.pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i=0; i<stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT || pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (src.pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*src.pTessellationState);
    else
        pTessellationState = NULL; // original pTessellationState pointer ignored
    bool has_rasterization = src.pRasterizationState ? !src.pRasterizationState->rasterizerDiscardEnable : false;
    if (src.pViewportState && has_rasterization) {
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*src.pViewportState);
    } else
        pViewportState = NULL; // original pViewportState pointer ignored
    if (src.pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*src.pRasterizationState);
    else
        pRasterizationState = NULL;
    if (src.pMultisampleState && has_rasterization)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*src.pMultisampleState);
    else
        pMultisampleState = NULL; // original pMultisampleState pointer ignored
    if (src.pDepthStencilState && has_rasterization)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*src.pDepthStencilState);
    else
        pDepthStencilState = NULL; // original pDepthStencilState pointer ignored
    if (src.pColorBlendState && has_rasterization)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*src.pColorBlendState);
    else
        pColorBlendState = NULL; // original pColorBlendState pointer ignored
    if (src.pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*src.pDynamicState);
    else
        pDynamicState = NULL;

    return *this;
}

safe_VkGraphicsPipelineCreateInfo::~safe_VkGraphicsPipelineCreateInfo()
{
    if (pStages)
        delete[] pStages;
    if (pVertexInputState)
        delete pVertexInputState;
    if (pInputAssemblyState)
        delete pInputAssemblyState;
    if (pTessellationState)
        delete pTessellationState;
    if (pViewportState)
        delete pViewportState;
    if (pRasterizationState)
        delete pRasterizationState;
    if (pMultisampleState)
        delete pMultisampleState;
    if (pDepthStencilState)
        delete pDepthStencilState;
    if (pColorBlendState)
        delete pColorBlendState;
    if (pDynamicState)
        delete pDynamicState;
}

void safe_VkGraphicsPipelineCreateInfo::initialize(const VkGraphicsPipelineCreateInfo* in_struct, const bool uses_color_attachment, const bool uses_depthstencil_attachment)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    stageCount = in_struct->stageCount;
    pStages = nullptr;
    layout = in_struct->layout;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
    if (stageCount && in_struct->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&in_struct->pStages[i]);
        }
    }
    if (in_struct->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(in_struct->pVertexInputState);
    else
        pVertexInputState = NULL;
    if (in_struct->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(in_struct->pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i=0; i<stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT || pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (in_struct->pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(in_struct->pTessellationState);
    else
        pTessellationState = NULL; // original pTessellationState pointer ignored
    bool has_rasterization = in_struct->pRasterizationState ? !in_struct->pRasterizationState->rasterizerDiscardEnable : false;
    if (in_struct->pViewportState && has_rasterization) {
        bool is_dynamic_viewports = false;
        bool is_dynamic_scissors = false;
        if (in_struct->pDynamicState && in_struct->pDynamicState->pDynamicStates) {
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_viewports; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_VIEWPORT)
                    is_dynamic_viewports = true;
            for (uint32_t i = 0; i < in_struct->pDynamicState->dynamicStateCount && !is_dynamic_scissors; ++i)
                if (in_struct->pDynamicState->pDynamicStates[i] == VK_DYNAMIC_STATE_SCISSOR)
                    is_dynamic_scissors = true;
        }
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(in_struct->pViewportState, is_dynamic_viewports, is_dynamic_scissors);
    } else
        pViewportState = NULL; // original pViewportState pointer ignored
    if (in_struct->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(in_struct->pRasterizationState);
    else
        pRasterizationState = NULL;
    if (in_struct->pMultisampleState && has_rasterization)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(in_struct->pMultisampleState);
    else
        pMultisampleState = NULL; // original pMultisampleState pointer ignored
    // needs a tracked subpass state uses_depthstencil_attachment
    if (in_struct->pDepthStencilState && has_rasterization && uses_depthstencil_attachment)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(in_struct->pDepthStencilState);
    else
        pDepthStencilState = NULL; // original pDepthStencilState pointer ignored
    // needs a tracked subpass state usesColorAttachment
    if (in_struct->pColorBlendState && has_rasterization && uses_color_attachment)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(in_struct->pColorBlendState);
    else
        pColorBlendState = NULL; // original pColorBlendState pointer ignored
    if (in_struct->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(in_struct->pDynamicState);
    else
        pDynamicState = NULL;
}

void safe_VkGraphicsPipelineCreateInfo::initialize(const safe_VkGraphicsPipelineCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    stageCount = src->stageCount;
    pStages = nullptr;
    layout = src->layout;
    renderPass = src->renderPass;
    subpass = src->subpass;
    basePipelineHandle = src->basePipelineHandle;
    basePipelineIndex = src->basePipelineIndex;
    if (stageCount && src->pStages) {
        pStages = new safe_VkPipelineShaderStageCreateInfo[stageCount];
        for (uint32_t i=0; i<stageCount; ++i) {
            pStages[i].initialize(&src->pStages[i]);
        }
    }
    if (src->pVertexInputState)
        pVertexInputState = new safe_VkPipelineVertexInputStateCreateInfo(*src->pVertexInputState);
    else
        pVertexInputState = NULL;
    if (src->pInputAssemblyState)
        pInputAssemblyState = new safe_VkPipelineInputAssemblyStateCreateInfo(*src->pInputAssemblyState);
    else
        pInputAssemblyState = NULL;
    bool has_tessellation_stage = false;
    if (stageCount && pStages)
        for (uint32_t i=0; i<stageCount && !has_tessellation_stage; ++i)
            if (pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT || pStages[i].stage == VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT)
                has_tessellation_stage = true;
    if (src->pTessellationState && has_tessellation_stage)
        pTessellationState = new safe_VkPipelineTessellationStateCreateInfo(*src->pTessellationState);
    else
        pTessellationState = NULL; // original pTessellationState pointer ignored
    bool has_rasterization = src->pRasterizationState ? !src->pRasterizationState->rasterizerDiscardEnable : false;
    if (src->pViewportState && has_rasterization) {
        pViewportState = new safe_VkPipelineViewportStateCreateInfo(*src->pViewportState);
    } else
        pViewportState = NULL; // original pViewportState pointer ignored
    if (src->pRasterizationState)
        pRasterizationState = new safe_VkPipelineRasterizationStateCreateInfo(*src->pRasterizationState);
    else
        pRasterizationState = NULL;
    if (src->pMultisampleState && has_rasterization)
        pMultisampleState = new safe_VkPipelineMultisampleStateCreateInfo(*src->pMultisampleState);
    else
        pMultisampleState = NULL; // original pMultisampleState pointer ignored
    if (src->pDepthStencilState && has_rasterization)
        pDepthStencilState = new safe_VkPipelineDepthStencilStateCreateInfo(*src->pDepthStencilState);
    else
        pDepthStencilState = NULL; // original pDepthStencilState pointer ignored
    if (src->pColorBlendState && has_rasterization)
        pColorBlendState = new safe_VkPipelineColorBlendStateCreateInfo(*src->pColorBlendState);
    else
        pColorBlendState = NULL; // original pColorBlendState pointer ignored
    if (src->pDynamicState)
        pDynamicState = new safe_VkPipelineDynamicStateCreateInfo(*src->pDynamicState);
    else
        pDynamicState = NULL;
}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    stage(&in_struct->stage),
    layout(in_struct->layout),
    basePipelineHandle(in_struct->basePipelineHandle),
    basePipelineIndex(in_struct->basePipelineIndex)
{
}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo()
{}

safe_VkComputePipelineCreateInfo::safe_VkComputePipelineCreateInfo(const safe_VkComputePipelineCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stage.initialize(&src.stage);
    layout = src.layout;
    basePipelineHandle = src.basePipelineHandle;
    basePipelineIndex = src.basePipelineIndex;
}

safe_VkComputePipelineCreateInfo& safe_VkComputePipelineCreateInfo::operator=(const safe_VkComputePipelineCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    stage.initialize(&src.stage);
    layout = src.layout;
    basePipelineHandle = src.basePipelineHandle;
    basePipelineIndex = src.basePipelineIndex;

    return *this;
}

safe_VkComputePipelineCreateInfo::~safe_VkComputePipelineCreateInfo()
{
}

void safe_VkComputePipelineCreateInfo::initialize(const VkComputePipelineCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    stage.initialize(&in_struct->stage);
    layout = in_struct->layout;
    basePipelineHandle = in_struct->basePipelineHandle;
    basePipelineIndex = in_struct->basePipelineIndex;
}

void safe_VkComputePipelineCreateInfo::initialize(const safe_VkComputePipelineCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    stage.initialize(&src->stage);
    layout = src->layout;
    basePipelineHandle = src->basePipelineHandle;
    basePipelineIndex = src->basePipelineIndex;
}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    setLayoutCount(in_struct->setLayoutCount),
    pSetLayouts(nullptr),
    pushConstantRangeCount(in_struct->pushConstantRangeCount),
    pPushConstantRanges(nullptr)
{
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)in_struct->pPushConstantRanges, sizeof(VkPushConstantRange)*in_struct->pushConstantRangeCount);
    }
}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo() :
    pSetLayouts(nullptr),
    pPushConstantRanges(nullptr)
{}

safe_VkPipelineLayoutCreateInfo::safe_VkPipelineLayoutCreateInfo(const safe_VkPipelineLayoutCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    setLayoutCount = src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    if (setLayoutCount && src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = src.pSetLayouts[i];
        }
    }
    if (src.pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[src.pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)src.pPushConstantRanges, sizeof(VkPushConstantRange)*src.pushConstantRangeCount);
    }
}

safe_VkPipelineLayoutCreateInfo& safe_VkPipelineLayoutCreateInfo::operator=(const safe_VkPipelineLayoutCreateInfo& src)
{
    if (&src == this) return *this;

    if (pSetLayouts)
        delete[] pSetLayouts;
    if (pPushConstantRanges)
        delete[] pPushConstantRanges;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    setLayoutCount = src.setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = src.pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    if (setLayoutCount && src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = src.pSetLayouts[i];
        }
    }
    if (src.pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[src.pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)src.pPushConstantRanges, sizeof(VkPushConstantRange)*src.pushConstantRangeCount);
    }

    return *this;
}

safe_VkPipelineLayoutCreateInfo::~safe_VkPipelineLayoutCreateInfo()
{
    if (pSetLayouts)
        delete[] pSetLayouts;
    if (pPushConstantRanges)
        delete[] pPushConstantRanges;
}

void safe_VkPipelineLayoutCreateInfo::initialize(const VkPipelineLayoutCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    setLayoutCount = in_struct->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = in_struct->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    if (setLayoutCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
    if (in_struct->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[in_struct->pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)in_struct->pPushConstantRanges, sizeof(VkPushConstantRange)*in_struct->pushConstantRangeCount);
    }
}

void safe_VkPipelineLayoutCreateInfo::initialize(const safe_VkPipelineLayoutCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    setLayoutCount = src->setLayoutCount;
    pSetLayouts = nullptr;
    pushConstantRangeCount = src->pushConstantRangeCount;
    pPushConstantRanges = nullptr;
    if (setLayoutCount && src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[setLayoutCount];
        for (uint32_t i=0; i<setLayoutCount; ++i) {
            pSetLayouts[i] = src->pSetLayouts[i];
        }
    }
    if (src->pPushConstantRanges) {
        pPushConstantRanges = new VkPushConstantRange[src->pushConstantRangeCount];
        memcpy ((void *)pPushConstantRanges, (void *)src->pPushConstantRanges, sizeof(VkPushConstantRange)*src->pushConstantRangeCount);
    }
}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo(const VkSamplerCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    magFilter(in_struct->magFilter),
    minFilter(in_struct->minFilter),
    mipmapMode(in_struct->mipmapMode),
    addressModeU(in_struct->addressModeU),
    addressModeV(in_struct->addressModeV),
    addressModeW(in_struct->addressModeW),
    mipLodBias(in_struct->mipLodBias),
    anisotropyEnable(in_struct->anisotropyEnable),
    maxAnisotropy(in_struct->maxAnisotropy),
    compareEnable(in_struct->compareEnable),
    compareOp(in_struct->compareOp),
    minLod(in_struct->minLod),
    maxLod(in_struct->maxLod),
    borderColor(in_struct->borderColor),
    unnormalizedCoordinates(in_struct->unnormalizedCoordinates)
{
}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo()
{}

safe_VkSamplerCreateInfo::safe_VkSamplerCreateInfo(const safe_VkSamplerCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    magFilter = src.magFilter;
    minFilter = src.minFilter;
    mipmapMode = src.mipmapMode;
    addressModeU = src.addressModeU;
    addressModeV = src.addressModeV;
    addressModeW = src.addressModeW;
    mipLodBias = src.mipLodBias;
    anisotropyEnable = src.anisotropyEnable;
    maxAnisotropy = src.maxAnisotropy;
    compareEnable = src.compareEnable;
    compareOp = src.compareOp;
    minLod = src.minLod;
    maxLod = src.maxLod;
    borderColor = src.borderColor;
    unnormalizedCoordinates = src.unnormalizedCoordinates;
}

safe_VkSamplerCreateInfo& safe_VkSamplerCreateInfo::operator=(const safe_VkSamplerCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    magFilter = src.magFilter;
    minFilter = src.minFilter;
    mipmapMode = src.mipmapMode;
    addressModeU = src.addressModeU;
    addressModeV = src.addressModeV;
    addressModeW = src.addressModeW;
    mipLodBias = src.mipLodBias;
    anisotropyEnable = src.anisotropyEnable;
    maxAnisotropy = src.maxAnisotropy;
    compareEnable = src.compareEnable;
    compareOp = src.compareOp;
    minLod = src.minLod;
    maxLod = src.maxLod;
    borderColor = src.borderColor;
    unnormalizedCoordinates = src.unnormalizedCoordinates;

    return *this;
}

safe_VkSamplerCreateInfo::~safe_VkSamplerCreateInfo()
{
}

void safe_VkSamplerCreateInfo::initialize(const VkSamplerCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    magFilter = in_struct->magFilter;
    minFilter = in_struct->minFilter;
    mipmapMode = in_struct->mipmapMode;
    addressModeU = in_struct->addressModeU;
    addressModeV = in_struct->addressModeV;
    addressModeW = in_struct->addressModeW;
    mipLodBias = in_struct->mipLodBias;
    anisotropyEnable = in_struct->anisotropyEnable;
    maxAnisotropy = in_struct->maxAnisotropy;
    compareEnable = in_struct->compareEnable;
    compareOp = in_struct->compareOp;
    minLod = in_struct->minLod;
    maxLod = in_struct->maxLod;
    borderColor = in_struct->borderColor;
    unnormalizedCoordinates = in_struct->unnormalizedCoordinates;
}

void safe_VkSamplerCreateInfo::initialize(const safe_VkSamplerCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    magFilter = src->magFilter;
    minFilter = src->minFilter;
    mipmapMode = src->mipmapMode;
    addressModeU = src->addressModeU;
    addressModeV = src->addressModeV;
    addressModeW = src->addressModeW;
    mipLodBias = src->mipLodBias;
    anisotropyEnable = src->anisotropyEnable;
    maxAnisotropy = src->maxAnisotropy;
    compareEnable = src->compareEnable;
    compareOp = src->compareOp;
    minLod = src->minLod;
    maxLod = src->maxLod;
    borderColor = src->borderColor;
    unnormalizedCoordinates = src->unnormalizedCoordinates;
}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding* in_struct) :
    binding(in_struct->binding),
    descriptorType(in_struct->descriptorType),
    descriptorCount(in_struct->descriptorCount),
    stageFlags(in_struct->stageFlags),
    pImmutableSamplers(nullptr)
{
    const bool sampler_type = in_struct->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || in_struct->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && in_struct->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding() :
    pImmutableSamplers(nullptr)
{}

safe_VkDescriptorSetLayoutBinding::safe_VkDescriptorSetLayoutBinding(const safe_VkDescriptorSetLayoutBinding& src)
{
    binding = src.binding;
    descriptorType = src.descriptorType;
    descriptorCount = src.descriptorCount;
    stageFlags = src.stageFlags;
    pImmutableSamplers = nullptr;
    const bool sampler_type = src.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || src.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && src.pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = src.pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutBinding& safe_VkDescriptorSetLayoutBinding::operator=(const safe_VkDescriptorSetLayoutBinding& src)
{
    if (&src == this) return *this;

    if (pImmutableSamplers)
        delete[] pImmutableSamplers;

    binding = src.binding;
    descriptorType = src.descriptorType;
    descriptorCount = src.descriptorCount;
    stageFlags = src.stageFlags;
    pImmutableSamplers = nullptr;
    const bool sampler_type = src.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || src.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && src.pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = src.pImmutableSamplers[i];
        }
    }

    return *this;
}

safe_VkDescriptorSetLayoutBinding::~safe_VkDescriptorSetLayoutBinding()
{
    if (pImmutableSamplers)
        delete[] pImmutableSamplers;
}

void safe_VkDescriptorSetLayoutBinding::initialize(const VkDescriptorSetLayoutBinding* in_struct)
{
    binding = in_struct->binding;
    descriptorType = in_struct->descriptorType;
    descriptorCount = in_struct->descriptorCount;
    stageFlags = in_struct->stageFlags;
    pImmutableSamplers = nullptr;
    const bool sampler_type = in_struct->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || in_struct->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && in_struct->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = in_struct->pImmutableSamplers[i];
        }
    }
}

void safe_VkDescriptorSetLayoutBinding::initialize(const safe_VkDescriptorSetLayoutBinding* src)
{
    binding = src->binding;
    descriptorType = src->descriptorType;
    descriptorCount = src->descriptorCount;
    stageFlags = src->stageFlags;
    pImmutableSamplers = nullptr;
    const bool sampler_type = src->descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER || src->descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    if (descriptorCount && src->pImmutableSamplers && sampler_type) {
        pImmutableSamplers = new VkSampler[descriptorCount];
        for (uint32_t i=0; i<descriptorCount; ++i) {
            pImmutableSamplers[i] = src->pImmutableSamplers[i];
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    bindingCount(in_struct->bindingCount),
    pBindings(nullptr)
{
    if (bindingCount && in_struct->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo() :
    pBindings(nullptr)
{}

safe_VkDescriptorSetLayoutCreateInfo::safe_VkDescriptorSetLayoutCreateInfo(const safe_VkDescriptorSetLayoutCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    bindingCount = src.bindingCount;
    pBindings = nullptr;
    if (bindingCount && src.pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&src.pBindings[i]);
        }
    }
}

safe_VkDescriptorSetLayoutCreateInfo& safe_VkDescriptorSetLayoutCreateInfo::operator=(const safe_VkDescriptorSetLayoutCreateInfo& src)
{
    if (&src == this) return *this;

    if (pBindings)
        delete[] pBindings;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    bindingCount = src.bindingCount;
    pBindings = nullptr;
    if (bindingCount && src.pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&src.pBindings[i]);
        }
    }

    return *this;
}

safe_VkDescriptorSetLayoutCreateInfo::~safe_VkDescriptorSetLayoutCreateInfo()
{
    if (pBindings)
        delete[] pBindings;
}

void safe_VkDescriptorSetLayoutCreateInfo::initialize(const VkDescriptorSetLayoutCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    bindingCount = in_struct->bindingCount;
    pBindings = nullptr;
    if (bindingCount && in_struct->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&in_struct->pBindings[i]);
        }
    }
}

void safe_VkDescriptorSetLayoutCreateInfo::initialize(const safe_VkDescriptorSetLayoutCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    bindingCount = src->bindingCount;
    pBindings = nullptr;
    if (bindingCount && src->pBindings) {
        pBindings = new safe_VkDescriptorSetLayoutBinding[bindingCount];
        for (uint32_t i=0; i<bindingCount; ++i) {
            pBindings[i].initialize(&src->pBindings[i]);
        }
    }
}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    maxSets(in_struct->maxSets),
    poolSizeCount(in_struct->poolSizeCount),
    pPoolSizes(nullptr)
{
    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize)*in_struct->poolSizeCount);
    }
}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo() :
    pPoolSizes(nullptr)
{}

safe_VkDescriptorPoolCreateInfo::safe_VkDescriptorPoolCreateInfo(const safe_VkDescriptorPoolCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    maxSets = src.maxSets;
    poolSizeCount = src.poolSizeCount;
    pPoolSizes = nullptr;
    if (src.pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[src.poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)src.pPoolSizes, sizeof(VkDescriptorPoolSize)*src.poolSizeCount);
    }
}

safe_VkDescriptorPoolCreateInfo& safe_VkDescriptorPoolCreateInfo::operator=(const safe_VkDescriptorPoolCreateInfo& src)
{
    if (&src == this) return *this;

    if (pPoolSizes)
        delete[] pPoolSizes;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    maxSets = src.maxSets;
    poolSizeCount = src.poolSizeCount;
    pPoolSizes = nullptr;
    if (src.pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[src.poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)src.pPoolSizes, sizeof(VkDescriptorPoolSize)*src.poolSizeCount);
    }

    return *this;
}

safe_VkDescriptorPoolCreateInfo::~safe_VkDescriptorPoolCreateInfo()
{
    if (pPoolSizes)
        delete[] pPoolSizes;
}

void safe_VkDescriptorPoolCreateInfo::initialize(const VkDescriptorPoolCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    maxSets = in_struct->maxSets;
    poolSizeCount = in_struct->poolSizeCount;
    pPoolSizes = nullptr;
    if (in_struct->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[in_struct->poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)in_struct->pPoolSizes, sizeof(VkDescriptorPoolSize)*in_struct->poolSizeCount);
    }
}

void safe_VkDescriptorPoolCreateInfo::initialize(const safe_VkDescriptorPoolCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    maxSets = src->maxSets;
    poolSizeCount = src->poolSizeCount;
    pPoolSizes = nullptr;
    if (src->pPoolSizes) {
        pPoolSizes = new VkDescriptorPoolSize[src->poolSizeCount];
        memcpy ((void *)pPoolSizes, (void *)src->pPoolSizes, sizeof(VkDescriptorPoolSize)*src->poolSizeCount);
    }
}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    descriptorPool(in_struct->descriptorPool),
    descriptorSetCount(in_struct->descriptorSetCount),
    pSetLayouts(nullptr)
{
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo() :
    pSetLayouts(nullptr)
{}

safe_VkDescriptorSetAllocateInfo::safe_VkDescriptorSetAllocateInfo(const safe_VkDescriptorSetAllocateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    descriptorPool = src.descriptorPool;
    descriptorSetCount = src.descriptorSetCount;
    pSetLayouts = nullptr;
    if (descriptorSetCount && src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = src.pSetLayouts[i];
        }
    }
}

safe_VkDescriptorSetAllocateInfo& safe_VkDescriptorSetAllocateInfo::operator=(const safe_VkDescriptorSetAllocateInfo& src)
{
    if (&src == this) return *this;

    if (pSetLayouts)
        delete[] pSetLayouts;

    sType = src.sType;
    pNext = src.pNext;
    descriptorPool = src.descriptorPool;
    descriptorSetCount = src.descriptorSetCount;
    pSetLayouts = nullptr;
    if (descriptorSetCount && src.pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = src.pSetLayouts[i];
        }
    }

    return *this;
}

safe_VkDescriptorSetAllocateInfo::~safe_VkDescriptorSetAllocateInfo()
{
    if (pSetLayouts)
        delete[] pSetLayouts;
}

void safe_VkDescriptorSetAllocateInfo::initialize(const VkDescriptorSetAllocateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    descriptorPool = in_struct->descriptorPool;
    descriptorSetCount = in_struct->descriptorSetCount;
    pSetLayouts = nullptr;
    if (descriptorSetCount && in_struct->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = in_struct->pSetLayouts[i];
        }
    }
}

void safe_VkDescriptorSetAllocateInfo::initialize(const safe_VkDescriptorSetAllocateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    descriptorPool = src->descriptorPool;
    descriptorSetCount = src->descriptorSetCount;
    pSetLayouts = nullptr;
    if (descriptorSetCount && src->pSetLayouts) {
        pSetLayouts = new VkDescriptorSetLayout[descriptorSetCount];
        for (uint32_t i=0; i<descriptorSetCount; ++i) {
            pSetLayouts[i] = src->pSetLayouts[i];
        }
    }
}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet(const VkWriteDescriptorSet* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    dstSet(in_struct->dstSet),
    dstBinding(in_struct->dstBinding),
    dstArrayElement(in_struct->dstArrayElement),
    descriptorCount(in_struct->descriptorCount),
    descriptorType(in_struct->descriptorType),
    pImageInfo(nullptr),
    pBufferInfo(nullptr),
    pTexelBufferView(nullptr)
{
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && in_struct->pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = in_struct->pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && in_struct->pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = in_struct->pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && in_struct->pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = in_struct->pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet() :
    pImageInfo(nullptr),
    pBufferInfo(nullptr),
    pTexelBufferView(nullptr)
{}

safe_VkWriteDescriptorSet::safe_VkWriteDescriptorSet(const safe_VkWriteDescriptorSet& src)
{
    sType = src.sType;
    pNext = src.pNext;
    dstSet = src.dstSet;
    dstBinding = src.dstBinding;
    dstArrayElement = src.dstArrayElement;
    descriptorCount = src.descriptorCount;
    descriptorType = src.descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && src.pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = src.pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && src.pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = src.pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && src.pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = src.pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

safe_VkWriteDescriptorSet& safe_VkWriteDescriptorSet::operator=(const safe_VkWriteDescriptorSet& src)
{
    if (&src == this) return *this;

    if (pImageInfo)
        delete[] pImageInfo;
    if (pBufferInfo)
        delete[] pBufferInfo;
    if (pTexelBufferView)
        delete[] pTexelBufferView;

    sType = src.sType;
    pNext = src.pNext;
    dstSet = src.dstSet;
    dstBinding = src.dstBinding;
    dstArrayElement = src.dstArrayElement;
    descriptorCount = src.descriptorCount;
    descriptorType = src.descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && src.pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = src.pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && src.pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = src.pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && src.pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = src.pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }

    return *this;
}

safe_VkWriteDescriptorSet::~safe_VkWriteDescriptorSet()
{
    if (pImageInfo)
        delete[] pImageInfo;
    if (pBufferInfo)
        delete[] pBufferInfo;
    if (pTexelBufferView)
        delete[] pTexelBufferView;
}

void safe_VkWriteDescriptorSet::initialize(const VkWriteDescriptorSet* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
    descriptorType = in_struct->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && in_struct->pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = in_struct->pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && in_struct->pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = in_struct->pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && in_struct->pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = in_struct->pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

void safe_VkWriteDescriptorSet::initialize(const safe_VkWriteDescriptorSet* src)
{
    sType = src->sType;
    pNext = src->pNext;
    dstSet = src->dstSet;
    dstBinding = src->dstBinding;
    dstArrayElement = src->dstArrayElement;
    descriptorCount = src->descriptorCount;
    descriptorType = src->descriptorType;
    pImageInfo = nullptr;
    pBufferInfo = nullptr;
    pTexelBufferView = nullptr;
    switch (descriptorType) {
        case VK_DESCRIPTOR_TYPE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        if (descriptorCount && src->pImageInfo) {
            pImageInfo = new VkDescriptorImageInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pImageInfo[i] = src->pImageInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        if (descriptorCount && src->pBufferInfo) {
            pBufferInfo = new VkDescriptorBufferInfo[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pBufferInfo[i] = src->pBufferInfo[i];
            }
        }
        break;
        case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        if (descriptorCount && src->pTexelBufferView) {
            pTexelBufferView = new VkBufferView[descriptorCount];
            for (uint32_t i=0; i<descriptorCount; ++i) {
                pTexelBufferView[i] = src->pTexelBufferView[i];
            }
        }
        break;
        default:
        break;
    }
}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet(const VkCopyDescriptorSet* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcSet(in_struct->srcSet),
    srcBinding(in_struct->srcBinding),
    srcArrayElement(in_struct->srcArrayElement),
    dstSet(in_struct->dstSet),
    dstBinding(in_struct->dstBinding),
    dstArrayElement(in_struct->dstArrayElement),
    descriptorCount(in_struct->descriptorCount)
{
}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet()
{}

safe_VkCopyDescriptorSet::safe_VkCopyDescriptorSet(const safe_VkCopyDescriptorSet& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcSet = src.srcSet;
    srcBinding = src.srcBinding;
    srcArrayElement = src.srcArrayElement;
    dstSet = src.dstSet;
    dstBinding = src.dstBinding;
    dstArrayElement = src.dstArrayElement;
    descriptorCount = src.descriptorCount;
}

safe_VkCopyDescriptorSet& safe_VkCopyDescriptorSet::operator=(const safe_VkCopyDescriptorSet& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    srcSet = src.srcSet;
    srcBinding = src.srcBinding;
    srcArrayElement = src.srcArrayElement;
    dstSet = src.dstSet;
    dstBinding = src.dstBinding;
    dstArrayElement = src.dstArrayElement;
    descriptorCount = src.descriptorCount;

    return *this;
}

safe_VkCopyDescriptorSet::~safe_VkCopyDescriptorSet()
{
}

void safe_VkCopyDescriptorSet::initialize(const VkCopyDescriptorSet* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcSet = in_struct->srcSet;
    srcBinding = in_struct->srcBinding;
    srcArrayElement = in_struct->srcArrayElement;
    dstSet = in_struct->dstSet;
    dstBinding = in_struct->dstBinding;
    dstArrayElement = in_struct->dstArrayElement;
    descriptorCount = in_struct->descriptorCount;
}

void safe_VkCopyDescriptorSet::initialize(const safe_VkCopyDescriptorSet* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcSet = src->srcSet;
    srcBinding = src->srcBinding;
    srcArrayElement = src->srcArrayElement;
    dstSet = src->dstSet;
    dstBinding = src->dstBinding;
    dstArrayElement = src->dstArrayElement;
    descriptorCount = src->descriptorCount;
}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo(const VkFramebufferCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    renderPass(in_struct->renderPass),
    attachmentCount(in_struct->attachmentCount),
    pAttachments(nullptr),
    width(in_struct->width),
    height(in_struct->height),
    layers(in_struct->layers)
{
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo() :
    pAttachments(nullptr)
{}

safe_VkFramebufferCreateInfo::safe_VkFramebufferCreateInfo(const safe_VkFramebufferCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    renderPass = src.renderPass;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    width = src.width;
    height = src.height;
    layers = src.layers;
    if (attachmentCount && src.pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = src.pAttachments[i];
        }
    }
}

safe_VkFramebufferCreateInfo& safe_VkFramebufferCreateInfo::operator=(const safe_VkFramebufferCreateInfo& src)
{
    if (&src == this) return *this;

    if (pAttachments)
        delete[] pAttachments;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    renderPass = src.renderPass;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    width = src.width;
    height = src.height;
    layers = src.layers;
    if (attachmentCount && src.pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = src.pAttachments[i];
        }
    }

    return *this;
}

safe_VkFramebufferCreateInfo::~safe_VkFramebufferCreateInfo()
{
    if (pAttachments)
        delete[] pAttachments;
}

void safe_VkFramebufferCreateInfo::initialize(const VkFramebufferCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    renderPass = in_struct->renderPass;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    width = in_struct->width;
    height = in_struct->height;
    layers = in_struct->layers;
    if (attachmentCount && in_struct->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = in_struct->pAttachments[i];
        }
    }
}

void safe_VkFramebufferCreateInfo::initialize(const safe_VkFramebufferCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    renderPass = src->renderPass;
    attachmentCount = src->attachmentCount;
    pAttachments = nullptr;
    width = src->width;
    height = src->height;
    layers = src->layers;
    if (attachmentCount && src->pAttachments) {
        pAttachments = new VkImageView[attachmentCount];
        for (uint32_t i=0; i<attachmentCount; ++i) {
            pAttachments[i] = src->pAttachments[i];
        }
    }
}

safe_VkSubpassDescription::safe_VkSubpassDescription(const VkSubpassDescription* in_struct) :
    flags(in_struct->flags),
    pipelineBindPoint(in_struct->pipelineBindPoint),
    inputAttachmentCount(in_struct->inputAttachmentCount),
    pInputAttachments(nullptr),
    colorAttachmentCount(in_struct->colorAttachmentCount),
    pColorAttachments(nullptr),
    pResolveAttachments(nullptr),
    pDepthStencilAttachment(nullptr),
    preserveAttachmentCount(in_struct->preserveAttachmentCount),
    pPreserveAttachments(nullptr)
{
    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)in_struct->pInputAttachments, sizeof(VkAttachmentReference)*in_struct->inputAttachmentCount);
    }
    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)in_struct->pColorAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)in_struct->pResolveAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }
    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)in_struct->pPreserveAttachments, sizeof(uint32_t)*in_struct->preserveAttachmentCount);
    }
}

safe_VkSubpassDescription::safe_VkSubpassDescription() :
    pInputAttachments(nullptr),
    pColorAttachments(nullptr),
    pResolveAttachments(nullptr),
    pDepthStencilAttachment(nullptr),
    pPreserveAttachments(nullptr)
{}

safe_VkSubpassDescription::safe_VkSubpassDescription(const safe_VkSubpassDescription& src)
{
    flags = src.flags;
    pipelineBindPoint = src.pipelineBindPoint;
    inputAttachmentCount = src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    if (src.pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[src.inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)src.pInputAttachments, sizeof(VkAttachmentReference)*src.inputAttachmentCount);
    }
    if (src.pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[src.colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)src.pColorAttachments, sizeof(VkAttachmentReference)*src.colorAttachmentCount);
    }
    if (src.pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[src.colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)src.pResolveAttachments, sizeof(VkAttachmentReference)*src.colorAttachmentCount);
    }
    if (src.pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*src.pDepthStencilAttachment);
    }
    if (src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[src.preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)src.pPreserveAttachments, sizeof(uint32_t)*src.preserveAttachmentCount);
    }
}

safe_VkSubpassDescription& safe_VkSubpassDescription::operator=(const safe_VkSubpassDescription& src)
{
    if (&src == this) return *this;

    if (pInputAttachments)
        delete[] pInputAttachments;
    if (pColorAttachments)
        delete[] pColorAttachments;
    if (pResolveAttachments)
        delete[] pResolveAttachments;
    if (pDepthStencilAttachment)
        delete pDepthStencilAttachment;
    if (pPreserveAttachments)
        delete[] pPreserveAttachments;

    flags = src.flags;
    pipelineBindPoint = src.pipelineBindPoint;
    inputAttachmentCount = src.inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = src.colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = src.preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    if (src.pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[src.inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)src.pInputAttachments, sizeof(VkAttachmentReference)*src.inputAttachmentCount);
    }
    if (src.pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[src.colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)src.pColorAttachments, sizeof(VkAttachmentReference)*src.colorAttachmentCount);
    }
    if (src.pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[src.colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)src.pResolveAttachments, sizeof(VkAttachmentReference)*src.colorAttachmentCount);
    }
    if (src.pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*src.pDepthStencilAttachment);
    }
    if (src.pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[src.preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)src.pPreserveAttachments, sizeof(uint32_t)*src.preserveAttachmentCount);
    }

    return *this;
}

safe_VkSubpassDescription::~safe_VkSubpassDescription()
{
    if (pInputAttachments)
        delete[] pInputAttachments;
    if (pColorAttachments)
        delete[] pColorAttachments;
    if (pResolveAttachments)
        delete[] pResolveAttachments;
    if (pDepthStencilAttachment)
        delete pDepthStencilAttachment;
    if (pPreserveAttachments)
        delete[] pPreserveAttachments;
}

void safe_VkSubpassDescription::initialize(const VkSubpassDescription* in_struct)
{
    flags = in_struct->flags;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    inputAttachmentCount = in_struct->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = in_struct->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = in_struct->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    if (in_struct->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[in_struct->inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)in_struct->pInputAttachments, sizeof(VkAttachmentReference)*in_struct->inputAttachmentCount);
    }
    if (in_struct->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)in_struct->pColorAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[in_struct->colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)in_struct->pResolveAttachments, sizeof(VkAttachmentReference)*in_struct->colorAttachmentCount);
    }
    if (in_struct->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*in_struct->pDepthStencilAttachment);
    }
    if (in_struct->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[in_struct->preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)in_struct->pPreserveAttachments, sizeof(uint32_t)*in_struct->preserveAttachmentCount);
    }
}

void safe_VkSubpassDescription::initialize(const safe_VkSubpassDescription* src)
{
    flags = src->flags;
    pipelineBindPoint = src->pipelineBindPoint;
    inputAttachmentCount = src->inputAttachmentCount;
    pInputAttachments = nullptr;
    colorAttachmentCount = src->colorAttachmentCount;
    pColorAttachments = nullptr;
    pResolveAttachments = nullptr;
    pDepthStencilAttachment = nullptr;
    preserveAttachmentCount = src->preserveAttachmentCount;
    pPreserveAttachments = nullptr;
    if (src->pInputAttachments) {
        pInputAttachments = new VkAttachmentReference[src->inputAttachmentCount];
        memcpy ((void *)pInputAttachments, (void *)src->pInputAttachments, sizeof(VkAttachmentReference)*src->inputAttachmentCount);
    }
    if (src->pColorAttachments) {
        pColorAttachments = new VkAttachmentReference[src->colorAttachmentCount];
        memcpy ((void *)pColorAttachments, (void *)src->pColorAttachments, sizeof(VkAttachmentReference)*src->colorAttachmentCount);
    }
    if (src->pResolveAttachments) {
        pResolveAttachments = new VkAttachmentReference[src->colorAttachmentCount];
        memcpy ((void *)pResolveAttachments, (void *)src->pResolveAttachments, sizeof(VkAttachmentReference)*src->colorAttachmentCount);
    }
    if (src->pDepthStencilAttachment) {
        pDepthStencilAttachment = new VkAttachmentReference(*src->pDepthStencilAttachment);
    }
    if (src->pPreserveAttachments) {
        pPreserveAttachments = new uint32_t[src->preserveAttachmentCount];
        memcpy ((void *)pPreserveAttachments, (void *)src->pPreserveAttachments, sizeof(uint32_t)*src->preserveAttachmentCount);
    }
}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo(const VkRenderPassCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    attachmentCount(in_struct->attachmentCount),
    pAttachments(nullptr),
    subpassCount(in_struct->subpassCount),
    pSubpasses(nullptr),
    dependencyCount(in_struct->dependencyCount),
    pDependencies(nullptr)
{
    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkAttachmentDescription)*in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy ((void *)pDependencies, (void *)in_struct->pDependencies, sizeof(VkSubpassDependency)*in_struct->dependencyCount);
    }
}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo() :
    pAttachments(nullptr),
    pSubpasses(nullptr),
    pDependencies(nullptr)
{}

safe_VkRenderPassCreateInfo::safe_VkRenderPassCreateInfo(const safe_VkRenderPassCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = src.dependencyCount;
    pDependencies = nullptr;
    if (src.pAttachments) {
        pAttachments = new VkAttachmentDescription[src.attachmentCount];
        memcpy ((void *)pAttachments, (void *)src.pAttachments, sizeof(VkAttachmentDescription)*src.attachmentCount);
    }
    if (subpassCount && src.pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&src.pSubpasses[i]);
        }
    }
    if (src.pDependencies) {
        pDependencies = new VkSubpassDependency[src.dependencyCount];
        memcpy ((void *)pDependencies, (void *)src.pDependencies, sizeof(VkSubpassDependency)*src.dependencyCount);
    }
}

safe_VkRenderPassCreateInfo& safe_VkRenderPassCreateInfo::operator=(const safe_VkRenderPassCreateInfo& src)
{
    if (&src == this) return *this;

    if (pAttachments)
        delete[] pAttachments;
    if (pSubpasses)
        delete[] pSubpasses;
    if (pDependencies)
        delete[] pDependencies;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    attachmentCount = src.attachmentCount;
    pAttachments = nullptr;
    subpassCount = src.subpassCount;
    pSubpasses = nullptr;
    dependencyCount = src.dependencyCount;
    pDependencies = nullptr;
    if (src.pAttachments) {
        pAttachments = new VkAttachmentDescription[src.attachmentCount];
        memcpy ((void *)pAttachments, (void *)src.pAttachments, sizeof(VkAttachmentDescription)*src.attachmentCount);
    }
    if (subpassCount && src.pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&src.pSubpasses[i]);
        }
    }
    if (src.pDependencies) {
        pDependencies = new VkSubpassDependency[src.dependencyCount];
        memcpy ((void *)pDependencies, (void *)src.pDependencies, sizeof(VkSubpassDependency)*src.dependencyCount);
    }

    return *this;
}

safe_VkRenderPassCreateInfo::~safe_VkRenderPassCreateInfo()
{
    if (pAttachments)
        delete[] pAttachments;
    if (pSubpasses)
        delete[] pSubpasses;
    if (pDependencies)
        delete[] pDependencies;
}

void safe_VkRenderPassCreateInfo::initialize(const VkRenderPassCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    attachmentCount = in_struct->attachmentCount;
    pAttachments = nullptr;
    subpassCount = in_struct->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pDependencies = nullptr;
    if (in_struct->pAttachments) {
        pAttachments = new VkAttachmentDescription[in_struct->attachmentCount];
        memcpy ((void *)pAttachments, (void *)in_struct->pAttachments, sizeof(VkAttachmentDescription)*in_struct->attachmentCount);
    }
    if (subpassCount && in_struct->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&in_struct->pSubpasses[i]);
        }
    }
    if (in_struct->pDependencies) {
        pDependencies = new VkSubpassDependency[in_struct->dependencyCount];
        memcpy ((void *)pDependencies, (void *)in_struct->pDependencies, sizeof(VkSubpassDependency)*in_struct->dependencyCount);
    }
}

void safe_VkRenderPassCreateInfo::initialize(const safe_VkRenderPassCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    attachmentCount = src->attachmentCount;
    pAttachments = nullptr;
    subpassCount = src->subpassCount;
    pSubpasses = nullptr;
    dependencyCount = src->dependencyCount;
    pDependencies = nullptr;
    if (src->pAttachments) {
        pAttachments = new VkAttachmentDescription[src->attachmentCount];
        memcpy ((void *)pAttachments, (void *)src->pAttachments, sizeof(VkAttachmentDescription)*src->attachmentCount);
    }
    if (subpassCount && src->pSubpasses) {
        pSubpasses = new safe_VkSubpassDescription[subpassCount];
        for (uint32_t i=0; i<subpassCount; ++i) {
            pSubpasses[i].initialize(&src->pSubpasses[i]);
        }
    }
    if (src->pDependencies) {
        pDependencies = new VkSubpassDependency[src->dependencyCount];
        memcpy ((void *)pDependencies, (void *)src->pDependencies, sizeof(VkSubpassDependency)*src->dependencyCount);
    }
}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    queueFamilyIndex(in_struct->queueFamilyIndex)
{
}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo()
{}

safe_VkCommandPoolCreateInfo::safe_VkCommandPoolCreateInfo(const safe_VkCommandPoolCreateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueFamilyIndex = src.queueFamilyIndex;
}

safe_VkCommandPoolCreateInfo& safe_VkCommandPoolCreateInfo::operator=(const safe_VkCommandPoolCreateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    queueFamilyIndex = src.queueFamilyIndex;

    return *this;
}

safe_VkCommandPoolCreateInfo::~safe_VkCommandPoolCreateInfo()
{
}

void safe_VkCommandPoolCreateInfo::initialize(const VkCommandPoolCreateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    queueFamilyIndex = in_struct->queueFamilyIndex;
}

void safe_VkCommandPoolCreateInfo::initialize(const safe_VkCommandPoolCreateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    queueFamilyIndex = src->queueFamilyIndex;
}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    commandPool(in_struct->commandPool),
    level(in_struct->level),
    commandBufferCount(in_struct->commandBufferCount)
{
}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo()
{}

safe_VkCommandBufferAllocateInfo::safe_VkCommandBufferAllocateInfo(const safe_VkCommandBufferAllocateInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    commandPool = src.commandPool;
    level = src.level;
    commandBufferCount = src.commandBufferCount;
}

safe_VkCommandBufferAllocateInfo& safe_VkCommandBufferAllocateInfo::operator=(const safe_VkCommandBufferAllocateInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    commandPool = src.commandPool;
    level = src.level;
    commandBufferCount = src.commandBufferCount;

    return *this;
}

safe_VkCommandBufferAllocateInfo::~safe_VkCommandBufferAllocateInfo()
{
}

void safe_VkCommandBufferAllocateInfo::initialize(const VkCommandBufferAllocateInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    commandPool = in_struct->commandPool;
    level = in_struct->level;
    commandBufferCount = in_struct->commandBufferCount;
}

void safe_VkCommandBufferAllocateInfo::initialize(const safe_VkCommandBufferAllocateInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    commandPool = src->commandPool;
    level = src->level;
    commandBufferCount = src->commandBufferCount;
}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    renderPass(in_struct->renderPass),
    subpass(in_struct->subpass),
    framebuffer(in_struct->framebuffer),
    occlusionQueryEnable(in_struct->occlusionQueryEnable),
    queryFlags(in_struct->queryFlags),
    pipelineStatistics(in_struct->pipelineStatistics)
{
}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo()
{}

safe_VkCommandBufferInheritanceInfo::safe_VkCommandBufferInheritanceInfo(const safe_VkCommandBufferInheritanceInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    renderPass = src.renderPass;
    subpass = src.subpass;
    framebuffer = src.framebuffer;
    occlusionQueryEnable = src.occlusionQueryEnable;
    queryFlags = src.queryFlags;
    pipelineStatistics = src.pipelineStatistics;
}

safe_VkCommandBufferInheritanceInfo& safe_VkCommandBufferInheritanceInfo::operator=(const safe_VkCommandBufferInheritanceInfo& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    renderPass = src.renderPass;
    subpass = src.subpass;
    framebuffer = src.framebuffer;
    occlusionQueryEnable = src.occlusionQueryEnable;
    queryFlags = src.queryFlags;
    pipelineStatistics = src.pipelineStatistics;

    return *this;
}

safe_VkCommandBufferInheritanceInfo::~safe_VkCommandBufferInheritanceInfo()
{
}

void safe_VkCommandBufferInheritanceInfo::initialize(const VkCommandBufferInheritanceInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    renderPass = in_struct->renderPass;
    subpass = in_struct->subpass;
    framebuffer = in_struct->framebuffer;
    occlusionQueryEnable = in_struct->occlusionQueryEnable;
    queryFlags = in_struct->queryFlags;
    pipelineStatistics = in_struct->pipelineStatistics;
}

void safe_VkCommandBufferInheritanceInfo::initialize(const safe_VkCommandBufferInheritanceInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    renderPass = src->renderPass;
    subpass = src->subpass;
    framebuffer = src->framebuffer;
    occlusionQueryEnable = src->occlusionQueryEnable;
    queryFlags = src->queryFlags;
    pipelineStatistics = src->pipelineStatistics;
}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags)
{
    if (in_struct->pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo()
{}

safe_VkCommandBufferBeginInfo::safe_VkCommandBufferBeginInfo(const safe_VkCommandBufferBeginInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    if (src.pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*src.pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

safe_VkCommandBufferBeginInfo& safe_VkCommandBufferBeginInfo::operator=(const safe_VkCommandBufferBeginInfo& src)
{
    if (&src == this) return *this;

    if (pInheritanceInfo)
        delete pInheritanceInfo;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    if (src.pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*src.pInheritanceInfo);
    else
        pInheritanceInfo = NULL;

    return *this;
}

safe_VkCommandBufferBeginInfo::~safe_VkCommandBufferBeginInfo()
{
    if (pInheritanceInfo)
        delete pInheritanceInfo;
}

void safe_VkCommandBufferBeginInfo::initialize(const VkCommandBufferBeginInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    if (in_struct->pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(in_struct->pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

void safe_VkCommandBufferBeginInfo::initialize(const safe_VkCommandBufferBeginInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    if (src->pInheritanceInfo)
        pInheritanceInfo = new safe_VkCommandBufferInheritanceInfo(*src->pInheritanceInfo);
    else
        pInheritanceInfo = NULL;
}

safe_VkMemoryBarrier::safe_VkMemoryBarrier(const VkMemoryBarrier* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcAccessMask(in_struct->srcAccessMask),
    dstAccessMask(in_struct->dstAccessMask)
{
}

safe_VkMemoryBarrier::safe_VkMemoryBarrier()
{}

safe_VkMemoryBarrier::safe_VkMemoryBarrier(const safe_VkMemoryBarrier& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
}

safe_VkMemoryBarrier& safe_VkMemoryBarrier::operator=(const safe_VkMemoryBarrier& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;

    return *this;
}

safe_VkMemoryBarrier::~safe_VkMemoryBarrier()
{
}

void safe_VkMemoryBarrier::initialize(const VkMemoryBarrier* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
}

void safe_VkMemoryBarrier::initialize(const safe_VkMemoryBarrier* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcAccessMask = src->srcAccessMask;
    dstAccessMask = src->dstAccessMask;
}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier(const VkBufferMemoryBarrier* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcAccessMask(in_struct->srcAccessMask),
    dstAccessMask(in_struct->dstAccessMask),
    srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
    dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
    buffer(in_struct->buffer),
    offset(in_struct->offset),
    size(in_struct->size)
{
}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier()
{}

safe_VkBufferMemoryBarrier::safe_VkBufferMemoryBarrier(const safe_VkBufferMemoryBarrier& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
    srcQueueFamilyIndex = src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = src.dstQueueFamilyIndex;
    buffer = src.buffer;
    offset = src.offset;
    size = src.size;
}

safe_VkBufferMemoryBarrier& safe_VkBufferMemoryBarrier::operator=(const safe_VkBufferMemoryBarrier& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
    srcQueueFamilyIndex = src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = src.dstQueueFamilyIndex;
    buffer = src.buffer;
    offset = src.offset;
    size = src.size;

    return *this;
}

safe_VkBufferMemoryBarrier::~safe_VkBufferMemoryBarrier()
{
}

void safe_VkBufferMemoryBarrier::initialize(const VkBufferMemoryBarrier* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    buffer = in_struct->buffer;
    offset = in_struct->offset;
    size = in_struct->size;
}

void safe_VkBufferMemoryBarrier::initialize(const safe_VkBufferMemoryBarrier* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcAccessMask = src->srcAccessMask;
    dstAccessMask = src->dstAccessMask;
    srcQueueFamilyIndex = src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = src->dstQueueFamilyIndex;
    buffer = src->buffer;
    offset = src->offset;
    size = src->size;
}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier(const VkImageMemoryBarrier* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcAccessMask(in_struct->srcAccessMask),
    dstAccessMask(in_struct->dstAccessMask),
    oldLayout(in_struct->oldLayout),
    newLayout(in_struct->newLayout),
    srcQueueFamilyIndex(in_struct->srcQueueFamilyIndex),
    dstQueueFamilyIndex(in_struct->dstQueueFamilyIndex),
    image(in_struct->image),
    subresourceRange(in_struct->subresourceRange)
{
}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier()
{}

safe_VkImageMemoryBarrier::safe_VkImageMemoryBarrier(const safe_VkImageMemoryBarrier& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
    oldLayout = src.oldLayout;
    newLayout = src.newLayout;
    srcQueueFamilyIndex = src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = src.dstQueueFamilyIndex;
    image = src.image;
    subresourceRange = src.subresourceRange;
}

safe_VkImageMemoryBarrier& safe_VkImageMemoryBarrier::operator=(const safe_VkImageMemoryBarrier& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    srcAccessMask = src.srcAccessMask;
    dstAccessMask = src.dstAccessMask;
    oldLayout = src.oldLayout;
    newLayout = src.newLayout;
    srcQueueFamilyIndex = src.srcQueueFamilyIndex;
    dstQueueFamilyIndex = src.dstQueueFamilyIndex;
    image = src.image;
    subresourceRange = src.subresourceRange;

    return *this;
}

safe_VkImageMemoryBarrier::~safe_VkImageMemoryBarrier()
{
}

void safe_VkImageMemoryBarrier::initialize(const VkImageMemoryBarrier* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcAccessMask = in_struct->srcAccessMask;
    dstAccessMask = in_struct->dstAccessMask;
    oldLayout = in_struct->oldLayout;
    newLayout = in_struct->newLayout;
    srcQueueFamilyIndex = in_struct->srcQueueFamilyIndex;
    dstQueueFamilyIndex = in_struct->dstQueueFamilyIndex;
    image = in_struct->image;
    subresourceRange = in_struct->subresourceRange;
}

void safe_VkImageMemoryBarrier::initialize(const safe_VkImageMemoryBarrier* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcAccessMask = src->srcAccessMask;
    dstAccessMask = src->dstAccessMask;
    oldLayout = src->oldLayout;
    newLayout = src->newLayout;
    srcQueueFamilyIndex = src->srcQueueFamilyIndex;
    dstQueueFamilyIndex = src->dstQueueFamilyIndex;
    image = src->image;
    subresourceRange = src->subresourceRange;
}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo(const VkRenderPassBeginInfo* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    renderPass(in_struct->renderPass),
    framebuffer(in_struct->framebuffer),
    renderArea(in_struct->renderArea),
    clearValueCount(in_struct->clearValueCount),
    pClearValues(nullptr)
{
    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy ((void *)pClearValues, (void *)in_struct->pClearValues, sizeof(VkClearValue)*in_struct->clearValueCount);
    }
}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo() :
    pClearValues(nullptr)
{}

safe_VkRenderPassBeginInfo::safe_VkRenderPassBeginInfo(const safe_VkRenderPassBeginInfo& src)
{
    sType = src.sType;
    pNext = src.pNext;
    renderPass = src.renderPass;
    framebuffer = src.framebuffer;
    renderArea = src.renderArea;
    clearValueCount = src.clearValueCount;
    pClearValues = nullptr;
    if (src.pClearValues) {
        pClearValues = new VkClearValue[src.clearValueCount];
        memcpy ((void *)pClearValues, (void *)src.pClearValues, sizeof(VkClearValue)*src.clearValueCount);
    }
}

safe_VkRenderPassBeginInfo& safe_VkRenderPassBeginInfo::operator=(const safe_VkRenderPassBeginInfo& src)
{
    if (&src == this) return *this;

    if (pClearValues)
        delete[] pClearValues;

    sType = src.sType;
    pNext = src.pNext;
    renderPass = src.renderPass;
    framebuffer = src.framebuffer;
    renderArea = src.renderArea;
    clearValueCount = src.clearValueCount;
    pClearValues = nullptr;
    if (src.pClearValues) {
        pClearValues = new VkClearValue[src.clearValueCount];
        memcpy ((void *)pClearValues, (void *)src.pClearValues, sizeof(VkClearValue)*src.clearValueCount);
    }

    return *this;
}

safe_VkRenderPassBeginInfo::~safe_VkRenderPassBeginInfo()
{
    if (pClearValues)
        delete[] pClearValues;
}

void safe_VkRenderPassBeginInfo::initialize(const VkRenderPassBeginInfo* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    renderPass = in_struct->renderPass;
    framebuffer = in_struct->framebuffer;
    renderArea = in_struct->renderArea;
    clearValueCount = in_struct->clearValueCount;
    pClearValues = nullptr;
    if (in_struct->pClearValues) {
        pClearValues = new VkClearValue[in_struct->clearValueCount];
        memcpy ((void *)pClearValues, (void *)in_struct->pClearValues, sizeof(VkClearValue)*in_struct->clearValueCount);
    }
}

void safe_VkRenderPassBeginInfo::initialize(const safe_VkRenderPassBeginInfo* src)
{
    sType = src->sType;
    pNext = src->pNext;
    renderPass = src->renderPass;
    framebuffer = src->framebuffer;
    renderArea = src->renderArea;
    clearValueCount = src->clearValueCount;
    pClearValues = nullptr;
    if (src->pClearValues) {
        pClearValues = new VkClearValue[src->clearValueCount];
        memcpy ((void *)pClearValues, (void *)src->pClearValues, sizeof(VkClearValue)*src->clearValueCount);
    }
}

safe_VkSwapchainCreateInfoKHR::safe_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    surface(in_struct->surface),
    minImageCount(in_struct->minImageCount),
    imageFormat(in_struct->imageFormat),
    imageColorSpace(in_struct->imageColorSpace),
    imageExtent(in_struct->imageExtent),
    imageArrayLayers(in_struct->imageArrayLayers),
    imageUsage(in_struct->imageUsage),
    imageSharingMode(in_struct->imageSharingMode),
    queueFamilyIndexCount(in_struct->queueFamilyIndexCount),
    pQueueFamilyIndices(nullptr),
    preTransform(in_struct->preTransform),
    compositeAlpha(in_struct->compositeAlpha),
    presentMode(in_struct->presentMode),
    clipped(in_struct->clipped),
    oldSwapchain(in_struct->oldSwapchain)
{
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

safe_VkSwapchainCreateInfoKHR::safe_VkSwapchainCreateInfoKHR() :
    pQueueFamilyIndices(nullptr)
{}

safe_VkSwapchainCreateInfoKHR::safe_VkSwapchainCreateInfoKHR(const safe_VkSwapchainCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    surface = src.surface;
    minImageCount = src.minImageCount;
    imageFormat = src.imageFormat;
    imageColorSpace = src.imageColorSpace;
    imageExtent = src.imageExtent;
    imageArrayLayers = src.imageArrayLayers;
    imageUsage = src.imageUsage;
    imageSharingMode = src.imageSharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    preTransform = src.preTransform;
    compositeAlpha = src.compositeAlpha;
    presentMode = src.presentMode;
    clipped = src.clipped;
    oldSwapchain = src.oldSwapchain;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }
}

safe_VkSwapchainCreateInfoKHR& safe_VkSwapchainCreateInfoKHR::operator=(const safe_VkSwapchainCreateInfoKHR& src)
{
    if (&src == this) return *this;

    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    surface = src.surface;
    minImageCount = src.minImageCount;
    imageFormat = src.imageFormat;
    imageColorSpace = src.imageColorSpace;
    imageExtent = src.imageExtent;
    imageArrayLayers = src.imageArrayLayers;
    imageUsage = src.imageUsage;
    imageSharingMode = src.imageSharingMode;
    queueFamilyIndexCount = src.queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    preTransform = src.preTransform;
    compositeAlpha = src.compositeAlpha;
    presentMode = src.presentMode;
    clipped = src.clipped;
    oldSwapchain = src.oldSwapchain;
    if (src.pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src.queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src.pQueueFamilyIndices, sizeof(uint32_t)*src.queueFamilyIndexCount);
    }

    return *this;
}

safe_VkSwapchainCreateInfoKHR::~safe_VkSwapchainCreateInfoKHR()
{
    if (pQueueFamilyIndices)
        delete[] pQueueFamilyIndices;
}

void safe_VkSwapchainCreateInfoKHR::initialize(const VkSwapchainCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    surface = in_struct->surface;
    minImageCount = in_struct->minImageCount;
    imageFormat = in_struct->imageFormat;
    imageColorSpace = in_struct->imageColorSpace;
    imageExtent = in_struct->imageExtent;
    imageArrayLayers = in_struct->imageArrayLayers;
    imageUsage = in_struct->imageUsage;
    imageSharingMode = in_struct->imageSharingMode;
    queueFamilyIndexCount = in_struct->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    preTransform = in_struct->preTransform;
    compositeAlpha = in_struct->compositeAlpha;
    presentMode = in_struct->presentMode;
    clipped = in_struct->clipped;
    oldSwapchain = in_struct->oldSwapchain;
    if (in_struct->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[in_struct->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)in_struct->pQueueFamilyIndices, sizeof(uint32_t)*in_struct->queueFamilyIndexCount);
    }
}

void safe_VkSwapchainCreateInfoKHR::initialize(const safe_VkSwapchainCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    surface = src->surface;
    minImageCount = src->minImageCount;
    imageFormat = src->imageFormat;
    imageColorSpace = src->imageColorSpace;
    imageExtent = src->imageExtent;
    imageArrayLayers = src->imageArrayLayers;
    imageUsage = src->imageUsage;
    imageSharingMode = src->imageSharingMode;
    queueFamilyIndexCount = src->queueFamilyIndexCount;
    pQueueFamilyIndices = nullptr;
    preTransform = src->preTransform;
    compositeAlpha = src->compositeAlpha;
    presentMode = src->presentMode;
    clipped = src->clipped;
    oldSwapchain = src->oldSwapchain;
    if (src->pQueueFamilyIndices) {
        pQueueFamilyIndices = new uint32_t[src->queueFamilyIndexCount];
        memcpy ((void *)pQueueFamilyIndices, (void *)src->pQueueFamilyIndices, sizeof(uint32_t)*src->queueFamilyIndexCount);
    }
}

safe_VkPresentInfoKHR::safe_VkPresentInfoKHR(const VkPresentInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphores(nullptr),
    swapchainCount(in_struct->swapchainCount),
    pSwapchains(nullptr),
    pImageIndices(nullptr),
    pResults(nullptr)
{
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && in_struct->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = in_struct->pSwapchains[i];
        }
    }
    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pImageIndices, (void *)in_struct->pImageIndices, sizeof(uint32_t)*in_struct->swapchainCount);
    }
    if (in_struct->pResults) {
        pResults = new VkResult[in_struct->swapchainCount];
        memcpy ((void *)pResults, (void *)in_struct->pResults, sizeof(VkResult)*in_struct->swapchainCount);
    }
}

safe_VkPresentInfoKHR::safe_VkPresentInfoKHR() :
    pWaitSemaphores(nullptr),
    pSwapchains(nullptr),
    pImageIndices(nullptr),
    pResults(nullptr)
{}

safe_VkPresentInfoKHR::safe_VkPresentInfoKHR(const safe_VkPresentInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = src.swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (swapchainCount && src.pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = src.pSwapchains[i];
        }
    }
    if (src.pImageIndices) {
        pImageIndices = new uint32_t[src.swapchainCount];
        memcpy ((void *)pImageIndices, (void *)src.pImageIndices, sizeof(uint32_t)*src.swapchainCount);
    }
    if (src.pResults) {
        pResults = new VkResult[src.swapchainCount];
        memcpy ((void *)pResults, (void *)src.pResults, sizeof(VkResult)*src.swapchainCount);
    }
}

safe_VkPresentInfoKHR& safe_VkPresentInfoKHR::operator=(const safe_VkPresentInfoKHR& src)
{
    if (&src == this) return *this;

    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pSwapchains)
        delete[] pSwapchains;
    if (pImageIndices)
        delete[] pImageIndices;
    if (pResults)
        delete[] pResults;

    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = src.swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    if (waitSemaphoreCount && src.pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src.pWaitSemaphores[i];
        }
    }
    if (swapchainCount && src.pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = src.pSwapchains[i];
        }
    }
    if (src.pImageIndices) {
        pImageIndices = new uint32_t[src.swapchainCount];
        memcpy ((void *)pImageIndices, (void *)src.pImageIndices, sizeof(uint32_t)*src.swapchainCount);
    }
    if (src.pResults) {
        pResults = new VkResult[src.swapchainCount];
        memcpy ((void *)pResults, (void *)src.pResults, sizeof(VkResult)*src.swapchainCount);
    }

    return *this;
}

safe_VkPresentInfoKHR::~safe_VkPresentInfoKHR()
{
    if (pWaitSemaphores)
        delete[] pWaitSemaphores;
    if (pSwapchains)
        delete[] pSwapchains;
    if (pImageIndices)
        delete[] pImageIndices;
    if (pResults)
        delete[] pResults;
}

void safe_VkPresentInfoKHR::initialize(const VkPresentInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = in_struct->swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    if (waitSemaphoreCount && in_struct->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = in_struct->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && in_struct->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = in_struct->pSwapchains[i];
        }
    }
    if (in_struct->pImageIndices) {
        pImageIndices = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pImageIndices, (void *)in_struct->pImageIndices, sizeof(uint32_t)*in_struct->swapchainCount);
    }
    if (in_struct->pResults) {
        pResults = new VkResult[in_struct->swapchainCount];
        memcpy ((void *)pResults, (void *)in_struct->pResults, sizeof(VkResult)*in_struct->swapchainCount);
    }
}

void safe_VkPresentInfoKHR::initialize(const safe_VkPresentInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphores = nullptr;
    swapchainCount = src->swapchainCount;
    pSwapchains = nullptr;
    pImageIndices = nullptr;
    pResults = nullptr;
    if (waitSemaphoreCount && src->pWaitSemaphores) {
        pWaitSemaphores = new VkSemaphore[waitSemaphoreCount];
        for (uint32_t i=0; i<waitSemaphoreCount; ++i) {
            pWaitSemaphores[i] = src->pWaitSemaphores[i];
        }
    }
    if (swapchainCount && src->pSwapchains) {
        pSwapchains = new VkSwapchainKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pSwapchains[i] = src->pSwapchains[i];
        }
    }
    if (src->pImageIndices) {
        pImageIndices = new uint32_t[src->swapchainCount];
        memcpy ((void *)pImageIndices, (void *)src->pImageIndices, sizeof(uint32_t)*src->swapchainCount);
    }
    if (src->pResults) {
        pResults = new VkResult[src->swapchainCount];
        memcpy ((void *)pResults, (void *)src->pResults, sizeof(VkResult)*src->swapchainCount);
    }
}

safe_VkDisplayPropertiesKHR::safe_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR* in_struct) :
    display(in_struct->display),
    displayName(in_struct->displayName),
    physicalDimensions(in_struct->physicalDimensions),
    physicalResolution(in_struct->physicalResolution),
    supportedTransforms(in_struct->supportedTransforms),
    planeReorderPossible(in_struct->planeReorderPossible),
    persistentContent(in_struct->persistentContent)
{
}

safe_VkDisplayPropertiesKHR::safe_VkDisplayPropertiesKHR()
{}

safe_VkDisplayPropertiesKHR::safe_VkDisplayPropertiesKHR(const safe_VkDisplayPropertiesKHR& src)
{
    display = src.display;
    displayName = src.displayName;
    physicalDimensions = src.physicalDimensions;
    physicalResolution = src.physicalResolution;
    supportedTransforms = src.supportedTransforms;
    planeReorderPossible = src.planeReorderPossible;
    persistentContent = src.persistentContent;
}

safe_VkDisplayPropertiesKHR& safe_VkDisplayPropertiesKHR::operator=(const safe_VkDisplayPropertiesKHR& src)
{
    if (&src == this) return *this;


    display = src.display;
    displayName = src.displayName;
    physicalDimensions = src.physicalDimensions;
    physicalResolution = src.physicalResolution;
    supportedTransforms = src.supportedTransforms;
    planeReorderPossible = src.planeReorderPossible;
    persistentContent = src.persistentContent;

    return *this;
}

safe_VkDisplayPropertiesKHR::~safe_VkDisplayPropertiesKHR()
{
}

void safe_VkDisplayPropertiesKHR::initialize(const VkDisplayPropertiesKHR* in_struct)
{
    display = in_struct->display;
    displayName = in_struct->displayName;
    physicalDimensions = in_struct->physicalDimensions;
    physicalResolution = in_struct->physicalResolution;
    supportedTransforms = in_struct->supportedTransforms;
    planeReorderPossible = in_struct->planeReorderPossible;
    persistentContent = in_struct->persistentContent;
}

void safe_VkDisplayPropertiesKHR::initialize(const safe_VkDisplayPropertiesKHR* src)
{
    display = src->display;
    displayName = src->displayName;
    physicalDimensions = src->physicalDimensions;
    physicalResolution = src->physicalResolution;
    supportedTransforms = src->supportedTransforms;
    planeReorderPossible = src->planeReorderPossible;
    persistentContent = src->persistentContent;
}

safe_VkDisplayModeCreateInfoKHR::safe_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    parameters(in_struct->parameters)
{
}

safe_VkDisplayModeCreateInfoKHR::safe_VkDisplayModeCreateInfoKHR()
{}

safe_VkDisplayModeCreateInfoKHR::safe_VkDisplayModeCreateInfoKHR(const safe_VkDisplayModeCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    parameters = src.parameters;
}

safe_VkDisplayModeCreateInfoKHR& safe_VkDisplayModeCreateInfoKHR::operator=(const safe_VkDisplayModeCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    parameters = src.parameters;

    return *this;
}

safe_VkDisplayModeCreateInfoKHR::~safe_VkDisplayModeCreateInfoKHR()
{
}

void safe_VkDisplayModeCreateInfoKHR::initialize(const VkDisplayModeCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    parameters = in_struct->parameters;
}

void safe_VkDisplayModeCreateInfoKHR::initialize(const safe_VkDisplayModeCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    parameters = src->parameters;
}

safe_VkDisplaySurfaceCreateInfoKHR::safe_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    displayMode(in_struct->displayMode),
    planeIndex(in_struct->planeIndex),
    planeStackIndex(in_struct->planeStackIndex),
    transform(in_struct->transform),
    globalAlpha(in_struct->globalAlpha),
    alphaMode(in_struct->alphaMode),
    imageExtent(in_struct->imageExtent)
{
}

safe_VkDisplaySurfaceCreateInfoKHR::safe_VkDisplaySurfaceCreateInfoKHR()
{}

safe_VkDisplaySurfaceCreateInfoKHR::safe_VkDisplaySurfaceCreateInfoKHR(const safe_VkDisplaySurfaceCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    displayMode = src.displayMode;
    planeIndex = src.planeIndex;
    planeStackIndex = src.planeStackIndex;
    transform = src.transform;
    globalAlpha = src.globalAlpha;
    alphaMode = src.alphaMode;
    imageExtent = src.imageExtent;
}

safe_VkDisplaySurfaceCreateInfoKHR& safe_VkDisplaySurfaceCreateInfoKHR::operator=(const safe_VkDisplaySurfaceCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    displayMode = src.displayMode;
    planeIndex = src.planeIndex;
    planeStackIndex = src.planeStackIndex;
    transform = src.transform;
    globalAlpha = src.globalAlpha;
    alphaMode = src.alphaMode;
    imageExtent = src.imageExtent;

    return *this;
}

safe_VkDisplaySurfaceCreateInfoKHR::~safe_VkDisplaySurfaceCreateInfoKHR()
{
}

void safe_VkDisplaySurfaceCreateInfoKHR::initialize(const VkDisplaySurfaceCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    displayMode = in_struct->displayMode;
    planeIndex = in_struct->planeIndex;
    planeStackIndex = in_struct->planeStackIndex;
    transform = in_struct->transform;
    globalAlpha = in_struct->globalAlpha;
    alphaMode = in_struct->alphaMode;
    imageExtent = in_struct->imageExtent;
}

void safe_VkDisplaySurfaceCreateInfoKHR::initialize(const safe_VkDisplaySurfaceCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    displayMode = src->displayMode;
    planeIndex = src->planeIndex;
    planeStackIndex = src->planeStackIndex;
    transform = src->transform;
    globalAlpha = src->globalAlpha;
    alphaMode = src->alphaMode;
    imageExtent = src->imageExtent;
}

safe_VkDisplayPresentInfoKHR::safe_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcRect(in_struct->srcRect),
    dstRect(in_struct->dstRect),
    persistent(in_struct->persistent)
{
}

safe_VkDisplayPresentInfoKHR::safe_VkDisplayPresentInfoKHR()
{}

safe_VkDisplayPresentInfoKHR::safe_VkDisplayPresentInfoKHR(const safe_VkDisplayPresentInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcRect = src.srcRect;
    dstRect = src.dstRect;
    persistent = src.persistent;
}

safe_VkDisplayPresentInfoKHR& safe_VkDisplayPresentInfoKHR::operator=(const safe_VkDisplayPresentInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    srcRect = src.srcRect;
    dstRect = src.dstRect;
    persistent = src.persistent;

    return *this;
}

safe_VkDisplayPresentInfoKHR::~safe_VkDisplayPresentInfoKHR()
{
}

void safe_VkDisplayPresentInfoKHR::initialize(const VkDisplayPresentInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcRect = in_struct->srcRect;
    dstRect = in_struct->dstRect;
    persistent = in_struct->persistent;
}

void safe_VkDisplayPresentInfoKHR::initialize(const safe_VkDisplayPresentInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcRect = src->srcRect;
    dstRect = src->dstRect;
    persistent = src->persistent;
}

safe_VkPhysicalDeviceFeatures2KHR::safe_VkPhysicalDeviceFeatures2KHR(const VkPhysicalDeviceFeatures2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    features(in_struct->features)
{
}

safe_VkPhysicalDeviceFeatures2KHR::safe_VkPhysicalDeviceFeatures2KHR()
{}

safe_VkPhysicalDeviceFeatures2KHR::safe_VkPhysicalDeviceFeatures2KHR(const safe_VkPhysicalDeviceFeatures2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    features = src.features;
}

safe_VkPhysicalDeviceFeatures2KHR& safe_VkPhysicalDeviceFeatures2KHR::operator=(const safe_VkPhysicalDeviceFeatures2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    features = src.features;

    return *this;
}

safe_VkPhysicalDeviceFeatures2KHR::~safe_VkPhysicalDeviceFeatures2KHR()
{
}

void safe_VkPhysicalDeviceFeatures2KHR::initialize(const VkPhysicalDeviceFeatures2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    features = in_struct->features;
}

void safe_VkPhysicalDeviceFeatures2KHR::initialize(const safe_VkPhysicalDeviceFeatures2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    features = src->features;
}

safe_VkPhysicalDeviceProperties2KHR::safe_VkPhysicalDeviceProperties2KHR(const VkPhysicalDeviceProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    properties(in_struct->properties)
{
}

safe_VkPhysicalDeviceProperties2KHR::safe_VkPhysicalDeviceProperties2KHR()
{}

safe_VkPhysicalDeviceProperties2KHR::safe_VkPhysicalDeviceProperties2KHR(const safe_VkPhysicalDeviceProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    properties = src.properties;
}

safe_VkPhysicalDeviceProperties2KHR& safe_VkPhysicalDeviceProperties2KHR::operator=(const safe_VkPhysicalDeviceProperties2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    properties = src.properties;

    return *this;
}

safe_VkPhysicalDeviceProperties2KHR::~safe_VkPhysicalDeviceProperties2KHR()
{
}

void safe_VkPhysicalDeviceProperties2KHR::initialize(const VkPhysicalDeviceProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    properties = in_struct->properties;
}

void safe_VkPhysicalDeviceProperties2KHR::initialize(const safe_VkPhysicalDeviceProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    properties = src->properties;
}

safe_VkFormatProperties2KHR::safe_VkFormatProperties2KHR(const VkFormatProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    formatProperties(in_struct->formatProperties)
{
}

safe_VkFormatProperties2KHR::safe_VkFormatProperties2KHR()
{}

safe_VkFormatProperties2KHR::safe_VkFormatProperties2KHR(const safe_VkFormatProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    formatProperties = src.formatProperties;
}

safe_VkFormatProperties2KHR& safe_VkFormatProperties2KHR::operator=(const safe_VkFormatProperties2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    formatProperties = src.formatProperties;

    return *this;
}

safe_VkFormatProperties2KHR::~safe_VkFormatProperties2KHR()
{
}

void safe_VkFormatProperties2KHR::initialize(const VkFormatProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    formatProperties = in_struct->formatProperties;
}

void safe_VkFormatProperties2KHR::initialize(const safe_VkFormatProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    formatProperties = src->formatProperties;
}

safe_VkImageFormatProperties2KHR::safe_VkImageFormatProperties2KHR(const VkImageFormatProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    imageFormatProperties(in_struct->imageFormatProperties)
{
}

safe_VkImageFormatProperties2KHR::safe_VkImageFormatProperties2KHR()
{}

safe_VkImageFormatProperties2KHR::safe_VkImageFormatProperties2KHR(const safe_VkImageFormatProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    imageFormatProperties = src.imageFormatProperties;
}

safe_VkImageFormatProperties2KHR& safe_VkImageFormatProperties2KHR::operator=(const safe_VkImageFormatProperties2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    imageFormatProperties = src.imageFormatProperties;

    return *this;
}

safe_VkImageFormatProperties2KHR::~safe_VkImageFormatProperties2KHR()
{
}

void safe_VkImageFormatProperties2KHR::initialize(const VkImageFormatProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    imageFormatProperties = in_struct->imageFormatProperties;
}

void safe_VkImageFormatProperties2KHR::initialize(const safe_VkImageFormatProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    imageFormatProperties = src->imageFormatProperties;
}

safe_VkPhysicalDeviceImageFormatInfo2KHR::safe_VkPhysicalDeviceImageFormatInfo2KHR(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    format(in_struct->format),
    type(in_struct->type),
    tiling(in_struct->tiling),
    usage(in_struct->usage),
    flags(in_struct->flags)
{
}

safe_VkPhysicalDeviceImageFormatInfo2KHR::safe_VkPhysicalDeviceImageFormatInfo2KHR()
{}

safe_VkPhysicalDeviceImageFormatInfo2KHR::safe_VkPhysicalDeviceImageFormatInfo2KHR(const safe_VkPhysicalDeviceImageFormatInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    type = src.type;
    tiling = src.tiling;
    usage = src.usage;
    flags = src.flags;
}

safe_VkPhysicalDeviceImageFormatInfo2KHR& safe_VkPhysicalDeviceImageFormatInfo2KHR::operator=(const safe_VkPhysicalDeviceImageFormatInfo2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    type = src.type;
    tiling = src.tiling;
    usage = src.usage;
    flags = src.flags;

    return *this;
}

safe_VkPhysicalDeviceImageFormatInfo2KHR::~safe_VkPhysicalDeviceImageFormatInfo2KHR()
{
}

void safe_VkPhysicalDeviceImageFormatInfo2KHR::initialize(const VkPhysicalDeviceImageFormatInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    format = in_struct->format;
    type = in_struct->type;
    tiling = in_struct->tiling;
    usage = in_struct->usage;
    flags = in_struct->flags;
}

void safe_VkPhysicalDeviceImageFormatInfo2KHR::initialize(const safe_VkPhysicalDeviceImageFormatInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    format = src->format;
    type = src->type;
    tiling = src->tiling;
    usage = src->usage;
    flags = src->flags;
}

safe_VkQueueFamilyProperties2KHR::safe_VkQueueFamilyProperties2KHR(const VkQueueFamilyProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    queueFamilyProperties(in_struct->queueFamilyProperties)
{
}

safe_VkQueueFamilyProperties2KHR::safe_VkQueueFamilyProperties2KHR()
{}

safe_VkQueueFamilyProperties2KHR::safe_VkQueueFamilyProperties2KHR(const safe_VkQueueFamilyProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    queueFamilyProperties = src.queueFamilyProperties;
}

safe_VkQueueFamilyProperties2KHR& safe_VkQueueFamilyProperties2KHR::operator=(const safe_VkQueueFamilyProperties2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    queueFamilyProperties = src.queueFamilyProperties;

    return *this;
}

safe_VkQueueFamilyProperties2KHR::~safe_VkQueueFamilyProperties2KHR()
{
}

void safe_VkQueueFamilyProperties2KHR::initialize(const VkQueueFamilyProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    queueFamilyProperties = in_struct->queueFamilyProperties;
}

void safe_VkQueueFamilyProperties2KHR::initialize(const safe_VkQueueFamilyProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    queueFamilyProperties = src->queueFamilyProperties;
}

safe_VkPhysicalDeviceMemoryProperties2KHR::safe_VkPhysicalDeviceMemoryProperties2KHR(const VkPhysicalDeviceMemoryProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryProperties(in_struct->memoryProperties)
{
}

safe_VkPhysicalDeviceMemoryProperties2KHR::safe_VkPhysicalDeviceMemoryProperties2KHR()
{}

safe_VkPhysicalDeviceMemoryProperties2KHR::safe_VkPhysicalDeviceMemoryProperties2KHR(const safe_VkPhysicalDeviceMemoryProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryProperties = src.memoryProperties;
}

safe_VkPhysicalDeviceMemoryProperties2KHR& safe_VkPhysicalDeviceMemoryProperties2KHR::operator=(const safe_VkPhysicalDeviceMemoryProperties2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memoryProperties = src.memoryProperties;

    return *this;
}

safe_VkPhysicalDeviceMemoryProperties2KHR::~safe_VkPhysicalDeviceMemoryProperties2KHR()
{
}

void safe_VkPhysicalDeviceMemoryProperties2KHR::initialize(const VkPhysicalDeviceMemoryProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryProperties = in_struct->memoryProperties;
}

void safe_VkPhysicalDeviceMemoryProperties2KHR::initialize(const safe_VkPhysicalDeviceMemoryProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryProperties = src->memoryProperties;
}

safe_VkSparseImageFormatProperties2KHR::safe_VkSparseImageFormatProperties2KHR(const VkSparseImageFormatProperties2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    properties(in_struct->properties)
{
}

safe_VkSparseImageFormatProperties2KHR::safe_VkSparseImageFormatProperties2KHR()
{}

safe_VkSparseImageFormatProperties2KHR::safe_VkSparseImageFormatProperties2KHR(const safe_VkSparseImageFormatProperties2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    properties = src.properties;
}

safe_VkSparseImageFormatProperties2KHR& safe_VkSparseImageFormatProperties2KHR::operator=(const safe_VkSparseImageFormatProperties2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    properties = src.properties;

    return *this;
}

safe_VkSparseImageFormatProperties2KHR::~safe_VkSparseImageFormatProperties2KHR()
{
}

void safe_VkSparseImageFormatProperties2KHR::initialize(const VkSparseImageFormatProperties2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    properties = in_struct->properties;
}

void safe_VkSparseImageFormatProperties2KHR::initialize(const safe_VkSparseImageFormatProperties2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    properties = src->properties;
}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    format(in_struct->format),
    type(in_struct->type),
    samples(in_struct->samples),
    usage(in_struct->usage),
    tiling(in_struct->tiling)
{
}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::safe_VkPhysicalDeviceSparseImageFormatInfo2KHR()
{}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::safe_VkPhysicalDeviceSparseImageFormatInfo2KHR(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    type = src.type;
    samples = src.samples;
    usage = src.usage;
    tiling = src.tiling;
}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::operator=(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    type = src.type;
    samples = src.samples;
    usage = src.usage;
    tiling = src.tiling;

    return *this;
}

safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::~safe_VkPhysicalDeviceSparseImageFormatInfo2KHR()
{
}

void safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::initialize(const VkPhysicalDeviceSparseImageFormatInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    format = in_struct->format;
    type = in_struct->type;
    samples = in_struct->samples;
    usage = in_struct->usage;
    tiling = in_struct->tiling;
}

void safe_VkPhysicalDeviceSparseImageFormatInfo2KHR::initialize(const safe_VkPhysicalDeviceSparseImageFormatInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    format = src->format;
    type = src->type;
    samples = src->samples;
    usage = src->usage;
    tiling = src->tiling;
}

safe_VkPhysicalDeviceExternalImageFormatInfoKHR::safe_VkPhysicalDeviceExternalImageFormatInfoKHR(const VkPhysicalDeviceExternalImageFormatInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType)
{
}

safe_VkPhysicalDeviceExternalImageFormatInfoKHR::safe_VkPhysicalDeviceExternalImageFormatInfoKHR()
{}

safe_VkPhysicalDeviceExternalImageFormatInfoKHR::safe_VkPhysicalDeviceExternalImageFormatInfoKHR(const safe_VkPhysicalDeviceExternalImageFormatInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
}

safe_VkPhysicalDeviceExternalImageFormatInfoKHR& safe_VkPhysicalDeviceExternalImageFormatInfoKHR::operator=(const safe_VkPhysicalDeviceExternalImageFormatInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;

    return *this;
}

safe_VkPhysicalDeviceExternalImageFormatInfoKHR::~safe_VkPhysicalDeviceExternalImageFormatInfoKHR()
{
}

void safe_VkPhysicalDeviceExternalImageFormatInfoKHR::initialize(const VkPhysicalDeviceExternalImageFormatInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
}

void safe_VkPhysicalDeviceExternalImageFormatInfoKHR::initialize(const safe_VkPhysicalDeviceExternalImageFormatInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
}

safe_VkExternalImageFormatPropertiesKHR::safe_VkExternalImageFormatPropertiesKHR(const VkExternalImageFormatPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    externalMemoryProperties(in_struct->externalMemoryProperties)
{
}

safe_VkExternalImageFormatPropertiesKHR::safe_VkExternalImageFormatPropertiesKHR()
{}

safe_VkExternalImageFormatPropertiesKHR::safe_VkExternalImageFormatPropertiesKHR(const safe_VkExternalImageFormatPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    externalMemoryProperties = src.externalMemoryProperties;
}

safe_VkExternalImageFormatPropertiesKHR& safe_VkExternalImageFormatPropertiesKHR::operator=(const safe_VkExternalImageFormatPropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    externalMemoryProperties = src.externalMemoryProperties;

    return *this;
}

safe_VkExternalImageFormatPropertiesKHR::~safe_VkExternalImageFormatPropertiesKHR()
{
}

void safe_VkExternalImageFormatPropertiesKHR::initialize(const VkExternalImageFormatPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    externalMemoryProperties = in_struct->externalMemoryProperties;
}

void safe_VkExternalImageFormatPropertiesKHR::initialize(const safe_VkExternalImageFormatPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    externalMemoryProperties = src->externalMemoryProperties;
}

safe_VkPhysicalDeviceExternalBufferInfoKHR::safe_VkPhysicalDeviceExternalBufferInfoKHR(const VkPhysicalDeviceExternalBufferInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    usage(in_struct->usage),
    handleType(in_struct->handleType)
{
}

safe_VkPhysicalDeviceExternalBufferInfoKHR::safe_VkPhysicalDeviceExternalBufferInfoKHR()
{}

safe_VkPhysicalDeviceExternalBufferInfoKHR::safe_VkPhysicalDeviceExternalBufferInfoKHR(const safe_VkPhysicalDeviceExternalBufferInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    usage = src.usage;
    handleType = src.handleType;
}

safe_VkPhysicalDeviceExternalBufferInfoKHR& safe_VkPhysicalDeviceExternalBufferInfoKHR::operator=(const safe_VkPhysicalDeviceExternalBufferInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    usage = src.usage;
    handleType = src.handleType;

    return *this;
}

safe_VkPhysicalDeviceExternalBufferInfoKHR::~safe_VkPhysicalDeviceExternalBufferInfoKHR()
{
}

void safe_VkPhysicalDeviceExternalBufferInfoKHR::initialize(const VkPhysicalDeviceExternalBufferInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    usage = in_struct->usage;
    handleType = in_struct->handleType;
}

void safe_VkPhysicalDeviceExternalBufferInfoKHR::initialize(const safe_VkPhysicalDeviceExternalBufferInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    usage = src->usage;
    handleType = src->handleType;
}

safe_VkExternalBufferPropertiesKHR::safe_VkExternalBufferPropertiesKHR(const VkExternalBufferPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    externalMemoryProperties(in_struct->externalMemoryProperties)
{
}

safe_VkExternalBufferPropertiesKHR::safe_VkExternalBufferPropertiesKHR()
{}

safe_VkExternalBufferPropertiesKHR::safe_VkExternalBufferPropertiesKHR(const safe_VkExternalBufferPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    externalMemoryProperties = src.externalMemoryProperties;
}

safe_VkExternalBufferPropertiesKHR& safe_VkExternalBufferPropertiesKHR::operator=(const safe_VkExternalBufferPropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    externalMemoryProperties = src.externalMemoryProperties;

    return *this;
}

safe_VkExternalBufferPropertiesKHR::~safe_VkExternalBufferPropertiesKHR()
{
}

void safe_VkExternalBufferPropertiesKHR::initialize(const VkExternalBufferPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    externalMemoryProperties = in_struct->externalMemoryProperties;
}

void safe_VkExternalBufferPropertiesKHR::initialize(const safe_VkExternalBufferPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    externalMemoryProperties = src->externalMemoryProperties;
}

safe_VkPhysicalDeviceIDPropertiesKHR::safe_VkPhysicalDeviceIDPropertiesKHR(const VkPhysicalDeviceIDPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceNodeMask(in_struct->deviceNodeMask),
    deviceLUIDValid(in_struct->deviceLUIDValid)
{
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHR; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

safe_VkPhysicalDeviceIDPropertiesKHR::safe_VkPhysicalDeviceIDPropertiesKHR()
{}

safe_VkPhysicalDeviceIDPropertiesKHR::safe_VkPhysicalDeviceIDPropertiesKHR(const safe_VkPhysicalDeviceIDPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceNodeMask = src.deviceNodeMask;
    deviceLUIDValid = src.deviceLUIDValid;
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = src.deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = src.driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHR; ++i) {
        deviceLUID[i] = src.deviceLUID[i];
    }
}

safe_VkPhysicalDeviceIDPropertiesKHR& safe_VkPhysicalDeviceIDPropertiesKHR::operator=(const safe_VkPhysicalDeviceIDPropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    deviceNodeMask = src.deviceNodeMask;
    deviceLUIDValid = src.deviceLUIDValid;
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = src.deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = src.driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHR; ++i) {
        deviceLUID[i] = src.deviceLUID[i];
    }

    return *this;
}

safe_VkPhysicalDeviceIDPropertiesKHR::~safe_VkPhysicalDeviceIDPropertiesKHR()
{
}

void safe_VkPhysicalDeviceIDPropertiesKHR::initialize(const VkPhysicalDeviceIDPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceNodeMask = in_struct->deviceNodeMask;
    deviceLUIDValid = in_struct->deviceLUIDValid;
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = in_struct->deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = in_struct->driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHR; ++i) {
        deviceLUID[i] = in_struct->deviceLUID[i];
    }
}

void safe_VkPhysicalDeviceIDPropertiesKHR::initialize(const safe_VkPhysicalDeviceIDPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceNodeMask = src->deviceNodeMask;
    deviceLUIDValid = src->deviceLUIDValid;
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        deviceUUID[i] = src->deviceUUID[i];
    }
    for (uint32_t i=0; i<VK_UUID_SIZE; ++i) {
        driverUUID[i] = src->driverUUID[i];
    }
    for (uint32_t i=0; i<VK_LUID_SIZE_KHR; ++i) {
        deviceLUID[i] = src->deviceLUID[i];
    }
}

safe_VkExternalMemoryImageCreateInfoKHR::safe_VkExternalMemoryImageCreateInfoKHR(const VkExternalMemoryImageCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExternalMemoryImageCreateInfoKHR::safe_VkExternalMemoryImageCreateInfoKHR()
{}

safe_VkExternalMemoryImageCreateInfoKHR::safe_VkExternalMemoryImageCreateInfoKHR(const safe_VkExternalMemoryImageCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExternalMemoryImageCreateInfoKHR& safe_VkExternalMemoryImageCreateInfoKHR::operator=(const safe_VkExternalMemoryImageCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;

    return *this;
}

safe_VkExternalMemoryImageCreateInfoKHR::~safe_VkExternalMemoryImageCreateInfoKHR()
{
}

void safe_VkExternalMemoryImageCreateInfoKHR::initialize(const VkExternalMemoryImageCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExternalMemoryImageCreateInfoKHR::initialize(const safe_VkExternalMemoryImageCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}

safe_VkExternalMemoryBufferCreateInfoKHR::safe_VkExternalMemoryBufferCreateInfoKHR(const VkExternalMemoryBufferCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExternalMemoryBufferCreateInfoKHR::safe_VkExternalMemoryBufferCreateInfoKHR()
{}

safe_VkExternalMemoryBufferCreateInfoKHR::safe_VkExternalMemoryBufferCreateInfoKHR(const safe_VkExternalMemoryBufferCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExternalMemoryBufferCreateInfoKHR& safe_VkExternalMemoryBufferCreateInfoKHR::operator=(const safe_VkExternalMemoryBufferCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;

    return *this;
}

safe_VkExternalMemoryBufferCreateInfoKHR::~safe_VkExternalMemoryBufferCreateInfoKHR()
{
}

void safe_VkExternalMemoryBufferCreateInfoKHR::initialize(const VkExternalMemoryBufferCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExternalMemoryBufferCreateInfoKHR::initialize(const safe_VkExternalMemoryBufferCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}

safe_VkExportMemoryAllocateInfoKHR::safe_VkExportMemoryAllocateInfoKHR(const VkExportMemoryAllocateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExportMemoryAllocateInfoKHR::safe_VkExportMemoryAllocateInfoKHR()
{}

safe_VkExportMemoryAllocateInfoKHR::safe_VkExportMemoryAllocateInfoKHR(const safe_VkExportMemoryAllocateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExportMemoryAllocateInfoKHR& safe_VkExportMemoryAllocateInfoKHR::operator=(const safe_VkExportMemoryAllocateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;

    return *this;
}

safe_VkExportMemoryAllocateInfoKHR::~safe_VkExportMemoryAllocateInfoKHR()
{
}

void safe_VkExportMemoryAllocateInfoKHR::initialize(const VkExportMemoryAllocateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExportMemoryAllocateInfoKHR::initialize(const safe_VkExportMemoryAllocateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkImportMemoryWin32HandleInfoKHR::safe_VkImportMemoryWin32HandleInfoKHR(const VkImportMemoryWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType),
    handle(in_struct->handle),
    name(in_struct->name)
{
}

safe_VkImportMemoryWin32HandleInfoKHR::safe_VkImportMemoryWin32HandleInfoKHR()
{}

safe_VkImportMemoryWin32HandleInfoKHR::safe_VkImportMemoryWin32HandleInfoKHR(const safe_VkImportMemoryWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    handle = src.handle;
    name = src.name;
}

safe_VkImportMemoryWin32HandleInfoKHR& safe_VkImportMemoryWin32HandleInfoKHR::operator=(const safe_VkImportMemoryWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    handle = src.handle;
    name = src.name;

    return *this;
}

safe_VkImportMemoryWin32HandleInfoKHR::~safe_VkImportMemoryWin32HandleInfoKHR()
{
}

void safe_VkImportMemoryWin32HandleInfoKHR::initialize(const VkImportMemoryWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    name = in_struct->name;
}

void safe_VkImportMemoryWin32HandleInfoKHR::initialize(const safe_VkImportMemoryWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
    handle = src->handle;
    name = src->name;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkExportMemoryWin32HandleInfoKHR::safe_VkExportMemoryWin32HandleInfoKHR(const VkExportMemoryWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pAttributes(nullptr),
    dwAccess(in_struct->dwAccess),
    name(in_struct->name)
{
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoKHR::safe_VkExportMemoryWin32HandleInfoKHR() :
    pAttributes(nullptr)
{}

safe_VkExportMemoryWin32HandleInfoKHR::safe_VkExportMemoryWin32HandleInfoKHR(const safe_VkExportMemoryWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoKHR& safe_VkExportMemoryWin32HandleInfoKHR::operator=(const safe_VkExportMemoryWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;

    if (pAttributes)
        delete pAttributes;

    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }

    return *this;
}

safe_VkExportMemoryWin32HandleInfoKHR::~safe_VkExportMemoryWin32HandleInfoKHR()
{
    if (pAttributes)
        delete pAttributes;
}

void safe_VkExportMemoryWin32HandleInfoKHR::initialize(const VkExportMemoryWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void safe_VkExportMemoryWin32HandleInfoKHR::initialize(const safe_VkExportMemoryWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pAttributes = nullptr;
    dwAccess = src->dwAccess;
    name = src->name;
    if (src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src->pAttributes);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkMemoryWin32HandlePropertiesKHR::safe_VkMemoryWin32HandlePropertiesKHR(const VkMemoryWin32HandlePropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryTypeBits(in_struct->memoryTypeBits)
{
}

safe_VkMemoryWin32HandlePropertiesKHR::safe_VkMemoryWin32HandlePropertiesKHR()
{}

safe_VkMemoryWin32HandlePropertiesKHR::safe_VkMemoryWin32HandlePropertiesKHR(const safe_VkMemoryWin32HandlePropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;
}

safe_VkMemoryWin32HandlePropertiesKHR& safe_VkMemoryWin32HandlePropertiesKHR::operator=(const safe_VkMemoryWin32HandlePropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;

    return *this;
}

safe_VkMemoryWin32HandlePropertiesKHR::~safe_VkMemoryWin32HandlePropertiesKHR()
{
}

void safe_VkMemoryWin32HandlePropertiesKHR::initialize(const VkMemoryWin32HandlePropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryTypeBits = in_struct->memoryTypeBits;
}

void safe_VkMemoryWin32HandlePropertiesKHR::initialize(const safe_VkMemoryWin32HandlePropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryTypeBits = src->memoryTypeBits;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkMemoryGetWin32HandleInfoKHR::safe_VkMemoryGetWin32HandleInfoKHR(const VkMemoryGetWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memory(in_struct->memory),
    handleType(in_struct->handleType)
{
}

safe_VkMemoryGetWin32HandleInfoKHR::safe_VkMemoryGetWin32HandleInfoKHR()
{}

safe_VkMemoryGetWin32HandleInfoKHR::safe_VkMemoryGetWin32HandleInfoKHR(const safe_VkMemoryGetWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memory = src.memory;
    handleType = src.handleType;
}

safe_VkMemoryGetWin32HandleInfoKHR& safe_VkMemoryGetWin32HandleInfoKHR::operator=(const safe_VkMemoryGetWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memory = src.memory;
    handleType = src.handleType;

    return *this;
}

safe_VkMemoryGetWin32HandleInfoKHR::~safe_VkMemoryGetWin32HandleInfoKHR()
{
}

void safe_VkMemoryGetWin32HandleInfoKHR::initialize(const VkMemoryGetWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memory = in_struct->memory;
    handleType = in_struct->handleType;
}

void safe_VkMemoryGetWin32HandleInfoKHR::initialize(const safe_VkMemoryGetWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memory = src->memory;
    handleType = src->handleType;
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkImportMemoryFdInfoKHR::safe_VkImportMemoryFdInfoKHR(const VkImportMemoryFdInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType),
    fd(in_struct->fd)
{
}

safe_VkImportMemoryFdInfoKHR::safe_VkImportMemoryFdInfoKHR()
{}

safe_VkImportMemoryFdInfoKHR::safe_VkImportMemoryFdInfoKHR(const safe_VkImportMemoryFdInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    fd = src.fd;
}

safe_VkImportMemoryFdInfoKHR& safe_VkImportMemoryFdInfoKHR::operator=(const safe_VkImportMemoryFdInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    fd = src.fd;

    return *this;
}

safe_VkImportMemoryFdInfoKHR::~safe_VkImportMemoryFdInfoKHR()
{
}

void safe_VkImportMemoryFdInfoKHR::initialize(const VkImportMemoryFdInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
}

void safe_VkImportMemoryFdInfoKHR::initialize(const safe_VkImportMemoryFdInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
    fd = src->fd;
}

safe_VkMemoryFdPropertiesKHR::safe_VkMemoryFdPropertiesKHR(const VkMemoryFdPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryTypeBits(in_struct->memoryTypeBits)
{
}

safe_VkMemoryFdPropertiesKHR::safe_VkMemoryFdPropertiesKHR()
{}

safe_VkMemoryFdPropertiesKHR::safe_VkMemoryFdPropertiesKHR(const safe_VkMemoryFdPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;
}

safe_VkMemoryFdPropertiesKHR& safe_VkMemoryFdPropertiesKHR::operator=(const safe_VkMemoryFdPropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;

    return *this;
}

safe_VkMemoryFdPropertiesKHR::~safe_VkMemoryFdPropertiesKHR()
{
}

void safe_VkMemoryFdPropertiesKHR::initialize(const VkMemoryFdPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryTypeBits = in_struct->memoryTypeBits;
}

void safe_VkMemoryFdPropertiesKHR::initialize(const safe_VkMemoryFdPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryTypeBits = src->memoryTypeBits;
}

safe_VkMemoryGetFdInfoKHR::safe_VkMemoryGetFdInfoKHR(const VkMemoryGetFdInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memory(in_struct->memory),
    handleType(in_struct->handleType)
{
}

safe_VkMemoryGetFdInfoKHR::safe_VkMemoryGetFdInfoKHR()
{}

safe_VkMemoryGetFdInfoKHR::safe_VkMemoryGetFdInfoKHR(const safe_VkMemoryGetFdInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memory = src.memory;
    handleType = src.handleType;
}

safe_VkMemoryGetFdInfoKHR& safe_VkMemoryGetFdInfoKHR::operator=(const safe_VkMemoryGetFdInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memory = src.memory;
    handleType = src.handleType;

    return *this;
}

safe_VkMemoryGetFdInfoKHR::~safe_VkMemoryGetFdInfoKHR()
{
}

void safe_VkMemoryGetFdInfoKHR::initialize(const VkMemoryGetFdInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memory = in_struct->memory;
    handleType = in_struct->handleType;
}

void safe_VkMemoryGetFdInfoKHR::initialize(const safe_VkMemoryGetFdInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memory = src->memory;
    handleType = src->handleType;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkWin32KeyedMutexAcquireReleaseInfoKHR::safe_VkWin32KeyedMutexAcquireReleaseInfoKHR(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    acquireCount(in_struct->acquireCount),
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeouts(nullptr),
    releaseCount(in_struct->releaseCount),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)in_struct->pAcquireTimeouts, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoKHR::safe_VkWin32KeyedMutexAcquireReleaseInfoKHR() :
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeouts(nullptr),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{}

safe_VkWin32KeyedMutexAcquireReleaseInfoKHR::safe_VkWin32KeyedMutexAcquireReleaseInfoKHR(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    acquireCount = src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
    releaseCount = src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src.pAcquireSyncs[i];
        }
    }
    if (src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[src.acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src.pAcquireKeys, sizeof(uint64_t)*src.acquireCount);
    }
    if (src.pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[src.acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)src.pAcquireTimeouts, sizeof(uint32_t)*src.acquireCount);
    }
    if (releaseCount && src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src.pReleaseSyncs[i];
        }
    }
    if (src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[src.releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src.pReleaseKeys, sizeof(uint64_t)*src.releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& safe_VkWin32KeyedMutexAcquireReleaseInfoKHR::operator=(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR& src)
{
    if (&src == this) return *this;

    if (pAcquireSyncs)
        delete[] pAcquireSyncs;
    if (pAcquireKeys)
        delete[] pAcquireKeys;
    if (pAcquireTimeouts)
        delete[] pAcquireTimeouts;
    if (pReleaseSyncs)
        delete[] pReleaseSyncs;
    if (pReleaseKeys)
        delete[] pReleaseKeys;

    sType = src.sType;
    pNext = src.pNext;
    acquireCount = src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
    releaseCount = src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src.pAcquireSyncs[i];
        }
    }
    if (src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[src.acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src.pAcquireKeys, sizeof(uint64_t)*src.acquireCount);
    }
    if (src.pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[src.acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)src.pAcquireTimeouts, sizeof(uint32_t)*src.acquireCount);
    }
    if (releaseCount && src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src.pReleaseSyncs[i];
        }
    }
    if (src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[src.releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src.pReleaseKeys, sizeof(uint64_t)*src.releaseCount);
    }

    return *this;
}

safe_VkWin32KeyedMutexAcquireReleaseInfoKHR::~safe_VkWin32KeyedMutexAcquireReleaseInfoKHR()
{
    if (pAcquireSyncs)
        delete[] pAcquireSyncs;
    if (pAcquireKeys)
        delete[] pAcquireKeys;
    if (pAcquireTimeouts)
        delete[] pAcquireTimeouts;
    if (pReleaseSyncs)
        delete[] pReleaseSyncs;
    if (pReleaseKeys)
        delete[] pReleaseKeys;
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoKHR::initialize(const VkWin32KeyedMutexAcquireReleaseInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    acquireCount = in_struct->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
    releaseCount = in_struct->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)in_struct->pAcquireTimeouts, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoKHR::initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    acquireCount = src->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeouts = nullptr;
    releaseCount = src->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src->pAcquireSyncs[i];
        }
    }
    if (src->pAcquireKeys) {
        pAcquireKeys = new uint64_t[src->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src->pAcquireKeys, sizeof(uint64_t)*src->acquireCount);
    }
    if (src->pAcquireTimeouts) {
        pAcquireTimeouts = new uint32_t[src->acquireCount];
        memcpy ((void *)pAcquireTimeouts, (void *)src->pAcquireTimeouts, sizeof(uint32_t)*src->acquireCount);
    }
    if (releaseCount && src->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src->pReleaseSyncs[i];
        }
    }
    if (src->pReleaseKeys) {
        pReleaseKeys = new uint64_t[src->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src->pReleaseKeys, sizeof(uint64_t)*src->releaseCount);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkPhysicalDeviceExternalSemaphoreInfoKHR::safe_VkPhysicalDeviceExternalSemaphoreInfoKHR(const VkPhysicalDeviceExternalSemaphoreInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType)
{
}

safe_VkPhysicalDeviceExternalSemaphoreInfoKHR::safe_VkPhysicalDeviceExternalSemaphoreInfoKHR()
{}

safe_VkPhysicalDeviceExternalSemaphoreInfoKHR::safe_VkPhysicalDeviceExternalSemaphoreInfoKHR(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
}

safe_VkPhysicalDeviceExternalSemaphoreInfoKHR& safe_VkPhysicalDeviceExternalSemaphoreInfoKHR::operator=(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;

    return *this;
}

safe_VkPhysicalDeviceExternalSemaphoreInfoKHR::~safe_VkPhysicalDeviceExternalSemaphoreInfoKHR()
{
}

void safe_VkPhysicalDeviceExternalSemaphoreInfoKHR::initialize(const VkPhysicalDeviceExternalSemaphoreInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
}

void safe_VkPhysicalDeviceExternalSemaphoreInfoKHR::initialize(const safe_VkPhysicalDeviceExternalSemaphoreInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
}

safe_VkExternalSemaphorePropertiesKHR::safe_VkExternalSemaphorePropertiesKHR(const VkExternalSemaphorePropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    exportFromImportedHandleTypes(in_struct->exportFromImportedHandleTypes),
    compatibleHandleTypes(in_struct->compatibleHandleTypes),
    externalSemaphoreFeatures(in_struct->externalSemaphoreFeatures)
{
}

safe_VkExternalSemaphorePropertiesKHR::safe_VkExternalSemaphorePropertiesKHR()
{}

safe_VkExternalSemaphorePropertiesKHR::safe_VkExternalSemaphorePropertiesKHR(const safe_VkExternalSemaphorePropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    exportFromImportedHandleTypes = src.exportFromImportedHandleTypes;
    compatibleHandleTypes = src.compatibleHandleTypes;
    externalSemaphoreFeatures = src.externalSemaphoreFeatures;
}

safe_VkExternalSemaphorePropertiesKHR& safe_VkExternalSemaphorePropertiesKHR::operator=(const safe_VkExternalSemaphorePropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    exportFromImportedHandleTypes = src.exportFromImportedHandleTypes;
    compatibleHandleTypes = src.compatibleHandleTypes;
    externalSemaphoreFeatures = src.externalSemaphoreFeatures;

    return *this;
}

safe_VkExternalSemaphorePropertiesKHR::~safe_VkExternalSemaphorePropertiesKHR()
{
}

void safe_VkExternalSemaphorePropertiesKHR::initialize(const VkExternalSemaphorePropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    exportFromImportedHandleTypes = in_struct->exportFromImportedHandleTypes;
    compatibleHandleTypes = in_struct->compatibleHandleTypes;
    externalSemaphoreFeatures = in_struct->externalSemaphoreFeatures;
}

void safe_VkExternalSemaphorePropertiesKHR::initialize(const safe_VkExternalSemaphorePropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    exportFromImportedHandleTypes = src->exportFromImportedHandleTypes;
    compatibleHandleTypes = src->compatibleHandleTypes;
    externalSemaphoreFeatures = src->externalSemaphoreFeatures;
}

safe_VkExportSemaphoreCreateInfoKHR::safe_VkExportSemaphoreCreateInfoKHR(const VkExportSemaphoreCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExportSemaphoreCreateInfoKHR::safe_VkExportSemaphoreCreateInfoKHR()
{}

safe_VkExportSemaphoreCreateInfoKHR::safe_VkExportSemaphoreCreateInfoKHR(const safe_VkExportSemaphoreCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExportSemaphoreCreateInfoKHR& safe_VkExportSemaphoreCreateInfoKHR::operator=(const safe_VkExportSemaphoreCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;

    return *this;
}

safe_VkExportSemaphoreCreateInfoKHR::~safe_VkExportSemaphoreCreateInfoKHR()
{
}

void safe_VkExportSemaphoreCreateInfoKHR::initialize(const VkExportSemaphoreCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExportSemaphoreCreateInfoKHR::initialize(const safe_VkExportSemaphoreCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkImportSemaphoreWin32HandleInfoKHR::safe_VkImportSemaphoreWin32HandleInfoKHR(const VkImportSemaphoreWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    semaphore(in_struct->semaphore),
    flags(in_struct->flags),
    handleType(in_struct->handleType),
    handle(in_struct->handle),
    name(in_struct->name)
{
}

safe_VkImportSemaphoreWin32HandleInfoKHR::safe_VkImportSemaphoreWin32HandleInfoKHR()
{}

safe_VkImportSemaphoreWin32HandleInfoKHR::safe_VkImportSemaphoreWin32HandleInfoKHR(const safe_VkImportSemaphoreWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    flags = src.flags;
    handleType = src.handleType;
    handle = src.handle;
    name = src.name;
}

safe_VkImportSemaphoreWin32HandleInfoKHR& safe_VkImportSemaphoreWin32HandleInfoKHR::operator=(const safe_VkImportSemaphoreWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    flags = src.flags;
    handleType = src.handleType;
    handle = src.handle;
    name = src.name;

    return *this;
}

safe_VkImportSemaphoreWin32HandleInfoKHR::~safe_VkImportSemaphoreWin32HandleInfoKHR()
{
}

void safe_VkImportSemaphoreWin32HandleInfoKHR::initialize(const VkImportSemaphoreWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    semaphore = in_struct->semaphore;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    name = in_struct->name;
}

void safe_VkImportSemaphoreWin32HandleInfoKHR::initialize(const safe_VkImportSemaphoreWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    semaphore = src->semaphore;
    flags = src->flags;
    handleType = src->handleType;
    handle = src->handle;
    name = src->name;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkExportSemaphoreWin32HandleInfoKHR::safe_VkExportSemaphoreWin32HandleInfoKHR(const VkExportSemaphoreWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pAttributes(nullptr),
    dwAccess(in_struct->dwAccess),
    name(in_struct->name)
{
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

safe_VkExportSemaphoreWin32HandleInfoKHR::safe_VkExportSemaphoreWin32HandleInfoKHR() :
    pAttributes(nullptr)
{}

safe_VkExportSemaphoreWin32HandleInfoKHR::safe_VkExportSemaphoreWin32HandleInfoKHR(const safe_VkExportSemaphoreWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }
}

safe_VkExportSemaphoreWin32HandleInfoKHR& safe_VkExportSemaphoreWin32HandleInfoKHR::operator=(const safe_VkExportSemaphoreWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;

    if (pAttributes)
        delete pAttributes;

    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }

    return *this;
}

safe_VkExportSemaphoreWin32HandleInfoKHR::~safe_VkExportSemaphoreWin32HandleInfoKHR()
{
    if (pAttributes)
        delete pAttributes;
}

void safe_VkExportSemaphoreWin32HandleInfoKHR::initialize(const VkExportSemaphoreWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void safe_VkExportSemaphoreWin32HandleInfoKHR::initialize(const safe_VkExportSemaphoreWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pAttributes = nullptr;
    dwAccess = src->dwAccess;
    name = src->name;
    if (src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src->pAttributes);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkD3D12FenceSubmitInfoKHR::safe_VkD3D12FenceSubmitInfoKHR(const VkD3D12FenceSubmitInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreValuesCount(in_struct->waitSemaphoreValuesCount),
    pWaitSemaphoreValues(nullptr),
    signalSemaphoreValuesCount(in_struct->signalSemaphoreValuesCount),
    pSignalSemaphoreValues(nullptr)
{
    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)in_struct->pWaitSemaphoreValues, sizeof(uint64_t)*in_struct->waitSemaphoreValuesCount);
    }
    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)in_struct->pSignalSemaphoreValues, sizeof(uint64_t)*in_struct->signalSemaphoreValuesCount);
    }
}

safe_VkD3D12FenceSubmitInfoKHR::safe_VkD3D12FenceSubmitInfoKHR() :
    pWaitSemaphoreValues(nullptr),
    pSignalSemaphoreValues(nullptr)
{}

safe_VkD3D12FenceSubmitInfoKHR::safe_VkD3D12FenceSubmitInfoKHR(const safe_VkD3D12FenceSubmitInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreValuesCount = src.waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = src.signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    if (src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[src.waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)src.pWaitSemaphoreValues, sizeof(uint64_t)*src.waitSemaphoreValuesCount);
    }
    if (src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[src.signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)src.pSignalSemaphoreValues, sizeof(uint64_t)*src.signalSemaphoreValuesCount);
    }
}

safe_VkD3D12FenceSubmitInfoKHR& safe_VkD3D12FenceSubmitInfoKHR::operator=(const safe_VkD3D12FenceSubmitInfoKHR& src)
{
    if (&src == this) return *this;

    if (pWaitSemaphoreValues)
        delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues)
        delete[] pSignalSemaphoreValues;

    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreValuesCount = src.waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = src.signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    if (src.pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[src.waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)src.pWaitSemaphoreValues, sizeof(uint64_t)*src.waitSemaphoreValuesCount);
    }
    if (src.pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[src.signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)src.pSignalSemaphoreValues, sizeof(uint64_t)*src.signalSemaphoreValuesCount);
    }

    return *this;
}

safe_VkD3D12FenceSubmitInfoKHR::~safe_VkD3D12FenceSubmitInfoKHR()
{
    if (pWaitSemaphoreValues)
        delete[] pWaitSemaphoreValues;
    if (pSignalSemaphoreValues)
        delete[] pSignalSemaphoreValues;
}

void safe_VkD3D12FenceSubmitInfoKHR::initialize(const VkD3D12FenceSubmitInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreValuesCount = in_struct->waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = in_struct->signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    if (in_struct->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[in_struct->waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)in_struct->pWaitSemaphoreValues, sizeof(uint64_t)*in_struct->waitSemaphoreValuesCount);
    }
    if (in_struct->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[in_struct->signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)in_struct->pSignalSemaphoreValues, sizeof(uint64_t)*in_struct->signalSemaphoreValuesCount);
    }
}

void safe_VkD3D12FenceSubmitInfoKHR::initialize(const safe_VkD3D12FenceSubmitInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreValuesCount = src->waitSemaphoreValuesCount;
    pWaitSemaphoreValues = nullptr;
    signalSemaphoreValuesCount = src->signalSemaphoreValuesCount;
    pSignalSemaphoreValues = nullptr;
    if (src->pWaitSemaphoreValues) {
        pWaitSemaphoreValues = new uint64_t[src->waitSemaphoreValuesCount];
        memcpy ((void *)pWaitSemaphoreValues, (void *)src->pWaitSemaphoreValues, sizeof(uint64_t)*src->waitSemaphoreValuesCount);
    }
    if (src->pSignalSemaphoreValues) {
        pSignalSemaphoreValues = new uint64_t[src->signalSemaphoreValuesCount];
        memcpy ((void *)pSignalSemaphoreValues, (void *)src->pSignalSemaphoreValues, sizeof(uint64_t)*src->signalSemaphoreValuesCount);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkSemaphoreGetWin32HandleInfoKHR::safe_VkSemaphoreGetWin32HandleInfoKHR(const VkSemaphoreGetWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    semaphore(in_struct->semaphore),
    handleType(in_struct->handleType)
{
}

safe_VkSemaphoreGetWin32HandleInfoKHR::safe_VkSemaphoreGetWin32HandleInfoKHR()
{}

safe_VkSemaphoreGetWin32HandleInfoKHR::safe_VkSemaphoreGetWin32HandleInfoKHR(const safe_VkSemaphoreGetWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    handleType = src.handleType;
}

safe_VkSemaphoreGetWin32HandleInfoKHR& safe_VkSemaphoreGetWin32HandleInfoKHR::operator=(const safe_VkSemaphoreGetWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    handleType = src.handleType;

    return *this;
}

safe_VkSemaphoreGetWin32HandleInfoKHR::~safe_VkSemaphoreGetWin32HandleInfoKHR()
{
}

void safe_VkSemaphoreGetWin32HandleInfoKHR::initialize(const VkSemaphoreGetWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    semaphore = in_struct->semaphore;
    handleType = in_struct->handleType;
}

void safe_VkSemaphoreGetWin32HandleInfoKHR::initialize(const safe_VkSemaphoreGetWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    semaphore = src->semaphore;
    handleType = src->handleType;
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkImportSemaphoreFdInfoKHR::safe_VkImportSemaphoreFdInfoKHR(const VkImportSemaphoreFdInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    semaphore(in_struct->semaphore),
    flags(in_struct->flags),
    handleType(in_struct->handleType),
    fd(in_struct->fd)
{
}

safe_VkImportSemaphoreFdInfoKHR::safe_VkImportSemaphoreFdInfoKHR()
{}

safe_VkImportSemaphoreFdInfoKHR::safe_VkImportSemaphoreFdInfoKHR(const safe_VkImportSemaphoreFdInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    flags = src.flags;
    handleType = src.handleType;
    fd = src.fd;
}

safe_VkImportSemaphoreFdInfoKHR& safe_VkImportSemaphoreFdInfoKHR::operator=(const safe_VkImportSemaphoreFdInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    flags = src.flags;
    handleType = src.handleType;
    fd = src.fd;

    return *this;
}

safe_VkImportSemaphoreFdInfoKHR::~safe_VkImportSemaphoreFdInfoKHR()
{
}

void safe_VkImportSemaphoreFdInfoKHR::initialize(const VkImportSemaphoreFdInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    semaphore = in_struct->semaphore;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
}

void safe_VkImportSemaphoreFdInfoKHR::initialize(const safe_VkImportSemaphoreFdInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    semaphore = src->semaphore;
    flags = src->flags;
    handleType = src->handleType;
    fd = src->fd;
}

safe_VkSemaphoreGetFdInfoKHR::safe_VkSemaphoreGetFdInfoKHR(const VkSemaphoreGetFdInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    semaphore(in_struct->semaphore),
    handleType(in_struct->handleType)
{
}

safe_VkSemaphoreGetFdInfoKHR::safe_VkSemaphoreGetFdInfoKHR()
{}

safe_VkSemaphoreGetFdInfoKHR::safe_VkSemaphoreGetFdInfoKHR(const safe_VkSemaphoreGetFdInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    handleType = src.handleType;
}

safe_VkSemaphoreGetFdInfoKHR& safe_VkSemaphoreGetFdInfoKHR::operator=(const safe_VkSemaphoreGetFdInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    semaphore = src.semaphore;
    handleType = src.handleType;

    return *this;
}

safe_VkSemaphoreGetFdInfoKHR::~safe_VkSemaphoreGetFdInfoKHR()
{
}

void safe_VkSemaphoreGetFdInfoKHR::initialize(const VkSemaphoreGetFdInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    semaphore = in_struct->semaphore;
    handleType = in_struct->handleType;
}

void safe_VkSemaphoreGetFdInfoKHR::initialize(const safe_VkSemaphoreGetFdInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    semaphore = src->semaphore;
    handleType = src->handleType;
}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxPushDescriptors(in_struct->maxPushDescriptors)
{
}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::safe_VkPhysicalDevicePushDescriptorPropertiesKHR()
{}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::safe_VkPhysicalDevicePushDescriptorPropertiesKHR(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxPushDescriptors = src.maxPushDescriptors;
}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR& safe_VkPhysicalDevicePushDescriptorPropertiesKHR::operator=(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    maxPushDescriptors = src.maxPushDescriptors;

    return *this;
}

safe_VkPhysicalDevicePushDescriptorPropertiesKHR::~safe_VkPhysicalDevicePushDescriptorPropertiesKHR()
{
}

void safe_VkPhysicalDevicePushDescriptorPropertiesKHR::initialize(const VkPhysicalDevicePushDescriptorPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxPushDescriptors = in_struct->maxPushDescriptors;
}

void safe_VkPhysicalDevicePushDescriptorPropertiesKHR::initialize(const safe_VkPhysicalDevicePushDescriptorPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxPushDescriptors = src->maxPushDescriptors;
}

safe_VkPhysicalDevice16BitStorageFeaturesKHR::safe_VkPhysicalDevice16BitStorageFeaturesKHR(const VkPhysicalDevice16BitStorageFeaturesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    storageBuffer16BitAccess(in_struct->storageBuffer16BitAccess),
    uniformAndStorageBuffer16BitAccess(in_struct->uniformAndStorageBuffer16BitAccess),
    storagePushConstant16(in_struct->storagePushConstant16),
    storageInputOutput16(in_struct->storageInputOutput16)
{
}

safe_VkPhysicalDevice16BitStorageFeaturesKHR::safe_VkPhysicalDevice16BitStorageFeaturesKHR()
{}

safe_VkPhysicalDevice16BitStorageFeaturesKHR::safe_VkPhysicalDevice16BitStorageFeaturesKHR(const safe_VkPhysicalDevice16BitStorageFeaturesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    storageBuffer16BitAccess = src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = src.storagePushConstant16;
    storageInputOutput16 = src.storageInputOutput16;
}

safe_VkPhysicalDevice16BitStorageFeaturesKHR& safe_VkPhysicalDevice16BitStorageFeaturesKHR::operator=(const safe_VkPhysicalDevice16BitStorageFeaturesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    storageBuffer16BitAccess = src.storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = src.uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = src.storagePushConstant16;
    storageInputOutput16 = src.storageInputOutput16;

    return *this;
}

safe_VkPhysicalDevice16BitStorageFeaturesKHR::~safe_VkPhysicalDevice16BitStorageFeaturesKHR()
{
}

void safe_VkPhysicalDevice16BitStorageFeaturesKHR::initialize(const VkPhysicalDevice16BitStorageFeaturesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    storageBuffer16BitAccess = in_struct->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = in_struct->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = in_struct->storagePushConstant16;
    storageInputOutput16 = in_struct->storageInputOutput16;
}

void safe_VkPhysicalDevice16BitStorageFeaturesKHR::initialize(const safe_VkPhysicalDevice16BitStorageFeaturesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    storageBuffer16BitAccess = src->storageBuffer16BitAccess;
    uniformAndStorageBuffer16BitAccess = src->uniformAndStorageBuffer16BitAccess;
    storagePushConstant16 = src->storagePushConstant16;
    storageInputOutput16 = src->storageInputOutput16;
}

safe_VkPresentRegionKHR::safe_VkPresentRegionKHR(const VkPresentRegionKHR* in_struct) :
    rectangleCount(in_struct->rectangleCount),
    pRectangles(nullptr)
{
    if (in_struct->pRectangles) {
        pRectangles = new VkRectLayerKHR[in_struct->rectangleCount];
        memcpy ((void *)pRectangles, (void *)in_struct->pRectangles, sizeof(VkRectLayerKHR)*in_struct->rectangleCount);
    }
}

safe_VkPresentRegionKHR::safe_VkPresentRegionKHR() :
    pRectangles(nullptr)
{}

safe_VkPresentRegionKHR::safe_VkPresentRegionKHR(const safe_VkPresentRegionKHR& src)
{
    rectangleCount = src.rectangleCount;
    pRectangles = nullptr;
    if (src.pRectangles) {
        pRectangles = new VkRectLayerKHR[src.rectangleCount];
        memcpy ((void *)pRectangles, (void *)src.pRectangles, sizeof(VkRectLayerKHR)*src.rectangleCount);
    }
}

safe_VkPresentRegionKHR& safe_VkPresentRegionKHR::operator=(const safe_VkPresentRegionKHR& src)
{
    if (&src == this) return *this;

    if (pRectangles)
        delete[] pRectangles;

    rectangleCount = src.rectangleCount;
    pRectangles = nullptr;
    if (src.pRectangles) {
        pRectangles = new VkRectLayerKHR[src.rectangleCount];
        memcpy ((void *)pRectangles, (void *)src.pRectangles, sizeof(VkRectLayerKHR)*src.rectangleCount);
    }

    return *this;
}

safe_VkPresentRegionKHR::~safe_VkPresentRegionKHR()
{
    if (pRectangles)
        delete[] pRectangles;
}

void safe_VkPresentRegionKHR::initialize(const VkPresentRegionKHR* in_struct)
{
    rectangleCount = in_struct->rectangleCount;
    pRectangles = nullptr;
    if (in_struct->pRectangles) {
        pRectangles = new VkRectLayerKHR[in_struct->rectangleCount];
        memcpy ((void *)pRectangles, (void *)in_struct->pRectangles, sizeof(VkRectLayerKHR)*in_struct->rectangleCount);
    }
}

void safe_VkPresentRegionKHR::initialize(const safe_VkPresentRegionKHR* src)
{
    rectangleCount = src->rectangleCount;
    pRectangles = nullptr;
    if (src->pRectangles) {
        pRectangles = new VkRectLayerKHR[src->rectangleCount];
        memcpy ((void *)pRectangles, (void *)src->pRectangles, sizeof(VkRectLayerKHR)*src->rectangleCount);
    }
}

safe_VkPresentRegionsKHR::safe_VkPresentRegionsKHR(const VkPresentRegionsKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchainCount(in_struct->swapchainCount),
    pRegions(nullptr)
{
    if (swapchainCount && in_struct->pRegions) {
        pRegions = new safe_VkPresentRegionKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

safe_VkPresentRegionsKHR::safe_VkPresentRegionsKHR() :
    pRegions(nullptr)
{}

safe_VkPresentRegionsKHR::safe_VkPresentRegionsKHR(const safe_VkPresentRegionsKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchainCount = src.swapchainCount;
    pRegions = nullptr;
    if (swapchainCount && src.pRegions) {
        pRegions = new safe_VkPresentRegionKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pRegions[i].initialize(&src.pRegions[i]);
        }
    }
}

safe_VkPresentRegionsKHR& safe_VkPresentRegionsKHR::operator=(const safe_VkPresentRegionsKHR& src)
{
    if (&src == this) return *this;

    if (pRegions)
        delete[] pRegions;

    sType = src.sType;
    pNext = src.pNext;
    swapchainCount = src.swapchainCount;
    pRegions = nullptr;
    if (swapchainCount && src.pRegions) {
        pRegions = new safe_VkPresentRegionKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pRegions[i].initialize(&src.pRegions[i]);
        }
    }

    return *this;
}

safe_VkPresentRegionsKHR::~safe_VkPresentRegionsKHR()
{
    if (pRegions)
        delete[] pRegions;
}

void safe_VkPresentRegionsKHR::initialize(const VkPresentRegionsKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchainCount = in_struct->swapchainCount;
    pRegions = nullptr;
    if (swapchainCount && in_struct->pRegions) {
        pRegions = new safe_VkPresentRegionKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pRegions[i].initialize(&in_struct->pRegions[i]);
        }
    }
}

void safe_VkPresentRegionsKHR::initialize(const safe_VkPresentRegionsKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchainCount = src->swapchainCount;
    pRegions = nullptr;
    if (swapchainCount && src->pRegions) {
        pRegions = new safe_VkPresentRegionKHR[swapchainCount];
        for (uint32_t i=0; i<swapchainCount; ++i) {
            pRegions[i].initialize(&src->pRegions[i]);
        }
    }
}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::safe_VkDescriptorUpdateTemplateCreateInfoKHR(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    descriptorUpdateEntryCount(in_struct->descriptorUpdateEntryCount),
    pDescriptorUpdateEntries(nullptr),
    templateType(in_struct->templateType),
    descriptorSetLayout(in_struct->descriptorSetLayout),
    pipelineBindPoint(in_struct->pipelineBindPoint),
    pipelineLayout(in_struct->pipelineLayout),
    set(in_struct->set)
{
    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[in_struct->descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)in_struct->pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*in_struct->descriptorUpdateEntryCount);
    }
}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::safe_VkDescriptorUpdateTemplateCreateInfoKHR() :
    pDescriptorUpdateEntries(nullptr)
{}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::safe_VkDescriptorUpdateTemplateCreateInfoKHR(const safe_VkDescriptorUpdateTemplateCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    descriptorUpdateEntryCount = src.descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = src.templateType;
    descriptorSetLayout = src.descriptorSetLayout;
    pipelineBindPoint = src.pipelineBindPoint;
    pipelineLayout = src.pipelineLayout;
    set = src.set;
    if (src.pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[src.descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)src.pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*src.descriptorUpdateEntryCount);
    }
}

safe_VkDescriptorUpdateTemplateCreateInfoKHR& safe_VkDescriptorUpdateTemplateCreateInfoKHR::operator=(const safe_VkDescriptorUpdateTemplateCreateInfoKHR& src)
{
    if (&src == this) return *this;

    if (pDescriptorUpdateEntries)
        delete[] pDescriptorUpdateEntries;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    descriptorUpdateEntryCount = src.descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = src.templateType;
    descriptorSetLayout = src.descriptorSetLayout;
    pipelineBindPoint = src.pipelineBindPoint;
    pipelineLayout = src.pipelineLayout;
    set = src.set;
    if (src.pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[src.descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)src.pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*src.descriptorUpdateEntryCount);
    }

    return *this;
}

safe_VkDescriptorUpdateTemplateCreateInfoKHR::~safe_VkDescriptorUpdateTemplateCreateInfoKHR()
{
    if (pDescriptorUpdateEntries)
        delete[] pDescriptorUpdateEntries;
}

void safe_VkDescriptorUpdateTemplateCreateInfoKHR::initialize(const VkDescriptorUpdateTemplateCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    descriptorUpdateEntryCount = in_struct->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = in_struct->templateType;
    descriptorSetLayout = in_struct->descriptorSetLayout;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    pipelineLayout = in_struct->pipelineLayout;
    set = in_struct->set;
    if (in_struct->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[in_struct->descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)in_struct->pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*in_struct->descriptorUpdateEntryCount);
    }
}

void safe_VkDescriptorUpdateTemplateCreateInfoKHR::initialize(const safe_VkDescriptorUpdateTemplateCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    descriptorUpdateEntryCount = src->descriptorUpdateEntryCount;
    pDescriptorUpdateEntries = nullptr;
    templateType = src->templateType;
    descriptorSetLayout = src->descriptorSetLayout;
    pipelineBindPoint = src->pipelineBindPoint;
    pipelineLayout = src->pipelineLayout;
    set = src->set;
    if (src->pDescriptorUpdateEntries) {
        pDescriptorUpdateEntries = new VkDescriptorUpdateTemplateEntryKHR[src->descriptorUpdateEntryCount];
        memcpy ((void *)pDescriptorUpdateEntries, (void *)src->pDescriptorUpdateEntries, sizeof(VkDescriptorUpdateTemplateEntryKHR)*src->descriptorUpdateEntryCount);
    }
}

safe_VkSharedPresentSurfaceCapabilitiesKHR::safe_VkSharedPresentSurfaceCapabilitiesKHR(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    sharedPresentSupportedUsageFlags(in_struct->sharedPresentSupportedUsageFlags)
{
}

safe_VkSharedPresentSurfaceCapabilitiesKHR::safe_VkSharedPresentSurfaceCapabilitiesKHR()
{}

safe_VkSharedPresentSurfaceCapabilitiesKHR::safe_VkSharedPresentSurfaceCapabilitiesKHR(const safe_VkSharedPresentSurfaceCapabilitiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    sharedPresentSupportedUsageFlags = src.sharedPresentSupportedUsageFlags;
}

safe_VkSharedPresentSurfaceCapabilitiesKHR& safe_VkSharedPresentSurfaceCapabilitiesKHR::operator=(const safe_VkSharedPresentSurfaceCapabilitiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    sharedPresentSupportedUsageFlags = src.sharedPresentSupportedUsageFlags;

    return *this;
}

safe_VkSharedPresentSurfaceCapabilitiesKHR::~safe_VkSharedPresentSurfaceCapabilitiesKHR()
{
}

void safe_VkSharedPresentSurfaceCapabilitiesKHR::initialize(const VkSharedPresentSurfaceCapabilitiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    sharedPresentSupportedUsageFlags = in_struct->sharedPresentSupportedUsageFlags;
}

void safe_VkSharedPresentSurfaceCapabilitiesKHR::initialize(const safe_VkSharedPresentSurfaceCapabilitiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    sharedPresentSupportedUsageFlags = src->sharedPresentSupportedUsageFlags;
}

safe_VkPhysicalDeviceExternalFenceInfoKHR::safe_VkPhysicalDeviceExternalFenceInfoKHR(const VkPhysicalDeviceExternalFenceInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType)
{
}

safe_VkPhysicalDeviceExternalFenceInfoKHR::safe_VkPhysicalDeviceExternalFenceInfoKHR()
{}

safe_VkPhysicalDeviceExternalFenceInfoKHR::safe_VkPhysicalDeviceExternalFenceInfoKHR(const safe_VkPhysicalDeviceExternalFenceInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
}

safe_VkPhysicalDeviceExternalFenceInfoKHR& safe_VkPhysicalDeviceExternalFenceInfoKHR::operator=(const safe_VkPhysicalDeviceExternalFenceInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;

    return *this;
}

safe_VkPhysicalDeviceExternalFenceInfoKHR::~safe_VkPhysicalDeviceExternalFenceInfoKHR()
{
}

void safe_VkPhysicalDeviceExternalFenceInfoKHR::initialize(const VkPhysicalDeviceExternalFenceInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
}

void safe_VkPhysicalDeviceExternalFenceInfoKHR::initialize(const safe_VkPhysicalDeviceExternalFenceInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
}

safe_VkExternalFencePropertiesKHR::safe_VkExternalFencePropertiesKHR(const VkExternalFencePropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    exportFromImportedHandleTypes(in_struct->exportFromImportedHandleTypes),
    compatibleHandleTypes(in_struct->compatibleHandleTypes),
    externalFenceFeatures(in_struct->externalFenceFeatures)
{
}

safe_VkExternalFencePropertiesKHR::safe_VkExternalFencePropertiesKHR()
{}

safe_VkExternalFencePropertiesKHR::safe_VkExternalFencePropertiesKHR(const safe_VkExternalFencePropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    exportFromImportedHandleTypes = src.exportFromImportedHandleTypes;
    compatibleHandleTypes = src.compatibleHandleTypes;
    externalFenceFeatures = src.externalFenceFeatures;
}

safe_VkExternalFencePropertiesKHR& safe_VkExternalFencePropertiesKHR::operator=(const safe_VkExternalFencePropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    exportFromImportedHandleTypes = src.exportFromImportedHandleTypes;
    compatibleHandleTypes = src.compatibleHandleTypes;
    externalFenceFeatures = src.externalFenceFeatures;

    return *this;
}

safe_VkExternalFencePropertiesKHR::~safe_VkExternalFencePropertiesKHR()
{
}

void safe_VkExternalFencePropertiesKHR::initialize(const VkExternalFencePropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    exportFromImportedHandleTypes = in_struct->exportFromImportedHandleTypes;
    compatibleHandleTypes = in_struct->compatibleHandleTypes;
    externalFenceFeatures = in_struct->externalFenceFeatures;
}

void safe_VkExternalFencePropertiesKHR::initialize(const safe_VkExternalFencePropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    exportFromImportedHandleTypes = src->exportFromImportedHandleTypes;
    compatibleHandleTypes = src->compatibleHandleTypes;
    externalFenceFeatures = src->externalFenceFeatures;
}

safe_VkExportFenceCreateInfoKHR::safe_VkExportFenceCreateInfoKHR(const VkExportFenceCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExportFenceCreateInfoKHR::safe_VkExportFenceCreateInfoKHR()
{}

safe_VkExportFenceCreateInfoKHR::safe_VkExportFenceCreateInfoKHR(const safe_VkExportFenceCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExportFenceCreateInfoKHR& safe_VkExportFenceCreateInfoKHR::operator=(const safe_VkExportFenceCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;

    return *this;
}

safe_VkExportFenceCreateInfoKHR::~safe_VkExportFenceCreateInfoKHR()
{
}

void safe_VkExportFenceCreateInfoKHR::initialize(const VkExportFenceCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExportFenceCreateInfoKHR::initialize(const safe_VkExportFenceCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkImportFenceWin32HandleInfoKHR::safe_VkImportFenceWin32HandleInfoKHR(const VkImportFenceWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    fence(in_struct->fence),
    flags(in_struct->flags),
    handleType(in_struct->handleType),
    handle(in_struct->handle),
    name(in_struct->name)
{
}

safe_VkImportFenceWin32HandleInfoKHR::safe_VkImportFenceWin32HandleInfoKHR()
{}

safe_VkImportFenceWin32HandleInfoKHR::safe_VkImportFenceWin32HandleInfoKHR(const safe_VkImportFenceWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    flags = src.flags;
    handleType = src.handleType;
    handle = src.handle;
    name = src.name;
}

safe_VkImportFenceWin32HandleInfoKHR& safe_VkImportFenceWin32HandleInfoKHR::operator=(const safe_VkImportFenceWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    flags = src.flags;
    handleType = src.handleType;
    handle = src.handle;
    name = src.name;

    return *this;
}

safe_VkImportFenceWin32HandleInfoKHR::~safe_VkImportFenceWin32HandleInfoKHR()
{
}

void safe_VkImportFenceWin32HandleInfoKHR::initialize(const VkImportFenceWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    fence = in_struct->fence;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
    name = in_struct->name;
}

void safe_VkImportFenceWin32HandleInfoKHR::initialize(const safe_VkImportFenceWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    fence = src->fence;
    flags = src->flags;
    handleType = src->handleType;
    handle = src->handle;
    name = src->name;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkExportFenceWin32HandleInfoKHR::safe_VkExportFenceWin32HandleInfoKHR(const VkExportFenceWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pAttributes(nullptr),
    dwAccess(in_struct->dwAccess),
    name(in_struct->name)
{
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

safe_VkExportFenceWin32HandleInfoKHR::safe_VkExportFenceWin32HandleInfoKHR() :
    pAttributes(nullptr)
{}

safe_VkExportFenceWin32HandleInfoKHR::safe_VkExportFenceWin32HandleInfoKHR(const safe_VkExportFenceWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }
}

safe_VkExportFenceWin32HandleInfoKHR& safe_VkExportFenceWin32HandleInfoKHR::operator=(const safe_VkExportFenceWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;

    if (pAttributes)
        delete pAttributes;

    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    name = src.name;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }

    return *this;
}

safe_VkExportFenceWin32HandleInfoKHR::~safe_VkExportFenceWin32HandleInfoKHR()
{
    if (pAttributes)
        delete pAttributes;
}

void safe_VkExportFenceWin32HandleInfoKHR::initialize(const VkExportFenceWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    name = in_struct->name;
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void safe_VkExportFenceWin32HandleInfoKHR::initialize(const safe_VkExportFenceWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pAttributes = nullptr;
    dwAccess = src->dwAccess;
    name = src->name;
    if (src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src->pAttributes);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkFenceGetWin32HandleInfoKHR::safe_VkFenceGetWin32HandleInfoKHR(const VkFenceGetWin32HandleInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    fence(in_struct->fence),
    handleType(in_struct->handleType)
{
}

safe_VkFenceGetWin32HandleInfoKHR::safe_VkFenceGetWin32HandleInfoKHR()
{}

safe_VkFenceGetWin32HandleInfoKHR::safe_VkFenceGetWin32HandleInfoKHR(const safe_VkFenceGetWin32HandleInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    handleType = src.handleType;
}

safe_VkFenceGetWin32HandleInfoKHR& safe_VkFenceGetWin32HandleInfoKHR::operator=(const safe_VkFenceGetWin32HandleInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    handleType = src.handleType;

    return *this;
}

safe_VkFenceGetWin32HandleInfoKHR::~safe_VkFenceGetWin32HandleInfoKHR()
{
}

void safe_VkFenceGetWin32HandleInfoKHR::initialize(const VkFenceGetWin32HandleInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    fence = in_struct->fence;
    handleType = in_struct->handleType;
}

void safe_VkFenceGetWin32HandleInfoKHR::initialize(const safe_VkFenceGetWin32HandleInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    fence = src->fence;
    handleType = src->handleType;
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkImportFenceFdInfoKHR::safe_VkImportFenceFdInfoKHR(const VkImportFenceFdInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    fence(in_struct->fence),
    flags(in_struct->flags),
    handleType(in_struct->handleType),
    fd(in_struct->fd)
{
}

safe_VkImportFenceFdInfoKHR::safe_VkImportFenceFdInfoKHR()
{}

safe_VkImportFenceFdInfoKHR::safe_VkImportFenceFdInfoKHR(const safe_VkImportFenceFdInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    flags = src.flags;
    handleType = src.handleType;
    fd = src.fd;
}

safe_VkImportFenceFdInfoKHR& safe_VkImportFenceFdInfoKHR::operator=(const safe_VkImportFenceFdInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    flags = src.flags;
    handleType = src.handleType;
    fd = src.fd;

    return *this;
}

safe_VkImportFenceFdInfoKHR::~safe_VkImportFenceFdInfoKHR()
{
}

void safe_VkImportFenceFdInfoKHR::initialize(const VkImportFenceFdInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    fence = in_struct->fence;
    flags = in_struct->flags;
    handleType = in_struct->handleType;
    fd = in_struct->fd;
}

void safe_VkImportFenceFdInfoKHR::initialize(const safe_VkImportFenceFdInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    fence = src->fence;
    flags = src->flags;
    handleType = src->handleType;
    fd = src->fd;
}

safe_VkFenceGetFdInfoKHR::safe_VkFenceGetFdInfoKHR(const VkFenceGetFdInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    fence(in_struct->fence),
    handleType(in_struct->handleType)
{
}

safe_VkFenceGetFdInfoKHR::safe_VkFenceGetFdInfoKHR()
{}

safe_VkFenceGetFdInfoKHR::safe_VkFenceGetFdInfoKHR(const safe_VkFenceGetFdInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    handleType = src.handleType;
}

safe_VkFenceGetFdInfoKHR& safe_VkFenceGetFdInfoKHR::operator=(const safe_VkFenceGetFdInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    fence = src.fence;
    handleType = src.handleType;

    return *this;
}

safe_VkFenceGetFdInfoKHR::~safe_VkFenceGetFdInfoKHR()
{
}

void safe_VkFenceGetFdInfoKHR::initialize(const VkFenceGetFdInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    fence = in_struct->fence;
    handleType = in_struct->handleType;
}

void safe_VkFenceGetFdInfoKHR::initialize(const safe_VkFenceGetFdInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    fence = src->fence;
    handleType = src->handleType;
}

safe_VkPhysicalDevicePointClippingPropertiesKHR::safe_VkPhysicalDevicePointClippingPropertiesKHR(const VkPhysicalDevicePointClippingPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pointClippingBehavior(in_struct->pointClippingBehavior)
{
}

safe_VkPhysicalDevicePointClippingPropertiesKHR::safe_VkPhysicalDevicePointClippingPropertiesKHR()
{}

safe_VkPhysicalDevicePointClippingPropertiesKHR::safe_VkPhysicalDevicePointClippingPropertiesKHR(const safe_VkPhysicalDevicePointClippingPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pointClippingBehavior = src.pointClippingBehavior;
}

safe_VkPhysicalDevicePointClippingPropertiesKHR& safe_VkPhysicalDevicePointClippingPropertiesKHR::operator=(const safe_VkPhysicalDevicePointClippingPropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    pointClippingBehavior = src.pointClippingBehavior;

    return *this;
}

safe_VkPhysicalDevicePointClippingPropertiesKHR::~safe_VkPhysicalDevicePointClippingPropertiesKHR()
{
}

void safe_VkPhysicalDevicePointClippingPropertiesKHR::initialize(const VkPhysicalDevicePointClippingPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pointClippingBehavior = in_struct->pointClippingBehavior;
}

void safe_VkPhysicalDevicePointClippingPropertiesKHR::initialize(const safe_VkPhysicalDevicePointClippingPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pointClippingBehavior = src->pointClippingBehavior;
}

safe_VkRenderPassInputAttachmentAspectCreateInfoKHR::safe_VkRenderPassInputAttachmentAspectCreateInfoKHR(const VkRenderPassInputAttachmentAspectCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    aspectReferenceCount(in_struct->aspectReferenceCount),
    pAspectReferences(nullptr)
{
    if (in_struct->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReferenceKHR[in_struct->aspectReferenceCount];
        memcpy ((void *)pAspectReferences, (void *)in_struct->pAspectReferences, sizeof(VkInputAttachmentAspectReferenceKHR)*in_struct->aspectReferenceCount);
    }
}

safe_VkRenderPassInputAttachmentAspectCreateInfoKHR::safe_VkRenderPassInputAttachmentAspectCreateInfoKHR() :
    pAspectReferences(nullptr)
{}

safe_VkRenderPassInputAttachmentAspectCreateInfoKHR::safe_VkRenderPassInputAttachmentAspectCreateInfoKHR(const safe_VkRenderPassInputAttachmentAspectCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    aspectReferenceCount = src.aspectReferenceCount;
    pAspectReferences = nullptr;
    if (src.pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReferenceKHR[src.aspectReferenceCount];
        memcpy ((void *)pAspectReferences, (void *)src.pAspectReferences, sizeof(VkInputAttachmentAspectReferenceKHR)*src.aspectReferenceCount);
    }
}

safe_VkRenderPassInputAttachmentAspectCreateInfoKHR& safe_VkRenderPassInputAttachmentAspectCreateInfoKHR::operator=(const safe_VkRenderPassInputAttachmentAspectCreateInfoKHR& src)
{
    if (&src == this) return *this;

    if (pAspectReferences)
        delete[] pAspectReferences;

    sType = src.sType;
    pNext = src.pNext;
    aspectReferenceCount = src.aspectReferenceCount;
    pAspectReferences = nullptr;
    if (src.pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReferenceKHR[src.aspectReferenceCount];
        memcpy ((void *)pAspectReferences, (void *)src.pAspectReferences, sizeof(VkInputAttachmentAspectReferenceKHR)*src.aspectReferenceCount);
    }

    return *this;
}

safe_VkRenderPassInputAttachmentAspectCreateInfoKHR::~safe_VkRenderPassInputAttachmentAspectCreateInfoKHR()
{
    if (pAspectReferences)
        delete[] pAspectReferences;
}

void safe_VkRenderPassInputAttachmentAspectCreateInfoKHR::initialize(const VkRenderPassInputAttachmentAspectCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    aspectReferenceCount = in_struct->aspectReferenceCount;
    pAspectReferences = nullptr;
    if (in_struct->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReferenceKHR[in_struct->aspectReferenceCount];
        memcpy ((void *)pAspectReferences, (void *)in_struct->pAspectReferences, sizeof(VkInputAttachmentAspectReferenceKHR)*in_struct->aspectReferenceCount);
    }
}

void safe_VkRenderPassInputAttachmentAspectCreateInfoKHR::initialize(const safe_VkRenderPassInputAttachmentAspectCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    aspectReferenceCount = src->aspectReferenceCount;
    pAspectReferences = nullptr;
    if (src->pAspectReferences) {
        pAspectReferences = new VkInputAttachmentAspectReferenceKHR[src->aspectReferenceCount];
        memcpy ((void *)pAspectReferences, (void *)src->pAspectReferences, sizeof(VkInputAttachmentAspectReferenceKHR)*src->aspectReferenceCount);
    }
}

safe_VkImageViewUsageCreateInfoKHR::safe_VkImageViewUsageCreateInfoKHR(const VkImageViewUsageCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    usage(in_struct->usage)
{
}

safe_VkImageViewUsageCreateInfoKHR::safe_VkImageViewUsageCreateInfoKHR()
{}

safe_VkImageViewUsageCreateInfoKHR::safe_VkImageViewUsageCreateInfoKHR(const safe_VkImageViewUsageCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    usage = src.usage;
}

safe_VkImageViewUsageCreateInfoKHR& safe_VkImageViewUsageCreateInfoKHR::operator=(const safe_VkImageViewUsageCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    usage = src.usage;

    return *this;
}

safe_VkImageViewUsageCreateInfoKHR::~safe_VkImageViewUsageCreateInfoKHR()
{
}

void safe_VkImageViewUsageCreateInfoKHR::initialize(const VkImageViewUsageCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    usage = in_struct->usage;
}

void safe_VkImageViewUsageCreateInfoKHR::initialize(const safe_VkImageViewUsageCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    usage = src->usage;
}

safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR::safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR(const VkPipelineTessellationDomainOriginStateCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    domainOrigin(in_struct->domainOrigin)
{
}

safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR::safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR()
{}

safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR::safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR(const safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    domainOrigin = src.domainOrigin;
}

safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR& safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR::operator=(const safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    domainOrigin = src.domainOrigin;

    return *this;
}

safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR::~safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR()
{
}

void safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR::initialize(const VkPipelineTessellationDomainOriginStateCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    domainOrigin = in_struct->domainOrigin;
}

void safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR::initialize(const safe_VkPipelineTessellationDomainOriginStateCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    domainOrigin = src->domainOrigin;
}

safe_VkPhysicalDeviceSurfaceInfo2KHR::safe_VkPhysicalDeviceSurfaceInfo2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    surface(in_struct->surface)
{
}

safe_VkPhysicalDeviceSurfaceInfo2KHR::safe_VkPhysicalDeviceSurfaceInfo2KHR()
{}

safe_VkPhysicalDeviceSurfaceInfo2KHR::safe_VkPhysicalDeviceSurfaceInfo2KHR(const safe_VkPhysicalDeviceSurfaceInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    surface = src.surface;
}

safe_VkPhysicalDeviceSurfaceInfo2KHR& safe_VkPhysicalDeviceSurfaceInfo2KHR::operator=(const safe_VkPhysicalDeviceSurfaceInfo2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    surface = src.surface;

    return *this;
}

safe_VkPhysicalDeviceSurfaceInfo2KHR::~safe_VkPhysicalDeviceSurfaceInfo2KHR()
{
}

void safe_VkPhysicalDeviceSurfaceInfo2KHR::initialize(const VkPhysicalDeviceSurfaceInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    surface = in_struct->surface;
}

void safe_VkPhysicalDeviceSurfaceInfo2KHR::initialize(const safe_VkPhysicalDeviceSurfaceInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    surface = src->surface;
}

safe_VkSurfaceCapabilities2KHR::safe_VkSurfaceCapabilities2KHR(const VkSurfaceCapabilities2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    surfaceCapabilities(in_struct->surfaceCapabilities)
{
}

safe_VkSurfaceCapabilities2KHR::safe_VkSurfaceCapabilities2KHR()
{}

safe_VkSurfaceCapabilities2KHR::safe_VkSurfaceCapabilities2KHR(const safe_VkSurfaceCapabilities2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    surfaceCapabilities = src.surfaceCapabilities;
}

safe_VkSurfaceCapabilities2KHR& safe_VkSurfaceCapabilities2KHR::operator=(const safe_VkSurfaceCapabilities2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    surfaceCapabilities = src.surfaceCapabilities;

    return *this;
}

safe_VkSurfaceCapabilities2KHR::~safe_VkSurfaceCapabilities2KHR()
{
}

void safe_VkSurfaceCapabilities2KHR::initialize(const VkSurfaceCapabilities2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    surfaceCapabilities = in_struct->surfaceCapabilities;
}

void safe_VkSurfaceCapabilities2KHR::initialize(const safe_VkSurfaceCapabilities2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    surfaceCapabilities = src->surfaceCapabilities;
}

safe_VkSurfaceFormat2KHR::safe_VkSurfaceFormat2KHR(const VkSurfaceFormat2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    surfaceFormat(in_struct->surfaceFormat)
{
}

safe_VkSurfaceFormat2KHR::safe_VkSurfaceFormat2KHR()
{}

safe_VkSurfaceFormat2KHR::safe_VkSurfaceFormat2KHR(const safe_VkSurfaceFormat2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    surfaceFormat = src.surfaceFormat;
}

safe_VkSurfaceFormat2KHR& safe_VkSurfaceFormat2KHR::operator=(const safe_VkSurfaceFormat2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    surfaceFormat = src.surfaceFormat;

    return *this;
}

safe_VkSurfaceFormat2KHR::~safe_VkSurfaceFormat2KHR()
{
}

void safe_VkSurfaceFormat2KHR::initialize(const VkSurfaceFormat2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    surfaceFormat = in_struct->surfaceFormat;
}

void safe_VkSurfaceFormat2KHR::initialize(const safe_VkSurfaceFormat2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    surfaceFormat = src->surfaceFormat;
}

safe_VkPhysicalDeviceVariablePointerFeaturesKHR::safe_VkPhysicalDeviceVariablePointerFeaturesKHR(const VkPhysicalDeviceVariablePointerFeaturesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    variablePointersStorageBuffer(in_struct->variablePointersStorageBuffer),
    variablePointers(in_struct->variablePointers)
{
}

safe_VkPhysicalDeviceVariablePointerFeaturesKHR::safe_VkPhysicalDeviceVariablePointerFeaturesKHR()
{}

safe_VkPhysicalDeviceVariablePointerFeaturesKHR::safe_VkPhysicalDeviceVariablePointerFeaturesKHR(const safe_VkPhysicalDeviceVariablePointerFeaturesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    variablePointersStorageBuffer = src.variablePointersStorageBuffer;
    variablePointers = src.variablePointers;
}

safe_VkPhysicalDeviceVariablePointerFeaturesKHR& safe_VkPhysicalDeviceVariablePointerFeaturesKHR::operator=(const safe_VkPhysicalDeviceVariablePointerFeaturesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    variablePointersStorageBuffer = src.variablePointersStorageBuffer;
    variablePointers = src.variablePointers;

    return *this;
}

safe_VkPhysicalDeviceVariablePointerFeaturesKHR::~safe_VkPhysicalDeviceVariablePointerFeaturesKHR()
{
}

void safe_VkPhysicalDeviceVariablePointerFeaturesKHR::initialize(const VkPhysicalDeviceVariablePointerFeaturesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    variablePointersStorageBuffer = in_struct->variablePointersStorageBuffer;
    variablePointers = in_struct->variablePointers;
}

void safe_VkPhysicalDeviceVariablePointerFeaturesKHR::initialize(const safe_VkPhysicalDeviceVariablePointerFeaturesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    variablePointersStorageBuffer = src->variablePointersStorageBuffer;
    variablePointers = src->variablePointers;
}

safe_VkMemoryDedicatedRequirementsKHR::safe_VkMemoryDedicatedRequirementsKHR(const VkMemoryDedicatedRequirementsKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    prefersDedicatedAllocation(in_struct->prefersDedicatedAllocation),
    requiresDedicatedAllocation(in_struct->requiresDedicatedAllocation)
{
}

safe_VkMemoryDedicatedRequirementsKHR::safe_VkMemoryDedicatedRequirementsKHR()
{}

safe_VkMemoryDedicatedRequirementsKHR::safe_VkMemoryDedicatedRequirementsKHR(const safe_VkMemoryDedicatedRequirementsKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    prefersDedicatedAllocation = src.prefersDedicatedAllocation;
    requiresDedicatedAllocation = src.requiresDedicatedAllocation;
}

safe_VkMemoryDedicatedRequirementsKHR& safe_VkMemoryDedicatedRequirementsKHR::operator=(const safe_VkMemoryDedicatedRequirementsKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    prefersDedicatedAllocation = src.prefersDedicatedAllocation;
    requiresDedicatedAllocation = src.requiresDedicatedAllocation;

    return *this;
}

safe_VkMemoryDedicatedRequirementsKHR::~safe_VkMemoryDedicatedRequirementsKHR()
{
}

void safe_VkMemoryDedicatedRequirementsKHR::initialize(const VkMemoryDedicatedRequirementsKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    prefersDedicatedAllocation = in_struct->prefersDedicatedAllocation;
    requiresDedicatedAllocation = in_struct->requiresDedicatedAllocation;
}

void safe_VkMemoryDedicatedRequirementsKHR::initialize(const safe_VkMemoryDedicatedRequirementsKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    prefersDedicatedAllocation = src->prefersDedicatedAllocation;
    requiresDedicatedAllocation = src->requiresDedicatedAllocation;
}

safe_VkMemoryDedicatedAllocateInfoKHR::safe_VkMemoryDedicatedAllocateInfoKHR(const VkMemoryDedicatedAllocateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    image(in_struct->image),
    buffer(in_struct->buffer)
{
}

safe_VkMemoryDedicatedAllocateInfoKHR::safe_VkMemoryDedicatedAllocateInfoKHR()
{}

safe_VkMemoryDedicatedAllocateInfoKHR::safe_VkMemoryDedicatedAllocateInfoKHR(const safe_VkMemoryDedicatedAllocateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    buffer = src.buffer;
}

safe_VkMemoryDedicatedAllocateInfoKHR& safe_VkMemoryDedicatedAllocateInfoKHR::operator=(const safe_VkMemoryDedicatedAllocateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    buffer = src.buffer;

    return *this;
}

safe_VkMemoryDedicatedAllocateInfoKHR::~safe_VkMemoryDedicatedAllocateInfoKHR()
{
}

void safe_VkMemoryDedicatedAllocateInfoKHR::initialize(const VkMemoryDedicatedAllocateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    image = in_struct->image;
    buffer = in_struct->buffer;
}

void safe_VkMemoryDedicatedAllocateInfoKHR::initialize(const safe_VkMemoryDedicatedAllocateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    image = src->image;
    buffer = src->buffer;
}

safe_VkBufferMemoryRequirementsInfo2KHR::safe_VkBufferMemoryRequirementsInfo2KHR(const VkBufferMemoryRequirementsInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    buffer(in_struct->buffer)
{
}

safe_VkBufferMemoryRequirementsInfo2KHR::safe_VkBufferMemoryRequirementsInfo2KHR()
{}

safe_VkBufferMemoryRequirementsInfo2KHR::safe_VkBufferMemoryRequirementsInfo2KHR(const safe_VkBufferMemoryRequirementsInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    buffer = src.buffer;
}

safe_VkBufferMemoryRequirementsInfo2KHR& safe_VkBufferMemoryRequirementsInfo2KHR::operator=(const safe_VkBufferMemoryRequirementsInfo2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    buffer = src.buffer;

    return *this;
}

safe_VkBufferMemoryRequirementsInfo2KHR::~safe_VkBufferMemoryRequirementsInfo2KHR()
{
}

void safe_VkBufferMemoryRequirementsInfo2KHR::initialize(const VkBufferMemoryRequirementsInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    buffer = in_struct->buffer;
}

void safe_VkBufferMemoryRequirementsInfo2KHR::initialize(const safe_VkBufferMemoryRequirementsInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    buffer = src->buffer;
}

safe_VkImageMemoryRequirementsInfo2KHR::safe_VkImageMemoryRequirementsInfo2KHR(const VkImageMemoryRequirementsInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    image(in_struct->image)
{
}

safe_VkImageMemoryRequirementsInfo2KHR::safe_VkImageMemoryRequirementsInfo2KHR()
{}

safe_VkImageMemoryRequirementsInfo2KHR::safe_VkImageMemoryRequirementsInfo2KHR(const safe_VkImageMemoryRequirementsInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
}

safe_VkImageMemoryRequirementsInfo2KHR& safe_VkImageMemoryRequirementsInfo2KHR::operator=(const safe_VkImageMemoryRequirementsInfo2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    image = src.image;

    return *this;
}

safe_VkImageMemoryRequirementsInfo2KHR::~safe_VkImageMemoryRequirementsInfo2KHR()
{
}

void safe_VkImageMemoryRequirementsInfo2KHR::initialize(const VkImageMemoryRequirementsInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    image = in_struct->image;
}

void safe_VkImageMemoryRequirementsInfo2KHR::initialize(const safe_VkImageMemoryRequirementsInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    image = src->image;
}

safe_VkImageSparseMemoryRequirementsInfo2KHR::safe_VkImageSparseMemoryRequirementsInfo2KHR(const VkImageSparseMemoryRequirementsInfo2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    image(in_struct->image)
{
}

safe_VkImageSparseMemoryRequirementsInfo2KHR::safe_VkImageSparseMemoryRequirementsInfo2KHR()
{}

safe_VkImageSparseMemoryRequirementsInfo2KHR::safe_VkImageSparseMemoryRequirementsInfo2KHR(const safe_VkImageSparseMemoryRequirementsInfo2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
}

safe_VkImageSparseMemoryRequirementsInfo2KHR& safe_VkImageSparseMemoryRequirementsInfo2KHR::operator=(const safe_VkImageSparseMemoryRequirementsInfo2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    image = src.image;

    return *this;
}

safe_VkImageSparseMemoryRequirementsInfo2KHR::~safe_VkImageSparseMemoryRequirementsInfo2KHR()
{
}

void safe_VkImageSparseMemoryRequirementsInfo2KHR::initialize(const VkImageSparseMemoryRequirementsInfo2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    image = in_struct->image;
}

void safe_VkImageSparseMemoryRequirementsInfo2KHR::initialize(const safe_VkImageSparseMemoryRequirementsInfo2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    image = src->image;
}

safe_VkMemoryRequirements2KHR::safe_VkMemoryRequirements2KHR(const VkMemoryRequirements2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryRequirements(in_struct->memoryRequirements)
{
}

safe_VkMemoryRequirements2KHR::safe_VkMemoryRequirements2KHR()
{}

safe_VkMemoryRequirements2KHR::safe_VkMemoryRequirements2KHR(const safe_VkMemoryRequirements2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryRequirements = src.memoryRequirements;
}

safe_VkMemoryRequirements2KHR& safe_VkMemoryRequirements2KHR::operator=(const safe_VkMemoryRequirements2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memoryRequirements = src.memoryRequirements;

    return *this;
}

safe_VkMemoryRequirements2KHR::~safe_VkMemoryRequirements2KHR()
{
}

void safe_VkMemoryRequirements2KHR::initialize(const VkMemoryRequirements2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryRequirements = in_struct->memoryRequirements;
}

void safe_VkMemoryRequirements2KHR::initialize(const safe_VkMemoryRequirements2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryRequirements = src->memoryRequirements;
}

safe_VkSparseImageMemoryRequirements2KHR::safe_VkSparseImageMemoryRequirements2KHR(const VkSparseImageMemoryRequirements2KHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryRequirements(in_struct->memoryRequirements)
{
}

safe_VkSparseImageMemoryRequirements2KHR::safe_VkSparseImageMemoryRequirements2KHR()
{}

safe_VkSparseImageMemoryRequirements2KHR::safe_VkSparseImageMemoryRequirements2KHR(const safe_VkSparseImageMemoryRequirements2KHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryRequirements = src.memoryRequirements;
}

safe_VkSparseImageMemoryRequirements2KHR& safe_VkSparseImageMemoryRequirements2KHR::operator=(const safe_VkSparseImageMemoryRequirements2KHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memoryRequirements = src.memoryRequirements;

    return *this;
}

safe_VkSparseImageMemoryRequirements2KHR::~safe_VkSparseImageMemoryRequirements2KHR()
{
}

void safe_VkSparseImageMemoryRequirements2KHR::initialize(const VkSparseImageMemoryRequirements2KHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryRequirements = in_struct->memoryRequirements;
}

void safe_VkSparseImageMemoryRequirements2KHR::initialize(const safe_VkSparseImageMemoryRequirements2KHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryRequirements = src->memoryRequirements;
}

safe_VkImageFormatListCreateInfoKHR::safe_VkImageFormatListCreateInfoKHR(const VkImageFormatListCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    viewFormatCount(in_struct->viewFormatCount),
    pViewFormats(nullptr)
{
    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy ((void *)pViewFormats, (void *)in_struct->pViewFormats, sizeof(VkFormat)*in_struct->viewFormatCount);
    }
}

safe_VkImageFormatListCreateInfoKHR::safe_VkImageFormatListCreateInfoKHR() :
    pViewFormats(nullptr)
{}

safe_VkImageFormatListCreateInfoKHR::safe_VkImageFormatListCreateInfoKHR(const safe_VkImageFormatListCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    viewFormatCount = src.viewFormatCount;
    pViewFormats = nullptr;
    if (src.pViewFormats) {
        pViewFormats = new VkFormat[src.viewFormatCount];
        memcpy ((void *)pViewFormats, (void *)src.pViewFormats, sizeof(VkFormat)*src.viewFormatCount);
    }
}

safe_VkImageFormatListCreateInfoKHR& safe_VkImageFormatListCreateInfoKHR::operator=(const safe_VkImageFormatListCreateInfoKHR& src)
{
    if (&src == this) return *this;

    if (pViewFormats)
        delete[] pViewFormats;

    sType = src.sType;
    pNext = src.pNext;
    viewFormatCount = src.viewFormatCount;
    pViewFormats = nullptr;
    if (src.pViewFormats) {
        pViewFormats = new VkFormat[src.viewFormatCount];
        memcpy ((void *)pViewFormats, (void *)src.pViewFormats, sizeof(VkFormat)*src.viewFormatCount);
    }

    return *this;
}

safe_VkImageFormatListCreateInfoKHR::~safe_VkImageFormatListCreateInfoKHR()
{
    if (pViewFormats)
        delete[] pViewFormats;
}

void safe_VkImageFormatListCreateInfoKHR::initialize(const VkImageFormatListCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    viewFormatCount = in_struct->viewFormatCount;
    pViewFormats = nullptr;
    if (in_struct->pViewFormats) {
        pViewFormats = new VkFormat[in_struct->viewFormatCount];
        memcpy ((void *)pViewFormats, (void *)in_struct->pViewFormats, sizeof(VkFormat)*in_struct->viewFormatCount);
    }
}

void safe_VkImageFormatListCreateInfoKHR::initialize(const safe_VkImageFormatListCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    viewFormatCount = src->viewFormatCount;
    pViewFormats = nullptr;
    if (src->pViewFormats) {
        pViewFormats = new VkFormat[src->viewFormatCount];
        memcpy ((void *)pViewFormats, (void *)src->pViewFormats, sizeof(VkFormat)*src->viewFormatCount);
    }
}

safe_VkSamplerYcbcrConversionCreateInfoKHR::safe_VkSamplerYcbcrConversionCreateInfoKHR(const VkSamplerYcbcrConversionCreateInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    format(in_struct->format),
    ycbcrModel(in_struct->ycbcrModel),
    ycbcrRange(in_struct->ycbcrRange),
    components(in_struct->components),
    xChromaOffset(in_struct->xChromaOffset),
    yChromaOffset(in_struct->yChromaOffset),
    chromaFilter(in_struct->chromaFilter),
    forceExplicitReconstruction(in_struct->forceExplicitReconstruction)
{
}

safe_VkSamplerYcbcrConversionCreateInfoKHR::safe_VkSamplerYcbcrConversionCreateInfoKHR()
{}

safe_VkSamplerYcbcrConversionCreateInfoKHR::safe_VkSamplerYcbcrConversionCreateInfoKHR(const safe_VkSamplerYcbcrConversionCreateInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    ycbcrModel = src.ycbcrModel;
    ycbcrRange = src.ycbcrRange;
    components = src.components;
    xChromaOffset = src.xChromaOffset;
    yChromaOffset = src.yChromaOffset;
    chromaFilter = src.chromaFilter;
    forceExplicitReconstruction = src.forceExplicitReconstruction;
}

safe_VkSamplerYcbcrConversionCreateInfoKHR& safe_VkSamplerYcbcrConversionCreateInfoKHR::operator=(const safe_VkSamplerYcbcrConversionCreateInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    format = src.format;
    ycbcrModel = src.ycbcrModel;
    ycbcrRange = src.ycbcrRange;
    components = src.components;
    xChromaOffset = src.xChromaOffset;
    yChromaOffset = src.yChromaOffset;
    chromaFilter = src.chromaFilter;
    forceExplicitReconstruction = src.forceExplicitReconstruction;

    return *this;
}

safe_VkSamplerYcbcrConversionCreateInfoKHR::~safe_VkSamplerYcbcrConversionCreateInfoKHR()
{
}

void safe_VkSamplerYcbcrConversionCreateInfoKHR::initialize(const VkSamplerYcbcrConversionCreateInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    format = in_struct->format;
    ycbcrModel = in_struct->ycbcrModel;
    ycbcrRange = in_struct->ycbcrRange;
    components = in_struct->components;
    xChromaOffset = in_struct->xChromaOffset;
    yChromaOffset = in_struct->yChromaOffset;
    chromaFilter = in_struct->chromaFilter;
    forceExplicitReconstruction = in_struct->forceExplicitReconstruction;
}

void safe_VkSamplerYcbcrConversionCreateInfoKHR::initialize(const safe_VkSamplerYcbcrConversionCreateInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    format = src->format;
    ycbcrModel = src->ycbcrModel;
    ycbcrRange = src->ycbcrRange;
    components = src->components;
    xChromaOffset = src->xChromaOffset;
    yChromaOffset = src->yChromaOffset;
    chromaFilter = src->chromaFilter;
    forceExplicitReconstruction = src->forceExplicitReconstruction;
}

safe_VkSamplerYcbcrConversionInfoKHR::safe_VkSamplerYcbcrConversionInfoKHR(const VkSamplerYcbcrConversionInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    conversion(in_struct->conversion)
{
}

safe_VkSamplerYcbcrConversionInfoKHR::safe_VkSamplerYcbcrConversionInfoKHR()
{}

safe_VkSamplerYcbcrConversionInfoKHR::safe_VkSamplerYcbcrConversionInfoKHR(const safe_VkSamplerYcbcrConversionInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    conversion = src.conversion;
}

safe_VkSamplerYcbcrConversionInfoKHR& safe_VkSamplerYcbcrConversionInfoKHR::operator=(const safe_VkSamplerYcbcrConversionInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    conversion = src.conversion;

    return *this;
}

safe_VkSamplerYcbcrConversionInfoKHR::~safe_VkSamplerYcbcrConversionInfoKHR()
{
}

void safe_VkSamplerYcbcrConversionInfoKHR::initialize(const VkSamplerYcbcrConversionInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    conversion = in_struct->conversion;
}

void safe_VkSamplerYcbcrConversionInfoKHR::initialize(const safe_VkSamplerYcbcrConversionInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    conversion = src->conversion;
}

safe_VkBindImagePlaneMemoryInfoKHR::safe_VkBindImagePlaneMemoryInfoKHR(const VkBindImagePlaneMemoryInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    planeAspect(in_struct->planeAspect)
{
}

safe_VkBindImagePlaneMemoryInfoKHR::safe_VkBindImagePlaneMemoryInfoKHR()
{}

safe_VkBindImagePlaneMemoryInfoKHR::safe_VkBindImagePlaneMemoryInfoKHR(const safe_VkBindImagePlaneMemoryInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    planeAspect = src.planeAspect;
}

safe_VkBindImagePlaneMemoryInfoKHR& safe_VkBindImagePlaneMemoryInfoKHR::operator=(const safe_VkBindImagePlaneMemoryInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    planeAspect = src.planeAspect;

    return *this;
}

safe_VkBindImagePlaneMemoryInfoKHR::~safe_VkBindImagePlaneMemoryInfoKHR()
{
}

void safe_VkBindImagePlaneMemoryInfoKHR::initialize(const VkBindImagePlaneMemoryInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    planeAspect = in_struct->planeAspect;
}

void safe_VkBindImagePlaneMemoryInfoKHR::initialize(const safe_VkBindImagePlaneMemoryInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    planeAspect = src->planeAspect;
}

safe_VkImagePlaneMemoryRequirementsInfoKHR::safe_VkImagePlaneMemoryRequirementsInfoKHR(const VkImagePlaneMemoryRequirementsInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    planeAspect(in_struct->planeAspect)
{
}

safe_VkImagePlaneMemoryRequirementsInfoKHR::safe_VkImagePlaneMemoryRequirementsInfoKHR()
{}

safe_VkImagePlaneMemoryRequirementsInfoKHR::safe_VkImagePlaneMemoryRequirementsInfoKHR(const safe_VkImagePlaneMemoryRequirementsInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    planeAspect = src.planeAspect;
}

safe_VkImagePlaneMemoryRequirementsInfoKHR& safe_VkImagePlaneMemoryRequirementsInfoKHR::operator=(const safe_VkImagePlaneMemoryRequirementsInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    planeAspect = src.planeAspect;

    return *this;
}

safe_VkImagePlaneMemoryRequirementsInfoKHR::~safe_VkImagePlaneMemoryRequirementsInfoKHR()
{
}

void safe_VkImagePlaneMemoryRequirementsInfoKHR::initialize(const VkImagePlaneMemoryRequirementsInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    planeAspect = in_struct->planeAspect;
}

void safe_VkImagePlaneMemoryRequirementsInfoKHR::initialize(const safe_VkImagePlaneMemoryRequirementsInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    planeAspect = src->planeAspect;
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR::safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(const VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    samplerYcbcrConversion(in_struct->samplerYcbcrConversion)
{
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR::safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR()
{}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR::safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(const safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    samplerYcbcrConversion = src.samplerYcbcrConversion;
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR& safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR::operator=(const safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    samplerYcbcrConversion = src.samplerYcbcrConversion;

    return *this;
}

safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR::~safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR()
{
}

void safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR::initialize(const VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    samplerYcbcrConversion = in_struct->samplerYcbcrConversion;
}

void safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR::initialize(const safe_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    samplerYcbcrConversion = src->samplerYcbcrConversion;
}

safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR::safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR(const VkSamplerYcbcrConversionImageFormatPropertiesKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    combinedImageSamplerDescriptorCount(in_struct->combinedImageSamplerDescriptorCount)
{
}

safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR::safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR()
{}

safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR::safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR(const safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    combinedImageSamplerDescriptorCount = src.combinedImageSamplerDescriptorCount;
}

safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR& safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR::operator=(const safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    combinedImageSamplerDescriptorCount = src.combinedImageSamplerDescriptorCount;

    return *this;
}

safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR::~safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR()
{
}

void safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR::initialize(const VkSamplerYcbcrConversionImageFormatPropertiesKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    combinedImageSamplerDescriptorCount = in_struct->combinedImageSamplerDescriptorCount;
}

void safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR::initialize(const safe_VkSamplerYcbcrConversionImageFormatPropertiesKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    combinedImageSamplerDescriptorCount = src->combinedImageSamplerDescriptorCount;
}

safe_VkBindBufferMemoryInfoKHR::safe_VkBindBufferMemoryInfoKHR(const VkBindBufferMemoryInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    buffer(in_struct->buffer),
    memory(in_struct->memory),
    memoryOffset(in_struct->memoryOffset)
{
}

safe_VkBindBufferMemoryInfoKHR::safe_VkBindBufferMemoryInfoKHR()
{}

safe_VkBindBufferMemoryInfoKHR::safe_VkBindBufferMemoryInfoKHR(const safe_VkBindBufferMemoryInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    buffer = src.buffer;
    memory = src.memory;
    memoryOffset = src.memoryOffset;
}

safe_VkBindBufferMemoryInfoKHR& safe_VkBindBufferMemoryInfoKHR::operator=(const safe_VkBindBufferMemoryInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    buffer = src.buffer;
    memory = src.memory;
    memoryOffset = src.memoryOffset;

    return *this;
}

safe_VkBindBufferMemoryInfoKHR::~safe_VkBindBufferMemoryInfoKHR()
{
}

void safe_VkBindBufferMemoryInfoKHR::initialize(const VkBindBufferMemoryInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    buffer = in_struct->buffer;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
}

void safe_VkBindBufferMemoryInfoKHR::initialize(const safe_VkBindBufferMemoryInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    buffer = src->buffer;
    memory = src->memory;
    memoryOffset = src->memoryOffset;
}

safe_VkBindImageMemoryInfoKHR::safe_VkBindImageMemoryInfoKHR(const VkBindImageMemoryInfoKHR* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    image(in_struct->image),
    memory(in_struct->memory),
    memoryOffset(in_struct->memoryOffset)
{
}

safe_VkBindImageMemoryInfoKHR::safe_VkBindImageMemoryInfoKHR()
{}

safe_VkBindImageMemoryInfoKHR::safe_VkBindImageMemoryInfoKHR(const safe_VkBindImageMemoryInfoKHR& src)
{
    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    memory = src.memory;
    memoryOffset = src.memoryOffset;
}

safe_VkBindImageMemoryInfoKHR& safe_VkBindImageMemoryInfoKHR::operator=(const safe_VkBindImageMemoryInfoKHR& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    memory = src.memory;
    memoryOffset = src.memoryOffset;

    return *this;
}

safe_VkBindImageMemoryInfoKHR::~safe_VkBindImageMemoryInfoKHR()
{
}

void safe_VkBindImageMemoryInfoKHR::initialize(const VkBindImageMemoryInfoKHR* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    image = in_struct->image;
    memory = in_struct->memory;
    memoryOffset = in_struct->memoryOffset;
}

void safe_VkBindImageMemoryInfoKHR::initialize(const safe_VkBindImageMemoryInfoKHR* src)
{
    sType = src->sType;
    pNext = src->pNext;
    image = src->image;
    memory = src->memory;
    memoryOffset = src->memoryOffset;
}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    pfnCallback(in_struct->pfnCallback),
    pUserData(in_struct->pUserData)
{
}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT()
{}

safe_VkDebugReportCallbackCreateInfoEXT::safe_VkDebugReportCallbackCreateInfoEXT(const safe_VkDebugReportCallbackCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pfnCallback = src.pfnCallback;
    pUserData = src.pUserData;
}

safe_VkDebugReportCallbackCreateInfoEXT& safe_VkDebugReportCallbackCreateInfoEXT::operator=(const safe_VkDebugReportCallbackCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pfnCallback = src.pfnCallback;
    pUserData = src.pUserData;

    return *this;
}

safe_VkDebugReportCallbackCreateInfoEXT::~safe_VkDebugReportCallbackCreateInfoEXT()
{
}

void safe_VkDebugReportCallbackCreateInfoEXT::initialize(const VkDebugReportCallbackCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    pfnCallback = in_struct->pfnCallback;
    pUserData = in_struct->pUserData;
}

void safe_VkDebugReportCallbackCreateInfoEXT::initialize(const safe_VkDebugReportCallbackCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    pfnCallback = src->pfnCallback;
    pUserData = src->pUserData;
}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::safe_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    rasterizationOrder(in_struct->rasterizationOrder)
{
}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::safe_VkPipelineRasterizationStateRasterizationOrderAMD()
{}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::safe_VkPipelineRasterizationStateRasterizationOrderAMD(const safe_VkPipelineRasterizationStateRasterizationOrderAMD& src)
{
    sType = src.sType;
    pNext = src.pNext;
    rasterizationOrder = src.rasterizationOrder;
}

safe_VkPipelineRasterizationStateRasterizationOrderAMD& safe_VkPipelineRasterizationStateRasterizationOrderAMD::operator=(const safe_VkPipelineRasterizationStateRasterizationOrderAMD& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    rasterizationOrder = src.rasterizationOrder;

    return *this;
}

safe_VkPipelineRasterizationStateRasterizationOrderAMD::~safe_VkPipelineRasterizationStateRasterizationOrderAMD()
{
}

void safe_VkPipelineRasterizationStateRasterizationOrderAMD::initialize(const VkPipelineRasterizationStateRasterizationOrderAMD* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    rasterizationOrder = in_struct->rasterizationOrder;
}

void safe_VkPipelineRasterizationStateRasterizationOrderAMD::initialize(const safe_VkPipelineRasterizationStateRasterizationOrderAMD* src)
{
    sType = src->sType;
    pNext = src->pNext;
    rasterizationOrder = src->rasterizationOrder;
}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectType(in_struct->objectType),
    object(in_struct->object),
    pObjectName(in_struct->pObjectName)
{
}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT()
{}

safe_VkDebugMarkerObjectNameInfoEXT::safe_VkDebugMarkerObjectNameInfoEXT(const safe_VkDebugMarkerObjectNameInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectType = src.objectType;
    object = src.object;
    pObjectName = src.pObjectName;
}

safe_VkDebugMarkerObjectNameInfoEXT& safe_VkDebugMarkerObjectNameInfoEXT::operator=(const safe_VkDebugMarkerObjectNameInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    objectType = src.objectType;
    object = src.object;
    pObjectName = src.pObjectName;

    return *this;
}

safe_VkDebugMarkerObjectNameInfoEXT::~safe_VkDebugMarkerObjectNameInfoEXT()
{
}

void safe_VkDebugMarkerObjectNameInfoEXT::initialize(const VkDebugMarkerObjectNameInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectType = in_struct->objectType;
    object = in_struct->object;
    pObjectName = in_struct->pObjectName;
}

void safe_VkDebugMarkerObjectNameInfoEXT::initialize(const safe_VkDebugMarkerObjectNameInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectType = src->objectType;
    object = src->object;
    pObjectName = src->pObjectName;
}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectType(in_struct->objectType),
    object(in_struct->object),
    tagName(in_struct->tagName),
    tagSize(in_struct->tagSize),
    pTag(in_struct->pTag)
{
}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT()
{}

safe_VkDebugMarkerObjectTagInfoEXT::safe_VkDebugMarkerObjectTagInfoEXT(const safe_VkDebugMarkerObjectTagInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectType = src.objectType;
    object = src.object;
    tagName = src.tagName;
    tagSize = src.tagSize;
    pTag = src.pTag;
}

safe_VkDebugMarkerObjectTagInfoEXT& safe_VkDebugMarkerObjectTagInfoEXT::operator=(const safe_VkDebugMarkerObjectTagInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    objectType = src.objectType;
    object = src.object;
    tagName = src.tagName;
    tagSize = src.tagSize;
    pTag = src.pTag;

    return *this;
}

safe_VkDebugMarkerObjectTagInfoEXT::~safe_VkDebugMarkerObjectTagInfoEXT()
{
}

void safe_VkDebugMarkerObjectTagInfoEXT::initialize(const VkDebugMarkerObjectTagInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectType = in_struct->objectType;
    object = in_struct->object;
    tagName = in_struct->tagName;
    tagSize = in_struct->tagSize;
    pTag = in_struct->pTag;
}

void safe_VkDebugMarkerObjectTagInfoEXT::initialize(const safe_VkDebugMarkerObjectTagInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectType = src->objectType;
    object = src->object;
    tagName = src->tagName;
    tagSize = src->tagSize;
    pTag = src->pTag;
}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pMarkerName(in_struct->pMarkerName)
{
    for (uint32_t i=0; i<4; ++i) {
        color[i] = in_struct->color[i];
    }
}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT()
{}

safe_VkDebugMarkerMarkerInfoEXT::safe_VkDebugMarkerMarkerInfoEXT(const safe_VkDebugMarkerMarkerInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pMarkerName = src.pMarkerName;
    for (uint32_t i=0; i<4; ++i) {
        color[i] = src.color[i];
    }
}

safe_VkDebugMarkerMarkerInfoEXT& safe_VkDebugMarkerMarkerInfoEXT::operator=(const safe_VkDebugMarkerMarkerInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    pMarkerName = src.pMarkerName;
    for (uint32_t i=0; i<4; ++i) {
        color[i] = src.color[i];
    }

    return *this;
}

safe_VkDebugMarkerMarkerInfoEXT::~safe_VkDebugMarkerMarkerInfoEXT()
{
}

void safe_VkDebugMarkerMarkerInfoEXT::initialize(const VkDebugMarkerMarkerInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pMarkerName = in_struct->pMarkerName;
    for (uint32_t i=0; i<4; ++i) {
        color[i] = in_struct->color[i];
    }
}

void safe_VkDebugMarkerMarkerInfoEXT::initialize(const safe_VkDebugMarkerMarkerInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pMarkerName = src->pMarkerName;
    for (uint32_t i=0; i<4; ++i) {
        color[i] = src->color[i];
    }
}

safe_VkDedicatedAllocationImageCreateInfoNV::safe_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    dedicatedAllocation(in_struct->dedicatedAllocation)
{
}

safe_VkDedicatedAllocationImageCreateInfoNV::safe_VkDedicatedAllocationImageCreateInfoNV()
{}

safe_VkDedicatedAllocationImageCreateInfoNV::safe_VkDedicatedAllocationImageCreateInfoNV(const safe_VkDedicatedAllocationImageCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    dedicatedAllocation = src.dedicatedAllocation;
}

safe_VkDedicatedAllocationImageCreateInfoNV& safe_VkDedicatedAllocationImageCreateInfoNV::operator=(const safe_VkDedicatedAllocationImageCreateInfoNV& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    dedicatedAllocation = src.dedicatedAllocation;

    return *this;
}

safe_VkDedicatedAllocationImageCreateInfoNV::~safe_VkDedicatedAllocationImageCreateInfoNV()
{
}

void safe_VkDedicatedAllocationImageCreateInfoNV::initialize(const VkDedicatedAllocationImageCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    dedicatedAllocation = in_struct->dedicatedAllocation;
}

void safe_VkDedicatedAllocationImageCreateInfoNV::initialize(const safe_VkDedicatedAllocationImageCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    dedicatedAllocation = src->dedicatedAllocation;
}

safe_VkDedicatedAllocationBufferCreateInfoNV::safe_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    dedicatedAllocation(in_struct->dedicatedAllocation)
{
}

safe_VkDedicatedAllocationBufferCreateInfoNV::safe_VkDedicatedAllocationBufferCreateInfoNV()
{}

safe_VkDedicatedAllocationBufferCreateInfoNV::safe_VkDedicatedAllocationBufferCreateInfoNV(const safe_VkDedicatedAllocationBufferCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    dedicatedAllocation = src.dedicatedAllocation;
}

safe_VkDedicatedAllocationBufferCreateInfoNV& safe_VkDedicatedAllocationBufferCreateInfoNV::operator=(const safe_VkDedicatedAllocationBufferCreateInfoNV& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    dedicatedAllocation = src.dedicatedAllocation;

    return *this;
}

safe_VkDedicatedAllocationBufferCreateInfoNV::~safe_VkDedicatedAllocationBufferCreateInfoNV()
{
}

void safe_VkDedicatedAllocationBufferCreateInfoNV::initialize(const VkDedicatedAllocationBufferCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    dedicatedAllocation = in_struct->dedicatedAllocation;
}

void safe_VkDedicatedAllocationBufferCreateInfoNV::initialize(const safe_VkDedicatedAllocationBufferCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    dedicatedAllocation = src->dedicatedAllocation;
}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::safe_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    image(in_struct->image),
    buffer(in_struct->buffer)
{
}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::safe_VkDedicatedAllocationMemoryAllocateInfoNV()
{}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::safe_VkDedicatedAllocationMemoryAllocateInfoNV(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    buffer = src.buffer;
}

safe_VkDedicatedAllocationMemoryAllocateInfoNV& safe_VkDedicatedAllocationMemoryAllocateInfoNV::operator=(const safe_VkDedicatedAllocationMemoryAllocateInfoNV& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    image = src.image;
    buffer = src.buffer;

    return *this;
}

safe_VkDedicatedAllocationMemoryAllocateInfoNV::~safe_VkDedicatedAllocationMemoryAllocateInfoNV()
{
}

void safe_VkDedicatedAllocationMemoryAllocateInfoNV::initialize(const VkDedicatedAllocationMemoryAllocateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    image = in_struct->image;
    buffer = in_struct->buffer;
}

void safe_VkDedicatedAllocationMemoryAllocateInfoNV::initialize(const safe_VkDedicatedAllocationMemoryAllocateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    image = src->image;
    buffer = src->buffer;
}

safe_VkTextureLODGatherFormatPropertiesAMD::safe_VkTextureLODGatherFormatPropertiesAMD(const VkTextureLODGatherFormatPropertiesAMD* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    supportsTextureGatherLODBiasAMD(in_struct->supportsTextureGatherLODBiasAMD)
{
}

safe_VkTextureLODGatherFormatPropertiesAMD::safe_VkTextureLODGatherFormatPropertiesAMD()
{}

safe_VkTextureLODGatherFormatPropertiesAMD::safe_VkTextureLODGatherFormatPropertiesAMD(const safe_VkTextureLODGatherFormatPropertiesAMD& src)
{
    sType = src.sType;
    pNext = src.pNext;
    supportsTextureGatherLODBiasAMD = src.supportsTextureGatherLODBiasAMD;
}

safe_VkTextureLODGatherFormatPropertiesAMD& safe_VkTextureLODGatherFormatPropertiesAMD::operator=(const safe_VkTextureLODGatherFormatPropertiesAMD& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    supportsTextureGatherLODBiasAMD = src.supportsTextureGatherLODBiasAMD;

    return *this;
}

safe_VkTextureLODGatherFormatPropertiesAMD::~safe_VkTextureLODGatherFormatPropertiesAMD()
{
}

void safe_VkTextureLODGatherFormatPropertiesAMD::initialize(const VkTextureLODGatherFormatPropertiesAMD* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    supportsTextureGatherLODBiasAMD = in_struct->supportsTextureGatherLODBiasAMD;
}

void safe_VkTextureLODGatherFormatPropertiesAMD::initialize(const safe_VkTextureLODGatherFormatPropertiesAMD* src)
{
    sType = src->sType;
    pNext = src->pNext;
    supportsTextureGatherLODBiasAMD = src->supportsTextureGatherLODBiasAMD;
}

safe_VkRenderPassMultiviewCreateInfoKHX::safe_VkRenderPassMultiviewCreateInfoKHX(const VkRenderPassMultiviewCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    subpassCount(in_struct->subpassCount),
    pViewMasks(nullptr),
    dependencyCount(in_struct->dependencyCount),
    pViewOffsets(nullptr),
    correlationMaskCount(in_struct->correlationMaskCount),
    pCorrelationMasks(nullptr)
{
    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy ((void *)pViewMasks, (void *)in_struct->pViewMasks, sizeof(uint32_t)*in_struct->subpassCount);
    }
    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)in_struct->pViewOffsets, sizeof(int32_t)*in_struct->dependencyCount);
    }
    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)in_struct->pCorrelationMasks, sizeof(uint32_t)*in_struct->correlationMaskCount);
    }
}

safe_VkRenderPassMultiviewCreateInfoKHX::safe_VkRenderPassMultiviewCreateInfoKHX() :
    pViewMasks(nullptr),
    pViewOffsets(nullptr),
    pCorrelationMasks(nullptr)
{}

safe_VkRenderPassMultiviewCreateInfoKHX::safe_VkRenderPassMultiviewCreateInfoKHX(const safe_VkRenderPassMultiviewCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    subpassCount = src.subpassCount;
    pViewMasks = nullptr;
    dependencyCount = src.dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = src.correlationMaskCount;
    pCorrelationMasks = nullptr;
    if (src.pViewMasks) {
        pViewMasks = new uint32_t[src.subpassCount];
        memcpy ((void *)pViewMasks, (void *)src.pViewMasks, sizeof(uint32_t)*src.subpassCount);
    }
    if (src.pViewOffsets) {
        pViewOffsets = new int32_t[src.dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)src.pViewOffsets, sizeof(int32_t)*src.dependencyCount);
    }
    if (src.pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[src.correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)src.pCorrelationMasks, sizeof(uint32_t)*src.correlationMaskCount);
    }
}

safe_VkRenderPassMultiviewCreateInfoKHX& safe_VkRenderPassMultiviewCreateInfoKHX::operator=(const safe_VkRenderPassMultiviewCreateInfoKHX& src)
{
    if (&src == this) return *this;

    if (pViewMasks)
        delete[] pViewMasks;
    if (pViewOffsets)
        delete[] pViewOffsets;
    if (pCorrelationMasks)
        delete[] pCorrelationMasks;

    sType = src.sType;
    pNext = src.pNext;
    subpassCount = src.subpassCount;
    pViewMasks = nullptr;
    dependencyCount = src.dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = src.correlationMaskCount;
    pCorrelationMasks = nullptr;
    if (src.pViewMasks) {
        pViewMasks = new uint32_t[src.subpassCount];
        memcpy ((void *)pViewMasks, (void *)src.pViewMasks, sizeof(uint32_t)*src.subpassCount);
    }
    if (src.pViewOffsets) {
        pViewOffsets = new int32_t[src.dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)src.pViewOffsets, sizeof(int32_t)*src.dependencyCount);
    }
    if (src.pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[src.correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)src.pCorrelationMasks, sizeof(uint32_t)*src.correlationMaskCount);
    }

    return *this;
}

safe_VkRenderPassMultiviewCreateInfoKHX::~safe_VkRenderPassMultiviewCreateInfoKHX()
{
    if (pViewMasks)
        delete[] pViewMasks;
    if (pViewOffsets)
        delete[] pViewOffsets;
    if (pCorrelationMasks)
        delete[] pCorrelationMasks;
}

void safe_VkRenderPassMultiviewCreateInfoKHX::initialize(const VkRenderPassMultiviewCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    subpassCount = in_struct->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = in_struct->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = in_struct->correlationMaskCount;
    pCorrelationMasks = nullptr;
    if (in_struct->pViewMasks) {
        pViewMasks = new uint32_t[in_struct->subpassCount];
        memcpy ((void *)pViewMasks, (void *)in_struct->pViewMasks, sizeof(uint32_t)*in_struct->subpassCount);
    }
    if (in_struct->pViewOffsets) {
        pViewOffsets = new int32_t[in_struct->dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)in_struct->pViewOffsets, sizeof(int32_t)*in_struct->dependencyCount);
    }
    if (in_struct->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[in_struct->correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)in_struct->pCorrelationMasks, sizeof(uint32_t)*in_struct->correlationMaskCount);
    }
}

void safe_VkRenderPassMultiviewCreateInfoKHX::initialize(const safe_VkRenderPassMultiviewCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    subpassCount = src->subpassCount;
    pViewMasks = nullptr;
    dependencyCount = src->dependencyCount;
    pViewOffsets = nullptr;
    correlationMaskCount = src->correlationMaskCount;
    pCorrelationMasks = nullptr;
    if (src->pViewMasks) {
        pViewMasks = new uint32_t[src->subpassCount];
        memcpy ((void *)pViewMasks, (void *)src->pViewMasks, sizeof(uint32_t)*src->subpassCount);
    }
    if (src->pViewOffsets) {
        pViewOffsets = new int32_t[src->dependencyCount];
        memcpy ((void *)pViewOffsets, (void *)src->pViewOffsets, sizeof(int32_t)*src->dependencyCount);
    }
    if (src->pCorrelationMasks) {
        pCorrelationMasks = new uint32_t[src->correlationMaskCount];
        memcpy ((void *)pCorrelationMasks, (void *)src->pCorrelationMasks, sizeof(uint32_t)*src->correlationMaskCount);
    }
}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::safe_VkPhysicalDeviceMultiviewFeaturesKHX(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    multiview(in_struct->multiview),
    multiviewGeometryShader(in_struct->multiviewGeometryShader),
    multiviewTessellationShader(in_struct->multiviewTessellationShader)
{
}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::safe_VkPhysicalDeviceMultiviewFeaturesKHX()
{}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::safe_VkPhysicalDeviceMultiviewFeaturesKHX(const safe_VkPhysicalDeviceMultiviewFeaturesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    multiview = src.multiview;
    multiviewGeometryShader = src.multiviewGeometryShader;
    multiviewTessellationShader = src.multiviewTessellationShader;
}

safe_VkPhysicalDeviceMultiviewFeaturesKHX& safe_VkPhysicalDeviceMultiviewFeaturesKHX::operator=(const safe_VkPhysicalDeviceMultiviewFeaturesKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    multiview = src.multiview;
    multiviewGeometryShader = src.multiviewGeometryShader;
    multiviewTessellationShader = src.multiviewTessellationShader;

    return *this;
}

safe_VkPhysicalDeviceMultiviewFeaturesKHX::~safe_VkPhysicalDeviceMultiviewFeaturesKHX()
{
}

void safe_VkPhysicalDeviceMultiviewFeaturesKHX::initialize(const VkPhysicalDeviceMultiviewFeaturesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    multiview = in_struct->multiview;
    multiviewGeometryShader = in_struct->multiviewGeometryShader;
    multiviewTessellationShader = in_struct->multiviewTessellationShader;
}

void safe_VkPhysicalDeviceMultiviewFeaturesKHX::initialize(const safe_VkPhysicalDeviceMultiviewFeaturesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    multiview = src->multiview;
    multiviewGeometryShader = src->multiviewGeometryShader;
    multiviewTessellationShader = src->multiviewTessellationShader;
}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::safe_VkPhysicalDeviceMultiviewPropertiesKHX(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxMultiviewViewCount(in_struct->maxMultiviewViewCount),
    maxMultiviewInstanceIndex(in_struct->maxMultiviewInstanceIndex)
{
}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::safe_VkPhysicalDeviceMultiviewPropertiesKHX()
{}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::safe_VkPhysicalDeviceMultiviewPropertiesKHX(const safe_VkPhysicalDeviceMultiviewPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxMultiviewViewCount = src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = src.maxMultiviewInstanceIndex;
}

safe_VkPhysicalDeviceMultiviewPropertiesKHX& safe_VkPhysicalDeviceMultiviewPropertiesKHX::operator=(const safe_VkPhysicalDeviceMultiviewPropertiesKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    maxMultiviewViewCount = src.maxMultiviewViewCount;
    maxMultiviewInstanceIndex = src.maxMultiviewInstanceIndex;

    return *this;
}

safe_VkPhysicalDeviceMultiviewPropertiesKHX::~safe_VkPhysicalDeviceMultiviewPropertiesKHX()
{
}

void safe_VkPhysicalDeviceMultiviewPropertiesKHX::initialize(const VkPhysicalDeviceMultiviewPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxMultiviewViewCount = in_struct->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = in_struct->maxMultiviewInstanceIndex;
}

void safe_VkPhysicalDeviceMultiviewPropertiesKHX::initialize(const safe_VkPhysicalDeviceMultiviewPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxMultiviewViewCount = src->maxMultiviewViewCount;
    maxMultiviewInstanceIndex = src->maxMultiviewInstanceIndex;
}

safe_VkExternalMemoryImageCreateInfoNV::safe_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExternalMemoryImageCreateInfoNV::safe_VkExternalMemoryImageCreateInfoNV()
{}

safe_VkExternalMemoryImageCreateInfoNV::safe_VkExternalMemoryImageCreateInfoNV(const safe_VkExternalMemoryImageCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExternalMemoryImageCreateInfoNV& safe_VkExternalMemoryImageCreateInfoNV::operator=(const safe_VkExternalMemoryImageCreateInfoNV& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;

    return *this;
}

safe_VkExternalMemoryImageCreateInfoNV::~safe_VkExternalMemoryImageCreateInfoNV()
{
}

void safe_VkExternalMemoryImageCreateInfoNV::initialize(const VkExternalMemoryImageCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExternalMemoryImageCreateInfoNV::initialize(const safe_VkExternalMemoryImageCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}

safe_VkExportMemoryAllocateInfoNV::safe_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleTypes(in_struct->handleTypes)
{
}

safe_VkExportMemoryAllocateInfoNV::safe_VkExportMemoryAllocateInfoNV()
{}

safe_VkExportMemoryAllocateInfoNV::safe_VkExportMemoryAllocateInfoNV(const safe_VkExportMemoryAllocateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;
}

safe_VkExportMemoryAllocateInfoNV& safe_VkExportMemoryAllocateInfoNV::operator=(const safe_VkExportMemoryAllocateInfoNV& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleTypes = src.handleTypes;

    return *this;
}

safe_VkExportMemoryAllocateInfoNV::~safe_VkExportMemoryAllocateInfoNV()
{
}

void safe_VkExportMemoryAllocateInfoNV::initialize(const VkExportMemoryAllocateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleTypes = in_struct->handleTypes;
}

void safe_VkExportMemoryAllocateInfoNV::initialize(const safe_VkExportMemoryAllocateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleTypes = src->handleTypes;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkImportMemoryWin32HandleInfoNV::safe_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType),
    handle(in_struct->handle)
{
}

safe_VkImportMemoryWin32HandleInfoNV::safe_VkImportMemoryWin32HandleInfoNV()
{}

safe_VkImportMemoryWin32HandleInfoNV::safe_VkImportMemoryWin32HandleInfoNV(const safe_VkImportMemoryWin32HandleInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    handle = src.handle;
}

safe_VkImportMemoryWin32HandleInfoNV& safe_VkImportMemoryWin32HandleInfoNV::operator=(const safe_VkImportMemoryWin32HandleInfoNV& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    handle = src.handle;

    return *this;
}

safe_VkImportMemoryWin32HandleInfoNV::~safe_VkImportMemoryWin32HandleInfoNV()
{
}

void safe_VkImportMemoryWin32HandleInfoNV::initialize(const VkImportMemoryWin32HandleInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
    handle = in_struct->handle;
}

void safe_VkImportMemoryWin32HandleInfoNV::initialize(const safe_VkImportMemoryWin32HandleInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
    handle = src->handle;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkExportMemoryWin32HandleInfoNV::safe_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pAttributes(nullptr),
    dwAccess(in_struct->dwAccess)
{
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoNV::safe_VkExportMemoryWin32HandleInfoNV() :
    pAttributes(nullptr)
{}

safe_VkExportMemoryWin32HandleInfoNV::safe_VkExportMemoryWin32HandleInfoNV(const safe_VkExportMemoryWin32HandleInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }
}

safe_VkExportMemoryWin32HandleInfoNV& safe_VkExportMemoryWin32HandleInfoNV::operator=(const safe_VkExportMemoryWin32HandleInfoNV& src)
{
    if (&src == this) return *this;

    if (pAttributes)
        delete pAttributes;

    sType = src.sType;
    pNext = src.pNext;
    pAttributes = nullptr;
    dwAccess = src.dwAccess;
    if (src.pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src.pAttributes);
    }

    return *this;
}

safe_VkExportMemoryWin32HandleInfoNV::~safe_VkExportMemoryWin32HandleInfoNV()
{
    if (pAttributes)
        delete pAttributes;
}

void safe_VkExportMemoryWin32HandleInfoNV::initialize(const VkExportMemoryWin32HandleInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pAttributes = nullptr;
    dwAccess = in_struct->dwAccess;
    if (in_struct->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*in_struct->pAttributes);
    }
}

void safe_VkExportMemoryWin32HandleInfoNV::initialize(const safe_VkExportMemoryWin32HandleInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pAttributes = nullptr;
    dwAccess = src->dwAccess;
    if (src->pAttributes) {
        pAttributes = new SECURITY_ATTRIBUTES(*src->pAttributes);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR


safe_VkWin32KeyedMutexAcquireReleaseInfoNV::safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    acquireCount(in_struct->acquireCount),
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeoutMilliseconds(nullptr),
    releaseCount(in_struct->releaseCount),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)in_struct->pAcquireTimeoutMilliseconds, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoNV::safe_VkWin32KeyedMutexAcquireReleaseInfoNV() :
    pAcquireSyncs(nullptr),
    pAcquireKeys(nullptr),
    pAcquireTimeoutMilliseconds(nullptr),
    pReleaseSyncs(nullptr),
    pReleaseKeys(nullptr)
{}

safe_VkWin32KeyedMutexAcquireReleaseInfoNV::safe_VkWin32KeyedMutexAcquireReleaseInfoNV(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    acquireCount = src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src.pAcquireSyncs[i];
        }
    }
    if (src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[src.acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src.pAcquireKeys, sizeof(uint64_t)*src.acquireCount);
    }
    if (src.pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[src.acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)src.pAcquireTimeoutMilliseconds, sizeof(uint32_t)*src.acquireCount);
    }
    if (releaseCount && src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src.pReleaseSyncs[i];
        }
    }
    if (src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[src.releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src.pReleaseKeys, sizeof(uint64_t)*src.releaseCount);
    }
}

safe_VkWin32KeyedMutexAcquireReleaseInfoNV& safe_VkWin32KeyedMutexAcquireReleaseInfoNV::operator=(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV& src)
{
    if (&src == this) return *this;

    if (pAcquireSyncs)
        delete[] pAcquireSyncs;
    if (pAcquireKeys)
        delete[] pAcquireKeys;
    if (pAcquireTimeoutMilliseconds)
        delete[] pAcquireTimeoutMilliseconds;
    if (pReleaseSyncs)
        delete[] pReleaseSyncs;
    if (pReleaseKeys)
        delete[] pReleaseKeys;

    sType = src.sType;
    pNext = src.pNext;
    acquireCount = src.acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = src.releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src.pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src.pAcquireSyncs[i];
        }
    }
    if (src.pAcquireKeys) {
        pAcquireKeys = new uint64_t[src.acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src.pAcquireKeys, sizeof(uint64_t)*src.acquireCount);
    }
    if (src.pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[src.acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)src.pAcquireTimeoutMilliseconds, sizeof(uint32_t)*src.acquireCount);
    }
    if (releaseCount && src.pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src.pReleaseSyncs[i];
        }
    }
    if (src.pReleaseKeys) {
        pReleaseKeys = new uint64_t[src.releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src.pReleaseKeys, sizeof(uint64_t)*src.releaseCount);
    }

    return *this;
}

safe_VkWin32KeyedMutexAcquireReleaseInfoNV::~safe_VkWin32KeyedMutexAcquireReleaseInfoNV()
{
    if (pAcquireSyncs)
        delete[] pAcquireSyncs;
    if (pAcquireKeys)
        delete[] pAcquireKeys;
    if (pAcquireTimeoutMilliseconds)
        delete[] pAcquireTimeoutMilliseconds;
    if (pReleaseSyncs)
        delete[] pReleaseSyncs;
    if (pReleaseKeys)
        delete[] pReleaseKeys;
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoNV::initialize(const VkWin32KeyedMutexAcquireReleaseInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    acquireCount = in_struct->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = in_struct->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && in_struct->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = in_struct->pAcquireSyncs[i];
        }
    }
    if (in_struct->pAcquireKeys) {
        pAcquireKeys = new uint64_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)in_struct->pAcquireKeys, sizeof(uint64_t)*in_struct->acquireCount);
    }
    if (in_struct->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[in_struct->acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)in_struct->pAcquireTimeoutMilliseconds, sizeof(uint32_t)*in_struct->acquireCount);
    }
    if (releaseCount && in_struct->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = in_struct->pReleaseSyncs[i];
        }
    }
    if (in_struct->pReleaseKeys) {
        pReleaseKeys = new uint64_t[in_struct->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)in_struct->pReleaseKeys, sizeof(uint64_t)*in_struct->releaseCount);
    }
}

void safe_VkWin32KeyedMutexAcquireReleaseInfoNV::initialize(const safe_VkWin32KeyedMutexAcquireReleaseInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    acquireCount = src->acquireCount;
    pAcquireSyncs = nullptr;
    pAcquireKeys = nullptr;
    pAcquireTimeoutMilliseconds = nullptr;
    releaseCount = src->releaseCount;
    pReleaseSyncs = nullptr;
    pReleaseKeys = nullptr;
    if (acquireCount && src->pAcquireSyncs) {
        pAcquireSyncs = new VkDeviceMemory[acquireCount];
        for (uint32_t i=0; i<acquireCount; ++i) {
            pAcquireSyncs[i] = src->pAcquireSyncs[i];
        }
    }
    if (src->pAcquireKeys) {
        pAcquireKeys = new uint64_t[src->acquireCount];
        memcpy ((void *)pAcquireKeys, (void *)src->pAcquireKeys, sizeof(uint64_t)*src->acquireCount);
    }
    if (src->pAcquireTimeoutMilliseconds) {
        pAcquireTimeoutMilliseconds = new uint32_t[src->acquireCount];
        memcpy ((void *)pAcquireTimeoutMilliseconds, (void *)src->pAcquireTimeoutMilliseconds, sizeof(uint32_t)*src->acquireCount);
    }
    if (releaseCount && src->pReleaseSyncs) {
        pReleaseSyncs = new VkDeviceMemory[releaseCount];
        for (uint32_t i=0; i<releaseCount; ++i) {
            pReleaseSyncs[i] = src->pReleaseSyncs[i];
        }
    }
    if (src->pReleaseKeys) {
        pReleaseKeys = new uint64_t[src->releaseCount];
        memcpy ((void *)pReleaseKeys, (void *)src->pReleaseKeys, sizeof(uint64_t)*src->releaseCount);
    }
}
#endif // VK_USE_PLATFORM_WIN32_KHR


safe_VkMemoryAllocateFlagsInfoKHX::safe_VkMemoryAllocateFlagsInfoKHX(const VkMemoryAllocateFlagsInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    deviceMask(in_struct->deviceMask)
{
}

safe_VkMemoryAllocateFlagsInfoKHX::safe_VkMemoryAllocateFlagsInfoKHX()
{}

safe_VkMemoryAllocateFlagsInfoKHX::safe_VkMemoryAllocateFlagsInfoKHX(const safe_VkMemoryAllocateFlagsInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    deviceMask = src.deviceMask;
}

safe_VkMemoryAllocateFlagsInfoKHX& safe_VkMemoryAllocateFlagsInfoKHX::operator=(const safe_VkMemoryAllocateFlagsInfoKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    deviceMask = src.deviceMask;

    return *this;
}

safe_VkMemoryAllocateFlagsInfoKHX::~safe_VkMemoryAllocateFlagsInfoKHX()
{
}

void safe_VkMemoryAllocateFlagsInfoKHX::initialize(const VkMemoryAllocateFlagsInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    deviceMask = in_struct->deviceMask;
}

void safe_VkMemoryAllocateFlagsInfoKHX::initialize(const safe_VkMemoryAllocateFlagsInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    deviceMask = src->deviceMask;
}

safe_VkDeviceGroupRenderPassBeginInfoKHX::safe_VkDeviceGroupRenderPassBeginInfoKHX(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceMask(in_struct->deviceMask),
    deviceRenderAreaCount(in_struct->deviceRenderAreaCount),
    pDeviceRenderAreas(nullptr)
{
    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)in_struct->pDeviceRenderAreas, sizeof(VkRect2D)*in_struct->deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupRenderPassBeginInfoKHX::safe_VkDeviceGroupRenderPassBeginInfoKHX() :
    pDeviceRenderAreas(nullptr)
{}

safe_VkDeviceGroupRenderPassBeginInfoKHX::safe_VkDeviceGroupRenderPassBeginInfoKHX(const safe_VkDeviceGroupRenderPassBeginInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceMask = src.deviceMask;
    deviceRenderAreaCount = src.deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    if (src.pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[src.deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)src.pDeviceRenderAreas, sizeof(VkRect2D)*src.deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupRenderPassBeginInfoKHX& safe_VkDeviceGroupRenderPassBeginInfoKHX::operator=(const safe_VkDeviceGroupRenderPassBeginInfoKHX& src)
{
    if (&src == this) return *this;

    if (pDeviceRenderAreas)
        delete[] pDeviceRenderAreas;

    sType = src.sType;
    pNext = src.pNext;
    deviceMask = src.deviceMask;
    deviceRenderAreaCount = src.deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    if (src.pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[src.deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)src.pDeviceRenderAreas, sizeof(VkRect2D)*src.deviceRenderAreaCount);
    }

    return *this;
}

safe_VkDeviceGroupRenderPassBeginInfoKHX::~safe_VkDeviceGroupRenderPassBeginInfoKHX()
{
    if (pDeviceRenderAreas)
        delete[] pDeviceRenderAreas;
}

void safe_VkDeviceGroupRenderPassBeginInfoKHX::initialize(const VkDeviceGroupRenderPassBeginInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceMask = in_struct->deviceMask;
    deviceRenderAreaCount = in_struct->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    if (in_struct->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[in_struct->deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)in_struct->pDeviceRenderAreas, sizeof(VkRect2D)*in_struct->deviceRenderAreaCount);
    }
}

void safe_VkDeviceGroupRenderPassBeginInfoKHX::initialize(const safe_VkDeviceGroupRenderPassBeginInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceMask = src->deviceMask;
    deviceRenderAreaCount = src->deviceRenderAreaCount;
    pDeviceRenderAreas = nullptr;
    if (src->pDeviceRenderAreas) {
        pDeviceRenderAreas = new VkRect2D[src->deviceRenderAreaCount];
        memcpy ((void *)pDeviceRenderAreas, (void *)src->pDeviceRenderAreas, sizeof(VkRect2D)*src->deviceRenderAreaCount);
    }
}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::safe_VkDeviceGroupCommandBufferBeginInfoKHX(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceMask(in_struct->deviceMask)
{
}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::safe_VkDeviceGroupCommandBufferBeginInfoKHX()
{}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::safe_VkDeviceGroupCommandBufferBeginInfoKHX(const safe_VkDeviceGroupCommandBufferBeginInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceMask = src.deviceMask;
}

safe_VkDeviceGroupCommandBufferBeginInfoKHX& safe_VkDeviceGroupCommandBufferBeginInfoKHX::operator=(const safe_VkDeviceGroupCommandBufferBeginInfoKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    deviceMask = src.deviceMask;

    return *this;
}

safe_VkDeviceGroupCommandBufferBeginInfoKHX::~safe_VkDeviceGroupCommandBufferBeginInfoKHX()
{
}

void safe_VkDeviceGroupCommandBufferBeginInfoKHX::initialize(const VkDeviceGroupCommandBufferBeginInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceMask = in_struct->deviceMask;
}

void safe_VkDeviceGroupCommandBufferBeginInfoKHX::initialize(const safe_VkDeviceGroupCommandBufferBeginInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceMask = src->deviceMask;
}

safe_VkDeviceGroupSubmitInfoKHX::safe_VkDeviceGroupSubmitInfoKHX(const VkDeviceGroupSubmitInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    waitSemaphoreCount(in_struct->waitSemaphoreCount),
    pWaitSemaphoreDeviceIndices(nullptr),
    commandBufferCount(in_struct->commandBufferCount),
    pCommandBufferDeviceMasks(nullptr),
    signalSemaphoreCount(in_struct->signalSemaphoreCount),
    pSignalSemaphoreDeviceIndices(nullptr)
{
    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)in_struct->pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)in_struct->pCommandBufferDeviceMasks, sizeof(uint32_t)*in_struct->commandBufferCount);
    }
    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)in_struct->pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->signalSemaphoreCount);
    }
}

safe_VkDeviceGroupSubmitInfoKHX::safe_VkDeviceGroupSubmitInfoKHX() :
    pWaitSemaphoreDeviceIndices(nullptr),
    pCommandBufferDeviceMasks(nullptr),
    pSignalSemaphoreDeviceIndices(nullptr)
{}

safe_VkDeviceGroupSubmitInfoKHX::safe_VkDeviceGroupSubmitInfoKHX(const safe_VkDeviceGroupSubmitInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = src.commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    if (src.pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[src.waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)src.pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*src.waitSemaphoreCount);
    }
    if (src.pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[src.commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)src.pCommandBufferDeviceMasks, sizeof(uint32_t)*src.commandBufferCount);
    }
    if (src.pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[src.signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)src.pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*src.signalSemaphoreCount);
    }
}

safe_VkDeviceGroupSubmitInfoKHX& safe_VkDeviceGroupSubmitInfoKHX::operator=(const safe_VkDeviceGroupSubmitInfoKHX& src)
{
    if (&src == this) return *this;

    if (pWaitSemaphoreDeviceIndices)
        delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks)
        delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices)
        delete[] pSignalSemaphoreDeviceIndices;

    sType = src.sType;
    pNext = src.pNext;
    waitSemaphoreCount = src.waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = src.commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = src.signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    if (src.pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[src.waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)src.pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*src.waitSemaphoreCount);
    }
    if (src.pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[src.commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)src.pCommandBufferDeviceMasks, sizeof(uint32_t)*src.commandBufferCount);
    }
    if (src.pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[src.signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)src.pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*src.signalSemaphoreCount);
    }

    return *this;
}

safe_VkDeviceGroupSubmitInfoKHX::~safe_VkDeviceGroupSubmitInfoKHX()
{
    if (pWaitSemaphoreDeviceIndices)
        delete[] pWaitSemaphoreDeviceIndices;
    if (pCommandBufferDeviceMasks)
        delete[] pCommandBufferDeviceMasks;
    if (pSignalSemaphoreDeviceIndices)
        delete[] pSignalSemaphoreDeviceIndices;
}

void safe_VkDeviceGroupSubmitInfoKHX::initialize(const VkDeviceGroupSubmitInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    waitSemaphoreCount = in_struct->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = in_struct->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = in_struct->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    if (in_struct->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[in_struct->waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)in_struct->pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->waitSemaphoreCount);
    }
    if (in_struct->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[in_struct->commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)in_struct->pCommandBufferDeviceMasks, sizeof(uint32_t)*in_struct->commandBufferCount);
    }
    if (in_struct->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[in_struct->signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)in_struct->pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*in_struct->signalSemaphoreCount);
    }
}

void safe_VkDeviceGroupSubmitInfoKHX::initialize(const safe_VkDeviceGroupSubmitInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    waitSemaphoreCount = src->waitSemaphoreCount;
    pWaitSemaphoreDeviceIndices = nullptr;
    commandBufferCount = src->commandBufferCount;
    pCommandBufferDeviceMasks = nullptr;
    signalSemaphoreCount = src->signalSemaphoreCount;
    pSignalSemaphoreDeviceIndices = nullptr;
    if (src->pWaitSemaphoreDeviceIndices) {
        pWaitSemaphoreDeviceIndices = new uint32_t[src->waitSemaphoreCount];
        memcpy ((void *)pWaitSemaphoreDeviceIndices, (void *)src->pWaitSemaphoreDeviceIndices, sizeof(uint32_t)*src->waitSemaphoreCount);
    }
    if (src->pCommandBufferDeviceMasks) {
        pCommandBufferDeviceMasks = new uint32_t[src->commandBufferCount];
        memcpy ((void *)pCommandBufferDeviceMasks, (void *)src->pCommandBufferDeviceMasks, sizeof(uint32_t)*src->commandBufferCount);
    }
    if (src->pSignalSemaphoreDeviceIndices) {
        pSignalSemaphoreDeviceIndices = new uint32_t[src->signalSemaphoreCount];
        memcpy ((void *)pSignalSemaphoreDeviceIndices, (void *)src->pSignalSemaphoreDeviceIndices, sizeof(uint32_t)*src->signalSemaphoreCount);
    }
}

safe_VkDeviceGroupBindSparseInfoKHX::safe_VkDeviceGroupBindSparseInfoKHX(const VkDeviceGroupBindSparseInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    resourceDeviceIndex(in_struct->resourceDeviceIndex),
    memoryDeviceIndex(in_struct->memoryDeviceIndex)
{
}

safe_VkDeviceGroupBindSparseInfoKHX::safe_VkDeviceGroupBindSparseInfoKHX()
{}

safe_VkDeviceGroupBindSparseInfoKHX::safe_VkDeviceGroupBindSparseInfoKHX(const safe_VkDeviceGroupBindSparseInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    resourceDeviceIndex = src.resourceDeviceIndex;
    memoryDeviceIndex = src.memoryDeviceIndex;
}

safe_VkDeviceGroupBindSparseInfoKHX& safe_VkDeviceGroupBindSparseInfoKHX::operator=(const safe_VkDeviceGroupBindSparseInfoKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    resourceDeviceIndex = src.resourceDeviceIndex;
    memoryDeviceIndex = src.memoryDeviceIndex;

    return *this;
}

safe_VkDeviceGroupBindSparseInfoKHX::~safe_VkDeviceGroupBindSparseInfoKHX()
{
}

void safe_VkDeviceGroupBindSparseInfoKHX::initialize(const VkDeviceGroupBindSparseInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    resourceDeviceIndex = in_struct->resourceDeviceIndex;
    memoryDeviceIndex = in_struct->memoryDeviceIndex;
}

void safe_VkDeviceGroupBindSparseInfoKHX::initialize(const safe_VkDeviceGroupBindSparseInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    resourceDeviceIndex = src->resourceDeviceIndex;
    memoryDeviceIndex = src->memoryDeviceIndex;
}

safe_VkBindBufferMemoryDeviceGroupInfoKHX::safe_VkBindBufferMemoryDeviceGroupInfoKHX(const VkBindBufferMemoryDeviceGroupInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceIndexCount(in_struct->deviceIndexCount),
    pDeviceIndices(nullptr)
{
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
}

safe_VkBindBufferMemoryDeviceGroupInfoKHX::safe_VkBindBufferMemoryDeviceGroupInfoKHX() :
    pDeviceIndices(nullptr)
{}

safe_VkBindBufferMemoryDeviceGroupInfoKHX::safe_VkBindBufferMemoryDeviceGroupInfoKHX(const safe_VkBindBufferMemoryDeviceGroupInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceIndexCount = src.deviceIndexCount;
    pDeviceIndices = nullptr;
    if (src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[src.deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src.pDeviceIndices, sizeof(uint32_t)*src.deviceIndexCount);
    }
}

safe_VkBindBufferMemoryDeviceGroupInfoKHX& safe_VkBindBufferMemoryDeviceGroupInfoKHX::operator=(const safe_VkBindBufferMemoryDeviceGroupInfoKHX& src)
{
    if (&src == this) return *this;

    if (pDeviceIndices)
        delete[] pDeviceIndices;

    sType = src.sType;
    pNext = src.pNext;
    deviceIndexCount = src.deviceIndexCount;
    pDeviceIndices = nullptr;
    if (src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[src.deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src.pDeviceIndices, sizeof(uint32_t)*src.deviceIndexCount);
    }

    return *this;
}

safe_VkBindBufferMemoryDeviceGroupInfoKHX::~safe_VkBindBufferMemoryDeviceGroupInfoKHX()
{
    if (pDeviceIndices)
        delete[] pDeviceIndices;
}

void safe_VkBindBufferMemoryDeviceGroupInfoKHX::initialize(const VkBindBufferMemoryDeviceGroupInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
}

void safe_VkBindBufferMemoryDeviceGroupInfoKHX::initialize(const safe_VkBindBufferMemoryDeviceGroupInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceIndexCount = src->deviceIndexCount;
    pDeviceIndices = nullptr;
    if (src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[src->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src->pDeviceIndices, sizeof(uint32_t)*src->deviceIndexCount);
    }
}

safe_VkBindImageMemoryDeviceGroupInfoKHX::safe_VkBindImageMemoryDeviceGroupInfoKHX(const VkBindImageMemoryDeviceGroupInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceIndexCount(in_struct->deviceIndexCount),
    pDeviceIndices(nullptr),
    SFRRectCount(in_struct->SFRRectCount),
    pSFRRects(nullptr)
{
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
    if (in_struct->pSFRRects) {
        pSFRRects = new VkRect2D[in_struct->SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)in_struct->pSFRRects, sizeof(VkRect2D)*in_struct->SFRRectCount);
    }
}

safe_VkBindImageMemoryDeviceGroupInfoKHX::safe_VkBindImageMemoryDeviceGroupInfoKHX() :
    pDeviceIndices(nullptr),
    pSFRRects(nullptr)
{}

safe_VkBindImageMemoryDeviceGroupInfoKHX::safe_VkBindImageMemoryDeviceGroupInfoKHX(const safe_VkBindImageMemoryDeviceGroupInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceIndexCount = src.deviceIndexCount;
    pDeviceIndices = nullptr;
    SFRRectCount = src.SFRRectCount;
    pSFRRects = nullptr;
    if (src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[src.deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src.pDeviceIndices, sizeof(uint32_t)*src.deviceIndexCount);
    }
    if (src.pSFRRects) {
        pSFRRects = new VkRect2D[src.SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)src.pSFRRects, sizeof(VkRect2D)*src.SFRRectCount);
    }
}

safe_VkBindImageMemoryDeviceGroupInfoKHX& safe_VkBindImageMemoryDeviceGroupInfoKHX::operator=(const safe_VkBindImageMemoryDeviceGroupInfoKHX& src)
{
    if (&src == this) return *this;

    if (pDeviceIndices)
        delete[] pDeviceIndices;
    if (pSFRRects)
        delete[] pSFRRects;

    sType = src.sType;
    pNext = src.pNext;
    deviceIndexCount = src.deviceIndexCount;
    pDeviceIndices = nullptr;
    SFRRectCount = src.SFRRectCount;
    pSFRRects = nullptr;
    if (src.pDeviceIndices) {
        pDeviceIndices = new uint32_t[src.deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src.pDeviceIndices, sizeof(uint32_t)*src.deviceIndexCount);
    }
    if (src.pSFRRects) {
        pSFRRects = new VkRect2D[src.SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)src.pSFRRects, sizeof(VkRect2D)*src.SFRRectCount);
    }

    return *this;
}

safe_VkBindImageMemoryDeviceGroupInfoKHX::~safe_VkBindImageMemoryDeviceGroupInfoKHX()
{
    if (pDeviceIndices)
        delete[] pDeviceIndices;
    if (pSFRRects)
        delete[] pSFRRects;
}

void safe_VkBindImageMemoryDeviceGroupInfoKHX::initialize(const VkBindImageMemoryDeviceGroupInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceIndexCount = in_struct->deviceIndexCount;
    pDeviceIndices = nullptr;
    SFRRectCount = in_struct->SFRRectCount;
    pSFRRects = nullptr;
    if (in_struct->pDeviceIndices) {
        pDeviceIndices = new uint32_t[in_struct->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)in_struct->pDeviceIndices, sizeof(uint32_t)*in_struct->deviceIndexCount);
    }
    if (in_struct->pSFRRects) {
        pSFRRects = new VkRect2D[in_struct->SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)in_struct->pSFRRects, sizeof(VkRect2D)*in_struct->SFRRectCount);
    }
}

void safe_VkBindImageMemoryDeviceGroupInfoKHX::initialize(const safe_VkBindImageMemoryDeviceGroupInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceIndexCount = src->deviceIndexCount;
    pDeviceIndices = nullptr;
    SFRRectCount = src->SFRRectCount;
    pSFRRects = nullptr;
    if (src->pDeviceIndices) {
        pDeviceIndices = new uint32_t[src->deviceIndexCount];
        memcpy ((void *)pDeviceIndices, (void *)src->pDeviceIndices, sizeof(uint32_t)*src->deviceIndexCount);
    }
    if (src->pSFRRects) {
        pSFRRects = new VkRect2D[src->SFRRectCount];
        memcpy ((void *)pSFRRects, (void *)src->pSFRRects, sizeof(VkRect2D)*src->SFRRectCount);
    }
}

safe_VkDeviceGroupPresentCapabilitiesKHX::safe_VkDeviceGroupPresentCapabilitiesKHX(const VkDeviceGroupPresentCapabilitiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    modes(in_struct->modes)
{
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = in_struct->presentMask[i];
    }
}

safe_VkDeviceGroupPresentCapabilitiesKHX::safe_VkDeviceGroupPresentCapabilitiesKHX()
{}

safe_VkDeviceGroupPresentCapabilitiesKHX::safe_VkDeviceGroupPresentCapabilitiesKHX(const safe_VkDeviceGroupPresentCapabilitiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    modes = src.modes;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = src.presentMask[i];
    }
}

safe_VkDeviceGroupPresentCapabilitiesKHX& safe_VkDeviceGroupPresentCapabilitiesKHX::operator=(const safe_VkDeviceGroupPresentCapabilitiesKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    modes = src.modes;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = src.presentMask[i];
    }

    return *this;
}

safe_VkDeviceGroupPresentCapabilitiesKHX::~safe_VkDeviceGroupPresentCapabilitiesKHX()
{
}

void safe_VkDeviceGroupPresentCapabilitiesKHX::initialize(const VkDeviceGroupPresentCapabilitiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    modes = in_struct->modes;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = in_struct->presentMask[i];
    }
}

void safe_VkDeviceGroupPresentCapabilitiesKHX::initialize(const safe_VkDeviceGroupPresentCapabilitiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    modes = src->modes;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        presentMask[i] = src->presentMask[i];
    }
}

safe_VkImageSwapchainCreateInfoKHX::safe_VkImageSwapchainCreateInfoKHX(const VkImageSwapchainCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchain(in_struct->swapchain)
{
}

safe_VkImageSwapchainCreateInfoKHX::safe_VkImageSwapchainCreateInfoKHX()
{}

safe_VkImageSwapchainCreateInfoKHX::safe_VkImageSwapchainCreateInfoKHX(const safe_VkImageSwapchainCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
}

safe_VkImageSwapchainCreateInfoKHX& safe_VkImageSwapchainCreateInfoKHX::operator=(const safe_VkImageSwapchainCreateInfoKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;

    return *this;
}

safe_VkImageSwapchainCreateInfoKHX::~safe_VkImageSwapchainCreateInfoKHX()
{
}

void safe_VkImageSwapchainCreateInfoKHX::initialize(const VkImageSwapchainCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchain = in_struct->swapchain;
}

void safe_VkImageSwapchainCreateInfoKHX::initialize(const safe_VkImageSwapchainCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchain = src->swapchain;
}

safe_VkBindImageMemorySwapchainInfoKHX::safe_VkBindImageMemorySwapchainInfoKHX(const VkBindImageMemorySwapchainInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchain(in_struct->swapchain),
    imageIndex(in_struct->imageIndex)
{
}

safe_VkBindImageMemorySwapchainInfoKHX::safe_VkBindImageMemorySwapchainInfoKHX()
{}

safe_VkBindImageMemorySwapchainInfoKHX::safe_VkBindImageMemorySwapchainInfoKHX(const safe_VkBindImageMemorySwapchainInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
    imageIndex = src.imageIndex;
}

safe_VkBindImageMemorySwapchainInfoKHX& safe_VkBindImageMemorySwapchainInfoKHX::operator=(const safe_VkBindImageMemorySwapchainInfoKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
    imageIndex = src.imageIndex;

    return *this;
}

safe_VkBindImageMemorySwapchainInfoKHX::~safe_VkBindImageMemorySwapchainInfoKHX()
{
}

void safe_VkBindImageMemorySwapchainInfoKHX::initialize(const VkBindImageMemorySwapchainInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchain = in_struct->swapchain;
    imageIndex = in_struct->imageIndex;
}

void safe_VkBindImageMemorySwapchainInfoKHX::initialize(const safe_VkBindImageMemorySwapchainInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchain = src->swapchain;
    imageIndex = src->imageIndex;
}

safe_VkAcquireNextImageInfoKHX::safe_VkAcquireNextImageInfoKHX(const VkAcquireNextImageInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchain(in_struct->swapchain),
    timeout(in_struct->timeout),
    semaphore(in_struct->semaphore),
    fence(in_struct->fence),
    deviceMask(in_struct->deviceMask)
{
}

safe_VkAcquireNextImageInfoKHX::safe_VkAcquireNextImageInfoKHX()
{}

safe_VkAcquireNextImageInfoKHX::safe_VkAcquireNextImageInfoKHX(const safe_VkAcquireNextImageInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
    timeout = src.timeout;
    semaphore = src.semaphore;
    fence = src.fence;
    deviceMask = src.deviceMask;
}

safe_VkAcquireNextImageInfoKHX& safe_VkAcquireNextImageInfoKHX::operator=(const safe_VkAcquireNextImageInfoKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    swapchain = src.swapchain;
    timeout = src.timeout;
    semaphore = src.semaphore;
    fence = src.fence;
    deviceMask = src.deviceMask;

    return *this;
}

safe_VkAcquireNextImageInfoKHX::~safe_VkAcquireNextImageInfoKHX()
{
}

void safe_VkAcquireNextImageInfoKHX::initialize(const VkAcquireNextImageInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchain = in_struct->swapchain;
    timeout = in_struct->timeout;
    semaphore = in_struct->semaphore;
    fence = in_struct->fence;
    deviceMask = in_struct->deviceMask;
}

void safe_VkAcquireNextImageInfoKHX::initialize(const safe_VkAcquireNextImageInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchain = src->swapchain;
    timeout = src->timeout;
    semaphore = src->semaphore;
    fence = src->fence;
    deviceMask = src->deviceMask;
}

safe_VkDeviceGroupPresentInfoKHX::safe_VkDeviceGroupPresentInfoKHX(const VkDeviceGroupPresentInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchainCount(in_struct->swapchainCount),
    pDeviceMasks(nullptr),
    mode(in_struct->mode)
{
    if (in_struct->pDeviceMasks) {
        pDeviceMasks = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)in_struct->pDeviceMasks, sizeof(uint32_t)*in_struct->swapchainCount);
    }
}

safe_VkDeviceGroupPresentInfoKHX::safe_VkDeviceGroupPresentInfoKHX() :
    pDeviceMasks(nullptr)
{}

safe_VkDeviceGroupPresentInfoKHX::safe_VkDeviceGroupPresentInfoKHX(const safe_VkDeviceGroupPresentInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchainCount = src.swapchainCount;
    pDeviceMasks = nullptr;
    mode = src.mode;
    if (src.pDeviceMasks) {
        pDeviceMasks = new uint32_t[src.swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)src.pDeviceMasks, sizeof(uint32_t)*src.swapchainCount);
    }
}

safe_VkDeviceGroupPresentInfoKHX& safe_VkDeviceGroupPresentInfoKHX::operator=(const safe_VkDeviceGroupPresentInfoKHX& src)
{
    if (&src == this) return *this;

    if (pDeviceMasks)
        delete[] pDeviceMasks;

    sType = src.sType;
    pNext = src.pNext;
    swapchainCount = src.swapchainCount;
    pDeviceMasks = nullptr;
    mode = src.mode;
    if (src.pDeviceMasks) {
        pDeviceMasks = new uint32_t[src.swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)src.pDeviceMasks, sizeof(uint32_t)*src.swapchainCount);
    }

    return *this;
}

safe_VkDeviceGroupPresentInfoKHX::~safe_VkDeviceGroupPresentInfoKHX()
{
    if (pDeviceMasks)
        delete[] pDeviceMasks;
}

void safe_VkDeviceGroupPresentInfoKHX::initialize(const VkDeviceGroupPresentInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchainCount = in_struct->swapchainCount;
    pDeviceMasks = nullptr;
    mode = in_struct->mode;
    if (in_struct->pDeviceMasks) {
        pDeviceMasks = new uint32_t[in_struct->swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)in_struct->pDeviceMasks, sizeof(uint32_t)*in_struct->swapchainCount);
    }
}

void safe_VkDeviceGroupPresentInfoKHX::initialize(const safe_VkDeviceGroupPresentInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchainCount = src->swapchainCount;
    pDeviceMasks = nullptr;
    mode = src->mode;
    if (src->pDeviceMasks) {
        pDeviceMasks = new uint32_t[src->swapchainCount];
        memcpy ((void *)pDeviceMasks, (void *)src->pDeviceMasks, sizeof(uint32_t)*src->swapchainCount);
    }
}

safe_VkDeviceGroupSwapchainCreateInfoKHX::safe_VkDeviceGroupSwapchainCreateInfoKHX(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    modes(in_struct->modes)
{
}

safe_VkDeviceGroupSwapchainCreateInfoKHX::safe_VkDeviceGroupSwapchainCreateInfoKHX()
{}

safe_VkDeviceGroupSwapchainCreateInfoKHX::safe_VkDeviceGroupSwapchainCreateInfoKHX(const safe_VkDeviceGroupSwapchainCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    modes = src.modes;
}

safe_VkDeviceGroupSwapchainCreateInfoKHX& safe_VkDeviceGroupSwapchainCreateInfoKHX::operator=(const safe_VkDeviceGroupSwapchainCreateInfoKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    modes = src.modes;

    return *this;
}

safe_VkDeviceGroupSwapchainCreateInfoKHX::~safe_VkDeviceGroupSwapchainCreateInfoKHX()
{
}

void safe_VkDeviceGroupSwapchainCreateInfoKHX::initialize(const VkDeviceGroupSwapchainCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    modes = in_struct->modes;
}

void safe_VkDeviceGroupSwapchainCreateInfoKHX::initialize(const safe_VkDeviceGroupSwapchainCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    modes = src->modes;
}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT(const VkValidationFlagsEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    disabledValidationCheckCount(in_struct->disabledValidationCheckCount),
    pDisabledValidationChecks(nullptr)
{
    if (in_struct->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[in_struct->disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)in_struct->pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*in_struct->disabledValidationCheckCount);
    }
}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT() :
    pDisabledValidationChecks(nullptr)
{}

safe_VkValidationFlagsEXT::safe_VkValidationFlagsEXT(const safe_VkValidationFlagsEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    disabledValidationCheckCount = src.disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    if (src.pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[src.disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)src.pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*src.disabledValidationCheckCount);
    }
}

safe_VkValidationFlagsEXT& safe_VkValidationFlagsEXT::operator=(const safe_VkValidationFlagsEXT& src)
{
    if (&src == this) return *this;

    if (pDisabledValidationChecks)
        delete[] pDisabledValidationChecks;

    sType = src.sType;
    pNext = src.pNext;
    disabledValidationCheckCount = src.disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    if (src.pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[src.disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)src.pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*src.disabledValidationCheckCount);
    }

    return *this;
}

safe_VkValidationFlagsEXT::~safe_VkValidationFlagsEXT()
{
    if (pDisabledValidationChecks)
        delete[] pDisabledValidationChecks;
}

void safe_VkValidationFlagsEXT::initialize(const VkValidationFlagsEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    disabledValidationCheckCount = in_struct->disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    if (in_struct->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[in_struct->disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)in_struct->pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*in_struct->disabledValidationCheckCount);
    }
}

void safe_VkValidationFlagsEXT::initialize(const safe_VkValidationFlagsEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    disabledValidationCheckCount = src->disabledValidationCheckCount;
    pDisabledValidationChecks = nullptr;
    if (src->pDisabledValidationChecks) {
        pDisabledValidationChecks = new VkValidationCheckEXT[src->disabledValidationCheckCount];
        memcpy ((void *)pDisabledValidationChecks, (void *)src->pDisabledValidationChecks, sizeof(VkValidationCheckEXT)*src->disabledValidationCheckCount);
    }
}
#ifdef VK_USE_PLATFORM_VI_NN


safe_VkViSurfaceCreateInfoNN::safe_VkViSurfaceCreateInfoNN(const VkViSurfaceCreateInfoNN* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    window(in_struct->window)
{
}

safe_VkViSurfaceCreateInfoNN::safe_VkViSurfaceCreateInfoNN()
{}

safe_VkViSurfaceCreateInfoNN::safe_VkViSurfaceCreateInfoNN(const safe_VkViSurfaceCreateInfoNN& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    window = src.window;
}

safe_VkViSurfaceCreateInfoNN& safe_VkViSurfaceCreateInfoNN::operator=(const safe_VkViSurfaceCreateInfoNN& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    window = src.window;

    return *this;
}

safe_VkViSurfaceCreateInfoNN::~safe_VkViSurfaceCreateInfoNN()
{
}

void safe_VkViSurfaceCreateInfoNN::initialize(const VkViSurfaceCreateInfoNN* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    window = in_struct->window;
}

void safe_VkViSurfaceCreateInfoNN::initialize(const safe_VkViSurfaceCreateInfoNN* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    window = src->window;
}
#endif // VK_USE_PLATFORM_VI_NN


safe_VkPhysicalDeviceGroupPropertiesKHX::safe_VkPhysicalDeviceGroupPropertiesKHX(const VkPhysicalDeviceGroupPropertiesKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    physicalDeviceCount(in_struct->physicalDeviceCount),
    subsetAllocation(in_struct->subsetAllocation)
{
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

safe_VkPhysicalDeviceGroupPropertiesKHX::safe_VkPhysicalDeviceGroupPropertiesKHX()
{}

safe_VkPhysicalDeviceGroupPropertiesKHX::safe_VkPhysicalDeviceGroupPropertiesKHX(const safe_VkPhysicalDeviceGroupPropertiesKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    physicalDeviceCount = src.physicalDeviceCount;
    subsetAllocation = src.subsetAllocation;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = src.physicalDevices[i];
    }
}

safe_VkPhysicalDeviceGroupPropertiesKHX& safe_VkPhysicalDeviceGroupPropertiesKHX::operator=(const safe_VkPhysicalDeviceGroupPropertiesKHX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    physicalDeviceCount = src.physicalDeviceCount;
    subsetAllocation = src.subsetAllocation;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = src.physicalDevices[i];
    }

    return *this;
}

safe_VkPhysicalDeviceGroupPropertiesKHX::~safe_VkPhysicalDeviceGroupPropertiesKHX()
{
}

void safe_VkPhysicalDeviceGroupPropertiesKHX::initialize(const VkPhysicalDeviceGroupPropertiesKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    subsetAllocation = in_struct->subsetAllocation;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = in_struct->physicalDevices[i];
    }
}

void safe_VkPhysicalDeviceGroupPropertiesKHX::initialize(const safe_VkPhysicalDeviceGroupPropertiesKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    physicalDeviceCount = src->physicalDeviceCount;
    subsetAllocation = src->subsetAllocation;
    for (uint32_t i=0; i<VK_MAX_DEVICE_GROUP_SIZE_KHX; ++i) {
        physicalDevices[i] = src->physicalDevices[i];
    }
}

safe_VkDeviceGroupDeviceCreateInfoKHX::safe_VkDeviceGroupDeviceCreateInfoKHX(const VkDeviceGroupDeviceCreateInfoKHX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    physicalDeviceCount(in_struct->physicalDeviceCount),
    pPhysicalDevices(nullptr)
{
    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)in_struct->pPhysicalDevices, sizeof(VkPhysicalDevice)*in_struct->physicalDeviceCount);
    }
}

safe_VkDeviceGroupDeviceCreateInfoKHX::safe_VkDeviceGroupDeviceCreateInfoKHX() :
    pPhysicalDevices(nullptr)
{}

safe_VkDeviceGroupDeviceCreateInfoKHX::safe_VkDeviceGroupDeviceCreateInfoKHX(const safe_VkDeviceGroupDeviceCreateInfoKHX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    physicalDeviceCount = src.physicalDeviceCount;
    pPhysicalDevices = nullptr;
    if (src.pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[src.physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)src.pPhysicalDevices, sizeof(VkPhysicalDevice)*src.physicalDeviceCount);
    }
}

safe_VkDeviceGroupDeviceCreateInfoKHX& safe_VkDeviceGroupDeviceCreateInfoKHX::operator=(const safe_VkDeviceGroupDeviceCreateInfoKHX& src)
{
    if (&src == this) return *this;

    if (pPhysicalDevices)
        delete[] pPhysicalDevices;

    sType = src.sType;
    pNext = src.pNext;
    physicalDeviceCount = src.physicalDeviceCount;
    pPhysicalDevices = nullptr;
    if (src.pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[src.physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)src.pPhysicalDevices, sizeof(VkPhysicalDevice)*src.physicalDeviceCount);
    }

    return *this;
}

safe_VkDeviceGroupDeviceCreateInfoKHX::~safe_VkDeviceGroupDeviceCreateInfoKHX()
{
    if (pPhysicalDevices)
        delete[] pPhysicalDevices;
}

void safe_VkDeviceGroupDeviceCreateInfoKHX::initialize(const VkDeviceGroupDeviceCreateInfoKHX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    physicalDeviceCount = in_struct->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    if (in_struct->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[in_struct->physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)in_struct->pPhysicalDevices, sizeof(VkPhysicalDevice)*in_struct->physicalDeviceCount);
    }
}

void safe_VkDeviceGroupDeviceCreateInfoKHX::initialize(const safe_VkDeviceGroupDeviceCreateInfoKHX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    physicalDeviceCount = src->physicalDeviceCount;
    pPhysicalDevices = nullptr;
    if (src->pPhysicalDevices) {
        pPhysicalDevices = new VkPhysicalDevice[src->physicalDeviceCount];
        memcpy ((void *)pPhysicalDevices, (void *)src->pPhysicalDevices, sizeof(VkPhysicalDevice)*src->physicalDeviceCount);
    }
}

safe_VkDeviceGeneratedCommandsFeaturesNVX::safe_VkDeviceGeneratedCommandsFeaturesNVX(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    computeBindingPointSupport(in_struct->computeBindingPointSupport)
{
}

safe_VkDeviceGeneratedCommandsFeaturesNVX::safe_VkDeviceGeneratedCommandsFeaturesNVX()
{}

safe_VkDeviceGeneratedCommandsFeaturesNVX::safe_VkDeviceGeneratedCommandsFeaturesNVX(const safe_VkDeviceGeneratedCommandsFeaturesNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    computeBindingPointSupport = src.computeBindingPointSupport;
}

safe_VkDeviceGeneratedCommandsFeaturesNVX& safe_VkDeviceGeneratedCommandsFeaturesNVX::operator=(const safe_VkDeviceGeneratedCommandsFeaturesNVX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    computeBindingPointSupport = src.computeBindingPointSupport;

    return *this;
}

safe_VkDeviceGeneratedCommandsFeaturesNVX::~safe_VkDeviceGeneratedCommandsFeaturesNVX()
{
}

void safe_VkDeviceGeneratedCommandsFeaturesNVX::initialize(const VkDeviceGeneratedCommandsFeaturesNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    computeBindingPointSupport = in_struct->computeBindingPointSupport;
}

void safe_VkDeviceGeneratedCommandsFeaturesNVX::initialize(const safe_VkDeviceGeneratedCommandsFeaturesNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    computeBindingPointSupport = src->computeBindingPointSupport;
}

safe_VkDeviceGeneratedCommandsLimitsNVX::safe_VkDeviceGeneratedCommandsLimitsNVX(const VkDeviceGeneratedCommandsLimitsNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxIndirectCommandsLayoutTokenCount(in_struct->maxIndirectCommandsLayoutTokenCount),
    maxObjectEntryCounts(in_struct->maxObjectEntryCounts),
    minSequenceCountBufferOffsetAlignment(in_struct->minSequenceCountBufferOffsetAlignment),
    minSequenceIndexBufferOffsetAlignment(in_struct->minSequenceIndexBufferOffsetAlignment),
    minCommandsTokenBufferOffsetAlignment(in_struct->minCommandsTokenBufferOffsetAlignment)
{
}

safe_VkDeviceGeneratedCommandsLimitsNVX::safe_VkDeviceGeneratedCommandsLimitsNVX()
{}

safe_VkDeviceGeneratedCommandsLimitsNVX::safe_VkDeviceGeneratedCommandsLimitsNVX(const safe_VkDeviceGeneratedCommandsLimitsNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxIndirectCommandsLayoutTokenCount = src.maxIndirectCommandsLayoutTokenCount;
    maxObjectEntryCounts = src.maxObjectEntryCounts;
    minSequenceCountBufferOffsetAlignment = src.minSequenceCountBufferOffsetAlignment;
    minSequenceIndexBufferOffsetAlignment = src.minSequenceIndexBufferOffsetAlignment;
    minCommandsTokenBufferOffsetAlignment = src.minCommandsTokenBufferOffsetAlignment;
}

safe_VkDeviceGeneratedCommandsLimitsNVX& safe_VkDeviceGeneratedCommandsLimitsNVX::operator=(const safe_VkDeviceGeneratedCommandsLimitsNVX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    maxIndirectCommandsLayoutTokenCount = src.maxIndirectCommandsLayoutTokenCount;
    maxObjectEntryCounts = src.maxObjectEntryCounts;
    minSequenceCountBufferOffsetAlignment = src.minSequenceCountBufferOffsetAlignment;
    minSequenceIndexBufferOffsetAlignment = src.minSequenceIndexBufferOffsetAlignment;
    minCommandsTokenBufferOffsetAlignment = src.minCommandsTokenBufferOffsetAlignment;

    return *this;
}

safe_VkDeviceGeneratedCommandsLimitsNVX::~safe_VkDeviceGeneratedCommandsLimitsNVX()
{
}

void safe_VkDeviceGeneratedCommandsLimitsNVX::initialize(const VkDeviceGeneratedCommandsLimitsNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxIndirectCommandsLayoutTokenCount = in_struct->maxIndirectCommandsLayoutTokenCount;
    maxObjectEntryCounts = in_struct->maxObjectEntryCounts;
    minSequenceCountBufferOffsetAlignment = in_struct->minSequenceCountBufferOffsetAlignment;
    minSequenceIndexBufferOffsetAlignment = in_struct->minSequenceIndexBufferOffsetAlignment;
    minCommandsTokenBufferOffsetAlignment = in_struct->minCommandsTokenBufferOffsetAlignment;
}

void safe_VkDeviceGeneratedCommandsLimitsNVX::initialize(const safe_VkDeviceGeneratedCommandsLimitsNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxIndirectCommandsLayoutTokenCount = src->maxIndirectCommandsLayoutTokenCount;
    maxObjectEntryCounts = src->maxObjectEntryCounts;
    minSequenceCountBufferOffsetAlignment = src->minSequenceCountBufferOffsetAlignment;
    minSequenceIndexBufferOffsetAlignment = src->minSequenceIndexBufferOffsetAlignment;
    minCommandsTokenBufferOffsetAlignment = src->minCommandsTokenBufferOffsetAlignment;
}

safe_VkIndirectCommandsLayoutCreateInfoNVX::safe_VkIndirectCommandsLayoutCreateInfoNVX(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    pipelineBindPoint(in_struct->pipelineBindPoint),
    flags(in_struct->flags),
    tokenCount(in_struct->tokenCount),
    pTokens(nullptr)
{
    if (in_struct->pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[in_struct->tokenCount];
        memcpy ((void *)pTokens, (void *)in_struct->pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*in_struct->tokenCount);
    }
}

safe_VkIndirectCommandsLayoutCreateInfoNVX::safe_VkIndirectCommandsLayoutCreateInfoNVX() :
    pTokens(nullptr)
{}

safe_VkIndirectCommandsLayoutCreateInfoNVX::safe_VkIndirectCommandsLayoutCreateInfoNVX(const safe_VkIndirectCommandsLayoutCreateInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    pipelineBindPoint = src.pipelineBindPoint;
    flags = src.flags;
    tokenCount = src.tokenCount;
    pTokens = nullptr;
    if (src.pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[src.tokenCount];
        memcpy ((void *)pTokens, (void *)src.pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*src.tokenCount);
    }
}

safe_VkIndirectCommandsLayoutCreateInfoNVX& safe_VkIndirectCommandsLayoutCreateInfoNVX::operator=(const safe_VkIndirectCommandsLayoutCreateInfoNVX& src)
{
    if (&src == this) return *this;

    if (pTokens)
        delete[] pTokens;

    sType = src.sType;
    pNext = src.pNext;
    pipelineBindPoint = src.pipelineBindPoint;
    flags = src.flags;
    tokenCount = src.tokenCount;
    pTokens = nullptr;
    if (src.pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[src.tokenCount];
        memcpy ((void *)pTokens, (void *)src.pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*src.tokenCount);
    }

    return *this;
}

safe_VkIndirectCommandsLayoutCreateInfoNVX::~safe_VkIndirectCommandsLayoutCreateInfoNVX()
{
    if (pTokens)
        delete[] pTokens;
}

void safe_VkIndirectCommandsLayoutCreateInfoNVX::initialize(const VkIndirectCommandsLayoutCreateInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    pipelineBindPoint = in_struct->pipelineBindPoint;
    flags = in_struct->flags;
    tokenCount = in_struct->tokenCount;
    pTokens = nullptr;
    if (in_struct->pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[in_struct->tokenCount];
        memcpy ((void *)pTokens, (void *)in_struct->pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*in_struct->tokenCount);
    }
}

void safe_VkIndirectCommandsLayoutCreateInfoNVX::initialize(const safe_VkIndirectCommandsLayoutCreateInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    pipelineBindPoint = src->pipelineBindPoint;
    flags = src->flags;
    tokenCount = src->tokenCount;
    pTokens = nullptr;
    if (src->pTokens) {
        pTokens = new VkIndirectCommandsLayoutTokenNVX[src->tokenCount];
        memcpy ((void *)pTokens, (void *)src->pTokens, sizeof(VkIndirectCommandsLayoutTokenNVX)*src->tokenCount);
    }
}

safe_VkCmdProcessCommandsInfoNVX::safe_VkCmdProcessCommandsInfoNVX(const VkCmdProcessCommandsInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectTable(in_struct->objectTable),
    indirectCommandsLayout(in_struct->indirectCommandsLayout),
    indirectCommandsTokenCount(in_struct->indirectCommandsTokenCount),
    pIndirectCommandsTokens(nullptr),
    maxSequencesCount(in_struct->maxSequencesCount),
    targetCommandBuffer(in_struct->targetCommandBuffer),
    sequencesCountBuffer(in_struct->sequencesCountBuffer),
    sequencesCountOffset(in_struct->sequencesCountOffset),
    sequencesIndexBuffer(in_struct->sequencesIndexBuffer),
    sequencesIndexOffset(in_struct->sequencesIndexOffset)
{
    if (indirectCommandsTokenCount && in_struct->pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = in_struct->pIndirectCommandsTokens[i];
        }
    }
}

safe_VkCmdProcessCommandsInfoNVX::safe_VkCmdProcessCommandsInfoNVX() :
    pIndirectCommandsTokens(nullptr)
{}

safe_VkCmdProcessCommandsInfoNVX::safe_VkCmdProcessCommandsInfoNVX(const safe_VkCmdProcessCommandsInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectTable = src.objectTable;
    indirectCommandsLayout = src.indirectCommandsLayout;
    indirectCommandsTokenCount = src.indirectCommandsTokenCount;
    pIndirectCommandsTokens = nullptr;
    maxSequencesCount = src.maxSequencesCount;
    targetCommandBuffer = src.targetCommandBuffer;
    sequencesCountBuffer = src.sequencesCountBuffer;
    sequencesCountOffset = src.sequencesCountOffset;
    sequencesIndexBuffer = src.sequencesIndexBuffer;
    sequencesIndexOffset = src.sequencesIndexOffset;
    if (indirectCommandsTokenCount && src.pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = src.pIndirectCommandsTokens[i];
        }
    }
}

safe_VkCmdProcessCommandsInfoNVX& safe_VkCmdProcessCommandsInfoNVX::operator=(const safe_VkCmdProcessCommandsInfoNVX& src)
{
    if (&src == this) return *this;

    if (pIndirectCommandsTokens)
        delete[] pIndirectCommandsTokens;

    sType = src.sType;
    pNext = src.pNext;
    objectTable = src.objectTable;
    indirectCommandsLayout = src.indirectCommandsLayout;
    indirectCommandsTokenCount = src.indirectCommandsTokenCount;
    pIndirectCommandsTokens = nullptr;
    maxSequencesCount = src.maxSequencesCount;
    targetCommandBuffer = src.targetCommandBuffer;
    sequencesCountBuffer = src.sequencesCountBuffer;
    sequencesCountOffset = src.sequencesCountOffset;
    sequencesIndexBuffer = src.sequencesIndexBuffer;
    sequencesIndexOffset = src.sequencesIndexOffset;
    if (indirectCommandsTokenCount && src.pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = src.pIndirectCommandsTokens[i];
        }
    }

    return *this;
}

safe_VkCmdProcessCommandsInfoNVX::~safe_VkCmdProcessCommandsInfoNVX()
{
    if (pIndirectCommandsTokens)
        delete[] pIndirectCommandsTokens;
}

void safe_VkCmdProcessCommandsInfoNVX::initialize(const VkCmdProcessCommandsInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectTable = in_struct->objectTable;
    indirectCommandsLayout = in_struct->indirectCommandsLayout;
    indirectCommandsTokenCount = in_struct->indirectCommandsTokenCount;
    pIndirectCommandsTokens = nullptr;
    maxSequencesCount = in_struct->maxSequencesCount;
    targetCommandBuffer = in_struct->targetCommandBuffer;
    sequencesCountBuffer = in_struct->sequencesCountBuffer;
    sequencesCountOffset = in_struct->sequencesCountOffset;
    sequencesIndexBuffer = in_struct->sequencesIndexBuffer;
    sequencesIndexOffset = in_struct->sequencesIndexOffset;
    if (indirectCommandsTokenCount && in_struct->pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = in_struct->pIndirectCommandsTokens[i];
        }
    }
}

void safe_VkCmdProcessCommandsInfoNVX::initialize(const safe_VkCmdProcessCommandsInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectTable = src->objectTable;
    indirectCommandsLayout = src->indirectCommandsLayout;
    indirectCommandsTokenCount = src->indirectCommandsTokenCount;
    pIndirectCommandsTokens = nullptr;
    maxSequencesCount = src->maxSequencesCount;
    targetCommandBuffer = src->targetCommandBuffer;
    sequencesCountBuffer = src->sequencesCountBuffer;
    sequencesCountOffset = src->sequencesCountOffset;
    sequencesIndexBuffer = src->sequencesIndexBuffer;
    sequencesIndexOffset = src->sequencesIndexOffset;
    if (indirectCommandsTokenCount && src->pIndirectCommandsTokens) {
        pIndirectCommandsTokens = new VkIndirectCommandsTokenNVX[indirectCommandsTokenCount];
        for (uint32_t i=0; i<indirectCommandsTokenCount; ++i) {
            pIndirectCommandsTokens[i] = src->pIndirectCommandsTokens[i];
        }
    }
}

safe_VkCmdReserveSpaceForCommandsInfoNVX::safe_VkCmdReserveSpaceForCommandsInfoNVX(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectTable(in_struct->objectTable),
    indirectCommandsLayout(in_struct->indirectCommandsLayout),
    maxSequencesCount(in_struct->maxSequencesCount)
{
}

safe_VkCmdReserveSpaceForCommandsInfoNVX::safe_VkCmdReserveSpaceForCommandsInfoNVX()
{}

safe_VkCmdReserveSpaceForCommandsInfoNVX::safe_VkCmdReserveSpaceForCommandsInfoNVX(const safe_VkCmdReserveSpaceForCommandsInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectTable = src.objectTable;
    indirectCommandsLayout = src.indirectCommandsLayout;
    maxSequencesCount = src.maxSequencesCount;
}

safe_VkCmdReserveSpaceForCommandsInfoNVX& safe_VkCmdReserveSpaceForCommandsInfoNVX::operator=(const safe_VkCmdReserveSpaceForCommandsInfoNVX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    objectTable = src.objectTable;
    indirectCommandsLayout = src.indirectCommandsLayout;
    maxSequencesCount = src.maxSequencesCount;

    return *this;
}

safe_VkCmdReserveSpaceForCommandsInfoNVX::~safe_VkCmdReserveSpaceForCommandsInfoNVX()
{
}

void safe_VkCmdReserveSpaceForCommandsInfoNVX::initialize(const VkCmdReserveSpaceForCommandsInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectTable = in_struct->objectTable;
    indirectCommandsLayout = in_struct->indirectCommandsLayout;
    maxSequencesCount = in_struct->maxSequencesCount;
}

void safe_VkCmdReserveSpaceForCommandsInfoNVX::initialize(const safe_VkCmdReserveSpaceForCommandsInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectTable = src->objectTable;
    indirectCommandsLayout = src->indirectCommandsLayout;
    maxSequencesCount = src->maxSequencesCount;
}

safe_VkObjectTableCreateInfoNVX::safe_VkObjectTableCreateInfoNVX(const VkObjectTableCreateInfoNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    objectCount(in_struct->objectCount),
    pObjectEntryTypes(nullptr),
    pObjectEntryCounts(nullptr),
    pObjectEntryUsageFlags(nullptr),
    maxUniformBuffersPerDescriptor(in_struct->maxUniformBuffersPerDescriptor),
    maxStorageBuffersPerDescriptor(in_struct->maxStorageBuffersPerDescriptor),
    maxStorageImagesPerDescriptor(in_struct->maxStorageImagesPerDescriptor),
    maxSampledImagesPerDescriptor(in_struct->maxSampledImagesPerDescriptor),
    maxPipelineLayouts(in_struct->maxPipelineLayouts)
{
    if (in_struct->pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)in_struct->pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[in_struct->objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)in_struct->pObjectEntryCounts, sizeof(uint32_t)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)in_struct->pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*in_struct->objectCount);
    }
}

safe_VkObjectTableCreateInfoNVX::safe_VkObjectTableCreateInfoNVX() :
    pObjectEntryTypes(nullptr),
    pObjectEntryCounts(nullptr),
    pObjectEntryUsageFlags(nullptr)
{}

safe_VkObjectTableCreateInfoNVX::safe_VkObjectTableCreateInfoNVX(const safe_VkObjectTableCreateInfoNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    objectCount = src.objectCount;
    pObjectEntryTypes = nullptr;
    pObjectEntryCounts = nullptr;
    pObjectEntryUsageFlags = nullptr;
    maxUniformBuffersPerDescriptor = src.maxUniformBuffersPerDescriptor;
    maxStorageBuffersPerDescriptor = src.maxStorageBuffersPerDescriptor;
    maxStorageImagesPerDescriptor = src.maxStorageImagesPerDescriptor;
    maxSampledImagesPerDescriptor = src.maxSampledImagesPerDescriptor;
    maxPipelineLayouts = src.maxPipelineLayouts;
    if (src.pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[src.objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)src.pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*src.objectCount);
    }
    if (src.pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[src.objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)src.pObjectEntryCounts, sizeof(uint32_t)*src.objectCount);
    }
    if (src.pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[src.objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)src.pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*src.objectCount);
    }
}

safe_VkObjectTableCreateInfoNVX& safe_VkObjectTableCreateInfoNVX::operator=(const safe_VkObjectTableCreateInfoNVX& src)
{
    if (&src == this) return *this;

    if (pObjectEntryTypes)
        delete[] pObjectEntryTypes;
    if (pObjectEntryCounts)
        delete[] pObjectEntryCounts;
    if (pObjectEntryUsageFlags)
        delete[] pObjectEntryUsageFlags;

    sType = src.sType;
    pNext = src.pNext;
    objectCount = src.objectCount;
    pObjectEntryTypes = nullptr;
    pObjectEntryCounts = nullptr;
    pObjectEntryUsageFlags = nullptr;
    maxUniformBuffersPerDescriptor = src.maxUniformBuffersPerDescriptor;
    maxStorageBuffersPerDescriptor = src.maxStorageBuffersPerDescriptor;
    maxStorageImagesPerDescriptor = src.maxStorageImagesPerDescriptor;
    maxSampledImagesPerDescriptor = src.maxSampledImagesPerDescriptor;
    maxPipelineLayouts = src.maxPipelineLayouts;
    if (src.pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[src.objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)src.pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*src.objectCount);
    }
    if (src.pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[src.objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)src.pObjectEntryCounts, sizeof(uint32_t)*src.objectCount);
    }
    if (src.pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[src.objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)src.pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*src.objectCount);
    }

    return *this;
}

safe_VkObjectTableCreateInfoNVX::~safe_VkObjectTableCreateInfoNVX()
{
    if (pObjectEntryTypes)
        delete[] pObjectEntryTypes;
    if (pObjectEntryCounts)
        delete[] pObjectEntryCounts;
    if (pObjectEntryUsageFlags)
        delete[] pObjectEntryUsageFlags;
}

void safe_VkObjectTableCreateInfoNVX::initialize(const VkObjectTableCreateInfoNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    objectCount = in_struct->objectCount;
    pObjectEntryTypes = nullptr;
    pObjectEntryCounts = nullptr;
    pObjectEntryUsageFlags = nullptr;
    maxUniformBuffersPerDescriptor = in_struct->maxUniformBuffersPerDescriptor;
    maxStorageBuffersPerDescriptor = in_struct->maxStorageBuffersPerDescriptor;
    maxStorageImagesPerDescriptor = in_struct->maxStorageImagesPerDescriptor;
    maxSampledImagesPerDescriptor = in_struct->maxSampledImagesPerDescriptor;
    maxPipelineLayouts = in_struct->maxPipelineLayouts;
    if (in_struct->pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)in_struct->pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[in_struct->objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)in_struct->pObjectEntryCounts, sizeof(uint32_t)*in_struct->objectCount);
    }
    if (in_struct->pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[in_struct->objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)in_struct->pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*in_struct->objectCount);
    }
}

void safe_VkObjectTableCreateInfoNVX::initialize(const safe_VkObjectTableCreateInfoNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    objectCount = src->objectCount;
    pObjectEntryTypes = nullptr;
    pObjectEntryCounts = nullptr;
    pObjectEntryUsageFlags = nullptr;
    maxUniformBuffersPerDescriptor = src->maxUniformBuffersPerDescriptor;
    maxStorageBuffersPerDescriptor = src->maxStorageBuffersPerDescriptor;
    maxStorageImagesPerDescriptor = src->maxStorageImagesPerDescriptor;
    maxSampledImagesPerDescriptor = src->maxSampledImagesPerDescriptor;
    maxPipelineLayouts = src->maxPipelineLayouts;
    if (src->pObjectEntryTypes) {
        pObjectEntryTypes = new VkObjectEntryTypeNVX[src->objectCount];
        memcpy ((void *)pObjectEntryTypes, (void *)src->pObjectEntryTypes, sizeof(VkObjectEntryTypeNVX)*src->objectCount);
    }
    if (src->pObjectEntryCounts) {
        pObjectEntryCounts = new uint32_t[src->objectCount];
        memcpy ((void *)pObjectEntryCounts, (void *)src->pObjectEntryCounts, sizeof(uint32_t)*src->objectCount);
    }
    if (src->pObjectEntryUsageFlags) {
        pObjectEntryUsageFlags = new VkObjectEntryUsageFlagsNVX[src->objectCount];
        memcpy ((void *)pObjectEntryUsageFlags, (void *)src->pObjectEntryUsageFlags, sizeof(VkObjectEntryUsageFlagsNVX)*src->objectCount);
    }
}

safe_VkPipelineViewportWScalingStateCreateInfoNV::safe_VkPipelineViewportWScalingStateCreateInfoNV(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    viewportWScalingEnable(in_struct->viewportWScalingEnable),
    viewportCount(in_struct->viewportCount),
    pViewportWScalings(nullptr)
{
    if (in_struct->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[in_struct->viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)in_struct->pViewportWScalings, sizeof(VkViewportWScalingNV)*in_struct->viewportCount);
    }
}

safe_VkPipelineViewportWScalingStateCreateInfoNV::safe_VkPipelineViewportWScalingStateCreateInfoNV() :
    pViewportWScalings(nullptr)
{}

safe_VkPipelineViewportWScalingStateCreateInfoNV::safe_VkPipelineViewportWScalingStateCreateInfoNV(const safe_VkPipelineViewportWScalingStateCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    viewportWScalingEnable = src.viewportWScalingEnable;
    viewportCount = src.viewportCount;
    pViewportWScalings = nullptr;
    if (src.pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[src.viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)src.pViewportWScalings, sizeof(VkViewportWScalingNV)*src.viewportCount);
    }
}

safe_VkPipelineViewportWScalingStateCreateInfoNV& safe_VkPipelineViewportWScalingStateCreateInfoNV::operator=(const safe_VkPipelineViewportWScalingStateCreateInfoNV& src)
{
    if (&src == this) return *this;

    if (pViewportWScalings)
        delete[] pViewportWScalings;

    sType = src.sType;
    pNext = src.pNext;
    viewportWScalingEnable = src.viewportWScalingEnable;
    viewportCount = src.viewportCount;
    pViewportWScalings = nullptr;
    if (src.pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[src.viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)src.pViewportWScalings, sizeof(VkViewportWScalingNV)*src.viewportCount);
    }

    return *this;
}

safe_VkPipelineViewportWScalingStateCreateInfoNV::~safe_VkPipelineViewportWScalingStateCreateInfoNV()
{
    if (pViewportWScalings)
        delete[] pViewportWScalings;
}

void safe_VkPipelineViewportWScalingStateCreateInfoNV::initialize(const VkPipelineViewportWScalingStateCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    viewportWScalingEnable = in_struct->viewportWScalingEnable;
    viewportCount = in_struct->viewportCount;
    pViewportWScalings = nullptr;
    if (in_struct->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[in_struct->viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)in_struct->pViewportWScalings, sizeof(VkViewportWScalingNV)*in_struct->viewportCount);
    }
}

void safe_VkPipelineViewportWScalingStateCreateInfoNV::initialize(const safe_VkPipelineViewportWScalingStateCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    viewportWScalingEnable = src->viewportWScalingEnable;
    viewportCount = src->viewportCount;
    pViewportWScalings = nullptr;
    if (src->pViewportWScalings) {
        pViewportWScalings = new VkViewportWScalingNV[src->viewportCount];
        memcpy ((void *)pViewportWScalings, (void *)src->pViewportWScalings, sizeof(VkViewportWScalingNV)*src->viewportCount);
    }
}

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT(const VkSurfaceCapabilities2EXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    minImageCount(in_struct->minImageCount),
    maxImageCount(in_struct->maxImageCount),
    currentExtent(in_struct->currentExtent),
    minImageExtent(in_struct->minImageExtent),
    maxImageExtent(in_struct->maxImageExtent),
    maxImageArrayLayers(in_struct->maxImageArrayLayers),
    supportedTransforms(in_struct->supportedTransforms),
    currentTransform(in_struct->currentTransform),
    supportedCompositeAlpha(in_struct->supportedCompositeAlpha),
    supportedUsageFlags(in_struct->supportedUsageFlags),
    supportedSurfaceCounters(in_struct->supportedSurfaceCounters)
{
}

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT()
{}

safe_VkSurfaceCapabilities2EXT::safe_VkSurfaceCapabilities2EXT(const safe_VkSurfaceCapabilities2EXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    minImageCount = src.minImageCount;
    maxImageCount = src.maxImageCount;
    currentExtent = src.currentExtent;
    minImageExtent = src.minImageExtent;
    maxImageExtent = src.maxImageExtent;
    maxImageArrayLayers = src.maxImageArrayLayers;
    supportedTransforms = src.supportedTransforms;
    currentTransform = src.currentTransform;
    supportedCompositeAlpha = src.supportedCompositeAlpha;
    supportedUsageFlags = src.supportedUsageFlags;
    supportedSurfaceCounters = src.supportedSurfaceCounters;
}

safe_VkSurfaceCapabilities2EXT& safe_VkSurfaceCapabilities2EXT::operator=(const safe_VkSurfaceCapabilities2EXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    minImageCount = src.minImageCount;
    maxImageCount = src.maxImageCount;
    currentExtent = src.currentExtent;
    minImageExtent = src.minImageExtent;
    maxImageExtent = src.maxImageExtent;
    maxImageArrayLayers = src.maxImageArrayLayers;
    supportedTransforms = src.supportedTransforms;
    currentTransform = src.currentTransform;
    supportedCompositeAlpha = src.supportedCompositeAlpha;
    supportedUsageFlags = src.supportedUsageFlags;
    supportedSurfaceCounters = src.supportedSurfaceCounters;

    return *this;
}

safe_VkSurfaceCapabilities2EXT::~safe_VkSurfaceCapabilities2EXT()
{
}

void safe_VkSurfaceCapabilities2EXT::initialize(const VkSurfaceCapabilities2EXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    minImageCount = in_struct->minImageCount;
    maxImageCount = in_struct->maxImageCount;
    currentExtent = in_struct->currentExtent;
    minImageExtent = in_struct->minImageExtent;
    maxImageExtent = in_struct->maxImageExtent;
    maxImageArrayLayers = in_struct->maxImageArrayLayers;
    supportedTransforms = in_struct->supportedTransforms;
    currentTransform = in_struct->currentTransform;
    supportedCompositeAlpha = in_struct->supportedCompositeAlpha;
    supportedUsageFlags = in_struct->supportedUsageFlags;
    supportedSurfaceCounters = in_struct->supportedSurfaceCounters;
}

void safe_VkSurfaceCapabilities2EXT::initialize(const safe_VkSurfaceCapabilities2EXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    minImageCount = src->minImageCount;
    maxImageCount = src->maxImageCount;
    currentExtent = src->currentExtent;
    minImageExtent = src->minImageExtent;
    maxImageExtent = src->maxImageExtent;
    maxImageArrayLayers = src->maxImageArrayLayers;
    supportedTransforms = src->supportedTransforms;
    currentTransform = src->currentTransform;
    supportedCompositeAlpha = src->supportedCompositeAlpha;
    supportedUsageFlags = src->supportedUsageFlags;
    supportedSurfaceCounters = src->supportedSurfaceCounters;
}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT(const VkDisplayPowerInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    powerState(in_struct->powerState)
{
}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT()
{}

safe_VkDisplayPowerInfoEXT::safe_VkDisplayPowerInfoEXT(const safe_VkDisplayPowerInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    powerState = src.powerState;
}

safe_VkDisplayPowerInfoEXT& safe_VkDisplayPowerInfoEXT::operator=(const safe_VkDisplayPowerInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    powerState = src.powerState;

    return *this;
}

safe_VkDisplayPowerInfoEXT::~safe_VkDisplayPowerInfoEXT()
{
}

void safe_VkDisplayPowerInfoEXT::initialize(const VkDisplayPowerInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    powerState = in_struct->powerState;
}

void safe_VkDisplayPowerInfoEXT::initialize(const safe_VkDisplayPowerInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    powerState = src->powerState;
}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT(const VkDeviceEventInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    deviceEvent(in_struct->deviceEvent)
{
}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT()
{}

safe_VkDeviceEventInfoEXT::safe_VkDeviceEventInfoEXT(const safe_VkDeviceEventInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    deviceEvent = src.deviceEvent;
}

safe_VkDeviceEventInfoEXT& safe_VkDeviceEventInfoEXT::operator=(const safe_VkDeviceEventInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    deviceEvent = src.deviceEvent;

    return *this;
}

safe_VkDeviceEventInfoEXT::~safe_VkDeviceEventInfoEXT()
{
}

void safe_VkDeviceEventInfoEXT::initialize(const VkDeviceEventInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    deviceEvent = in_struct->deviceEvent;
}

void safe_VkDeviceEventInfoEXT::initialize(const safe_VkDeviceEventInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    deviceEvent = src->deviceEvent;
}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT(const VkDisplayEventInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    displayEvent(in_struct->displayEvent)
{
}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT()
{}

safe_VkDisplayEventInfoEXT::safe_VkDisplayEventInfoEXT(const safe_VkDisplayEventInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    displayEvent = src.displayEvent;
}

safe_VkDisplayEventInfoEXT& safe_VkDisplayEventInfoEXT::operator=(const safe_VkDisplayEventInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    displayEvent = src.displayEvent;

    return *this;
}

safe_VkDisplayEventInfoEXT::~safe_VkDisplayEventInfoEXT()
{
}

void safe_VkDisplayEventInfoEXT::initialize(const VkDisplayEventInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    displayEvent = in_struct->displayEvent;
}

void safe_VkDisplayEventInfoEXT::initialize(const safe_VkDisplayEventInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    displayEvent = src->displayEvent;
}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT(const VkSwapchainCounterCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    surfaceCounters(in_struct->surfaceCounters)
{
}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT()
{}

safe_VkSwapchainCounterCreateInfoEXT::safe_VkSwapchainCounterCreateInfoEXT(const safe_VkSwapchainCounterCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    surfaceCounters = src.surfaceCounters;
}

safe_VkSwapchainCounterCreateInfoEXT& safe_VkSwapchainCounterCreateInfoEXT::operator=(const safe_VkSwapchainCounterCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    surfaceCounters = src.surfaceCounters;

    return *this;
}

safe_VkSwapchainCounterCreateInfoEXT::~safe_VkSwapchainCounterCreateInfoEXT()
{
}

void safe_VkSwapchainCounterCreateInfoEXT::initialize(const VkSwapchainCounterCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    surfaceCounters = in_struct->surfaceCounters;
}

void safe_VkSwapchainCounterCreateInfoEXT::initialize(const safe_VkSwapchainCounterCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    surfaceCounters = src->surfaceCounters;
}

safe_VkPresentTimesInfoGOOGLE::safe_VkPresentTimesInfoGOOGLE(const VkPresentTimesInfoGOOGLE* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    swapchainCount(in_struct->swapchainCount),
    pTimes(nullptr)
{
    if (in_struct->pTimes) {
        pTimes = new VkPresentTimeGOOGLE[in_struct->swapchainCount];
        memcpy ((void *)pTimes, (void *)in_struct->pTimes, sizeof(VkPresentTimeGOOGLE)*in_struct->swapchainCount);
    }
}

safe_VkPresentTimesInfoGOOGLE::safe_VkPresentTimesInfoGOOGLE() :
    pTimes(nullptr)
{}

safe_VkPresentTimesInfoGOOGLE::safe_VkPresentTimesInfoGOOGLE(const safe_VkPresentTimesInfoGOOGLE& src)
{
    sType = src.sType;
    pNext = src.pNext;
    swapchainCount = src.swapchainCount;
    pTimes = nullptr;
    if (src.pTimes) {
        pTimes = new VkPresentTimeGOOGLE[src.swapchainCount];
        memcpy ((void *)pTimes, (void *)src.pTimes, sizeof(VkPresentTimeGOOGLE)*src.swapchainCount);
    }
}

safe_VkPresentTimesInfoGOOGLE& safe_VkPresentTimesInfoGOOGLE::operator=(const safe_VkPresentTimesInfoGOOGLE& src)
{
    if (&src == this) return *this;

    if (pTimes)
        delete[] pTimes;

    sType = src.sType;
    pNext = src.pNext;
    swapchainCount = src.swapchainCount;
    pTimes = nullptr;
    if (src.pTimes) {
        pTimes = new VkPresentTimeGOOGLE[src.swapchainCount];
        memcpy ((void *)pTimes, (void *)src.pTimes, sizeof(VkPresentTimeGOOGLE)*src.swapchainCount);
    }

    return *this;
}

safe_VkPresentTimesInfoGOOGLE::~safe_VkPresentTimesInfoGOOGLE()
{
    if (pTimes)
        delete[] pTimes;
}

void safe_VkPresentTimesInfoGOOGLE::initialize(const VkPresentTimesInfoGOOGLE* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    swapchainCount = in_struct->swapchainCount;
    pTimes = nullptr;
    if (in_struct->pTimes) {
        pTimes = new VkPresentTimeGOOGLE[in_struct->swapchainCount];
        memcpy ((void *)pTimes, (void *)in_struct->pTimes, sizeof(VkPresentTimeGOOGLE)*in_struct->swapchainCount);
    }
}

void safe_VkPresentTimesInfoGOOGLE::initialize(const safe_VkPresentTimesInfoGOOGLE* src)
{
    sType = src->sType;
    pNext = src->pNext;
    swapchainCount = src->swapchainCount;
    pTimes = nullptr;
    if (src->pTimes) {
        pTimes = new VkPresentTimeGOOGLE[src->swapchainCount];
        memcpy ((void *)pTimes, (void *)src->pTimes, sizeof(VkPresentTimeGOOGLE)*src->swapchainCount);
    }
}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    perViewPositionAllComponents(in_struct->perViewPositionAllComponents)
{
}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX()
{}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& src)
{
    sType = src.sType;
    pNext = src.pNext;
    perViewPositionAllComponents = src.perViewPositionAllComponents;
}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    perViewPositionAllComponents = src.perViewPositionAllComponents;

    return *this;
}

safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::~safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX()
{
}

void safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::initialize(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    perViewPositionAllComponents = in_struct->perViewPositionAllComponents;
}

void safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::initialize(const safe_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* src)
{
    sType = src->sType;
    pNext = src->pNext;
    perViewPositionAllComponents = src->perViewPositionAllComponents;
}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::safe_VkPipelineViewportSwizzleStateCreateInfoNV(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    viewportCount(in_struct->viewportCount),
    pViewportSwizzles(nullptr)
{
    if (in_struct->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[in_struct->viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)in_struct->pViewportSwizzles, sizeof(VkViewportSwizzleNV)*in_struct->viewportCount);
    }
}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::safe_VkPipelineViewportSwizzleStateCreateInfoNV() :
    pViewportSwizzles(nullptr)
{}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::safe_VkPipelineViewportSwizzleStateCreateInfoNV(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    viewportCount = src.viewportCount;
    pViewportSwizzles = nullptr;
    if (src.pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[src.viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)src.pViewportSwizzles, sizeof(VkViewportSwizzleNV)*src.viewportCount);
    }
}

safe_VkPipelineViewportSwizzleStateCreateInfoNV& safe_VkPipelineViewportSwizzleStateCreateInfoNV::operator=(const safe_VkPipelineViewportSwizzleStateCreateInfoNV& src)
{
    if (&src == this) return *this;

    if (pViewportSwizzles)
        delete[] pViewportSwizzles;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    viewportCount = src.viewportCount;
    pViewportSwizzles = nullptr;
    if (src.pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[src.viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)src.pViewportSwizzles, sizeof(VkViewportSwizzleNV)*src.viewportCount);
    }

    return *this;
}

safe_VkPipelineViewportSwizzleStateCreateInfoNV::~safe_VkPipelineViewportSwizzleStateCreateInfoNV()
{
    if (pViewportSwizzles)
        delete[] pViewportSwizzles;
}

void safe_VkPipelineViewportSwizzleStateCreateInfoNV::initialize(const VkPipelineViewportSwizzleStateCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    viewportCount = in_struct->viewportCount;
    pViewportSwizzles = nullptr;
    if (in_struct->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[in_struct->viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)in_struct->pViewportSwizzles, sizeof(VkViewportSwizzleNV)*in_struct->viewportCount);
    }
}

void safe_VkPipelineViewportSwizzleStateCreateInfoNV::initialize(const safe_VkPipelineViewportSwizzleStateCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    viewportCount = src->viewportCount;
    pViewportSwizzles = nullptr;
    if (src->pViewportSwizzles) {
        pViewportSwizzles = new VkViewportSwizzleNV[src->viewportCount];
        memcpy ((void *)pViewportSwizzles, (void *)src->pViewportSwizzles, sizeof(VkViewportSwizzleNV)*src->viewportCount);
    }
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxDiscardRectangles(in_struct->maxDiscardRectangles)
{
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT()
{}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxDiscardRectangles = src.maxDiscardRectangles;
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    maxDiscardRectangles = src.maxDiscardRectangles;

    return *this;
}

safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::~safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT()
{
}

void safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::initialize(const VkPhysicalDeviceDiscardRectanglePropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxDiscardRectangles = in_struct->maxDiscardRectangles;
}

void safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT::initialize(const safe_VkPhysicalDeviceDiscardRectanglePropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxDiscardRectangles = src->maxDiscardRectangles;
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    discardRectangleMode(in_struct->discardRectangleMode),
    discardRectangleCount(in_struct->discardRectangleCount),
    pDiscardRectangles(nullptr)
{
    if (in_struct->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[in_struct->discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)in_struct->pDiscardRectangles, sizeof(VkRect2D)*in_struct->discardRectangleCount);
    }
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT() :
    pDiscardRectangles(nullptr)
{}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::safe_VkPipelineDiscardRectangleStateCreateInfoEXT(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    discardRectangleMode = src.discardRectangleMode;
    discardRectangleCount = src.discardRectangleCount;
    pDiscardRectangles = nullptr;
    if (src.pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[src.discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)src.pDiscardRectangles, sizeof(VkRect2D)*src.discardRectangleCount);
    }
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT& safe_VkPipelineDiscardRectangleStateCreateInfoEXT::operator=(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT& src)
{
    if (&src == this) return *this;

    if (pDiscardRectangles)
        delete[] pDiscardRectangles;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    discardRectangleMode = src.discardRectangleMode;
    discardRectangleCount = src.discardRectangleCount;
    pDiscardRectangles = nullptr;
    if (src.pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[src.discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)src.pDiscardRectangles, sizeof(VkRect2D)*src.discardRectangleCount);
    }

    return *this;
}

safe_VkPipelineDiscardRectangleStateCreateInfoEXT::~safe_VkPipelineDiscardRectangleStateCreateInfoEXT()
{
    if (pDiscardRectangles)
        delete[] pDiscardRectangles;
}

void safe_VkPipelineDiscardRectangleStateCreateInfoEXT::initialize(const VkPipelineDiscardRectangleStateCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    discardRectangleMode = in_struct->discardRectangleMode;
    discardRectangleCount = in_struct->discardRectangleCount;
    pDiscardRectangles = nullptr;
    if (in_struct->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[in_struct->discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)in_struct->pDiscardRectangles, sizeof(VkRect2D)*in_struct->discardRectangleCount);
    }
}

void safe_VkPipelineDiscardRectangleStateCreateInfoEXT::initialize(const safe_VkPipelineDiscardRectangleStateCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    discardRectangleMode = src->discardRectangleMode;
    discardRectangleCount = src->discardRectangleCount;
    pDiscardRectangles = nullptr;
    if (src->pDiscardRectangles) {
        pDiscardRectangles = new VkRect2D[src->discardRectangleCount];
        memcpy ((void *)pDiscardRectangles, (void *)src->pDiscardRectangles, sizeof(VkRect2D)*src->discardRectangleCount);
    }
}

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    primitiveOverestimationSize(in_struct->primitiveOverestimationSize),
    maxExtraPrimitiveOverestimationSize(in_struct->maxExtraPrimitiveOverestimationSize),
    extraPrimitiveOverestimationSizeGranularity(in_struct->extraPrimitiveOverestimationSizeGranularity),
    primitiveUnderestimation(in_struct->primitiveUnderestimation),
    conservativePointAndLineRasterization(in_struct->conservativePointAndLineRasterization),
    degenerateTrianglesRasterized(in_struct->degenerateTrianglesRasterized),
    degenerateLinesRasterized(in_struct->degenerateLinesRasterized),
    fullyCoveredFragmentShaderInputVariable(in_struct->fullyCoveredFragmentShaderInputVariable),
    conservativeRasterizationPostDepthCoverage(in_struct->conservativeRasterizationPostDepthCoverage)
{
}

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT()
{}

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    primitiveOverestimationSize = src.primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = src.maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = src.extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = src.primitiveUnderestimation;
    conservativePointAndLineRasterization = src.conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = src.degenerateTrianglesRasterized;
    degenerateLinesRasterized = src.degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = src.fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = src.conservativeRasterizationPostDepthCoverage;
}

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=(const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    primitiveOverestimationSize = src.primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = src.maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = src.extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = src.primitiveUnderestimation;
    conservativePointAndLineRasterization = src.conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = src.degenerateTrianglesRasterized;
    degenerateLinesRasterized = src.degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = src.fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = src.conservativeRasterizationPostDepthCoverage;

    return *this;
}

safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::~safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT()
{
}

void safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::initialize(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    primitiveOverestimationSize = in_struct->primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = in_struct->maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = in_struct->extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = in_struct->primitiveUnderestimation;
    conservativePointAndLineRasterization = in_struct->conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = in_struct->degenerateTrianglesRasterized;
    degenerateLinesRasterized = in_struct->degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = in_struct->fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = in_struct->conservativeRasterizationPostDepthCoverage;
}

void safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::initialize(const safe_VkPhysicalDeviceConservativeRasterizationPropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    primitiveOverestimationSize = src->primitiveOverestimationSize;
    maxExtraPrimitiveOverestimationSize = src->maxExtraPrimitiveOverestimationSize;
    extraPrimitiveOverestimationSizeGranularity = src->extraPrimitiveOverestimationSizeGranularity;
    primitiveUnderestimation = src->primitiveUnderestimation;
    conservativePointAndLineRasterization = src->conservativePointAndLineRasterization;
    degenerateTrianglesRasterized = src->degenerateTrianglesRasterized;
    degenerateLinesRasterized = src->degenerateLinesRasterized;
    fullyCoveredFragmentShaderInputVariable = src->fullyCoveredFragmentShaderInputVariable;
    conservativeRasterizationPostDepthCoverage = src->conservativeRasterizationPostDepthCoverage;
}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    conservativeRasterizationMode(in_struct->conservativeRasterizationMode),
    extraPrimitiveOverestimationSize(in_struct->extraPrimitiveOverestimationSize)
{
}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::safe_VkPipelineRasterizationConservativeStateCreateInfoEXT()
{}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::safe_VkPipelineRasterizationConservativeStateCreateInfoEXT(const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    conservativeRasterizationMode = src.conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = src.extraPrimitiveOverestimationSize;
}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=(const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    conservativeRasterizationMode = src.conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = src.extraPrimitiveOverestimationSize;

    return *this;
}

safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::~safe_VkPipelineRasterizationConservativeStateCreateInfoEXT()
{
}

void safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::initialize(const VkPipelineRasterizationConservativeStateCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    conservativeRasterizationMode = in_struct->conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = in_struct->extraPrimitiveOverestimationSize;
}

void safe_VkPipelineRasterizationConservativeStateCreateInfoEXT::initialize(const safe_VkPipelineRasterizationConservativeStateCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    conservativeRasterizationMode = src->conservativeRasterizationMode;
    extraPrimitiveOverestimationSize = src->extraPrimitiveOverestimationSize;
}

safe_VkHdrMetadataEXT::safe_VkHdrMetadataEXT(const VkHdrMetadataEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    displayPrimaryRed(in_struct->displayPrimaryRed),
    displayPrimaryGreen(in_struct->displayPrimaryGreen),
    displayPrimaryBlue(in_struct->displayPrimaryBlue),
    whitePoint(in_struct->whitePoint),
    maxLuminance(in_struct->maxLuminance),
    minLuminance(in_struct->minLuminance),
    maxContentLightLevel(in_struct->maxContentLightLevel),
    maxFrameAverageLightLevel(in_struct->maxFrameAverageLightLevel)
{
}

safe_VkHdrMetadataEXT::safe_VkHdrMetadataEXT()
{}

safe_VkHdrMetadataEXT::safe_VkHdrMetadataEXT(const safe_VkHdrMetadataEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    displayPrimaryRed = src.displayPrimaryRed;
    displayPrimaryGreen = src.displayPrimaryGreen;
    displayPrimaryBlue = src.displayPrimaryBlue;
    whitePoint = src.whitePoint;
    maxLuminance = src.maxLuminance;
    minLuminance = src.minLuminance;
    maxContentLightLevel = src.maxContentLightLevel;
    maxFrameAverageLightLevel = src.maxFrameAverageLightLevel;
}

safe_VkHdrMetadataEXT& safe_VkHdrMetadataEXT::operator=(const safe_VkHdrMetadataEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    displayPrimaryRed = src.displayPrimaryRed;
    displayPrimaryGreen = src.displayPrimaryGreen;
    displayPrimaryBlue = src.displayPrimaryBlue;
    whitePoint = src.whitePoint;
    maxLuminance = src.maxLuminance;
    minLuminance = src.minLuminance;
    maxContentLightLevel = src.maxContentLightLevel;
    maxFrameAverageLightLevel = src.maxFrameAverageLightLevel;

    return *this;
}

safe_VkHdrMetadataEXT::~safe_VkHdrMetadataEXT()
{
}

void safe_VkHdrMetadataEXT::initialize(const VkHdrMetadataEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    displayPrimaryRed = in_struct->displayPrimaryRed;
    displayPrimaryGreen = in_struct->displayPrimaryGreen;
    displayPrimaryBlue = in_struct->displayPrimaryBlue;
    whitePoint = in_struct->whitePoint;
    maxLuminance = in_struct->maxLuminance;
    minLuminance = in_struct->minLuminance;
    maxContentLightLevel = in_struct->maxContentLightLevel;
    maxFrameAverageLightLevel = in_struct->maxFrameAverageLightLevel;
}

void safe_VkHdrMetadataEXT::initialize(const safe_VkHdrMetadataEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    displayPrimaryRed = src->displayPrimaryRed;
    displayPrimaryGreen = src->displayPrimaryGreen;
    displayPrimaryBlue = src->displayPrimaryBlue;
    whitePoint = src->whitePoint;
    maxLuminance = src->maxLuminance;
    minLuminance = src->minLuminance;
    maxContentLightLevel = src->maxContentLightLevel;
    maxFrameAverageLightLevel = src->maxFrameAverageLightLevel;
}
#ifdef VK_USE_PLATFORM_IOS_MVK


safe_VkIOSSurfaceCreateInfoMVK::safe_VkIOSSurfaceCreateInfoMVK(const VkIOSSurfaceCreateInfoMVK* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    pView(in_struct->pView)
{
}

safe_VkIOSSurfaceCreateInfoMVK::safe_VkIOSSurfaceCreateInfoMVK()
{}

safe_VkIOSSurfaceCreateInfoMVK::safe_VkIOSSurfaceCreateInfoMVK(const safe_VkIOSSurfaceCreateInfoMVK& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pView = src.pView;
}

safe_VkIOSSurfaceCreateInfoMVK& safe_VkIOSSurfaceCreateInfoMVK::operator=(const safe_VkIOSSurfaceCreateInfoMVK& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pView = src.pView;

    return *this;
}

safe_VkIOSSurfaceCreateInfoMVK::~safe_VkIOSSurfaceCreateInfoMVK()
{
}

void safe_VkIOSSurfaceCreateInfoMVK::initialize(const VkIOSSurfaceCreateInfoMVK* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    pView = in_struct->pView;
}

void safe_VkIOSSurfaceCreateInfoMVK::initialize(const safe_VkIOSSurfaceCreateInfoMVK* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    pView = src->pView;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK


safe_VkMacOSSurfaceCreateInfoMVK::safe_VkMacOSSurfaceCreateInfoMVK(const VkMacOSSurfaceCreateInfoMVK* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    pView(in_struct->pView)
{
}

safe_VkMacOSSurfaceCreateInfoMVK::safe_VkMacOSSurfaceCreateInfoMVK()
{}

safe_VkMacOSSurfaceCreateInfoMVK::safe_VkMacOSSurfaceCreateInfoMVK(const safe_VkMacOSSurfaceCreateInfoMVK& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pView = src.pView;
}

safe_VkMacOSSurfaceCreateInfoMVK& safe_VkMacOSSurfaceCreateInfoMVK::operator=(const safe_VkMacOSSurfaceCreateInfoMVK& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    pView = src.pView;

    return *this;
}

safe_VkMacOSSurfaceCreateInfoMVK::~safe_VkMacOSSurfaceCreateInfoMVK()
{
}

void safe_VkMacOSSurfaceCreateInfoMVK::initialize(const VkMacOSSurfaceCreateInfoMVK* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    pView = in_struct->pView;
}

void safe_VkMacOSSurfaceCreateInfoMVK::initialize(const safe_VkMacOSSurfaceCreateInfoMVK* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    pView = src->pView;
}
#endif // VK_USE_PLATFORM_MACOS_MVK


safe_VkSamplerReductionModeCreateInfoEXT::safe_VkSamplerReductionModeCreateInfoEXT(const VkSamplerReductionModeCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    reductionMode(in_struct->reductionMode)
{
}

safe_VkSamplerReductionModeCreateInfoEXT::safe_VkSamplerReductionModeCreateInfoEXT()
{}

safe_VkSamplerReductionModeCreateInfoEXT::safe_VkSamplerReductionModeCreateInfoEXT(const safe_VkSamplerReductionModeCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    reductionMode = src.reductionMode;
}

safe_VkSamplerReductionModeCreateInfoEXT& safe_VkSamplerReductionModeCreateInfoEXT::operator=(const safe_VkSamplerReductionModeCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    reductionMode = src.reductionMode;

    return *this;
}

safe_VkSamplerReductionModeCreateInfoEXT::~safe_VkSamplerReductionModeCreateInfoEXT()
{
}

void safe_VkSamplerReductionModeCreateInfoEXT::initialize(const VkSamplerReductionModeCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    reductionMode = in_struct->reductionMode;
}

void safe_VkSamplerReductionModeCreateInfoEXT::initialize(const safe_VkSamplerReductionModeCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    reductionMode = src->reductionMode;
}

safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    filterMinmaxSingleComponentFormats(in_struct->filterMinmaxSingleComponentFormats),
    filterMinmaxImageComponentMapping(in_struct->filterMinmaxImageComponentMapping)
{
}

safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT()
{}

safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(const safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    filterMinmaxSingleComponentFormats = src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = src.filterMinmaxImageComponentMapping;
}

safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=(const safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    filterMinmaxSingleComponentFormats = src.filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = src.filterMinmaxImageComponentMapping;

    return *this;
}

safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::~safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT()
{
}

void safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::initialize(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    filterMinmaxSingleComponentFormats = in_struct->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = in_struct->filterMinmaxImageComponentMapping;
}

void safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::initialize(const safe_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    filterMinmaxSingleComponentFormats = src->filterMinmaxSingleComponentFormats;
    filterMinmaxImageComponentMapping = src->filterMinmaxImageComponentMapping;
}

safe_VkSampleLocationsInfoEXT::safe_VkSampleLocationsInfoEXT(const VkSampleLocationsInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    sampleLocationsPerPixel(in_struct->sampleLocationsPerPixel),
    sampleLocationGridSize(in_struct->sampleLocationGridSize),
    sampleLocationsCount(in_struct->sampleLocationsCount),
    pSampleLocations(nullptr)
{
    if (in_struct->pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[in_struct->sampleLocationsCount];
        memcpy ((void *)pSampleLocations, (void *)in_struct->pSampleLocations, sizeof(VkSampleLocationEXT)*in_struct->sampleLocationsCount);
    }
}

safe_VkSampleLocationsInfoEXT::safe_VkSampleLocationsInfoEXT() :
    pSampleLocations(nullptr)
{}

safe_VkSampleLocationsInfoEXT::safe_VkSampleLocationsInfoEXT(const safe_VkSampleLocationsInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    sampleLocationsPerPixel = src.sampleLocationsPerPixel;
    sampleLocationGridSize = src.sampleLocationGridSize;
    sampleLocationsCount = src.sampleLocationsCount;
    pSampleLocations = nullptr;
    if (src.pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[src.sampleLocationsCount];
        memcpy ((void *)pSampleLocations, (void *)src.pSampleLocations, sizeof(VkSampleLocationEXT)*src.sampleLocationsCount);
    }
}

safe_VkSampleLocationsInfoEXT& safe_VkSampleLocationsInfoEXT::operator=(const safe_VkSampleLocationsInfoEXT& src)
{
    if (&src == this) return *this;

    if (pSampleLocations)
        delete[] pSampleLocations;

    sType = src.sType;
    pNext = src.pNext;
    sampleLocationsPerPixel = src.sampleLocationsPerPixel;
    sampleLocationGridSize = src.sampleLocationGridSize;
    sampleLocationsCount = src.sampleLocationsCount;
    pSampleLocations = nullptr;
    if (src.pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[src.sampleLocationsCount];
        memcpy ((void *)pSampleLocations, (void *)src.pSampleLocations, sizeof(VkSampleLocationEXT)*src.sampleLocationsCount);
    }

    return *this;
}

safe_VkSampleLocationsInfoEXT::~safe_VkSampleLocationsInfoEXT()
{
    if (pSampleLocations)
        delete[] pSampleLocations;
}

void safe_VkSampleLocationsInfoEXT::initialize(const VkSampleLocationsInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    sampleLocationsPerPixel = in_struct->sampleLocationsPerPixel;
    sampleLocationGridSize = in_struct->sampleLocationGridSize;
    sampleLocationsCount = in_struct->sampleLocationsCount;
    pSampleLocations = nullptr;
    if (in_struct->pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[in_struct->sampleLocationsCount];
        memcpy ((void *)pSampleLocations, (void *)in_struct->pSampleLocations, sizeof(VkSampleLocationEXT)*in_struct->sampleLocationsCount);
    }
}

void safe_VkSampleLocationsInfoEXT::initialize(const safe_VkSampleLocationsInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    sampleLocationsPerPixel = src->sampleLocationsPerPixel;
    sampleLocationGridSize = src->sampleLocationGridSize;
    sampleLocationsCount = src->sampleLocationsCount;
    pSampleLocations = nullptr;
    if (src->pSampleLocations) {
        pSampleLocations = new VkSampleLocationEXT[src->sampleLocationsCount];
        memcpy ((void *)pSampleLocations, (void *)src->pSampleLocations, sizeof(VkSampleLocationEXT)*src->sampleLocationsCount);
    }
}

safe_VkRenderPassSampleLocationsBeginInfoEXT::safe_VkRenderPassSampleLocationsBeginInfoEXT(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    attachmentInitialSampleLocationsCount(in_struct->attachmentInitialSampleLocationsCount),
    pAttachmentInitialSampleLocations(nullptr),
    postSubpassSampleLocationsCount(in_struct->postSubpassSampleLocationsCount),
    pPostSubpassSampleLocations(nullptr)
{
    if (in_struct->pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[in_struct->attachmentInitialSampleLocationsCount];
        memcpy ((void *)pAttachmentInitialSampleLocations, (void *)in_struct->pAttachmentInitialSampleLocations, sizeof(VkAttachmentSampleLocationsEXT)*in_struct->attachmentInitialSampleLocationsCount);
    }
    if (in_struct->pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[in_struct->postSubpassSampleLocationsCount];
        memcpy ((void *)pPostSubpassSampleLocations, (void *)in_struct->pPostSubpassSampleLocations, sizeof(VkSubpassSampleLocationsEXT)*in_struct->postSubpassSampleLocationsCount);
    }
}

safe_VkRenderPassSampleLocationsBeginInfoEXT::safe_VkRenderPassSampleLocationsBeginInfoEXT() :
    pAttachmentInitialSampleLocations(nullptr),
    pPostSubpassSampleLocations(nullptr)
{}

safe_VkRenderPassSampleLocationsBeginInfoEXT::safe_VkRenderPassSampleLocationsBeginInfoEXT(const safe_VkRenderPassSampleLocationsBeginInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    attachmentInitialSampleLocationsCount = src.attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = src.postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    if (src.pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[src.attachmentInitialSampleLocationsCount];
        memcpy ((void *)pAttachmentInitialSampleLocations, (void *)src.pAttachmentInitialSampleLocations, sizeof(VkAttachmentSampleLocationsEXT)*src.attachmentInitialSampleLocationsCount);
    }
    if (src.pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[src.postSubpassSampleLocationsCount];
        memcpy ((void *)pPostSubpassSampleLocations, (void *)src.pPostSubpassSampleLocations, sizeof(VkSubpassSampleLocationsEXT)*src.postSubpassSampleLocationsCount);
    }
}

safe_VkRenderPassSampleLocationsBeginInfoEXT& safe_VkRenderPassSampleLocationsBeginInfoEXT::operator=(const safe_VkRenderPassSampleLocationsBeginInfoEXT& src)
{
    if (&src == this) return *this;

    if (pAttachmentInitialSampleLocations)
        delete[] pAttachmentInitialSampleLocations;
    if (pPostSubpassSampleLocations)
        delete[] pPostSubpassSampleLocations;

    sType = src.sType;
    pNext = src.pNext;
    attachmentInitialSampleLocationsCount = src.attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = src.postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    if (src.pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[src.attachmentInitialSampleLocationsCount];
        memcpy ((void *)pAttachmentInitialSampleLocations, (void *)src.pAttachmentInitialSampleLocations, sizeof(VkAttachmentSampleLocationsEXT)*src.attachmentInitialSampleLocationsCount);
    }
    if (src.pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[src.postSubpassSampleLocationsCount];
        memcpy ((void *)pPostSubpassSampleLocations, (void *)src.pPostSubpassSampleLocations, sizeof(VkSubpassSampleLocationsEXT)*src.postSubpassSampleLocationsCount);
    }

    return *this;
}

safe_VkRenderPassSampleLocationsBeginInfoEXT::~safe_VkRenderPassSampleLocationsBeginInfoEXT()
{
    if (pAttachmentInitialSampleLocations)
        delete[] pAttachmentInitialSampleLocations;
    if (pPostSubpassSampleLocations)
        delete[] pPostSubpassSampleLocations;
}

void safe_VkRenderPassSampleLocationsBeginInfoEXT::initialize(const VkRenderPassSampleLocationsBeginInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    attachmentInitialSampleLocationsCount = in_struct->attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = in_struct->postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    if (in_struct->pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[in_struct->attachmentInitialSampleLocationsCount];
        memcpy ((void *)pAttachmentInitialSampleLocations, (void *)in_struct->pAttachmentInitialSampleLocations, sizeof(VkAttachmentSampleLocationsEXT)*in_struct->attachmentInitialSampleLocationsCount);
    }
    if (in_struct->pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[in_struct->postSubpassSampleLocationsCount];
        memcpy ((void *)pPostSubpassSampleLocations, (void *)in_struct->pPostSubpassSampleLocations, sizeof(VkSubpassSampleLocationsEXT)*in_struct->postSubpassSampleLocationsCount);
    }
}

void safe_VkRenderPassSampleLocationsBeginInfoEXT::initialize(const safe_VkRenderPassSampleLocationsBeginInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    attachmentInitialSampleLocationsCount = src->attachmentInitialSampleLocationsCount;
    pAttachmentInitialSampleLocations = nullptr;
    postSubpassSampleLocationsCount = src->postSubpassSampleLocationsCount;
    pPostSubpassSampleLocations = nullptr;
    if (src->pAttachmentInitialSampleLocations) {
        pAttachmentInitialSampleLocations = new VkAttachmentSampleLocationsEXT[src->attachmentInitialSampleLocationsCount];
        memcpy ((void *)pAttachmentInitialSampleLocations, (void *)src->pAttachmentInitialSampleLocations, sizeof(VkAttachmentSampleLocationsEXT)*src->attachmentInitialSampleLocationsCount);
    }
    if (src->pPostSubpassSampleLocations) {
        pPostSubpassSampleLocations = new VkSubpassSampleLocationsEXT[src->postSubpassSampleLocationsCount];
        memcpy ((void *)pPostSubpassSampleLocations, (void *)src->pPostSubpassSampleLocations, sizeof(VkSubpassSampleLocationsEXT)*src->postSubpassSampleLocationsCount);
    }
}

safe_VkPipelineSampleLocationsStateCreateInfoEXT::safe_VkPipelineSampleLocationsStateCreateInfoEXT(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    sampleLocationsEnable(in_struct->sampleLocationsEnable),
    sampleLocationsInfo(&in_struct->sampleLocationsInfo)
{
}

safe_VkPipelineSampleLocationsStateCreateInfoEXT::safe_VkPipelineSampleLocationsStateCreateInfoEXT()
{}

safe_VkPipelineSampleLocationsStateCreateInfoEXT::safe_VkPipelineSampleLocationsStateCreateInfoEXT(const safe_VkPipelineSampleLocationsStateCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    sampleLocationsEnable = src.sampleLocationsEnable;
    sampleLocationsInfo.initialize(&src.sampleLocationsInfo);
}

safe_VkPipelineSampleLocationsStateCreateInfoEXT& safe_VkPipelineSampleLocationsStateCreateInfoEXT::operator=(const safe_VkPipelineSampleLocationsStateCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    sampleLocationsEnable = src.sampleLocationsEnable;
    sampleLocationsInfo.initialize(&src.sampleLocationsInfo);

    return *this;
}

safe_VkPipelineSampleLocationsStateCreateInfoEXT::~safe_VkPipelineSampleLocationsStateCreateInfoEXT()
{
}

void safe_VkPipelineSampleLocationsStateCreateInfoEXT::initialize(const VkPipelineSampleLocationsStateCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    sampleLocationsEnable = in_struct->sampleLocationsEnable;
    sampleLocationsInfo.initialize(&in_struct->sampleLocationsInfo);
}

void safe_VkPipelineSampleLocationsStateCreateInfoEXT::initialize(const safe_VkPipelineSampleLocationsStateCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    sampleLocationsEnable = src->sampleLocationsEnable;
    sampleLocationsInfo.initialize(&src->sampleLocationsInfo);
}

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    sampleLocationSampleCounts(in_struct->sampleLocationSampleCounts),
    maxSampleLocationGridSize(in_struct->maxSampleLocationGridSize),
    sampleLocationSubPixelBits(in_struct->sampleLocationSubPixelBits),
    variableSampleLocations(in_struct->variableSampleLocations)
{
    for (uint32_t i=0; i<2; ++i) {
        sampleLocationCoordinateRange[i] = in_struct->sampleLocationCoordinateRange[i];
    }
}

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::safe_VkPhysicalDeviceSampleLocationsPropertiesEXT()
{}

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::safe_VkPhysicalDeviceSampleLocationsPropertiesEXT(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    sampleLocationSampleCounts = src.sampleLocationSampleCounts;
    maxSampleLocationGridSize = src.maxSampleLocationGridSize;
    sampleLocationSubPixelBits = src.sampleLocationSubPixelBits;
    variableSampleLocations = src.variableSampleLocations;
    for (uint32_t i=0; i<2; ++i) {
        sampleLocationCoordinateRange[i] = src.sampleLocationCoordinateRange[i];
    }
}

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    sampleLocationSampleCounts = src.sampleLocationSampleCounts;
    maxSampleLocationGridSize = src.maxSampleLocationGridSize;
    sampleLocationSubPixelBits = src.sampleLocationSubPixelBits;
    variableSampleLocations = src.variableSampleLocations;
    for (uint32_t i=0; i<2; ++i) {
        sampleLocationCoordinateRange[i] = src.sampleLocationCoordinateRange[i];
    }

    return *this;
}

safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::~safe_VkPhysicalDeviceSampleLocationsPropertiesEXT()
{
}

void safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::initialize(const VkPhysicalDeviceSampleLocationsPropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    sampleLocationSampleCounts = in_struct->sampleLocationSampleCounts;
    maxSampleLocationGridSize = in_struct->maxSampleLocationGridSize;
    sampleLocationSubPixelBits = in_struct->sampleLocationSubPixelBits;
    variableSampleLocations = in_struct->variableSampleLocations;
    for (uint32_t i=0; i<2; ++i) {
        sampleLocationCoordinateRange[i] = in_struct->sampleLocationCoordinateRange[i];
    }
}

void safe_VkPhysicalDeviceSampleLocationsPropertiesEXT::initialize(const safe_VkPhysicalDeviceSampleLocationsPropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    sampleLocationSampleCounts = src->sampleLocationSampleCounts;
    maxSampleLocationGridSize = src->maxSampleLocationGridSize;
    sampleLocationSubPixelBits = src->sampleLocationSubPixelBits;
    variableSampleLocations = src->variableSampleLocations;
    for (uint32_t i=0; i<2; ++i) {
        sampleLocationCoordinateRange[i] = src->sampleLocationCoordinateRange[i];
    }
}

safe_VkMultisamplePropertiesEXT::safe_VkMultisamplePropertiesEXT(const VkMultisamplePropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    maxSampleLocationGridSize(in_struct->maxSampleLocationGridSize)
{
}

safe_VkMultisamplePropertiesEXT::safe_VkMultisamplePropertiesEXT()
{}

safe_VkMultisamplePropertiesEXT::safe_VkMultisamplePropertiesEXT(const safe_VkMultisamplePropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    maxSampleLocationGridSize = src.maxSampleLocationGridSize;
}

safe_VkMultisamplePropertiesEXT& safe_VkMultisamplePropertiesEXT::operator=(const safe_VkMultisamplePropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    maxSampleLocationGridSize = src.maxSampleLocationGridSize;

    return *this;
}

safe_VkMultisamplePropertiesEXT::~safe_VkMultisamplePropertiesEXT()
{
}

void safe_VkMultisamplePropertiesEXT::initialize(const VkMultisamplePropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    maxSampleLocationGridSize = in_struct->maxSampleLocationGridSize;
}

void safe_VkMultisamplePropertiesEXT::initialize(const safe_VkMultisamplePropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    maxSampleLocationGridSize = src->maxSampleLocationGridSize;
}

safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    advancedBlendCoherentOperations(in_struct->advancedBlendCoherentOperations)
{
}

safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT()
{}

safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(const safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    advancedBlendCoherentOperations = src.advancedBlendCoherentOperations;
}

safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=(const safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    advancedBlendCoherentOperations = src.advancedBlendCoherentOperations;

    return *this;
}

safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::~safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT()
{
}

void safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::initialize(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    advancedBlendCoherentOperations = in_struct->advancedBlendCoherentOperations;
}

void safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::initialize(const safe_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    advancedBlendCoherentOperations = src->advancedBlendCoherentOperations;
}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    advancedBlendMaxColorAttachments(in_struct->advancedBlendMaxColorAttachments),
    advancedBlendIndependentBlend(in_struct->advancedBlendIndependentBlend),
    advancedBlendNonPremultipliedSrcColor(in_struct->advancedBlendNonPremultipliedSrcColor),
    advancedBlendNonPremultipliedDstColor(in_struct->advancedBlendNonPremultipliedDstColor),
    advancedBlendCorrelatedOverlap(in_struct->advancedBlendCorrelatedOverlap),
    advancedBlendAllOperations(in_struct->advancedBlendAllOperations)
{
}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT()
{}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    advancedBlendMaxColorAttachments = src.advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = src.advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = src.advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = src.advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = src.advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = src.advancedBlendAllOperations;
}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=(const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    advancedBlendMaxColorAttachments = src.advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = src.advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = src.advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = src.advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = src.advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = src.advancedBlendAllOperations;

    return *this;
}

safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::~safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT()
{
}

void safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::initialize(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    advancedBlendMaxColorAttachments = in_struct->advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = in_struct->advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = in_struct->advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = in_struct->advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = in_struct->advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = in_struct->advancedBlendAllOperations;
}

void safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::initialize(const safe_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    advancedBlendMaxColorAttachments = src->advancedBlendMaxColorAttachments;
    advancedBlendIndependentBlend = src->advancedBlendIndependentBlend;
    advancedBlendNonPremultipliedSrcColor = src->advancedBlendNonPremultipliedSrcColor;
    advancedBlendNonPremultipliedDstColor = src->advancedBlendNonPremultipliedDstColor;
    advancedBlendCorrelatedOverlap = src->advancedBlendCorrelatedOverlap;
    advancedBlendAllOperations = src->advancedBlendAllOperations;
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    srcPremultiplied(in_struct->srcPremultiplied),
    dstPremultiplied(in_struct->dstPremultiplied),
    blendOverlap(in_struct->blendOverlap)
{
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT()
{}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    srcPremultiplied = src.srcPremultiplied;
    dstPremultiplied = src.dstPremultiplied;
    blendOverlap = src.blendOverlap;
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    srcPremultiplied = src.srcPremultiplied;
    dstPremultiplied = src.dstPremultiplied;
    blendOverlap = src.blendOverlap;

    return *this;
}

safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::~safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT()
{
}

void safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::initialize(const VkPipelineColorBlendAdvancedStateCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    srcPremultiplied = in_struct->srcPremultiplied;
    dstPremultiplied = in_struct->dstPremultiplied;
    blendOverlap = in_struct->blendOverlap;
}

void safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT::initialize(const safe_VkPipelineColorBlendAdvancedStateCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    srcPremultiplied = src->srcPremultiplied;
    dstPremultiplied = src->dstPremultiplied;
    blendOverlap = src->blendOverlap;
}

safe_VkPipelineCoverageToColorStateCreateInfoNV::safe_VkPipelineCoverageToColorStateCreateInfoNV(const VkPipelineCoverageToColorStateCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    coverageToColorEnable(in_struct->coverageToColorEnable),
    coverageToColorLocation(in_struct->coverageToColorLocation)
{
}

safe_VkPipelineCoverageToColorStateCreateInfoNV::safe_VkPipelineCoverageToColorStateCreateInfoNV()
{}

safe_VkPipelineCoverageToColorStateCreateInfoNV::safe_VkPipelineCoverageToColorStateCreateInfoNV(const safe_VkPipelineCoverageToColorStateCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    coverageToColorEnable = src.coverageToColorEnable;
    coverageToColorLocation = src.coverageToColorLocation;
}

safe_VkPipelineCoverageToColorStateCreateInfoNV& safe_VkPipelineCoverageToColorStateCreateInfoNV::operator=(const safe_VkPipelineCoverageToColorStateCreateInfoNV& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    coverageToColorEnable = src.coverageToColorEnable;
    coverageToColorLocation = src.coverageToColorLocation;

    return *this;
}

safe_VkPipelineCoverageToColorStateCreateInfoNV::~safe_VkPipelineCoverageToColorStateCreateInfoNV()
{
}

void safe_VkPipelineCoverageToColorStateCreateInfoNV::initialize(const VkPipelineCoverageToColorStateCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    coverageToColorEnable = in_struct->coverageToColorEnable;
    coverageToColorLocation = in_struct->coverageToColorLocation;
}

void safe_VkPipelineCoverageToColorStateCreateInfoNV::initialize(const safe_VkPipelineCoverageToColorStateCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    coverageToColorEnable = src->coverageToColorEnable;
    coverageToColorLocation = src->coverageToColorLocation;
}

safe_VkPipelineCoverageModulationStateCreateInfoNV::safe_VkPipelineCoverageModulationStateCreateInfoNV(const VkPipelineCoverageModulationStateCreateInfoNV* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    coverageModulationMode(in_struct->coverageModulationMode),
    coverageModulationTableEnable(in_struct->coverageModulationTableEnable),
    coverageModulationTableCount(in_struct->coverageModulationTableCount),
    pCoverageModulationTable(nullptr)
{
    if (in_struct->pCoverageModulationTable) {
        pCoverageModulationTable = new float[in_struct->coverageModulationTableCount];
        memcpy ((void *)pCoverageModulationTable, (void *)in_struct->pCoverageModulationTable, sizeof(float)*in_struct->coverageModulationTableCount);
    }
}

safe_VkPipelineCoverageModulationStateCreateInfoNV::safe_VkPipelineCoverageModulationStateCreateInfoNV() :
    pCoverageModulationTable(nullptr)
{}

safe_VkPipelineCoverageModulationStateCreateInfoNV::safe_VkPipelineCoverageModulationStateCreateInfoNV(const safe_VkPipelineCoverageModulationStateCreateInfoNV& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    coverageModulationMode = src.coverageModulationMode;
    coverageModulationTableEnable = src.coverageModulationTableEnable;
    coverageModulationTableCount = src.coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    if (src.pCoverageModulationTable) {
        pCoverageModulationTable = new float[src.coverageModulationTableCount];
        memcpy ((void *)pCoverageModulationTable, (void *)src.pCoverageModulationTable, sizeof(float)*src.coverageModulationTableCount);
    }
}

safe_VkPipelineCoverageModulationStateCreateInfoNV& safe_VkPipelineCoverageModulationStateCreateInfoNV::operator=(const safe_VkPipelineCoverageModulationStateCreateInfoNV& src)
{
    if (&src == this) return *this;

    if (pCoverageModulationTable)
        delete[] pCoverageModulationTable;

    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    coverageModulationMode = src.coverageModulationMode;
    coverageModulationTableEnable = src.coverageModulationTableEnable;
    coverageModulationTableCount = src.coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    if (src.pCoverageModulationTable) {
        pCoverageModulationTable = new float[src.coverageModulationTableCount];
        memcpy ((void *)pCoverageModulationTable, (void *)src.pCoverageModulationTable, sizeof(float)*src.coverageModulationTableCount);
    }

    return *this;
}

safe_VkPipelineCoverageModulationStateCreateInfoNV::~safe_VkPipelineCoverageModulationStateCreateInfoNV()
{
    if (pCoverageModulationTable)
        delete[] pCoverageModulationTable;
}

void safe_VkPipelineCoverageModulationStateCreateInfoNV::initialize(const VkPipelineCoverageModulationStateCreateInfoNV* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    coverageModulationMode = in_struct->coverageModulationMode;
    coverageModulationTableEnable = in_struct->coverageModulationTableEnable;
    coverageModulationTableCount = in_struct->coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    if (in_struct->pCoverageModulationTable) {
        pCoverageModulationTable = new float[in_struct->coverageModulationTableCount];
        memcpy ((void *)pCoverageModulationTable, (void *)in_struct->pCoverageModulationTable, sizeof(float)*in_struct->coverageModulationTableCount);
    }
}

void safe_VkPipelineCoverageModulationStateCreateInfoNV::initialize(const safe_VkPipelineCoverageModulationStateCreateInfoNV* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    coverageModulationMode = src->coverageModulationMode;
    coverageModulationTableEnable = src->coverageModulationTableEnable;
    coverageModulationTableCount = src->coverageModulationTableCount;
    pCoverageModulationTable = nullptr;
    if (src->pCoverageModulationTable) {
        pCoverageModulationTable = new float[src->coverageModulationTableCount];
        memcpy ((void *)pCoverageModulationTable, (void *)src->pCoverageModulationTable, sizeof(float)*src->coverageModulationTableCount);
    }
}

safe_VkValidationCacheCreateInfoEXT::safe_VkValidationCacheCreateInfoEXT(const VkValidationCacheCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    flags(in_struct->flags),
    initialDataSize(in_struct->initialDataSize),
    pInitialData(in_struct->pInitialData)
{
}

safe_VkValidationCacheCreateInfoEXT::safe_VkValidationCacheCreateInfoEXT()
{}

safe_VkValidationCacheCreateInfoEXT::safe_VkValidationCacheCreateInfoEXT(const safe_VkValidationCacheCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    initialDataSize = src.initialDataSize;
    pInitialData = src.pInitialData;
}

safe_VkValidationCacheCreateInfoEXT& safe_VkValidationCacheCreateInfoEXT::operator=(const safe_VkValidationCacheCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    flags = src.flags;
    initialDataSize = src.initialDataSize;
    pInitialData = src.pInitialData;

    return *this;
}

safe_VkValidationCacheCreateInfoEXT::~safe_VkValidationCacheCreateInfoEXT()
{
}

void safe_VkValidationCacheCreateInfoEXT::initialize(const VkValidationCacheCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    flags = in_struct->flags;
    initialDataSize = in_struct->initialDataSize;
    pInitialData = in_struct->pInitialData;
}

void safe_VkValidationCacheCreateInfoEXT::initialize(const safe_VkValidationCacheCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    flags = src->flags;
    initialDataSize = src->initialDataSize;
    pInitialData = src->pInitialData;
}

safe_VkShaderModuleValidationCacheCreateInfoEXT::safe_VkShaderModuleValidationCacheCreateInfoEXT(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    validationCache(in_struct->validationCache)
{
}

safe_VkShaderModuleValidationCacheCreateInfoEXT::safe_VkShaderModuleValidationCacheCreateInfoEXT()
{}

safe_VkShaderModuleValidationCacheCreateInfoEXT::safe_VkShaderModuleValidationCacheCreateInfoEXT(const safe_VkShaderModuleValidationCacheCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    validationCache = src.validationCache;
}

safe_VkShaderModuleValidationCacheCreateInfoEXT& safe_VkShaderModuleValidationCacheCreateInfoEXT::operator=(const safe_VkShaderModuleValidationCacheCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    validationCache = src.validationCache;

    return *this;
}

safe_VkShaderModuleValidationCacheCreateInfoEXT::~safe_VkShaderModuleValidationCacheCreateInfoEXT()
{
}

void safe_VkShaderModuleValidationCacheCreateInfoEXT::initialize(const VkShaderModuleValidationCacheCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    validationCache = in_struct->validationCache;
}

void safe_VkShaderModuleValidationCacheCreateInfoEXT::initialize(const safe_VkShaderModuleValidationCacheCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    validationCache = src->validationCache;
}

safe_VkDeviceQueueGlobalPriorityCreateInfoEXT::safe_VkDeviceQueueGlobalPriorityCreateInfoEXT(const VkDeviceQueueGlobalPriorityCreateInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    globalPriority(in_struct->globalPriority)
{
}

safe_VkDeviceQueueGlobalPriorityCreateInfoEXT::safe_VkDeviceQueueGlobalPriorityCreateInfoEXT()
{}

safe_VkDeviceQueueGlobalPriorityCreateInfoEXT::safe_VkDeviceQueueGlobalPriorityCreateInfoEXT(const safe_VkDeviceQueueGlobalPriorityCreateInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    globalPriority = src.globalPriority;
}

safe_VkDeviceQueueGlobalPriorityCreateInfoEXT& safe_VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=(const safe_VkDeviceQueueGlobalPriorityCreateInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    globalPriority = src.globalPriority;

    return *this;
}

safe_VkDeviceQueueGlobalPriorityCreateInfoEXT::~safe_VkDeviceQueueGlobalPriorityCreateInfoEXT()
{
}

void safe_VkDeviceQueueGlobalPriorityCreateInfoEXT::initialize(const VkDeviceQueueGlobalPriorityCreateInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    globalPriority = in_struct->globalPriority;
}

void safe_VkDeviceQueueGlobalPriorityCreateInfoEXT::initialize(const safe_VkDeviceQueueGlobalPriorityCreateInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    globalPriority = src->globalPriority;
}

safe_VkImportMemoryHostPointerInfoEXT::safe_VkImportMemoryHostPointerInfoEXT(const VkImportMemoryHostPointerInfoEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    handleType(in_struct->handleType),
    pHostPointer(in_struct->pHostPointer)
{
}

safe_VkImportMemoryHostPointerInfoEXT::safe_VkImportMemoryHostPointerInfoEXT()
{}

safe_VkImportMemoryHostPointerInfoEXT::safe_VkImportMemoryHostPointerInfoEXT(const safe_VkImportMemoryHostPointerInfoEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    pHostPointer = src.pHostPointer;
}

safe_VkImportMemoryHostPointerInfoEXT& safe_VkImportMemoryHostPointerInfoEXT::operator=(const safe_VkImportMemoryHostPointerInfoEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    handleType = src.handleType;
    pHostPointer = src.pHostPointer;

    return *this;
}

safe_VkImportMemoryHostPointerInfoEXT::~safe_VkImportMemoryHostPointerInfoEXT()
{
}

void safe_VkImportMemoryHostPointerInfoEXT::initialize(const VkImportMemoryHostPointerInfoEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    handleType = in_struct->handleType;
    pHostPointer = in_struct->pHostPointer;
}

void safe_VkImportMemoryHostPointerInfoEXT::initialize(const safe_VkImportMemoryHostPointerInfoEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    handleType = src->handleType;
    pHostPointer = src->pHostPointer;
}

safe_VkMemoryHostPointerPropertiesEXT::safe_VkMemoryHostPointerPropertiesEXT(const VkMemoryHostPointerPropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    memoryTypeBits(in_struct->memoryTypeBits)
{
}

safe_VkMemoryHostPointerPropertiesEXT::safe_VkMemoryHostPointerPropertiesEXT()
{}

safe_VkMemoryHostPointerPropertiesEXT::safe_VkMemoryHostPointerPropertiesEXT(const safe_VkMemoryHostPointerPropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;
}

safe_VkMemoryHostPointerPropertiesEXT& safe_VkMemoryHostPointerPropertiesEXT::operator=(const safe_VkMemoryHostPointerPropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    memoryTypeBits = src.memoryTypeBits;

    return *this;
}

safe_VkMemoryHostPointerPropertiesEXT::~safe_VkMemoryHostPointerPropertiesEXT()
{
}

void safe_VkMemoryHostPointerPropertiesEXT::initialize(const VkMemoryHostPointerPropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    memoryTypeBits = in_struct->memoryTypeBits;
}

void safe_VkMemoryHostPointerPropertiesEXT::initialize(const safe_VkMemoryHostPointerPropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    memoryTypeBits = src->memoryTypeBits;
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct) :
    sType(in_struct->sType),
    pNext(in_struct->pNext),
    minImportedHostPointerAlignment(in_struct->minImportedHostPointerAlignment)
{
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT()
{}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& src)
{
    sType = src.sType;
    pNext = src.pNext;
    minImportedHostPointerAlignment = src.minImportedHostPointerAlignment;
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& src)
{
    if (&src == this) return *this;


    sType = src.sType;
    pNext = src.pNext;
    minImportedHostPointerAlignment = src.minImportedHostPointerAlignment;

    return *this;
}

safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::~safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT()
{
}

void safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::initialize(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT* in_struct)
{
    sType = in_struct->sType;
    pNext = in_struct->pNext;
    minImportedHostPointerAlignment = in_struct->minImportedHostPointerAlignment;
}

void safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT::initialize(const safe_VkPhysicalDeviceExternalMemoryHostPropertiesEXT* src)
{
    sType = src->sType;
    pNext = src->pNext;
    minImportedHostPointerAlignment = src->minImportedHostPointerAlignment;
}
