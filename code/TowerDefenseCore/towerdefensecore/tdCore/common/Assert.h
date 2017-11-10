#pragma once

#include <assert.h>
#include "tdCore/common/Log.h"

#define TD_ASSERT(condition, msg) \
    do { TD_IF_LOG(condition, msg); assert(condition); } while(false);