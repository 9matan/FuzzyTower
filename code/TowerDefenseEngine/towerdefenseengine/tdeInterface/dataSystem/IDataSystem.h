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
    static IDataSystem const* const GetInstance();
    static void SetInstance(IDataSystem* dataSystem);

    virtual fl::Engine* LoadFuzzyEngine(char const* const path) const = 0;

private:
    static IDataSystem* ms_instance;
};

} // tde