#pragma once

#include <random>

namespace TowerDefense
{

struct SDamage
{
public:
    tdU32 m_minDamage;
    tdU32 m_maxDamage;

public:
    SDamage();
    SDamage(tdU32 const minDamage, tdU32 const maxDamage);

    SDamage const operator* (tdF32 const rhs) const;
};

} // TowerDefense