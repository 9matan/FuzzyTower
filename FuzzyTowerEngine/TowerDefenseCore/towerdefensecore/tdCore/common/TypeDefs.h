#pragma once

#include <memory>
#include <string>

#define TD_VEC2REAL_USE_FLOAT
#include "tdCore/common/math/Vec2Real.h"

namespace TowerDefense
{

using tdString = std::string;
using tdPos = tdVec2Real;
using tdF32 = float;
using tdF64 = double;
using tdU32 = unsigned int;
using tdBool = bool;

template<class T>
using CWeakPtr = std::weak_ptr<T>;
template<class T>
using CSharedPtr = std::shared_ptr<T>;
template<class T>
using CUniquePtr = std::unique_ptr<T>;

} // TowerDefense