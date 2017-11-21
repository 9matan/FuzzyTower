#include "TowerDefenseCore_PCH.h"

#include "tdCoreTest/Test.h"
#include "tdCoreTest/CombatSystemTest.h"
#include "tdCore/combatSystem/ICombatSystem.h"
#include "tdCore/unit/tower/ITower.h"
#include "tdCore/unit/warrior/IWarrior.h"

namespace TowerDefense
{
    TD_BEGIN_TEST(TestFight, ICombatSystem const& combatSystem, ICombatAttacker& attacker, ICombatDefender& defender)
        TD_TEST_FULL_LOG("Attacker: mgAtck: %d, mgDmg: [%d;%d], phAtck: %d, phDmg: [%d;%d]",
            attacker.GetMagicAttack(),
            attacker.GetMagicDamage().m_minDamage,
            attacker.GetMagicDamage().m_maxDamage,
            attacker.GetPhysicalAttack(),
            attacker.GetPhysicalDamage().m_minDamage,
            attacker.GetPhysicalDamage().m_maxDamage);
        TD_TEST_FULL_LOG("Defender: mgDef: %d, phDef: %d, hp: %d",
            defender.GetMagicDefense(),
            defender.GetPhysicalDefense(),
            defender.GetHitPoints());
        while (defender.IsAlive())
        {
            tdU32 const currentHp = defender.GetHitPoints();
            combatSystem.Fight(attacker, defender);
            TD_TEST_FULL_LOG("dmg: %d, hp: %d", currentHp - defender.GetHitPoints(), defender.GetHitPoints());
        }
        TD_TEST_PASSED("");
    TD_END_TEST()
} // TowerDefense