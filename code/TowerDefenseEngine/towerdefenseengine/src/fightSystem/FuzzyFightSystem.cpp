#include "fl/Engine.h"
#include "fl/variable/OutputVariable.h"

#include "tde/fightSystem/FuzzyFightSystem.h"
#include "tdeInterface/dataSystem/IDataSystem.h"
#include "tdeInterface/unit/tower/ICombatTower.h"
#include "tdeInterface/unit/warrior/ICombatWarrior.h"

namespace tde
{

CFuzzyFightSystem::CFuzzyFightSystem(tdeString const& fightRulesFile)
    : m_fightRulesFile(fightRulesFile)
{
}

void CFuzzyFightSystem::Initialize(CSharedPtr<IDataSystem> const& dataSystem)
{
    LoadRules(dataSystem);
}

tdeBool CFuzzyFightSystem::Fight(ICombatTower& tower, ICombatWarrior& warrior) const
{
    if (!warrior.IsAlive())
    {
        return false;
    }

    m_fightRulesEngine->setInputValue("MagicAttack", tower.GetMagicAttack());
    m_fightRulesEngine->setInputValue("MagicDefense", warrior.GetMagicDefense());

    m_fightRulesEngine->process();
    tdeF32 magicDamageCoef = (tdeF32)m_fightRulesEngine->getOutputValue("MagicDamageCoef");
    tdeF32 realMagicDamage = magicDamageCoef * (tdeF32)tower.GetMagicDamage();
    tdeU32 realIntegerDamage = (tdeU32)realMagicDamage;

    warrior.TakeDamage(realIntegerDamage);
    return !warrior.IsAlive();
}

void CFuzzyFightSystem::Clear()
{
}

void CFuzzyFightSystem::LoadRules(CSharedPtr<IDataSystem> const& dataSystem)
{
    m_fightRulesEngine = CUniquePtr<fl::Engine>(dataSystem->LoadFuzzyEngine(m_fightRulesFile));
}

}