#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Avalanche.h"
#include "Player.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Referee.h"

#include <iostream>
#include <array>

using namespace std;

class Tournament {
    public:
        Player * run(std::array<Player*, 8> competitors);
};

#endif