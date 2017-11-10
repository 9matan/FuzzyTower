#include "TowerDefenseEngine_PCH.h"

#ifdef TDE_USE_FUZZYLITE
#include "fl/imex/FllImporter.h"
#endif // TDE_USE_FUZZYLITE

#include "tde/dataSystem/DataSystem.h"

namespace TowerDefense
{

namespace
{

static tdString const dataFolder = "../../data/";
static tdString const rulesFolder = dataFolder + tdString("Rules/");

} // namespace

#ifdef TDE_USE_FUZZYLITE
fl::Engine* CDataSystem::LoadFuzzyEngine(tdString const& path) const
{
    std::string fullPath(rulesFolder);
    fullPath.append(path);

    fl::FllImporter fllImporter;
    fl::Engine* engine = fllImporter.fromFile(fullPath);

    return engine;
}
#endif // TDE_USE_FUZZYLITE

} // TowerDefense