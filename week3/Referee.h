#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
    public: 
        Referee();
        ~Referee();
        char refGame(Player* player1, Player* player2);
        int win_count;
};

#endif