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
    Swordsman() {};
    Swordsman(int x, int y);

    char getVisualization() const;

    Coordinates getCoordinates() const;
    void setCoordinates(int x, int y);
};