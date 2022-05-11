#include <iostream>
//#include "Player.hpp"
#include "Duke.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Duke::Duke(Game &g,  string name) : Player(g,name){
        this->_role="Duke";
    }

    void Duke::block( Player &p) {
        if (legalAmount() ) {
            if(p.lastAction==1){
                p.coinNum-=2;
                p.lastAction=-1;
            }
            else {
                throw ("Illegal turn");
            }
        }
        else {
            throw ("Illegal turn");
        }

    }

    void Duke::tax() {
        if(coinNum>=10){
            throw("have to coup");
        }
        if (legalAmount() && validTurn()) {
            this->coinNum+=3;
            lastAction=-1;
            game.nextTurn();
        }
        else {
                throw ("Illegal turn");
        }
    }

    string Duke::role() {
        return "Duke";
    }

}

