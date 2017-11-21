#pragma once

#include <algorithm>
#include <cmath>

namespace TowerDefense
{

using std::max;
using std::min;

template<typename T>
inline T const clamp(T const& val, T const& minVal, T const& maxVal)
{
    return min(max(minVal, val), maxVal);
}

} // TowerDefense