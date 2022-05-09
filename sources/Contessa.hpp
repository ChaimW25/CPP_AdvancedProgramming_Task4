#pragma once

#include "Player.hpp"
#include "Game.hpp"

//#ifndef GAME_HPP
//#define GAME_HPP
#include "Contessa.hpp"
//#endif
namespace coup {

    class Contessa : public coup::Player {
    private:
        Game game;
        string _name;
    public:
        Contessa(Game g,  string n);

        void block(const Player &p);


    };
}