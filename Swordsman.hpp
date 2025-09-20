#include "Coordinates.hpp"

class Swordsman {
private:
    const char visualization{'S'};
    const unsigned int size{1};
    const unsigned int speed{1};
    
    unsigned int hp{100};
    unsigned int damage{10};

    Coordinates coordinates;

public:
    Swordsman(int x, int y);
    Coordinates getCoordinates() const;
};