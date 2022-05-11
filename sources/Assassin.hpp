#pragma once

#include "Player.hpp"
//#include "Game.hpp"

//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Assassin.hpp"
//#endif
namespace coup {
    class Player;
//    class Player;

    class Assassin : public coup::Player {
    private:
//        Game game;
        string _role;
    public:
        Assassin(Game &g,  string n);
        string role();
        void coup( Player &p);



    };
}
