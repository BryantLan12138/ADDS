#include "Computer.h"
#include <iostream>

using namespace std;

char Computer::getMove() {
    return Computer::makeMove();
}

char Computer::makeMove() {
    return 'R';
}