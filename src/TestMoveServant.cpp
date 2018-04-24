#include "Slug.h"
#include "gtest/gtest.h"
#include "Ant.h"
#include "FastAnt.h"
#include "Position.h"
#include "Direction.h"
#include "MoveServant.h"

using namespace Ant1;

TEST(MoveServant,Testwalk){

    Ant ant;
    FastAnt fast;
    Slug slug;
    MoveServant service;
    service.walk(ant);
    service.walk(fast);
    service.walk(slug);

    Position expAntPos;
    expAntPos.setPosition(0,1);

    Position expFastAntPos;
    expFastAntPos.setPosition(-5,0);

    Position expSlugPos;
    expSlugPos.setPosition(0,-1);

    ASSERT_EQ(expAntPos,ant.getPosition());
    ASSERT_EQ(expFastAntPos, fast.getPosition());.
    ASSERT_EQ(expSlugPos, slug.getPosition());
}

TEST(MoveServant,TestwalkTo){
    Ant ant;
    FastAnt fast;
    Slug slug;
    MoveServant service;
    Position antPosition;

    antPosition.setPosition(5,5);
    service.walkTo(ant,antPosition);
    service.walkTo(fast,antPosition);
    service.walkTo(slug,antPosition);

    ASSERT_EQ(ant.getPosition(), antPosition);
    ASSERT_EQ(fast.getPosition(), antPosition);
    Assert_EQ(slug.getPosition(), antPosition);
}

TEST(MoveServant,TestturnAround){
    Ant ant;
    FastAnt fast;
    Slug slug;
    MoveServant service;
    service.turnAround(ant);
    service.turnAround(fast);
    service.turnAround(slug);

    ASSERT_EQ(ant.getDirection(), Direction::LEFT);
    ASSERT_EQ(fast.getDirection(), Direction::RIGHT);
    ASSERT_EQ(slug.getDirection(), Direction::UP);
}
