#include "sources/Player.hpp"
#include "sources/Duke.hpp"
#include "sources/Assassin.hpp"
#include "sources/Ambassador.hpp"
#include "sources/Captain.hpp"
#include "sources/Contessa.hpp"
#include "sources/Game.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <exception>

using namespace coup;


using namespace std;

int main() {

    Game game_1{};
    Ambassador ambassador{game_1, "Meirav"};
    vector<string> players = game_1.players();
    for (string name: players) {
        cout << name << endl;
    }
    return 0;
}