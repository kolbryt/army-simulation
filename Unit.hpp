#pragma once

#include "Coordinates.hpp"

class Unit {
private:
    const char visualization{'U'};

    const unsigned int size{1};
    const unsigned int speed{1};

    unsigned int hp{100};
    unsigned int damage{0};

    Coordinates coordinates;

public:
    Unit() {};
    Unit(int x, int y);

    char getVisualization() const;

    Coordinates getCoordinates() const;
    void setCoordinates(int x, int y);
};