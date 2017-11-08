#include "TowerDefenseEngine_PCH.h"

#ifdef TDE_USE_FUZZYLITE
#include "fl/Engine.h"

#include "tde/combatSystem/FuzzyCombatSystem.h"
#endif // TDE_USE_FUZZYLITE

#include "test/Test.h"
#include "tde/unit/tower/Tower.h"
#include "tde/unit/tower/TowerConfig.h"
#include "tde/unit/warrior/Warrior.h"
#include "tde/unit/warrior/WarriorConfig.h"

namespace tde
{
#ifdef TDE_USE_FUZZYLITE
    tdeBool const TestFuzzyCombatSystem(fl::Engine const& originRules)
    {
        if (!CFuzzyCombatSystem::IsValidRules(originRules))
        {
            TDE_TEST_FAILED("Invalid rules");
            return false;
        }

        CUniquePtr<fl::Engine> rules(TDE_NEW fl::Engine(originRules));
        CFuzzyCombatSystem combatSystem(move(rules));

        TDE_TEST_PASSED("FuzzyCombatSystem");
        return true;
    }
#endif // TDE_USE_FUZZYLITE
} //tde