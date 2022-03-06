#include "Human.h"
#include <iostream>
#include <cctype>

using namespace std;

char Human::getMove() {
    return Human::makeMove();
}

char Human::makeMove() {
    char input;
    bool valid = false;

    while(!valid) {
        cout << "Please enter a move: ";
        cin >> input;
        input = toupper(input);
        if(input == 'R' || input == 'P' || input == 'S'){
            valid = true;
        }
    }

    return input;
}