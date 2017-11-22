#pragma once

#include "tdCore/IGame.h"

namespace TowerDefense
{

class ISpawnedTower;
class ISpawnedWarrior;

class Game
    : public IGame
{
public:
    virtual void Initialize() override;
    virtual void Clear() override;

    virtual void SetCombatSystem(ICombatSystemPtr const& combatSystem) override;
    virtual ICombatSystemPtr GetCombatSystem() override;
    virtual ICombatSystemConstPtr GetCombatSystem() const override;

    virtual tdU32 AddTower(ITowerPtr const& tower, tdU32 const towerSpawnerIndex) override;
    virtual tdU32 AddTowerSpawner(ITowerSpawnerPtr const& line) override;
    virtual tdU32 AddWarrior(IWarriorPtr const& warrior, tdU32 const warriorSpawnerIndex) override;
    virtual tdU32 AddWarriorSpawner(IWarriorSpawnerPtr const& line) override;

    virtual tdBool Damage(ITowerPtr const& tower, IWarriorPtr const& warrior) override;
    virtual void Tick(tdF32 const deltaTime) override;

private:
    using ISpawnedTowerPtr = std::shared_ptr<ISpawnedTower>;
    using ISpawnedWarriorPtr = std::shared_ptr<ISpawnedWarrior>;

    ICombatSystemPtr m_combatSystem;
    std::vector<ISpawnedTowerPtr> m_towers;
    std::vector<ISpawnedWarriorPtr> m_warrios;
};

} // TowerDefense