#include <iostream>
#include "Player.hpp"
#include "Game.hpp"
#include <cstring>
using namespace std;

namespace coup {

    Game::Game() {

    }
     vector<string> Game::players() {
        vector<string> s;
        return s;
    }
    string Game::turn() {
        return "";
    }
    string Game::winner() {
        return "";
    }

}