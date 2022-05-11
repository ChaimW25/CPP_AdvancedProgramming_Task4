#include <iostream>
#include "Player.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Player::Player(Game &game,  string name) :game(game),_name(name) {
//        if(game.playerNamesP.size()>=6){
//            throw("enough players");
//        }
        if(game.started==true){
            throw("game started already");
        }
        game.addPlayer(*this);
    }

    string Player::getName(){
        return _name;
    }

    void Player::income() {
        if (coinNum >= 10) {
            throw ("have to coup");
        }
        if (legalAmount() && validTurn()) {
            this->coinNum++;
            game.started = true;
            game.nextTurn();
            lastAction=0;
        } else {
            throw ("Illegal turn or Illegal amount");
        }
    }

    void Player::foreign_aid() {
        if(coinNum>=10){
            throw("have to coup");
        }
        if (legalAmount() && validTurn()) {
            this->coinNum+=2;
            game.started=true;
            game.nextTurn();
            lastAction=1;
        }
        else {
            throw ("Illegal turn or amount" );
        }
    }

    void Player::coup( Player &p) {
        if (legalAmount() && validTurn()) {
            if (coinNum<7){
                throw("not enough coins");
            }
                    game.removePlayer(p);
                    this->coinNum -= 7;
                    game.started=true;
                    game.nextTurn();
                    lastAction=4;
        }
        else{
            throw("Illegal turn");
        }
    }

    bool Player::validTurn(){
//        cout<<game.turn()<<"hiiiiiiiiiiii"<<endl;
        if(this->getName()!=game.turn()){
            return false;
        }
        return true;
    }

    bool Player::legalAmount(){
        if (game.playerNamesP.size()<2){
            return false;
        }
        return true;
    }

    string Player::role() {
        return "";
    }

    int Player::coins() {
        return this->coinNum;
    }



    }
