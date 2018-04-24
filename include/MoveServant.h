#include "Ant.h"
#include "Movable.h"
#include "Position.h"

namespace Ant1{
    class MoveServant : public Position{

    public:
        MoveServant();
        virtual void walk();
        virtual void walkTo(int xposition, int yposition);
        virtual void turnAround();

    };

}

// : public Movable, public Ant, public Position, public Direction