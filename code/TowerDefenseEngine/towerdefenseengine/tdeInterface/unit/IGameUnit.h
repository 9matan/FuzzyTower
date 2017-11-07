#pragma once

#include "TypeDefs.h"

namespace tde
{

class IGameUnit abstract
{
public:
    void virtual SetPosition(tdeVec2 const& position) const = 0;
    tdeVec2 const virtual GetPosition() const = 0;
};

} // tde