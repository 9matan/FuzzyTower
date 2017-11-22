#pragma once

namespace TowerDefense
{

class IWarrior;
class ISpawnedWarrior;

class IWarriorSpawner abstract
{
public:
    virtual std::shared_ptr<ISpawnedWarrior> SpawnWarrior(std::shared_ptr<IWarrior> const& warrior) = 0;
};

} // TowerDefense