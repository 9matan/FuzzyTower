#include "TowerDefenseEngine_PCH.h"

#include "fl/Engine.h"

#include "tdCoreTest/CombatSystemTest.h"

#include "tde/dataSystem/DataSystem.h"
#include "tde/combatSystem/FuzzyCombatSystem.h"
#include "tde/unit/tower/Tower.h"
#include "tde/unit/tower/TowerConfig.h"
#include "tde/unit/warrior/Warrior.h"
#include "tde/unit/warrior/WarriorConfig.h"

int main(int argc, const char* argv[])
{
    using namespace TowerDefense;

    //CDataSystem dataSystem;
    //CUniquePtr<fl::Engine> combatRules{dataSystem.LoadFuzzyEngine("DamageLogic.fll")};

    //CFuzzyCombatSystem combatSystem(move(combatRules));
    //CTower tower(STowerConfig{/*mgDmg*/{10, 100}, 4});
    //CWarrior warrior(SWarriorConfig{5, /*mgDef*/10, /*hp*/100});

    //TD_TEST_WITH_FLAGS(TD_TEST_FLAG_FULL_LOG, TestFight, combatSystem, tower, warrior);

    //int l = 0;
    //std::cin >> l;
    return 0;
}