#pragma once

#ifdef TDE_USE_FUZZYLITE

#include "tdCore/combatSystem/ICombatSystem.h"

namespace fl
{

class Engine;

} // fl

namespace TowerDefense
{

struct SDamage;

class CFuzzyCombatSystem
    : public ICombatSystem
{
public:
    static tdBool const IsValidRules(fl::Engine const& combatRules);

public:
    CFuzzyCombatSystem(CUniquePtr<fl::Engine> combatRules);

    virtual void Initialize() override;
    virtual tdBool const Fight(ICombatAttacker& attacker, ICombatDefender& defender) const override;
    virtual void Clear() override;

private:
    CUniquePtr<fl::Engine> m_combatRules;

private:
    tdU32 const GetDamageValue(SDamage const& damage) const;
};

} // TowerDefense

#endif // TDE_USE_FUZZYLITE