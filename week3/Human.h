#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human: public Player{
    public:
        char getMove();
        void makeMove();
        char input;

};

#endif