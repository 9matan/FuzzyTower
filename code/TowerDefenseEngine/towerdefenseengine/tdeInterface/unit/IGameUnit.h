#pragma once

#include "TypeDefs.h"

namespace tde
{

class IGameUnit abstract
{
public:
    void virtual SetPosition(tdePos const& position) = 0;
    tdePos const virtual GetPosition() const = 0;
};

} // tde