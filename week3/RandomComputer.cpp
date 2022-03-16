#include "RandomComputer.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

RandomeComputer::RandomeComputer(){
    identity = "RandomeComputer";
    potentialMoves = new char[3];
    potentialMoves[0] = 'P'; 
    potentialMoves[1] = 'S';
    potentialMoves[2] = 'R';
}

RandomeComputer::~RandomeComputer(){
    
}

void RandomeComputer::makeMove(){
    std::srand(time(NULL));
    int ran_choice = rand() % 3;
    recentMove = potentialMoves[ran_choice];
    // std::cout << recentMove;
}

char RandomeComputer::getMove(){
    return recentMove;
}