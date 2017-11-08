#include "TowerDefenseEngine_PCH.h"

#ifdef TDE_USE_FUZZYLITE

#include "fl/Engine.h"
#include "fl/variable/OutputVariable.h"

#include "tde/combatSystem/FuzzyCombatSystem.h"
#include "tdeInterface/combatSystem/ICombatAttacker.h"
#include "tdeInterface/combatSystem/ICombatDefender.h"
#include "tdeInterface/dataSystem/IDataSystem.h"

namespace tde
{

namespace
{

static tdeString const MAGIC_ATTACK = "MagicAttack";
static tdeString const MAGIC_DEFENSE = "MagicDefense";
static tdeString const MAGIC_DAMAGE_COEF = "MagicDamageCoef";

} // namespace

CFuzzyCombatSystem::CFuzzyCombatSystem(CUniquePtr<fl::Engine> combatRules)
    : m_combatRules(std::move(combatRules))
{
    TDE_ASSERT(IsValidRules(*combatRules), "Invalid combat rules");
}

void CFuzzyCombatSystem::Initialize()
{
}

tdeBool CFuzzyCombatSystem::Fight(ICombatAttacker& attacker, ICombatDefender& defender) const
{
    if (!defender.IsAlive())
    {
        return false;
    }

    m_combatRules->setInputValue(MAGIC_ATTACK, attacker.GetMagicAttack());
    m_combatRules->setInputValue(MAGIC_DEFENSE, defender.GetMagicDefense());

    m_combatRules->process();
    tdeF32 magicDamageCoef = (tdeF32)m_combatRules->getOutputValue(MAGIC_DAMAGE_COEF);
    tdeF32 realMagicDamage = magicDamageCoef * (tdeF32)attacker.GetMagicDamage();
    tdeU32 realIntegerDamage = (tdeU32)realMagicDamage;

    defender.TakeDamage(realIntegerDamage);
    return !defender.IsAlive();
}

void CFuzzyCombatSystem::Clear()
{
}

tdeBool const CFuzzyCombatSystem::IsValidRules(fl::Engine const& combatRules)
{
    return combatRules.hasInputVariable(MAGIC_ATTACK)
        && combatRules.hasInputVariable(MAGIC_DEFENSE)
        && combatRules.hasOutputVariable(MAGIC_DAMAGE_COEF);
}

} // tde

#endif // TDE_USE_FUZZYLITE