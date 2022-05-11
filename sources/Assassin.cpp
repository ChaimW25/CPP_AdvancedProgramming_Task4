#include <iostream>
//#include "Player.hpp"
#include "Assassin.hpp"
#include <cstring>
using namespace std;

namespace coup {


Assassin::Assassin(Game &g, string name): Player(g,name){
    this->_role="Assassin";
}

    string Assassin::role() {
    return "Assassin";
}
    void Assassin::coup( Player &p) {
        if (legalAmount() && validTurn()) {
            if (coinNum<3){
                throw("not enough coins");
            }
            if(coinNum<7){
                game.removePlayer(p);
                this->coinNum-=3;
                game.nextTurn();
                lastAction=3;
                enemy=&p;
                return;
            }
            else{
                game.removePlayer(p);
                this->coinNum-=7;
                game.nextTurn();
                lastAction=4;
            }
        }
        else{
            throw("Illegal turn or Illegal amount");
        }
    }


}

