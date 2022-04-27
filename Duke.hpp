#include "Player.hpp"
#pragma once

#ifndef GAME_HPP
#define GAME_HPP
#include "Duke.hpp"
#endif
namespace coup {

    class Duke : public coup::Player {
    private:
        Game game;
        string _name;
    public:
        Duke(Game g, const string &n);

        void block(const Player &p);

        void tax();


    };
}