#pragma once

// #define VEC2_USE_FLOAT_POINT

namespace tde
{

struct SVec2
{
#ifdef VEC2_USE_FLOAT_POINT
    float m_x;
    float m_y;
#else
    double m_x;
    double m_y;
#endif
};

};