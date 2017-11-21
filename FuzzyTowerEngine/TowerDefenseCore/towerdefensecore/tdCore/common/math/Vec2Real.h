#pragma once

#include "tdCore/common/math/Vec.h"

namespace TowerDefense
{
    
#ifdef TD_VEC2REAL_USE_FLOAT
using Real = float;
#else
using Real = double;
#endif

template<>
struct tdVec<2, Real>
{
    using Self = tdVec<2, Real>;

public:
    static tdU32 const ms_size = 2;

public:
    inline static Self const GetZero() { return Self((Real)0.0f, (Real)0.0f); }

public:
    Self(Real x, Real y)
        : m_data{x, y}
    {}

    inline tdF32 const GetSquarLength() const { return m_data.m_x * m_data.m_x + m_data.m_y * m_data.m_y; }
    inline tdF32 const GetLength() const { return sqrt(GetSquarLength()); }

    inline Real const& operator[](tdU32 const index) const { return m_data.m_components[index]; }
    inline Real& operator[](tdU32 const index) { return m_data.m_components[index]; }

private:
    union
    {
        struct
        {
            Real m_x;
            Real m_y;
        };
        Real m_components[ms_size];
    } m_data;
};

using tdVec2Real = tdVec<2, Real>;

} // TowerDefense