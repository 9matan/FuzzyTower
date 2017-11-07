#pragma once

#include "TypeDefs.h"

namespace tde
{
 
class ICombatTower;
class ICombatWarrior;

class IFightSystem abstract
{
public:
    virtual void Fight(ICombatTower& tower, ICombatWarrior& warrior) const = 0;
};

} // tde