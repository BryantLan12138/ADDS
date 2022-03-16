#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
    identity = "FistfullODollars";
    potentialMoves = new char[3];
    potentialMoves[0] = 'R';
    potentialMoves[1] = 'P';
    potentialMoves[2] = 'P';
    moveNum = 0;
}

FistfullODollars::~FistfullODollars(){

}

void FistfullODollars::makeMove(){
    recentMove = potentialMoves[moveNum % 3];
    moveNum++;
}

char FistfullODollars::getMove(){
    return recentMove;
}