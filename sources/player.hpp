#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <queue>
#include <string>
using namespace std;

namespace ariel
{
    class Player
    {
        public:
            string name;
            int amount;
            queue<int> cards;
            
            Player(string);
            Player();
            int stacksize();
            int cardesTaken();
            void add_card(int);
    };
}
#endif
