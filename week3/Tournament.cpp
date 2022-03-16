#include "Tournament.h"
#include <iostream>
#include <array>

using namespace std;

Player* Tournament::run(std::array<Player*, 8> competitors) {
    array<Player*, 4> competitors_first;

    // 1st round 
    Referee r1;
    for (int i = 0; i < 5; i++) {
        r1.refGame(competitors[0], competitors[1]);
    }
    if (r1.win_count >= 0) {
        competitors_first[0] = competitors[0];
    } else {
        competitors_first[0] = competitors[1];
    }

    Referee r2;
    for (int i = 0; i < 5; i++) {
        r2.refGame(competitors[2], competitors[3]);
    }
    if (r2.win_count >= 0) {
        competitors_first[1] = competitors[2];
    } else {
        competitors_first[1] = competitors[3];
    }

    Referee r3;
    for (int i = 0; i < 5; i++) {
        r3.refGame(competitors[4], competitors[5]);
    }
    if (r3.win_count >= 0) {
        competitors_first[2] = competitors[4];
    } else {
        competitors_first[2] = competitors[5];
    }

    Referee r4;
    for (int i = 0; i < 5; i++) {
        r4.refGame(competitors[6], competitors[7]);
    }
    if (r4.win_count >= 0) {
        competitors_first[3] = competitors[6];
    } else {
        competitors_first[3] = competitors[7];
    }


    // 2nd round 
    Referee r5;
    array<Player*, 2> competitors_second;
    for(int i = 0; i < 5; i++) {
        r5.refGame(competitors_first[0], competitors_first[1]);
    }
    if(r5.win_count >= 0) {
        competitors_second[0] = competitors_first[0];
    } else {
        competitors_second[0] = competitors_first[1];
    }

    Referee r6;
    for(int i = 0; i < 5; i++) {
        r6.refGame(competitors_first[2], competitors_first[3]);
    }
    if(r6.win_count >= 0) {
        competitors_second[1] = competitors_first[2];
    } else {
        competitors_second[1] = competitors_first[3];
    }
    
    // final round 
    Referee r7;
    for (int i = 0; i < 5; i++) {
        r7.refGame(competitors_second[0], competitors_second[1]);
    }
    if (r7.win_count >= 0) {
        return competitors_second[0];
    } else {
        return competitors_second[1];
    }

    return nullptr;
}