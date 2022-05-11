#pragma once

#include "Player.hpp"
#include "Game.hpp"

namespace coup {
    class Player;
    class Ambassador : public coup::Player {
    public:
        string _role;

        Ambassador(Game &g,  string str);

        void block( Player &p);

        void transfer( Player &p1,  Player &p2);

        string role();

        void unsteal();

    };
}
