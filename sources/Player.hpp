#pragma once

#include "string"
#include "Game.hpp"

#include <iostream>
#include <vector>



//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Player.hpp"
//#endif
using namespace std;
namespace coup {
    class Game;
    class Player {
    public:
        int coinNum=0;
//        int index;
        string _name;
        bool alive=true;
        Game &game;
        bool cheapCoup=false;
        Player* enemy=NULL;
        int coinsIStoled=0;
        int lastAction=-1;
        // 0-income
        //1-foreign
        //2-steal
        //3-assissincoup
        //4-coup
        //-1-none

        Player(Game &game, string name);

        string getName();

        void income();

        void foreign_aid();

        virtual void coup( Player &p);

        virtual string role();

        int coins();

        bool validTurn();

        bool legalAmount();



        };
}
