#pragma once

#include <string>
#include <iostream>
#include <vector>
//#include "Player.hpp"
//#include "Ambassador.hpp"
//#include "Assassin.hpp"
//#include "Captain.hpp"
//#include "Contessa.hpp"
//#include "Duke.hpp"

//#ifndef AME_HPP
//#define AME_HPP
//#endif

//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Game.hpp"
//#endif

using namespace std;
namespace coup {
    class Player;
//    class Ambassador;
//    class Assassin;
//    class Duke;
//    class Contessa;
//    class Captain;
    class Game {
    public:

//        vector<Player> playerNames;
        int GameTurn;
        int size=0;
        bool started=false;
        vector<Player*> playerNamesP;


//        vector<string*> playerNamesP;

        Game();

        bool playerExist(Player &p);

        void sizeIncrement();


            vector<string> players();

        vector<Player*>* myVector();

//        vector<Player> getPlayers();

        void addPlayer(Player *name);

        void removePlayer(Player &name);


         string turn();

         void turnIncrement();

         string winner();

    };
}
