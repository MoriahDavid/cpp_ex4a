#include <string.h>

#include "Player.hpp"
#include "Game.hpp"

namespace coup{
    class Captain : public Player{
        using Player::Player;

        private:
        public:
            void steal(Player p);
    };
}