#pragma once

namespace tde
{

enum class EPhysicalDamageType
{
    Arrow = 1,
    Explosion = (Arrow << 1)
};

} // tde