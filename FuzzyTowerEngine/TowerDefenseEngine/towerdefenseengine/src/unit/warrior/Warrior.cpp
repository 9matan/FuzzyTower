#include "TowerDefenseEngine_PCH.h"

#include "tde/unit/warrior/Warrior.h"
#include "tde/unit/warrior/WarriorConfig.h"

namespace TowerDefense
{

CWarrior::CWarrior(SWarriorConfig const& warriorConfig)
    : m_physicalDefense(warriorConfig.m_physicalDefense)
    , m_magicDefense(warriorConfig.m_magicDefense)
    , m_hitPoints(warriorConfig.m_hitPoints)
{
}

tdU32 const CWarrior::GetPhysicalDefense() const
{
    return m_physicalDefense;
}

tdU32 const CWarrior::GetMagicDefense() const
{
    return m_magicDefense;
}

tdU32 const CWarrior::GetHitPoints() const
{
    return m_hitPoints;
}

void CWarrior::TakeDamage(tdU32 const damage)
{
    m_hitPoints = (m_hitPoints <= damage) ? 0 : m_hitPoints - damage;
}

tdBool const CWarrior::IsAlive() const
{
    return m_hitPoints != 0;
}

void CWarrior::SetPosition(tdPos const& position)
{
    m_gameUnit.SetPosition(position);
}

tdPos const CWarrior::GetPosition() const
{
    return m_gameUnit.GetPosition();
}

} // TowerDefense