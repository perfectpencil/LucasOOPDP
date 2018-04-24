#include "Movable.h"

namespace Ant1{

    Movable::Movable(){};
    Position getxPosition();
    Position getyPosition();
    void setPosition(int xposition, int ypositon);
    int getMoveSpeed();
    Direction getDirection();
    void setDirection(Direction _dir);
    Movable::~Movable(){}

}

