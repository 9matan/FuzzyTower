#pragma once

namespace tde
{

class IGame
{
public:
    void virtual Tick(tdeF32 const deltaTime) = 0;
};

} // tde