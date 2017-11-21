#pragma once

#include "tdCore/combatSystem/Damage.h"

namespace TowerDefense
{

enum class EPhysicalDamageType
{
    Arrow = 1,
    Explosion = (Arrow << 1)
};

} // TowerDefense