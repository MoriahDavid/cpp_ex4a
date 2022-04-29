#include <string.h>

#include "Player.hpp"
#include "Game.hpp"

namespace coup{
    
    class Duke : public Player{
        using Player::Player;

        private:
        public:
            void tax();
    };
}