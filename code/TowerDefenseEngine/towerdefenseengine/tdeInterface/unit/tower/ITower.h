#pragma once

#include "TypeDefs.h"

#include "tdeInterface/unit/IGameUnit.h"
#include "tdeInterface/unit/tower/ICombatTower.h"

namespace tde
{
    
class ITower abstract
    : public IGameUnit
    , public ICombatTower
{
public:

};

} // tde