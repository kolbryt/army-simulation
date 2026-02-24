#include "Swordsman.hpp"

Swordsman::Swordsman(int x, int y) {
    setCoordinates(x, y);
}

char Swordsman::getVisualization() const {
    return visualization;
}

Coordinates Swordsman::getCoordinates() const {
    return coordinates;
}

void Swordsman::setCoordinates(int x, int y) {
    coordinates.x = x;
    coordinates.y = y;
}