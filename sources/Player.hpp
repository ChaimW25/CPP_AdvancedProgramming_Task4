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
        int index;
        string _name;
        Game &game;

        Player(Game &game, string name);
//        Player();
        int getIndex(){
            return index;
        }

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
