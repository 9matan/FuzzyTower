#pragma once

#ifdef TDE_USE_FUZZYLITE

#include "tdeInterface/combatSystem/ICombatSystem.h"

namespace fl
{

class Engine;

} // fl

namespace tde
{
    
class IDataSystem;

class CFuzzyCombatSystem
    : public ICombatSystem
{
public:
    static tdeBool const IsValidRules(fl::Engine const& combatRules);

public:
    CFuzzyCombatSystem(CUniquePtr<fl::Engine> combatRules);

    virtual void Initialize() override;
    virtual tdeBool Fight(ICombatAttacker& attacker, ICombatDefender& defender) const override;
    virtual void Clear() override;

    

private:
    CUniquePtr<fl::Engine> m_combatRules;
};

} // tde

#endif // TDE_USE_FUZZYLITE