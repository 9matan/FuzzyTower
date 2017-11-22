#include "TowerDefenseEngine_PCH.h"

#ifdef TDE_USE_FUZZYLITE
#include "fl/imex/FllImporter.h"
#endif // TDE_USE_FUZZYLITE

#include "tde/dataSystem/DataSystem.h"

namespace TowerDefense
{

namespace
{

static std::string const dataFolder = "../../Resources/";
static std::string const rulesFolder = dataFolder + std::string("Rules/");

} // namespace

#ifdef TDE_USE_FUZZYLITE
fl::Engine* CDataSystem::LoadFuzzyEngine(std::string const& path) const
{
    std::string fullPath(rulesFolder);
    fullPath.append(path);

    fl::FllImporter fllImporter;
    fl::Engine* engine = fllImporter.fromFile(fullPath);

    return engine;
}
#endif // TDE_USE_FUZZYLITE

} // TowerDefense