#include "Human.h"
#include <iostream>
#include <cctype>

using namespace std;

char Human::getMove() {
    return input;
}

void Human::makeMove() {
    bool valid = false;

    while(!valid) {
        cout << "Please enter a move: ";
        cin >> input;
        input = toupper(input);
        if(input == 'R' || input == 'P' || input == 'S'){
            valid = true;
        }
    }

}