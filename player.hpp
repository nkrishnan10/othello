#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include "common.hpp"
#include "board.hpp"
using namespace std;

class Player {

public:
    Player(Side side);
    ~Player();

    Move *doMove(Move *opponentsMove, int msLeft);
    double search(Board * board_state, int depth, int alpha, int beta, bool playerIsBlack);
    double evalScore(Board * curr_board, Side playerSide);


    // Flag to tell if the player is running within the test_minimax context
    bool testingMinimax;
    Side op_side;
    Board * game_board;
    Side our_side;
};

#endif
