#pragma once

#include <memory>
#include <string>

#define TDE_VEC2REAL_USE_FLOAT
#include "common/Vec2Real.h"

namespace tde
{

using tdeString = std::string;
using tdePos = tdeVec2Real;
using tdeF32 = float;
using tdeF64 = double;
using tdeU32 = unsigned int;
using tdeBool = bool;

template<class T>
using CWeakPtr = std::weak_ptr<T>;
template<class T>
using CSharedPtr = std::shared_ptr<T>;
template<class T>
using CUniquePtr = std::unique_ptr<T>;

} // tde