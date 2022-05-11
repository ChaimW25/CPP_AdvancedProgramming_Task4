#pragma once

#include "Player.hpp"

namespace coup {
    class Player;

    class Captain : public coup::Player {
    public:

    string _role;

        Captain(Game &g,  string n);

        void steal( Player &p);

            void block( Player &p);

        string role();
    };
}
