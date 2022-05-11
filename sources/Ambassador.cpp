#include <iostream>
//#include "Player.hpp"
#include "Ambassador.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Ambassador::Ambassador(Game &g,  string name): Player(g,name) {
//        this->game = std::move(g);
//        this->_name = name;
        this->_role="Ambassador";
//        this->coinNum=0;
//        this->game.size++;
//        cout<<"hiii";
    }

    void Ambassador::block(const Player &p){
        this->game.turnIncrement();

    }

    void Ambassador::transfer( Player &p1,  Player &p2){
        if(p1.coinNum>=1) {
            p1.coinNum -= 1;
            p2.coinNum += 1;
            this->game.turnIncrement();
            cout<<"nows turn??"<<this->game.turn()<<endl;
        }
        else{
            throw("not enough money");
        }

    }
    void Ambassador::unsteal(){
        this->game.turnIncrement();


    }
    string Ambassador::role(){
        return "Ambassador";
    }

}

