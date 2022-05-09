#include <iostream>
//#include "Player.hpp"
#include "Game.hpp"
#include <cstring>
#include <vector>
using namespace std;

namespace coup {

    Game::Game() {


    }
      vector<string> Game::players() {
//        vector<string> s;
          vector<string> v ;
          string str;
          for(size_t i=0; i < this->playerNames.size(); i++){
              str=this->playerNames.at(i)->getName();
              v.push_back(str);
//              cout << name << endl;
//              cout<<*name<<endl;
//              this->playerNames =(*)this->playerNamesP;
          }
        return v;
    }
//    vector<Player> Game::getPlayers(){
////        vector<string*>vec=this->playerNames;
//        vector<string> vec=this->playerNames;
//        vector<int*> i;
////        vec*  i;
//        return i;
//    }
    void Game::addPlayer(Player &name){
        name.index=this->playerNames.size();
        this->playerNames.push_back(&name);
//        vector<string*> vec=coup::Game::getPlayers();
//        this->playerNames.push_back(name);
//        vector<string> vec=getPlayers();
//        vec.push_back(&name);
//        this->playerNamesP.push_back(&name);
//        cout<<"num\n"+name;
    }
    void Game::removePlayer(Player &name) {
        this->playerNames.erase(this->playerNames.begin()+name.index);
//        this->playerNames.remove(this->playerNames.begin(),this->playerNames.end(),name);
//        this->playerNames.erase(std::remove(this->playerNames.begin(),this->playerNames.end(),name),this->playerNames.end());
    }


    string Game::turn() {
        return "";
    }
    string Game::winner() {
        return "";
    }

}