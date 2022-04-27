#include "doctest.h"
//#include "Demo.cpp"

#include <string>
#include <algorithm>
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Ambassador.hpp"



using namespace std;

#include <string>
#include <vector>

using namespace std;
namespace coup {

    Game game_1{};

/* This player drew the "Duke" card, his name is Moshe
and he is a player in game_1 */
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};


    TEST_CASE("Captain tests") {
        CHECK(captain.role()=="Captain");
        CHECK(captain.coins()==0);

    }
    TEST_CASE("Assassin tests") {
        CHECK(captain.role()=="Assassin");
        CHECK(captain.coins()==0);

    }
    TEST_CASE("Ambassador tests") {
                CHECK(captain.role()=="Ambassador");
                CHECK(captain.coins()==0);

    }
    TEST_CASE("Contessa tests") {
                CHECK(captain.role()=="Contessa");
                CHECK(captain.coins()==0);

    }
    TEST_CASE("Duke tests") {
                CHECK(captain.role()=="Duke");
                CHECK(captain.coins()==0);

    }
    TEST_CASE("Player tests") {
        Player p(3,"Captain","haim");
                CHECK(p.role()=="Captain");
                CHECK(p.coins()==3);
                p.foreign_aid();
                CHECK(p.coins()==5);
                p.income();
                CHECK(p.coins()==6);



    }
    TEST_CASE("Game tests") {

        vector<string> players = game_1.players();
                CHECK(players.at(0) == "MOSHE");
                CHECK(players.at(4) == "Gilad");
    }

        TEST_CASE("Bad input") {
        //not in turn
        duke.income();
        CHECK_THROWS(captain.income());

        //block someone who cannot block(didn't steal)
        assassin.foreign_aid();
        ambassador.income();
        CHECK_THROWS(captain.block(duke));

        //block someone who didn't assassin
        captain.income();
        CHECK_THROWS(contessa.block(duke));

        //coup without enough coins
        contessa.income();
        CHECK_THROWS(duke.coup(captain));

    }

    }