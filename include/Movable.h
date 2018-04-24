#include "Position.h"
#include "Direction.h"
#include "Ant.h"

namespace Ant1{
    class Movable {
    public:
        Movable();
        virtual Position getPosition();
        virtual int getxPosition();
        virtual int getyPosition();
        virtual void setPosition(int xposition, int yposition);
        virtual int getMoveSpeed();
        virtual Direction getDirection();
        virtual void setDirection(Direction _dir);
        virtual ~Movable();
    };
}
