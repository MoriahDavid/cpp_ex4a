#include "doctest.h"
#include <iostream>
#include <string>
#include <stdexcept>

#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "Game.hpp"
#include "Player.hpp"

using namespace coup;
using namespace std;

TEST_CASE("tests"){

        Game game;
        Ambassador ambassador(game, "amb");
        Assassin assassin(game, "ass");
        Captain captain(game, "capt");
        Contessa contessa(game, "conts");
        Duke duke(game, "duke");


        CHECK(ambassador.coins() == "0");
        CHECK(assassin.coins() == "0");
        CHECK(captain.coins() == "0");
        CHECK(contessa.coins() == "0");
        CHECK(duke.coins() == "0");

        CHECK(game.turn() == "amb");

        CHECK_NOTHROW(ambassador.income());
        CHECK(ambassador.coins() == "1");
        CHECK(assassin.coins() == "0");
        CHECK(captain.coins() == "0");
        CHECK(contessa.coins() == "0");
        CHECK(duke.coins() == "0");

        CHECK(game.turn() == "ass");

        CHECK_NOTHROW(assassin.income());
        CHECK(assassin.coins() == "1");

        CHECK(game.turn() == "capt");

        CHECK_NOTHROW(captain.income());
        CHECK(assassin.coins() == "1");
        
        CHECK(game.turn() == "conts");

        CHECK_NOTHROW(contessa.income());
        CHECK(contessa.coins() == "1");

        CHECK_NOTHROW(duke.income());
        CHECK(duke.coins() == "1");

        CHECK(game.turn() == "amb");

        CHECK_NOTHROW(ambassador.income());
        CHECK(ambassador.coins() == "2");

}

