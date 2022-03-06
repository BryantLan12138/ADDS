#include "Referee.h"
#include <iostream>

using namespace std;

char Referee::judge(Human player1, Computer player2) {
    char p1Move = player1.getMove();
    char p2Move = player2.getMove();

    switch(p1Move){
        case 'R':
            return 'T';
        case 'P':
            return 'W';
        case 'S':
            return 'L';
        default :
            return '!';
    }

}
