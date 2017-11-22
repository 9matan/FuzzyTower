#pragma once

namespace TowerDefense
{
    
class IWarrior;

class ISpawnedWarrior abstract
{
public:
    virtual std::weak_ptr<IWarrior> GetWarrior() const = 0;
    virtual void UpdateSpawnedWarrior(tdF32 const deltaTime) const = 0;
};

} // TowerDefense