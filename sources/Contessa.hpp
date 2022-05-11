#pragma once

#include "Player.hpp"
//#include "Game.hpp"

//#ifndef GAME_HPP
//#define GAME_HPP
//#include "Contessa.hpp"
//#endif
namespace coup {
//    class Game;
class Player;


    class Contessa : public coup::Player {
    private:
//        Game game;
//        string _name;
        string _role;
    public:
        Contessa(Game &g,  string n);

        void block( Player &p);
        string role();



    };
}
