#pragma once

#include "common/Vec.h"

namespace tde
{
    
#ifdef TDE_VEC2REAL_USE_FLOAT
using Real = float;
#else
using Real = double;
#endif

template<>
struct tdeVec<2, Real>
{
    using Self = tdeVec<2, Real>;

public:
    static tdeU32 const ms_size = 2;

public:
    inline static Self const GetZero() { return Self((Real)0.0f, (Real)0.0f); }

public:
    Self(Real x, Real y)
        : m_data{x, y}
    {}

    inline tdeF32 const GetSquarLength() const { return m_data.m_x * m_data.m_x + m_data.m_y * m_data.m_y; }
    inline tdeF32 const GetLength() const { return sqrt(GetSquarLength()); }

    inline Real const& operator[](tdeU32 const index) const { return m_data.m_components[index]; }
    inline Real& operator[](tdeU32 const index) { return m_data.m_components[index]; }

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

using tdeVec2Real = tdeVec<2, Real>;

} // tde