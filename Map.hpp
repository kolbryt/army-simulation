#pragma once

#include "Swordsman.hpp"
#include "Archer.hpp"

class Map {
private:
    Archer units[8][8];

    void setUnitsCoordinates();

public:
    Map();
    void show();
};