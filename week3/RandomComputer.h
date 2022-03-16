#ifndef RANDOMECOMPUTER_H
#define RANDOMECOMPUTER_H

#include "Player.h"
#include <string>
class RandomeComputer: public Player{
    public:

        RandomeComputer();
        void makeMove();
        char getMove();
        std::string identity;
        char* potentialMoves;
        ~RandomeComputer();

    protected:
        char recentMove;
};

#endif