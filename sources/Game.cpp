#include <iostream>
#include "Player.hpp"
#include "Game.hpp"
#include <cstring>
#include <vector>
#include <vector>
using namespace std;

namespace coup {

    Game::Game() {

    }

    vector<string> Game::players() {
          vector<string> v ;
          string str;
          for(size_t i=0; i < this->playerNamesP.size(); i++){
              if (this->playerNamesP.at(i % this->playerNamesP.size())->alive) {
                  str = this->playerNamesP.at(i)->getName();
                  v.push_back(str);
              }
          }
        return v;
    }

//    vector<Player*>* Game::myVector(){
//        return &this->playerNamesP;
//    }

    void Game::addPlayer(Player& name){
//        cout<<playerNamesP.size()<<"sizzzzz"<<endl;
//        for (Player* p : this->playerNamesP) {
//            cout<<p->getName()<<endl;
//        }
        if(playerNamesP.size()==6){

            throw invalid_argument("too many");
        }
//        vector<Player*>* vec=myVector();

        playerNamesP.push_back(&name);

//        cout << "ater" << endl;
//        for (Player* p : this->playerNamesP) {
//            cout<<p->getName()<<endl;
//        }

//        size++;

    }

    void Game::removePlayer(Player &name) {

            for (Player* p : this->playerNamesP) {
                if (p->_name == name._name){
                    if (!p->alive){
                        throw ("is dead already");
                    }
                    p->alive = false;
                    return;
                }
            }
            throw("no exist");
    }


    string Game::turn() {
        if(playerNamesP.size()>0) {
            return this->playerNamesP.at(currTurn)->getName();
        }
        else
            return "x";
    }


    string Game::winner() {
        if(started==false){
            throw("isnt started");
        }
        if(players().size()==1){
                return players().at(0);
        }
        else{
            throw("Game isn't over");
        }
    }

    void Game::nextTurn() {
        for (uint i = this->currTurn + 1; i < this->playerNamesP.size() + this->currTurn; ++i) {
            if (this->playerNamesP.at(i % this->playerNamesP.size())->alive) {
//                cout<<"this currTurn="<<currTurn<<endl;
                this->currTurn = i % this->playerNamesP.size();
//                cout<<"next currTurn="<<i % this->playerNamesP.size()<<"  "<<i<<playerNamesP.size()<<endl;
                break;
            }
        }
    }
}
