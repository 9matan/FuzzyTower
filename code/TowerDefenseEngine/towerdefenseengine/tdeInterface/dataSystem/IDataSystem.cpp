#include "IDataSystem.h"

namespace tde
{

IDataSystem* IDataSystem::ms_instance = nullptr;

IDataSystem const* const tde::IDataSystem::GetInstance()
{
    return ms_instance;
}

void tde::IDataSystem::SetInstance(IDataSystem* dataSystem)
{
    ms_instance = dataSystem;
}

}