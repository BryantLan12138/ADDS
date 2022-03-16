#ifndef Toolbox_H
#define Toolbox_H

#include "Player.h"
#include <string>
class Toolbox: public Player{
    public:

        Toolbox();
        void makeMove();
        char getMove();
        std::string identity;
        ~Toolbox();

    protected:
        char recentMove;
};

#endif