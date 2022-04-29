#include <string.h>

#include "Player.hpp"
#include "Game.hpp"

namespace coup{
    
    class Ambassador : public Player{
        using Player::Player;

        private:

        public:
            void transfer(Player p1, Player p2);
    };
}