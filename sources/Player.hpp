#pragma once

#include "string"

#include <iostream>
#include <vector>



//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Player.hpp"
//#endif
using namespace std;
namespace coup {
    class Player {
    public:
        int coinNum;
        int index;
        string _name;
        string _role;

        Player(int coin, string role, string name);
        Player();
        int getIndex(){
            return index;
        }

        string getName(){
            return _name;
        }
        void income();

        void foreign_aid();

        void coup(const Player &p);

        string role();

        int coins();


    };
}