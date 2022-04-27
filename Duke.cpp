#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Duke::Duke(Game g, const string &n) {
        this->game = move(g);
        this->_name = n;
    }
    void Duke::block(const Player &p) {
    }
    void Duke::tax() {

    }

}

