#pragma once
#include "tdCore/unit/tower/ITower.h"
#include "tdCore/combatSystem/CombatDefs.h"

#include "tde/unit/GameUnit.h"

namespace TowerDefense
{

struct STowerConfig;

class CTower
    : public ITower
{
public:
    CTower(STowerConfig const& towerConfig);

    virtual SDamage const& GetMagicDamage() const override;
    virtual tdU32 const GetMagicAttack() const override;
    virtual SDamage const& GetPhysicalDamage() const override;
    virtual tdU32 const GetPhysicalAttack() const override;
    virtual EPhysicalDamageType const GetPhysicalDamageType() const override;

    virtual void SetPosition(tdPos const& position) override;
    virtual tdPos const GetPosition() const override;

private:
    CGameUnit m_gameUnit;

    SDamage m_magicDamage;
    tdU32 m_magicAttack;
    SDamage m_physicalDamage;
    tdU32 m_physicalAttack;
    EPhysicalDamageType m_physicalDamageType;
};

} // TowerDefense