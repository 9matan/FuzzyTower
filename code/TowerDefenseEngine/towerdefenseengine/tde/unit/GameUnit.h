#pragma once

#include "tdeInterface/unit/IGameUnit.h"

namespace tde
{
    
class CGameUnit
    : public IGameUnit
{
public:
    CGameUnit();

    void virtual SetPosition(tdePos const& position) override;
    tdePos const virtual GetPosition() const override;

private:
    tdePos m_position;
};

} // tde