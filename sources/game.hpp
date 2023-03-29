#ifndef GAME_HPP
#define GAME_HPP

#include "player.hpp"

namespace ariel
{
    class Game
    {
        public:
            Player p1, p2;
            Game(Player& pl1, Player& pl2);
            Game();
            void playTurn();
            void printLastTurn();
            void playAll ();
            void printWiner();
            void printLog();
            void printStats();
    };
}
#endif
