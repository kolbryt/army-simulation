#include "Swordsman.hpp"

Swordsman::Swordsman(Coordinates& coordinates) {
    this->coordinates.x = coordinates.x;
    this->coordinates.y = coordinates.y;
}

Coordinates Swordsman::getCoordinates() {
    return coordinates;
}