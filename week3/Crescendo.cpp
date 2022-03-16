#include "Crescendo.h"

Crescendo::Crescendo(){
    moveNum = 0;
    identity = "Crescendo";
    potentialMoves = new char[3];
    potentialMoves[0] = 'P';
    potentialMoves[1] = 'S';
    potentialMoves[2] = 'R';
}

Crescendo::~Crescendo(){

}

void Crescendo::makeMove() {
    recentMove = potentialMoves[moveNum % 3];
    moveNum++;
}

char Crescendo::getMove() {
    return recentMove;
}