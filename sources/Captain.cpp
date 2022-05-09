#include <iostream>
#include "Player.hpp"
#include "Captain.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Captain::Captain(Game g, string n) {
        this->game = move(g);
        this->_name = n;
        this->_role="Captain";
        this->coinNum=0;
        g.addPlayer(*this);
    }
    void Captain::steal(const Player &p){
    }
    void Captain::block(const Player &p){

    }

}

