#pragma once

#include "tdCore/unit/IGameUnit.h"
#include "tdCore/combatSystem/ICombatDefender.h"

namespace TowerDefense
{

class IWarrior abstract
    : public IGameUnit
    , public ICombatDefender
{
public:

};

} // tde