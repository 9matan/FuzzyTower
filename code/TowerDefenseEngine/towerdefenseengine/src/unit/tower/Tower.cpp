#include "TowerDefenseEngine_PCH.h"

#include "tde/unit/tower/Tower.h"
#include "tde/unit/tower/TowerConfig.h"

namespace TowerDefense
{

CTower::CTower(STowerConfig const& towerConfig)
    : m_magicDamage(towerConfig.m_magicDamage)
    , m_magicAttack(towerConfig.m_magicAttack)
    , m_physicalDamage(towerConfig.m_physicalDamage)
    , m_physicalAttack(towerConfig.m_physicalAttack)
    , m_physicalDamageType(towerConfig.m_physicalDamageType)
{
}

SDamage const& CTower::GetMagicDamage() const
{
    return m_magicDamage;
}

tdU32 const CTower::GetMagicAttack() const
{
    return m_magicAttack;
}

SDamage const& CTower::GetPhysicalDamage() const
{
    return m_physicalDamage;
}

tdU32 const CTower::GetPhysicalAttack() const
{
    return m_physicalAttack;
}

EPhysicalDamageType const CTower::GetPhysicalDamageType() const
{
    return m_physicalDamageType;
}

void CTower::SetPosition(tdPos const& position)
{
    m_gameUnit.SetPosition(position);
}

tdPos const CTower::GetPosition() const
{
    return m_gameUnit.GetPosition();
}

}; // TowerDefense