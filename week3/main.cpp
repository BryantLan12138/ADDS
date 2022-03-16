#include "Avalanche.h"
#include "Player.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Referee.h"
#include "Tournament.h"
#include "Human.h"
#include <iostream>

using namespace std;
int main (void) {
    Human h;
    RandomeComputer rc; 
    Avalanche av; // -> always rock
    Bureaucrat bu; // -> always paper
    Bureaucrat bu2; // -> always paper
    Toolbox tb; // -> always scissors
    Toolbox tb2; // -> always scissors
    Crescendo cr; // 'p''s''r'
    Crescendo cr2; // 'p''s''r'
    PaperDoll pd; // 'p' 's' 's'
    FistfullODollars fd; // 'r' 'p' 'p'

    Tournament tournament;
    array<Player*, 8> competitors = {&av, &bu, &bu2, &tb, &tb2, &cr, &cr2, &fd};
    Player* winner;
    winner = tournament.run(competitors);
    cout << tournament.run(competitors)->getMove();
    
   
}