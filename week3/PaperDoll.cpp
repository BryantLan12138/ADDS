#include "PaperDoll.h"

PaperDoll::PaperDoll(){
    identity = "PaperDoll";
    moveNum = 0;
    potentialMoves = new char[3];
    potentialMoves[0] = 'P';
    potentialMoves[1] = 'S';
    potentialMoves[2] = 'S';
}

PaperDoll::~PaperDoll(){

}

void PaperDoll::makeMove() {
    recentMove = potentialMoves[moveNum % 3];
    moveNum++;
}

char PaperDoll::getMove(){
    return recentMove;
}