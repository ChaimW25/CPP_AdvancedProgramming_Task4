#pragma once

#include "Player.hpp"

namespace coup {
    class Player;

    class Duke : public Player {
    public:

        string _role;

        Duke(Game &g, string n);

        void block( Player &p);

        void tax();

        string role();


    };
}
