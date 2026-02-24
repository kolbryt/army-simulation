#include "Coordinates.hpp"

class Archer {
private:
    const char visualization{'A'};
    const unsigned int size{1};
    const unsigned int speed{1};
    
    unsigned int hp{50};
    unsigned int damage{20};

    Coordinates coordinates;

public:
    Archer() {};
    Archer(int x, int y);

    char getVisualization() const;

    Coordinates getCoordinates() const;
    void setCoordinates(int x, int y);
};