//cpp
#include "tic_tac_toe.h"

void TicTacToe::display_board() 
{
    
    int iter = 0;
    while (iter < pegs.size())
    {
        if (iter % 3 == 0 || iter % 3 == 1)
        {
            cout << pegs[iter] << " | ";
            iter +=  1;
        }
        else 
        {
            cout << pegs[iter] << "\n";
            iter +=  1;
        }
    }

    cout << "\n";
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::clear_board()
{
    vector<string> reset(9, " ");
    pegs = reset; 
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "Y";
    }
    else
    {
        player = "X";
    }
}

void TicTacToe::mark_board(int position)
{
    position = position - 1;
    pegs[position] = player;
    set_next_player();
}

bool TicTacToe::check_board_full()
{
    bool game_over = true;

    for (string ele : pegs)
    {
        if (ele == " ")
        {
            game_over = false;
        }
    }
    
    return game_over;
}

bool TicTacToe::game_over()
{
    return check_board_full();
}