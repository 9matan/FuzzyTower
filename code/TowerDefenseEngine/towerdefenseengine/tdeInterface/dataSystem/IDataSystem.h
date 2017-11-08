#pragma once

#include "TypeDefs.h"

namespace fl
{

class Engine;

} // fl

namespace tde
{
    
class IDataSystem abstract
{
public:
    virtual void Initialize() = 0;
    virtual fl::Engine* LoadFuzzyEngine(tdeString const& path) const = 0;
    virtual void Clear() = 0;

private:
    static IDataSystem* ms_instance;
};

} // tde