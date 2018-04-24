#include "Ant.h"

namespace Ant1 {
    Ant::Ant() : dir(Direction::NONE){}

    int Ant::getMoveSpeed(){
        return 3;
    }

    Direction Ant::getDirection(){
        return dir;
    }

    void Ant::setDirection(Direction _dir){
        dir = _dir;
    }

    void Ant::setDirectionLeft() {setDirection(Direction::LEFT);}
    void Ant::setDirectionRight() {setDirection(Direction::RIGHT);}
    void Ant::setDirectionUp() {setDirection(Direction::UP);}
    void Ant::setDirectionDown() {setDirection(Direction::DOWN);}

    Ant::~Ant(){}
}






