#include "TowerDefenseEngine_PCH.h"

#include "fl/imex/FllImporter.h"
#include "tde/dataSystem/DataSystem.h"

namespace tde
{

namespace
{

static tdeString const dataFolder = "../../data/";
static tdeString const rulesFolder = dataFolder + tdeString("Rules/");

} // namespace

#ifdef TDE_USE_FUZZYLITE
fl::Engine* CDataSystem::LoadFuzzyEngine(tdeString const& path) const
{
    std::string fullPath(rulesFolder);
    fullPath.append(path);

    fl::FllImporter fllImporter;
    fl::Engine* engine = fllImporter.fromFile(fullPath);

    return engine;
}
#endif // TDE_USE_FUZZYLITE

} // tde