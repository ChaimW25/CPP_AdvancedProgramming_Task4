#include <iostream>
#include "Player.hpp"
#include "Contessa.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Contessa::Contessa(Game g, string n) {
    this->game = move(g);
    this->_name = n;
    this->_role="Contessa";
    this->coinNum=0;
    g.addPlayer(*this);

    }



    void Contessa::block(const Player &p){
    }

}

