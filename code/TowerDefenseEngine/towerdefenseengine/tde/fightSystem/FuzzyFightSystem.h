#pragma once

#include "TypeDefs.h"

#include "tdeInterface/fightSystem/IFightSystem.h"

namespace fl
{

class Engine;

} // fl

namespace tde
{
    
class IDataSystem;

class CFuzzyFightSystem
    : public IFightSystem
{
public:
    CFuzzyFightSystem(tdeString const& fightRulesFile);

    virtual void Initialize(CSharedPtr<IDataSystem> const& dataSystem) override;
    virtual tdeBool Fight(ICombatTower& tower, ICombatWarrior& warrior) const override;
    virtual void Clear() override;

private:
    CUniquePtr<fl::Engine> m_fightRulesEngine;
    tdeString m_fightRulesFile;

private:
    void LoadRules(CSharedPtr<IDataSystem> const& dataSystem);
};

} // tde