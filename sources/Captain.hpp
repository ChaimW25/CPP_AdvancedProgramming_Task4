#pragma once

#include "Player.hpp"
//#include "Game.hpp"

//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Captain.hpp"
//#endif
namespace coup {
    class Player;
//    class Player;


    class Captain : public coup::Player {
    public:
//        Game game;
//        string _name;
    string _role;
        Captain(Game &g,  string n);

        void steal( Player &p);

        void block(const Player &p);

        string role();


    };
}
