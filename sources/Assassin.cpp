#include <iostream>
#include "Player.hpp"
#include "Assassin.hpp"
#include <cstring>
using namespace std;

namespace coup {


Assassin::Assassin(Game g, string name){
    this->game=move(g);
    this->_name=name;
    this->_role="Assassin";
    this->coinNum=0;
    g.addPlayer(*this);
}

}

