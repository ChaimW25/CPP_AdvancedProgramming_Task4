#include <iostream>
#include "Player.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Player::Player(Game &game,  string name) :game(game),_name(name) {
        if(game.size==6){
            throw("enough players");
        }
        if(game.started==true){
            throw("game started already");
        }
        game.addPlayer(this);
//        this->game=game;
//        this->_name=name;
        this->index=this->game.players().size();
        cout<<index<<"Indx"<<endl;
//        this->coinNum=coin;
//        this->game=game;
////        this->_role=move(role);
//        this->_name=move(name);

    }
//    Player::Player() {
//        this->coinNum=0;
//        this->_role="";
//        this->_name="";
//    }

    string Player::getName(){
        return _name;
    }


    void Player::income() {
        cout << "to income" << 0 % 5 << endl;
        cout << game.turn() << " ? " << this->getName() << endl;
        if (legalAmount()) {
            if (validTurn()) {
                cout << "legal" << endl;
                this->coinNum++;
                game.turnIncrement();
                game.started=true;
//            this->game.GameTurn++;
            } else {
                cout << "throw" << endl;

                throw ("Illegal turn");
            }}
            else{
                throw ("Illegal amount");
            }

    }
    void Player::foreign_aid() {
        if (legalAmount()) {
            if(validTurn()){
            this->coinNum+=2;
            game.turnIncrement();
            game.started=true;


//            this->game.GameTurn++;
        }
        else{
            throw("Illegal turn");
        }}
        else{
            throw ("Illegal amount");
        }

    }
    void Player::coup( Player &p) {
        if (legalAmount()) {

            if(validTurn()){
            if (coinNum<7){
                throw("not enough coins");
            }
            else {
                cout<<"check if alive"<<endl;
//                if(game.playerExist(p)) {
                    cout << "check if keep going"<<getName() << endl;
                    game.removePlayer(p);
                    this->coinNum -= 7;
                    game.turnIncrement();
                    game.started=true;
//                }
//                else{
//                    cout<<"no exist"<<endl;
//                    throw("no exist");
//                }
            }

//            this->game.GameTurn++;
        }
        else{
            throw("Illegal turn");
        }}
    else{
    throw ("Illegal amount");
}
    }
    bool Player::validTurn(){
        if(this->getName()!=game.turn()){
            return false;
        }
        return true;
    }
    bool Player::legalAmount(){
        if (game.size<2){
            return false;
        }
        return true;
    }
//    bool Player::started(){
//        boo
//        if()
//    }

    string Player::role() {
        return "rol";
    }
    int Player::coins() {
        cout<<"coin"<<endl;

        return this->coinNum;
    }



    }
