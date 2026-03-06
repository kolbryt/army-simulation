#include "Unit.hpp"

Unit::Unit(int x, int y) {
    setCoordinates(x, y);
}

char Unit::getVisualization() const {
    return visualization;
}

Coordinates Unit::getCoordinates() const {
    return coordinates;
}

void Unit::setCoordinates(int x, int y) {
    coordinates.x = x;
    coordinates.y = y;
}