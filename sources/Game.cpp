#include <iostream>
#include "Player.hpp"
#include "Game.hpp"
#include <cstring>
#include <vector>
#include <vector>
using namespace std;

namespace coup {

    Game::Game() {
//        this->size=0;
        this->GameTurn=0;
//        this->playerNamesP ;
//        this->playerNames;

    }
      vector<string> Game::players() {
////        vector<string> s;
          vector<string> v ;
//          return v;}
          string str;
          for(size_t i=0; i < this->playerNamesP.size(); i++){
              str=this->playerNamesP.at(i)->getName();
              v.push_back(str);
//              cout << name << endl;
//              cout<<*name<<endl;
//              this->playerNames =(*)this->playerNamesP;
          }
        cout<<v.size()<<endl;
//        cout<<v.at(1)<<endl;
        return v;
    }
//    vector<Player> Game::getPlayers(){
////        vector<string*>vec=this->playerNames;
//        vector<string> vec=this->playerNames;
//        vector<int*> i;
////        vec*  i;
//        return i;
//    }
    vector<Player*>* Game::myVector(){
        return &this->playerNamesP;
    }
    void Game::addPlayer(Player *name){
//        vector<Player*>* v = this->playerNamesP;
        vector<Player*>* vec=myVector();
        cout<<"till now ok"<<endl;
        cout<<vec->size()<<endl;
        vec->push_back(name);
        cout<<"and now?"<<endl;
        cout<<vec->size()<<endl;
        sizeIncrement();
//        int i=vec->size();
//        size=&i;
//        cout<<*size;


//        vector<Player>* v =this->playerNamesP*;
//        for (uint i = 0; i < this->playerNamesP->size(); i++) {
//            cout<<this->playerNamesP->at(i)->getName()<<endl;
//            cout<<this->playerNamesP->size()<<endl;
//        }

//            name.index=this->playerNames.size();
//        this->playerNames.push_back(name);

//        vector<string*> vec=coup::Game::getPlayers();
//        this->playerNames.push_back(name);
//        vector<string> vec=getPlayers();
//        vec.push_back(&name);
//        this->playerNamesP.push_back(&name);
//        cout<<"num\n"+name;
    }
    void Game::sizeIncrement(){
        this->size++;
    }

    bool Game::playerExist(Player &name) {

        vector<Player *> *vec = myVector();
        for (uint i = 0; i < vec->size(); i++) {
            if (vec->at(i)->_name == name.getName()) {
                return true;
            }
        }
        return false;
    }

    void Game::removePlayer(Player &name) {
////        vector<Player*> v = this->playerNamesP;
        vector<Player*>* vec=myVector();

        for (uint i = 0; i < vec->size(); i++) {
            if (vec->at(i)->_name == name.getName()) {
                vec->erase(vec->begin() + i);
                size--;
                return;
            }

        }
        throw("no exist");

    }
//        this->playerNames.erase(this->playerNames.begin()+name.index);
//        this->playerNames.remove(this->playerNames.begin(),this->playerNames.end(),name);
//        this->playerNames.erase(std::remove(this->playerNames.begin(),this->playerNames.end(),name),this->playerNames.end());



    string Game::turn() {
        if(size>0) {
            vector<Player *> *vec = this->myVector();
            cout << this->size << " " << this->GameTurn << "  " << vec->at((uint) this->GameTurn % (uint) size)->_name
                 << endl;
            return this->myVector()->at((uint) this->GameTurn % (uint) size)->_name;
        }
        else
            return "x";
//        return players().at(1);//(uint)this->GameTurn%this->myVector()->size());
    }
    void Game::turnIncrement() {
        GameTurn++;
    }

    string Game::winner() {
        if(started==false){
            throw("isnt started");
        }
        if(size==1){
                return players().at(0);
        }
        else{
            throw("Game isn't over");
        }
        return "";
    }

}
