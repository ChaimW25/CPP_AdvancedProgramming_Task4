#pragma once

#include <string>
#include <iostream>
#include <vector>

using namespace std;
namespace coup {
    class Player;
    class Game {
    public:

//        vector<Player> playerNames;
//        int GameTurn;
//        int size=0;
        bool started=false;
        size_t currTurn=0;
        vector<Player*> playerNamesP;


//        vector<string*> playerNamesP;

        Game();

//        bool playerExist(Player &p);

//        void sizeIncrement();


            vector<string> players();

//        vector<Player*>* myVector();

//        vector<Player> getPlayers();

        void addPlayer(Player& name);

        void removePlayer(Player &name);


         string turn();

//         void turnIncrement();
        void nextTurn();

         string winner();

    };
}
