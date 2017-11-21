#pragma once

#include "tdCore/combatSystem/CombatDefs.h"

namespace TowerDefense
{

class ICombatAttacker abstract
{
public:
    virtual SDamage const& GetMagicDamage() const = 0;
    virtual SDamage const& GetPhysicalDamage() const = 0;
    virtual tdU32 const GetMagicAttack() const = 0;
    virtual tdU32 const GetPhysicalAttack() const = 0;
    virtual EPhysicalDamageType const GetPhysicalDamageType() const = 0;
};

} // TowerDefense