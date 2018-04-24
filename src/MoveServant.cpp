#include "MoveServant.h"
//#include "Movable.h"
//#include "Ant.h"
//#include "Position.h"
#include "MoveServant.h"
#include <new>
#include <memory>

namespace Ant1{
    MoveServant::MoveServant(){};
    void walk(Position serviced) {
        //Position serviced;
        int xpos = serviced.getxPosition();
        int ypos = serviced.getyPosition();

        Ant serv;
        int speed = serv.getMoveSpeed();
        if(serv.getDirection() == Direction(LEFT))
            xpos = xpos - speed;
        else if (serv.getDirection() == Direction(RIGHT))
            xpos = xpos + speed;
        else if (serv.getDirection() == Direction(UP))
            ypos = ypos + speed;
        else
            ypos = ypos - speed;

        serviced.setPosition(xpos,ypos);
    }

    void walkTo(int xposition, int yposition){
        int xpos = xposition;
        int ypos = yposition;
        Position serviced;
        serviced.setPosition(xpos,ypos);
    }

    void turnAround(){
        Ant serviced;
        if (serviced.getDirection() == Direction::LEFT)
            serviced.setDirection(Direction::RIGHT);
        else if (serviced.getDirection() == Direction::RIGHT)
            serviced.setDirection(Direction::LEFT);
        else if (serviced.getDirection() == Direction::UP)
            serviced.setDirection(Direction::DOWN);
        else
            serviced.setDirection(Direction::UP);
    }
}

