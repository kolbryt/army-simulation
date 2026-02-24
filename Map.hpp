#include "Swordsman.hpp"

class Map {
private:
    Swordsman units[8][8];

    void setUnitsCoordinates();

public:
    Map();
    void show();
};