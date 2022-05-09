#include <iostream>
//#include "Player.hpp"
#include "Ambassador.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Ambassador::Ambassador(Game g,  string name) {
        this->game = std::move(g);
        this->_name = name;
        this->_role="Ambassador";
        this->coinNum=0;
        g.addPlayer(*this);
        cout<<"hiii";
    }

    void Ambassador::block(const Player &p){
    }

    void Ambassador::transfer(const Player &p1, const Player &p2){
    }
    void Ambassador::unsteal(){

    }

}

