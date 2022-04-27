//#include "Player.hpp"
#ifndef GAME_HPP
#define GAME_HPP
#include "Captain.hpp"
#endif
namespace coup {
    class Ambassador : public coup::Player {
    private:
        Game game;
        string _name;
    public:
        Ambassador(Game g, const string &n);

        void transfer(const Player &p1, const Player &p2);

        void unsteal();


    };
}