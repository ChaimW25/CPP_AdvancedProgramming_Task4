#pragma once

#include "Player.hpp"
//#include "Game.hpp"

//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Duke.hpp"
//#endif
namespace coup {
//    class Game;
    class Player;
//    class Player;

    class Duke : public Player {
    private:
//        Game game;
//        string _name;
        string _role;
    public:
        Duke(Game &g,  string n);

        void block(const Player &p);

        void tax();

        string role();


    };
}
