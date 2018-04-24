#include "Position.h"

namespace Ant1 {

    Position::Position() {
        int xposition = 0;
        int yposition = 0;
    };

    void Position::setPosition(int _xposition, int _yposition) {
        xposition = _xposition;
        yposition = _yposition;
    }

   int Position::getxPosition() const{
        return xposition;
    }

    int Position::getyPosition() const{
        return yposition;
    }

    Position::~Position(){}

/*
bool equals(Object o){
    if(Position* v = dynamic_cast<Position*>(o))
        Position* pos = static_cast<Position*>()

    bool b = dynamic_cast<Position*>(o) != nullptr;

    typeid possible as well
}
*/

}