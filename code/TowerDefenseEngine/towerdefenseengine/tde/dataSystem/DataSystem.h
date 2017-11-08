#pragma once

#include "tdeInterface/dataSystem/IDataSystem.h"

namespace tde
{
    
class CDataSystem
    : public IDataSystem
{

public:
    virtual void Initialize() override {}
#ifdef TDE_USE_FUZZYLITE
    virtual fl::Engine* LoadFuzzyEngine(tdeString const& path) const override;
#endif // TDE_USE_FUZZYLITE
    virtual void Clear() override {}

};

} // tde