#pragma once
#include "Ant.h"
#include "Position.h"
#include "Movable.h"

namespace Ant1{
    class Slug{
    public:
        Slug();
        virtual int getMoveSpeed();
        virtual ~Slug();
    };
}
