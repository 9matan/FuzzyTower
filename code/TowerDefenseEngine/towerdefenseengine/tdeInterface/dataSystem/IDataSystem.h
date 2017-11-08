#pragma once

#ifdef TDE_USE_FUZZYLITE
namespace fl
{

class Engine;

} // fl
#endif // TDE_USE_FUZZYLITE

namespace tde
{
    
class IDataSystem abstract
{
public:
    virtual void Initialize() = 0;
#ifdef TDE_USE_FUZZYLITE
    virtual fl::Engine* LoadFuzzyEngine(tdeString const& path) const = 0;
#endif // TDE_USE_FUZZYLITE
    virtual void Clear() = 0;

private:
    static IDataSystem* ms_instance;
};

} // tde