#pragma once

#include "tdeInterface/unit/IGameUnit.h"
#include "tdeInterface/combatSystem/ICombatDefender.h"

namespace tde
{

class IWarrior abstract
    : public IGameUnit
    , public ICombatDefender
{
public:

};

} // tde