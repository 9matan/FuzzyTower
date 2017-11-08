#pragma once

#include "TypeDefs.h"

namespace tde
{

class IDataSystem;
class ICombatTower;
class ICombatWarrior;

class IFightSystem abstract
{
public:
    virtual void Initialize(CSharedPtr<IDataSystem> const& dataSystem) = 0;
    virtual tdeBool Fight(ICombatTower& tower, ICombatWarrior& warrior) const = 0;
    virtual void Clear() = 0;
};

} // tde