#include "TowerDefenseEngine_PCH.h"

#include "tde/unit/GameUnit.h"

namespace TowerDefense
{

CGameUnit::CGameUnit()
    : m_position(tdPos::GetZero())
{
}

void CGameUnit::SetPosition(tdPos const& position)
{
    m_position = position;
}

tdPos const CGameUnit::GetPosition() const
{
    return m_position;
}

} // TowerDefense