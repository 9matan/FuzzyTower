#pragma once

#include "tdeInterface/combatSystem/CombatDefs.h"

namespace tde
{
    
struct STowerConfig
{
public:
    tdeU32 m_magicDamage;
    tdeU32 m_magicAttack;
    tdeU32 m_physicalDamage;
    tdeU32 m_physicalAttack;
    EPhysicalDamageType m_physicalDamageType;
};

} // tde