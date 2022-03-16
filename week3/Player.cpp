#include "Player.h"


Player::Player() {
    moveNum = 0;
    identity = "Player";
}

Player::~Player() {

}


void Player::refresh() {
    moveNum = 0;
}


void Player::makeMove() {
    recentMove = 'P';
}

char Player::getMove() {
    return recentMove;
}