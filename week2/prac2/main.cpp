#include "Referee.h"
#include <iostream>

using namespace std;
int main (void) {
    Referee referee;
    Computer cp;
    Human human;
    cout << referee.judge(human, cp);
    return 0;
} 