#pragma once

namespace TowerDefense
{

class ICombatDefender abstract
{
public:
    virtual tdU32 const GetPhysicalDefense() const = 0;
    virtual tdU32 const GetMagicDefense() const = 0;
    virtual tdU32 const GetHitPoints() const = 0;
    virtual void TakeDamage(tdU32 const damage) = 0;
    virtual tdBool const IsAlive() const = 0;    
};

} // TowerDefense