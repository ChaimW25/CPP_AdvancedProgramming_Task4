#include <iostream>
//#include "Player.hpp"
#include "Contessa.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Contessa::Contessa(Game &g, string name): Player(g,name) {
    this->_role="Contessa";
    }

    void Contessa::block( Player &p) {
//        cout << legalAmount()<<validTurn()<<endl;
        if (legalAmount()) {
            if (p.lastAction == 3) {
                p.enemy->alive = true;
                p.lastAction = -1;
            }
            else{
                throw("no coup relevant");
            }
        }
        else {
            throw ("Illegal amount");
        }
    }









//                uint place = 0;
//            for (Player *p: this->game.playerNamesP) {
//                if (!p->alive) {
//                    if (this->game.playerNamesP.at(place) == p) {
//                        this->game.playerNamesP.at(place)->alive = true;
//                        game.nextTurn();
//                        break;
//                    }
//                    place++;
//                }
//            }
//        }
//        else {
//            throw ("Illegal turn");
//        }
//    }
//    else{
//        throw ("Illegal amount");
//    }
//}
//        this->play = "block";
//        this->game.turnIncrement();


    string Contessa::role(){
        return "Contessa";
    }
}

