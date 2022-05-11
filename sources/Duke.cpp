#include <iostream>
//#include "Player.hpp"
#include "Duke.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Duke::Duke(Game &g,  string name) : Player(g,name){
//        this->game = move(g);
//        this->_name = n;
        this->_role="Duke";
//        this->coinNum=0;
    }
    void Duke::block(const Player &p) {
        this->game.turnIncrement();

    }
    void Duke::tax() {
        this->coinNum+=3;
        cout<<"the turn is"<<this->getName()<<endl;
        this->game.turnIncrement();
        cout<<"nows turn??"<<this->game.turn()<<endl;


    }
    string Duke::role() {
        return "Duke";
    }

}


