#ifndef PLAYER_H
#define PLAYER_H

#include <string> 

class Player {
    protected:
        char recentMove;
    public:
        Player();
        
        virtual void makeMove();
        virtual char getMove();
        void refresh();

        int moveNum;
        char * potentialMoves;
        std::string identity;

        ~Player();
};

#endif