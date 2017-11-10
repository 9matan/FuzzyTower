#pragma once

namespace TowerDefense
{
    
class CDataSystem
{
public:
#ifdef TDE_USE_FUZZYLITE
    fl::Engine* LoadFuzzyEngine(tdString const& path) const;
#endif // TDE_USE_FUZZYLITE

};

} // TowerDefense