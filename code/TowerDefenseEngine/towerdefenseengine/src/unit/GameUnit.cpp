#include "tde/unit/GameUnit.h"

namespace tde
{

    

CGameUnit::CGameUnit()
    : m_position(tdePos::GetZero())
{
}

void CGameUnit::SetPosition(tdePos const& position)
{
    m_position = position;
}

tdePos const CGameUnit::GetPosition() const
{
    return m_position;
}

} // tde