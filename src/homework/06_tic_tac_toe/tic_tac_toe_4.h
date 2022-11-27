//h
#include  "tic_tac_toe.h"

#ifndef TicTacToe4_H
#define TicTacToe4_H

class TicTacToe4 : public TicTacToe
{
    public:
    TicTacToe4(std::vector<std::string> p, std::string winner):TicTacToe(p,winner){}

    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
}; 


#endif