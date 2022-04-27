#include <iostream>
#include "Player.hpp"
#include "Ambassador.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Ambassador::Ambassador(Game g, const string &n) {
        this->game = std::move(g);
        this->_name = n;
    }

    void Ambassador::transfer(const Player &p1, const Player &p2){
    }
    void Ambassador::unsteal(){

    }

}

