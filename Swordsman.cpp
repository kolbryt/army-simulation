#include "Swordsman.hpp"

Swordsman::Swordsman(int x, int y) {
    coordinates.x = x;
    coordinates.y = y;
}

Coordinates Swordsman::getCoordinates() const {
    return coordinates;
}