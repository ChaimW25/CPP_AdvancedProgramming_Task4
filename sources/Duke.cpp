#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Duke::Duke(Game g,  string n) {
        this->game = move(g);
        this->_name = n;
        this->_role="Duke";
        this->coinNum=0;
        g.addPlayer(*this);
    }
    void Duke::block(const Player &p) {
    }
    void Duke::tax() {

    }

}

