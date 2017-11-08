#pragma once

namespace tde
{
    
class ICombatDefender abstract
{
public:
    virtual tdeU32 const GetPhysicalDefense() const = 0;
    virtual tdeU32 const GetMagicDefense() const = 0;
    virtual tdeU32 const GetHitPoints() const = 0;
    virtual void TakeDamage(tdeU32 const damage) = 0;
    virtual tdeBool const IsAlive() const = 0;    
};

} // tde