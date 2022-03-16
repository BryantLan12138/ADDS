#include "Avalanche.h"


Avalanche::Avalanche() {
    identity = "Avalanche";
}

Avalanche::~Avalanche() {

}

void Avalanche::makeMove() {
    recentMove = 'R';
}

char Avalanche::getMove() {
    return recentMove;
}