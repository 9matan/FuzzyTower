#pragma once

namespace TowerDefense
{

class IGame
{
public:
    void virtual Tick(tdF32 const deltaTime) = 0;
};

} // TowerDefense