//h
#include "tic_tac_toe.h"

//header guard
#ifndef TicTacToe3_H
#define TicTacToe3_H

class TicTacToe3 : public TicTacToe
{
    public:
    TicTacToe3(std::vector<std::string> p, std::string winner): TicTacToe(p, winner){}

    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    
};
#endif