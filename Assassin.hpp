#include "Player.hpp"
#include "Game.hpp"
#pragma once

#ifndef GAME_HPP
#define GAME_HPP
#include "Assassin.hpp"
#endif
namespace coup {

    class Assassin : public coup::Player {
    private:
        Game game;
        string _name;
    public:
        Assassin(Game g, const string &n);


    };
}