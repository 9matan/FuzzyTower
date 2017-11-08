#pragma once
#include "tde/unit/GameUnit.h"
#include "tdeInterface/unit/tower/ITower.h"

namespace tde
{

struct STowerConfig;

class CTower
    : public CGameUnit
    , public ITower
{
public:
    CTower(STowerConfig const& towerConfig);

    virtual tdeU32 const GetMagicDamage() const override;
    virtual tdeU32 const GetMagicAttack() const override;
    virtual tdeU32 const GetPhysicalDamage() const override;
    virtual tdeU32 const GetPhysicalAttack() const override;
    virtual EPhysicalDamageType const GetPhysicalDamageType() const override;

private:
    tdeU32 m_magicDamage;
    tdeU32 m_magicAttack;
    tdeU32 m_physicalDamage;
    tdeU32 m_physicalAttack;
    EPhysicalDamageType m_physicalDamageType;
};

} // tde