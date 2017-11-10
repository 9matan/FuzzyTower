#pragma once

namespace TowerDefense
{
    
class CGameUnit
{
public:
    CGameUnit();

    void SetPosition(tdPos const& position);
    tdPos const GetPosition() const;

private:
    tdPos m_position;
};

} // TowerDefense