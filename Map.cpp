#include <iostream>
#include "Map.hpp"

Map::Map() {
    setUnitsCoordinates();
}

void Map::setUnitsCoordinates() {
    for (unsigned int row{0}; row < 8; ++row) {
        for (unsigned int column{0}; column < 8; ++column) {
            units[row][column].setCoordinates(row, column);
        }
    }
}

void Map::show() {
    for (unsigned int row{0}; row < 8; ++row) {
        for (unsigned int column{0}; column < 8; ++column) {
            std::cout << units[row][column].getVisualization() << ' ';
        }
        std::cout << '\n';
    }
}