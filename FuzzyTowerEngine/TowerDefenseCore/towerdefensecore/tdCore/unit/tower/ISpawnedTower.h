#pragma once

namespace TowerDefense
{
    
class ITower;
class ITowerSpawner;

class ISpawnedTower abstract
{
public:
    virtual std::weak_ptr<ITowerSpawner> GetTowerSpawner() const = 0;
    virtual std::weak_ptr<ITower> GetTower() const = 0;
};

} // TowerDefense