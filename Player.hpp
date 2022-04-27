#include "string"
#include <iostream>
#include <vector>
#include "Game.hpp"
#pragma once

#ifndef GAME_HPP
#define GAME_HPP
#include "Player.hpp"
#endif
using namespace std;
namespace coup {
    class Player {
    private:
        int coinNum;
        string _name;
        string _role;

    public:
        Player(int coin, string role, string name);
        Player();
        void income();

        void foreign_aid();

        void coup(const Player &p);

        static string role();

        static int coins();


    };
}