#pragma once

#include "Direction.h"
#include "Position.h"
#include <memory>

namespace Ant1 {
    class Ant  {
    private: Direction dir;
    public:
        Ant();
        virtual Direction getDirection();
        virtual void setDirection(Direction _dir);
        virtual int getMoveSpeed();
        virtual void setDirectionLeft();
        virtual void setDirectionRight();
        virtual void setDirectionUp();
        virtual void setDirectionDown();
        virtual ~Ant();
    };
}

