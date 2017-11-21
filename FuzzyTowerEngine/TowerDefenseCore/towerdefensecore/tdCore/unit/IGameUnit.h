#pragma once

namespace TowerDefense
{

class IGameUnit abstract
{
public:
    virtual void SetPosition(tdPos const& position) = 0;
    virtual tdPos const GetPosition() const = 0;
};

} // tde