#pragma once

#include "tdCoreTest/Test.h"

#ifdef TDE_USE_FUZZYLITE
namespace fl
{

class Engine;

} // fl
#endif // TDE_USE_FUZZYLITE

namespace TowerDefense
{

#ifdef TDE_USE_FUZZYLITE
TD_DECLARE_TEST(TestFuzzyCombatSystem, fl::Engine const& originRules);
#endif // TDE_USE_FUZZYLITE

} // TowerDefense