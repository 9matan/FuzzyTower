#pragma once

namespace TowerDefense
{
    
class ITower;
class ISpawnedTower;

class ITowerSpawner abstract
{
public:
    virtual std::shared_ptr<ISpawnedTower> SpawnTower(std::shared_ptr<ITower> const& tower) = 0;
};

} // TowerDefense