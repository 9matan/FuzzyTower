#include <string>
#include "fl/Engine.h"
#include "tde/dataSystem/DataSystem.h"

int main(int argc, const char* argv[])
{
    tde::CDataSystem dataSystem;
    auto engine = dataSystem.LoadFuzzyEngine("DamageLogic.fll");
    auto name = engine->getName();

    return 0;
}