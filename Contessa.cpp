#include <iostream>
#include "Player.hpp"
#include "Contessa.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Contessa::Contessa(Game g, const string &n) {
    this->game = move(g);
    this->_name = n;
    }



    void Contessa::block(const Player &p){
    }

}

