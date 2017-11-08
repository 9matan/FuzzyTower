#pragma once

#include "tdeInterface/combatSystem/CombatDefs.h"

namespace tde
{

class ICombatAttacker abstract
{
public:
    virtual tdeU32 const GetMagicDamage() const = 0;
    virtual tdeU32 const GetPhysicalDamage() const = 0;
    virtual tdeU32 const GetMagicAttack() const = 0;
    virtual tdeU32 const GetPhysicalAttack() const = 0;
    virtual EPhysicalDamageType const GetPhysicalDamageType() const = 0;
};

} // tde