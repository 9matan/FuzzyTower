#pragma once
#include "tde/unit/GameUnit.h"
#include "tdCore/unit/warrior/IWarrior.h"

namespace TowerDefense
{

struct SWarriorConfig;

class CWarrior
    : public IWarrior
{
public:
    CWarrior(SWarriorConfig const& warriorConfig);

    virtual tdU32 const GetPhysicalDefense() const override;
    virtual tdU32 const GetMagicDefense() const override;
    virtual tdU32 const GetHitPoints() const override;
    virtual void TakeDamage(tdU32 const damage) override;
    virtual tdBool const IsAlive() const override;

    virtual void SetPosition(tdPos const& position) override;
    virtual tdPos const GetPosition() const override;

private:
    CGameUnit m_gameUnit;

    tdU32 m_physicalDefense;
    tdU32 m_magicDefense;
    tdU32 m_hitPoints;
};

} // TowerDefense