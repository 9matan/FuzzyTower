#pragma once

#include "TypeDefs.h"

#include "tdeInterface/unit/IGameUnit.h"
#include "tdeInterface/unit/warrior/ICombatWarrior.h"

namespace tde
{

class IWarrior abstract
    : public IGameUnit
    , public ICombatWarrior
{
public:

};

} // tde