#pragma once

#include "TypeDefs.h"

namespace tde
{

class IGame
{
public:
    void virtual Tick(tdeF32 const deltaTime) = 0;
};

} // tde