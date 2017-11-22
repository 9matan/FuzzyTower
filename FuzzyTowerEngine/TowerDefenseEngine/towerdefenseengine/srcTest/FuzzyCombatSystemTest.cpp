#include "TowerDefenseEngine_PCH.h"

#ifdef TDE_USE_FUZZYLITE
#include "fl/Engine.h"
#endif // TDE_USE_FUZZYLITE

#include "tdCoreTest/CombatSystemTest.h"
#include "tde/combatSystem/FuzzyCombatSystem.h"
#include "tdCore/unit/tower/ITower.h"
#include "tdCore/unit/warrior/IWarrior.h"

namespace TowerDefense
{
#ifdef TDE_USE_FUZZYLITE
TD_BEGIN_TEST(TestFuzzyCombatSystem, fl::Engine const& originRules)
        if (!CFuzzyCombatSystem::IsValidRules(originRules))
        {
            TD_TEST_FAILED("Invalid rules");
        }

        std::unique_ptr<fl::Engine> rules{new fl::Engine(originRules)};
        CFuzzyCombatSystem combatSystem(move(rules));

        TD_TEST_PASSED("");
TD_END_TEST()
#endif // TDE_USE_FUZZYLITE
} //TowerDefense