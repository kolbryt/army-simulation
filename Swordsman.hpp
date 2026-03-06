#pragma once

#include "Unit.hpp"
#include "Coordinates.hpp"

class Swordsman : public Unit {
private: 
    const char visualization{'S'};
    
    unsigned int damage{10};

    Coordinates coordinates;

public:
    Swordsman() {};
    Swordsman(int x, int y);

    char getVisualization() const;

    Coordinates getCoordinates() const;
    void setCoordinates(int x, int y);
};