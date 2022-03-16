#include "Toolbox.h"

Toolbox::Toolbox() {
    identity = "Toolbox";
}

Toolbox::~Toolbox() {

}

void Toolbox::makeMove() {
    recentMove = 'S';
}

char Toolbox::getMove() {
    return recentMove;
}