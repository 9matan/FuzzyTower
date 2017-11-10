#pragma once

#include <cmath>

namespace TowerDefense
{

using tdU32 = unsigned int;
using tdF32 = float;

template<int Size, typename T>
struct tdVec
{
    using Self = tdVec<Size, T>;

public:
    static tdU32 const ms_size = Size;

public:
    inline static Self const GetZero() { Self(); }

public:
    inline tdF32 const GetSquarLength() const
    {
        tdF32 result = 0.0f;

        for (auto const& component : m_components)
        {
            result += component*component;
        }

        return result;
    }
    inline tdF32 const GetLength() const  { return sqrt(GetSquarLength(lhs, rhs)); }

    inline T const& operator[](tdU32 const index) const { return m_components[index]; }
    inline T& operator[](tdU32 const index) { return m_components[index]; }

private:
    T m_components[ms_size];
};

}; // TowerDefense