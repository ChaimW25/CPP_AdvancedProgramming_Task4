#include <iostream>
#include "Player.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Player::Player(int coin, string role, string name) {
        this->coinNum=coin;
        this->_role=move(role);
        this->_name=move(name);
    }
    Player::Player() {
        this->coinNum=0;
        this->_role="";
        this->_name="";
    }


    void Player::income() {
        this->coinNum++;
    }
    void Player::foreign_aid() {
    }
    void Player::coup(const Player &p) {
    }
    string Player::role() {
        return "";
    }
    int Player::coins() {
        return this->coinNum;
    }



    }