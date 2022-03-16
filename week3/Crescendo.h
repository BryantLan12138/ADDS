#ifndef CRESCENDO_H
#define CRESCENDO_H

#include <string>
#include "Player.h"
class Crescendo: public Player {
    public:
        Crescendo();
        ~Crescendo();
        void makeMove();
        char getMove();
        char* potentialMoves;
        int moveNum;
        std::string identity;
    protected:
        char recentMove;
};

#endif