#include <iostream>
//#include "Player.hpp"
#include "Assassin.hpp"
#include <cstring>
using namespace std;

namespace coup {


Assassin::Assassin(Game &g, string name): Player(g,name){
//    this->game=move(g);
//    this->_name=name;
    this->_role="Assassin";
//    this->coinNum=0;
}

    string Assassin::role() {
    return "Assassin";
}
    void Assassin::coup( Player &p) {
        if(validTurn()){
            if (coinNum<3){
                throw("not enough coins");
            }
            else {
                if(coinNum<7){
                    game.removePlayer(p);
                    this->coinNum-=3;
                    game.turnIncrement();
                }
                else{
                    game.removePlayer(p);
                    this->coinNum-=7;
                    game.turnIncrement();
                    cout<<"nows turn??"<<this->game.turn()<<endl;

                }
            }

//            this->game.GameTurn++;
        }
        else{
            throw("Illegal turn");
        }

}


}

