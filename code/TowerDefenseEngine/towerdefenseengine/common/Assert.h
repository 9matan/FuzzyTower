#pragma once

#include <assert.h>
#include "common/Log.h"

#define TDE_ASSERT(condition, msg) \
    do { TDE_IF_LOG(condition, msg); assert(condition); } while(false);