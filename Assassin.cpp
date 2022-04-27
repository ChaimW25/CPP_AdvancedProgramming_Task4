#include <iostream>
#include "Player.hpp"
#include "Assassin.hpp"
#include <cstring>
using namespace std;

namespace coup {


Assassin::Assassin(Game g, const string &n){
    this->game=move(g);
    this->_name=n;
}

}

