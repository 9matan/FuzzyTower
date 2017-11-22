#include "TowerDefenseEngine_PCH.h"
#include "tdCore/combatSystem/ICombatAttacker.h"
#include "tdCore/combatSystem/ICombatDefender.h"
#include "tdCore/combatSystem/ICombatSystem.h"

#include "tde/Game.h"

namespace TowerDefense
{

void Game::Initialize()
{
}

void Game::Clear()
{
}

void Game::SetCombatSystem(ICombatSystemPtr const& combatSystem)
{
    m_combatSystem = combatSystem;
}

ICombatSystemPtr Game::GetCombatSystem()
{
    return m_combatSystem;
}

ICombatSystemConstPtr Game::GetCombatSystem() const
{
    return m_combatSystem;
}

tdU32 Game::AddTower(ITowerPtr const& tower, tdU32 const towerSpawnerIndex)
{
    return tdU32();
}

tdU32 Game::AddTowerSpawner(ITowerSpawnerPtr const& line)
{
    return tdU32();
}

tdU32 Game::AddWarrior(IWarriorPtr const& warrior, tdU32 const warriorSpawnerIndex)
{
    return tdU32();
}

tdU32 Game::AddWarriorSpawner(IWarriorSpawnerPtr const& line)
{
    return tdU32();
}

tdBool Game::Damage(ITowerPtr const& tower, IWarriorPtr const& warrior)
{
    return tdBool();
}

void Game::Tick(tdF32 const deltaTime)
{
}

}; // TowerDefense