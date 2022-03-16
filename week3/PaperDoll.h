#ifndef PaperDoll_H
#define PaperDoll_H

#include <string>
#include "Player.h"
class PaperDoll: public Player {
    public:
        PaperDoll();
        ~PaperDoll();
        void makeMove();
        char getMove();
        char* potentialMoves;
        int moveNum;
        std::string identity;
    protected:
        char recentMove;
};

#endif