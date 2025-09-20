#include "Coordinates.hpp"

class Swordsman {
private:
    unsigned int hp{100};
    unsigned int damage{10};
    unsigned int speed{1};
    unsigned int size{1};
    
    char visualization{'S'};
    Coordinates coordinates;

public:
    Swordsman(Coordinates& coordinates);
    Coordinates getCoordinates();
};