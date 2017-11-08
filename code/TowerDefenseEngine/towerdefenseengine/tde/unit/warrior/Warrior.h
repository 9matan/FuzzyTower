#pragma once
#include "tde/unit/GameUnit.h"
#include "tdeInterface/unit/warrior/IWarrior.h"

namespace tde
{

struct SWarriorConfig;

class CWarrior
    : public CGameUnit
    , public IWarrior
{
public:
    CWarrior(SWarriorConfig const& warriorConfig);

    virtual tdeU32 const GetPhysicalDefense() const override;
    virtual tdeU32 const GetMagicDefense() const override;
    virtual tdeU32 const GetHitPoints() const override;
    virtual void TakeDamage(tdeU32 const damage) override;
    virtual tdeBool const IsAlive() const override;

private:
    tdeU32 m_physicalDefense;
    tdeU32 m_magicDefense;
    tdeU32 m_hitPoints;
};

} // tde