#pragma once

#include "tdeInterface/unit/IGameUnit.h"
#include "tdeInterface/combatSystem/ICombatAttacker.h"

namespace tde
{
    
class ITower abstract
    : public IGameUnit
    , public ICombatAttacker
{
public:

};

} // tde