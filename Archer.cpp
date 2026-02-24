#include "Archer.hpp"

Archer::Archer(int x, int y) {
    setCoordinates(x, y);
}

char Archer::getVisualization() const {
    return visualization;
}

Coordinates Archer::getCoordinates() const {
    return coordinates;
}

void Archer::setCoordinates(int x, int y) {
    coordinates.x = x;
    coordinates.y = y;
}