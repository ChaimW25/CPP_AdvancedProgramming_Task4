#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Player.hpp"

//#ifndef AME_HPP
//#define AME_HPP
//#endif

//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Game.hpp"
//#endif

using namespace std;
namespace coup {
    class Game {

        vector<Player*> playerNames;


//        vector<string*> playerNamesP;

    public:
        Game();

        vector<string> players();

//        vector<Player> getPlayers();

        void addPlayer(Player &name);

        void removePlayer(Player &name);


        static string turn();

        static string winner();

    };
}