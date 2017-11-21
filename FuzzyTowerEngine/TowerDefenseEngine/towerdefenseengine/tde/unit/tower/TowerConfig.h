#pragma once

#include "tdCore/combatSystem/CombatDefs.h"

namespace TowerDefense
{
    
struct STowerConfig
{
public:
    SDamage m_magicDamage;
    tdU32 m_magicAttack;
    SDamage m_physicalDamage;
    tdU32 m_physicalAttack;
    EPhysicalDamageType m_physicalDamageType;
};

} // TowerDefense