#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include "Player.h"

class Bureaucrat: public Player{
    public:
        Bureaucrat();
        ~Bureaucrat();
        void makeMove();
        char getMove();
        std::string identity;
    protected:
        char recentMove;
};

#endif