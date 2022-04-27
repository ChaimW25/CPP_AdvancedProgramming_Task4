#include <iostream>
#include "Player.hpp"
#include "Captain.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Captain::Captain(Game g, const string &n) {
        this->game = move(g);
        this->_name = n;
    }
    void Captain::steal(const Player &p){
    }
    void Captain::block(const Player &p){

    }

}

