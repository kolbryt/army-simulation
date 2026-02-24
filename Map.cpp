#include <iostream>
#include "Map.hpp"

Map::Map() {
    setUnitsCoordinates();
}

void Map::setUnitsCoordinates() {
    for (int row{0}; row < 8; ++row) {
        for (int column{0}; column < 8; ++column) {
            units[row][column].setCoordinates(row, column);
        }
    }
}

void Map::show() {
    for (int row{0}; row < 8; ++row) {
        for (int column{0}; column < 8; ++column) {
            std::cout << units[row][column].getVisualization() << ' ';
        }
        std::cout << std::endl;
    }
}