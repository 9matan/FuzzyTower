#pragma once

#include "TypeDefs.h"
#include "tdeInterface/dataSystem/IDataSystem.h"

namespace tde
{
    
class CDataSystem
    : public IDataSystem
{

public:
    virtual void Initialize() override {}
    virtual fl::Engine* LoadFuzzyEngine(tdeString const& path) const override;
    virtual void Clear() override {}

};

} // tde