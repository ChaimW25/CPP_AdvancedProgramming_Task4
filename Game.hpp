#include "string"
#include <iostream>
#include <vector>
#pragma once

#ifndef GAME_HPP
#define GAME_HPP
#include "Game.hpp"
#endif

using namespace std;
namespace coup {
    class Game {
    private:
        vector<string> playerNames;
    public:
        Game();

        static vector<string> players();

        static string turn();

        static string winner();

    };
}