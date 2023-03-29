#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include <string.h>
#include <stdexcept>
#include <iostream>
using namespace ariel;
using namespace std;

TEST_CASE("")
{
    CHECK_NOTHROW(Player p1("p1"));
    CHECK_NOTHROW(Player p2("p2"));
    CHECK_NOTHROW(Game game(Player& p1, Player& p2));
    
    CHECK_NOTHROW(Player p3("3"));
    CHECK_NOTHROW(Player p4("4"));
    CHECK_NOTHROW(Player p5("5"));
    CHECK_NOTHROW(Player p6("6"));
    CHECK_NOTHROW(Player p7("7"));
    CHECK_NOTHROW(Player p8("8"));
    CHECK_NOTHROW(Player p9("9"));
    CHECK_NOTHROW(Player p10("10"));
    CHECK_NOTHROW(Player p11("11"));
    CHECK_NOTHROW(Player p12("12"));
    CHECK_NOTHROW(Player p13("13"));
    CHECK_NOTHROW(Player p14("14"));
    CHECK_NOTHROW(Player p15("15"));
    CHECK_NOTHROW(Player p16("16"));
    CHECK_NOTHROW(Player p17("17"));
    CHECK_NOTHROW(Player p18("18"));
    CHECK_NOTHROW(Player p19("19"));
    CHECK_NOTHROW(Player p20("20"));
}
