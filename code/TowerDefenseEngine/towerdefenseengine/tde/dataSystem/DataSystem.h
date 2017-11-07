#pragma once

#include "TypeDefs.h"
#include "tdeInterface/dataSystem/IDataSystem.h"

namespace tde
{
    
class DataSystem
    : public IDataSystem
{

public:
    virtual fl::Engine* LoadFuzzyEngine(char const* const path) const override;

private:
    static char const* const ms_dataFolder;
    static char const* const ms_rulesFolder;

};

} // tde