#include <string>
#include "fl/Engine.h"
#include "tde/dataSystem/DataSystem.h"

int main(int argc, const char* argv[])
{
    tde::DataSystem dataSystem;
    tde::IDataSystem::SetInstance(&dataSystem);

    auto engine = dataSystem.LoadFuzzyEngine("DamageLogic.fll");

    auto name = engine->getName();

    tde::IDataSystem::SetInstance(nullptr);

    return 0;
}