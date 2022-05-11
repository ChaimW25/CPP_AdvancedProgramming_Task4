#include <iostream>
//#include "Player.hpp"
#include "Captain.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Captain::Captain(Game &g, string name): Player(g,name) {
//        this->game = move(g);
//        this->_name = n;
        this->_role="Captain";
//        this->coinNum=0;
    }
    void Captain::steal( Player &p){
        if(validTurn()){
            if (p.coinNum>=2){
                p.coinNum-=2;
                this->coinNum+=2;
                game.turnIncrement();
            }
        else {
            this->coinNum+=p.coinNum;
            p.coinNum=0;
            game.turnIncrement();

            }

//            this->game.GameTurn++;
        }
        else{
            throw("Illegal turn");
        }

    }
    void Captain::block(const Player &p){
        this->game.turnIncrement();


    }
    string Captain::role(){
        return "Captain";
    }
}

