#include "TowerDefenseEngine_PCH.h"

#include "tde/unit/warrior/Warrior.h"
#include "tde/unit/warrior/WarriorConfig.h"

namespace tde
{

CWarrior::CWarrior(SWarriorConfig const& warriorConfig)
    : m_physicalDefense(warriorConfig.m_physicalDefense)
    , m_magicDefense(warriorConfig.m_magicDefense)
    , m_hitPoints(warriorConfig.m_hitPoints)
{
}

tdeU32 const CWarrior::GetPhysicalDefense() const
{
    return m_physicalDefense;
}

tdeU32 const CWarrior::GetMagicDefense() const
{
    return m_magicDefense;
}

tdeU32 const CWarrior::GetHitPoints() const
{
    return m_hitPoints;
}

void CWarrior::TakeDamage(tdeU32 const damage)
{
    m_hitPoints -= damage;
}

tdeBool const CWarrior::IsAlive() const
{
    return m_hitPoints != 0;
}

} //tde