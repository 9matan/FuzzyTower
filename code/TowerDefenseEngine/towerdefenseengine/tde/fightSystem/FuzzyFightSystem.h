#pragma once

#include "TypeDefs.h"

#include "tdeInterface/fightSystem/IFightSystem.h"

namespace fl
{

class Engine;

} // fl

namespace tde
{
    
class FuzzyFightSystem
    : public IFightSystem
{
public:
    void LoadRules();
    virtual void Fight(ICombatTower& tower, ICombatWarrior& warrior) const override;

private:
    fl::Engine* m_fightRulesEngine;
};

} // tde