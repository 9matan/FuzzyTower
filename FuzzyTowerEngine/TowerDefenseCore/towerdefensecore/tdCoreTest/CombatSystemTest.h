#pragma once

#include "tdCoreTest/Test.h"

namespace TowerDefense
{

class ICombatAttacker;
class ICombatDefender;
class ICombatSystem;

TD_DECLARE_TEST(TestFight, ICombatSystem const& combatSystem, ICombatAttacker& attacker, ICombatDefender& defender);
} // TowerDefense