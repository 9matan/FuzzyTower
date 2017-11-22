#include "TowerDefenseEngine_PCH.h"

#ifdef TDE_USE_FUZZYLITE

#include <ctime>

#include "fl/Engine.h"
#include "fl/variable/OutputVariable.h"

#include "tdCore/combatSystem/ICombatAttacker.h"
#include "tdCore/combatSystem/ICombatDefender.h"

#include "tde/combatSystem/FuzzyCombatSystem.h"

namespace TowerDefense
{

namespace
{

static std::string const MAGIC_ATTACK = "MagicAttack";
static std::string const MAGIC_DEFENSE = "MagicDefense";
static std::string const MAGIC_DAMAGE_COEF = "MagicDamageCoef";

} // namespace

CFuzzyCombatSystem::CFuzzyCombatSystem(std::unique_ptr<fl::Engine> combatRules)
    : m_combatRules(move(combatRules))
{
    TD_ASSERT(IsValidRules(*m_combatRules), "Invalid combat rules");
}

void CFuzzyCombatSystem::Initialize()
{
}

tdBool const CFuzzyCombatSystem::Fight(ICombatAttacker& attacker, ICombatDefender& defender) const
{
    if (!defender.IsAlive())
    {
        return false;
    }

    m_combatRules->setInputValue(MAGIC_ATTACK, attacker.GetMagicAttack());
    m_combatRules->setInputValue(MAGIC_DEFENSE, defender.GetMagicDefense());

    m_combatRules->process();
    tdF32 const magicDamageCoef = static_cast<tdF32>(m_combatRules->getOutputValue(MAGIC_DAMAGE_COEF));
    SDamage const realMagicDamage = attacker.GetMagicDamage() * magicDamageCoef;
    defender.TakeDamage(GetDamageValue(realMagicDamage));
    return !defender.IsAlive();
}

void CFuzzyCombatSystem::Clear()
{
}

tdU32 const CFuzzyCombatSystem::GetDamageValue(SDamage const& damage) const
{
    // TODO change rand to own seed
    srand(static_cast<unsigned int>(std::time(nullptr)));
    tdU32 const randomInteger = static_cast<tdU32>(rand());
    return damage.m_minDamage + (randomInteger % static_cast<tdU32>(damage.m_maxDamage - damage.m_minDamage + 1));
}

tdBool const CFuzzyCombatSystem::IsValidRules(fl::Engine const& combatRules)
{
    return combatRules.hasInputVariable(MAGIC_ATTACK)
        && combatRules.hasInputVariable(MAGIC_DEFENSE)
        && combatRules.hasOutputVariable(MAGIC_DAMAGE_COEF);
}

} // TowerDefense

#endif // TDE_USE_FUZZYLITE