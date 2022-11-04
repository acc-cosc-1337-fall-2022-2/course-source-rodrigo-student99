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
        player = "O";
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

//Note: will call set_winner() here as best place to call the private variable
bool TicTacToe::game_over()
{
    
    //see if any win/draw conditions have been fulfilled
    bool win_by_col = check_column_win();
    bool win_by_row = check_row_win();
    bool win_by_diag = check_diagonal_win();
    bool game_tied = check_board_full();
    
    if (win_by_col || win_by_row || win_by_diag)
    {
        set_winner();
        return true;
    }
    else if (game_tied)
    {
        winner = "C";
        return true;
    }
    return false;
}

bool TicTacToe::check_column_win()
{
    string tester;
    //game_check_player_switcher sets tester to X if player is Y and vice-versa
    tester = game_check_player_switcher(player);

    bool has_won = false;
    for (int i = 0; i < 3; i++ )
    {
        if (pegs[i] == tester && pegs[i + 3] == tester && pegs[i + 6] == tester)
        {
            has_won = true;
        }
    }
    return has_won;
}

bool TicTacToe::check_row_win()
{
    string tester;
    tester = game_check_player_switcher(player);

    bool has_won = false;
    for (int j = 0; j < 3; j++)
    {
        int temp = j *3;
        if (pegs[temp] == tester && pegs[temp + 1] == tester && pegs[temp + 2] == tester)
        {
            has_won = true;
        }
    }
    return has_won;

}

bool TicTacToe::check_diagonal_win()
{
    string tester;
    tester = game_check_player_switcher(player);
    bool has_won = false;

    if ((pegs[0] == tester && pegs[4] == tester && pegs[8] == tester) || (pegs[2] == tester && pegs[4] == tester && pegs[6] == tester))
    {
        has_won = true;
    }
    return has_won;
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

//function to make sure we are checking correct X/Y by switching it
string TicTacToe::game_check_player_switcher(string current_player)
{
    if (current_player == "X")
    {
        return "O";
    }
    else
    {
        return "X";
    }
}

string TicTacToe::get_player() const
{
    return player;
}

string TicTacToe::get_winner() const
{
    return winner;
}

