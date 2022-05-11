#include <iostream>
//#include "Player.hpp"
#include "Captain.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Captain::Captain(Game &g, string name): Player(g,name) {
        this->_role="Captain";
    }

    void Captain::steal( Player &p){
        if(coinNum>=10){
            throw("have to coup");
        }
        if (legalAmount() && validTurn()) {
            if (p.coinNum>=2){
                p.coinNum-=2;
                this->coinNum+=2;
                p.coinsIStoled=2;
                game.nextTurn();
                enemy=&p;
                lastAction=2;
            }
            else {
                this->coinNum+=p.coinNum;
                p.coinsIStoled=1;
                p.coinNum=0;
                game.nextTurn();
                enemy=&p;
                lastAction=2;
            }
        }
        else{
            throw("Illegal turn or amount");
        }
    }

    void Captain::block( Player &p){
        if(coinNum>=10){
            throw("have to coup");
        }
        if (legalAmount() ) {
            if(p.lastAction==2){
                int temp= p.enemy->coinsIStoled;
                p.coinNum-=temp;
                p.enemy->coinNum+=temp;
                p.lastAction=-1;
            }
            else {
                throw ("theres no steal");
            }
        }
        else {
            throw ("Illegal turn or amount");
        }

    }

    string Captain::role(){
        return "Captain";
    }
}



