//h
#include <vector>
#include <string>
#include <iostream>
//Must include header file for regular TicTacToe class as that will be used in this class
#include "tic_tac_toe.h"
#include <memory>

using std::string; using std::vector; using std::cout;

//header guard
#ifndef TicTacToeManager_H
#define TicTacToeManager_H

class TicTacToeManager
{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

    public:
    //public functions
    void save_game(std::unique_ptr<TicTacToe>& b);
    void get_winner_total(int& x_game_won, int& o_games_won, int& tied_games);

    private:
    //private variables
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    vector<std::unique_ptr<TicTacToe>> games;

    //private functions
    void update_winner_count(string winner);

};

#endif