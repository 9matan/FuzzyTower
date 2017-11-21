#include "TowerDefenseCore_PCH.h"

#include "tdCore/combatSystem/Damage.h"

namespace TowerDefense
{

SDamage::SDamage()
    : SDamage(0, 0)
{
}

SDamage::SDamage(tdU32 const minDamage, tdU32 const maxDamage)
    : m_minDamage(minDamage)
    , m_maxDamage(maxDamage)
{
}

SDamage const SDamage::operator*(tdF32 const rhs) const
{
    return SDamage(static_cast<tdU32>(m_minDamage * rhs), static_cast<tdU32>(m_maxDamage * rhs));
}

} // TowerDefense