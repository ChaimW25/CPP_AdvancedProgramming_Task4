#pragma once

#include "Player.hpp"
//#include "Game.hpp"

//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Captain.hpp"
#include "Game.hpp"
//#endif
namespace coup {
    class Player;
//    class Player;
    class Ambassador : public coup::Player {
    private:
//        Game game;
        string _role;
//        Player p;
//        string _name;
    public:
        Ambassador(Game &g,  string str);

        void block(const Player &p);
        void transfer( Player &p1,  Player &p2);
        string role();

        void unsteal();

    };
}
