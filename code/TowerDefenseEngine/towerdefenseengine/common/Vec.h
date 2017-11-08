#pragma once

#include <cmath>

namespace tde
{

using tdeU32 = unsigned int;
using tdeF32 = float;

template<int Size, typename T>
struct tdeVec
{
    using Self = tdeVec<Size, T>;

public:
    static tdeU32 const ms_size = Size;

public:
    inline static Self const GetZero() { Self(); }

public:
    inline tdeF32 const GetSquarLength() const
    {
        tdeF32 result = 0.0f;

        for (auto const& component : m_components)
        {
            result += component*component;
        }

        return result;
    }
    inline tdeF32 const GetLength() const  { return sqrt(GetSquarLength(lhs, rhs)); }

    inline T const& operator[](tdeU32 const index) const { return m_components[index]; }
    inline T& operator[](tdeU32 const index) { return m_components[index]; }

private:
    T m_components[ms_size];
};

};