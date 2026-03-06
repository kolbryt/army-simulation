#pragma once

#include "Swordsman.hpp"
#include "Archer.hpp"

class Map {
private:
    Unit units[8][8];

    void setUnitsCoordinates();

public:
    Map();
    void show();
};