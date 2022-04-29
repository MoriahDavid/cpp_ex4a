
#pragma once
#include "Game.hpp"
#include <string>

using namespace std;
using namespace coup;

namespace coup{

    class Player{
        private:
            string name;
            double _coins;

        public:
            Player(Game game, string name);

            void income();
            void foreign_aid();
            void coup(Player p);
            void role();
            string coins();
            void block(Player p);

    };
    
}