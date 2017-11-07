#include <string>

#include "fl/imex/FllImporter.h"
#include "tde/dataSystem/DataSystem.h"

namespace tde
{

char const* const DataSystem::ms_dataFolder = "../../data/";
char const* const DataSystem::ms_rulesFolder = "../../data/Rules/";

fl::Engine* DataSystem::LoadFuzzyEngine(char const* const path) const
{
    std::string fullPath(ms_rulesFolder);
    fullPath.append(path);

    fl::FllImporter fllImporter;
    fl::Engine* engine = fllImporter.fromFile(fullPath);

    return engine;
}

}