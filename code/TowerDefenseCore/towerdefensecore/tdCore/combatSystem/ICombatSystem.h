#pragma once

namespace TowerDefense
{

class IDataSystem;
class ICombatAttacker;
class ICombatDefender;

class ICombatSystem abstract
{
public:
    virtual void Initialize() = 0;
    virtual tdBool const Fight(ICombatAttacker& attacker, ICombatDefender& defender) const = 0;
    virtual void Clear() = 0;
};

} // TowerDefense