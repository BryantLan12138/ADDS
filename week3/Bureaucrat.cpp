#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {
    identity = "Bureaucrat";
}

Bureaucrat::~Bureaucrat() {

}

void Bureaucrat::makeMove() {
    recentMove = 'P';
}

char Bureaucrat::getMove() {
    return recentMove;
}