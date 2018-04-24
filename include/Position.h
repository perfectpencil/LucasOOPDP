#pragma once

namespace Ant1{
    class Position {
    public:
        Position();
        virtual int xposition;
        virtual int yposition;
        virtual void setPosition(int _xposition, int _yposition);
        virtual int getxPosition()const;
        virtual int getyPosition()const;
        virtual ~Position();
    };
}
