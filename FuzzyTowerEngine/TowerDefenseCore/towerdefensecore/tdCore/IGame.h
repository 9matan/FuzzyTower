#pragma once

namespace TowerDefense
{

class ILine;
class ITower;
class ITowerSpawner;
class IWarrior;
class IWarriorSpawner;
class ICombatSystem;

using ICombatSystemPtr = std::shared_ptr<ICombatSystem>;
using ICombatSystemConstPtr = std::shared_ptr<ICombatSystem const>;
using ITowerPtr = std::shared_ptr<ITower>;
using ITowerSpawnerPtr = std::shared_ptr<ITowerSpawner>;
using IWarriorPtr = std::shared_ptr<IWarrior>;
using IWarriorSpawnerPtr = std::shared_ptr<IWarriorSpawner>;

class IGame abstract
{
public:
    virtual void SetCombatSystem(ICombatSystemPtr const& combatSystem) = 0;
    virtual ICombatSystemPtr GetCombatSystem() = 0;
    virtual ICombatSystemConstPtr GetCombatSystem() const = 0;

    virtual void Initialize() = 0;
    virtual void Clear() = 0; 
    
    virtual tdU32 AddTower(ITowerPtr const& tower, tdU32 const towerSpawnerIndex) = 0;
    virtual tdU32 AddTowerSpawner(ITowerSpawnerPtr const& line) = 0;
    virtual tdU32 AddWarrior(IWarriorPtr const& warrior, tdU32 const warriorSpawnerIndex) = 0;
    virtual tdU32 AddWarriorSpawner(IWarriorSpawnerPtr const& line) = 0;

    virtual tdBool Damage(ITowerPtr const& tower, IWarriorPtr const& warrior) = 0;

    virtual void Tick(tdF32 const deltaTime) = 0;
};

} // TowerDefense