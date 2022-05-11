#include <iostream>
//#include "Player.hpp"
#include "Contessa.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Contessa::Contessa(Game &g, string name): Player(g,name) {
//    this->game = move(g);
//    this->_name = n;
    this->_role="Contessa";
//    this->coinNum=0;

    }



    void Contessa::block(const Player &p){
        this->game.turnIncrement();

    }
    string Contessa::role(){
        return "Contessa";
    }
}



