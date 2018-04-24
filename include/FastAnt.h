#pragma once
#include "Ant.h"
#include "Position.h"
#include "Movable.h"

namespace Ant1{
    class FastAnt {
    public:
        FastAnt();
        virtual int getMoveSpeed();
        virtual ~FastAnt();
    };
}
