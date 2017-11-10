#pragma once

#include "tdCore/unit/IGameUnit.h"
#include "tdCore/combatSystem/ICombatAttacker.h"

namespace TowerDefense
{
    
class ITower abstract
    : public IGameUnit
    , public ICombatAttacker
{
public:

};

} // tde