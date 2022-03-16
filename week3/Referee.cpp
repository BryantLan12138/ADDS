#include "Referee.h"
#include <iostream>

using namespace std;

Referee::Referee()
{
}

Referee::~Referee()
{
}


char Referee::refGame(Player *player1, Player *player2)
{
    player1->makeMove();
    player2->makeMove();
    if (player1->getMove() == 'R' && player2->getMove() == 'R')
    {
        return 'T';
    }
    else if (player1->getMove() == 'R' && player2->getMove() == 'P')
    {
        this->win_count--;
        return 'L';
    }
    else if (player1->getMove() == 'R' && player2->getMove() == 'S')
    {
        this->win_count++;
        return 'W';
    }

    else if (player1->getMove() == 'P' && player2->getMove() == 'R')
    {
        this->win_count++;
        return 'W';
    }
    else if (player1->getMove() == 'P' && player2->getMove() == 'P')
    {
        return 'T';
    }
    else if (player1->getMove() == 'P' && player2->getMove() == 'S')
    {
        this->win_count--;
        return 'L';
    }

    else if (player1->getMove() == 'S' && player2->getMove() == 'R')
    {
        this->win_count--;
        return 'L';
    }
    else if (player1->getMove() == 'S' && player2->getMove() == 'P')
    {
        this->win_count++;
        return 'W';
    }
    else if (player1->getMove() == 'S' && player2->getMove() == 'S')
    {
        return 'T';
    }
    else
    {
        return 'N';
    }
}