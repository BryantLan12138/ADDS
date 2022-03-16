#ifndef FistfullODollars_H
#define FistfullODollars_H

#include <string>
#include "Player.h"
class FistfullODollars: public Player{
    public: 
        FistfullODollars();
        ~FistfullODollars();
        void makeMove();
        char getMove();
        char* potentialMoves;
        int moveNum;
        std::string identity;
    protected:
        char recentMove;
};


#endif