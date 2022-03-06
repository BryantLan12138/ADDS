#ifndef REFEREE_H
#define REFEREE_H

#include "Computer.h"
#include "Human.h"

class Referee {
    public: 
        char judge(Human player1, Computer player2);
};

#endif