//cpp
#include "tic_tac_toe.h"
//display_board no loneger used as using operator overload!!!
/*
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
*/

TicTacToe::TicTacToe(vector<string> p, string win): pegs(p)
{
    winner = win;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::clear_board()
{
    if (pegs.size() == 9)
    {
        vector<string> reset(9, " ");
        pegs = reset; 
    }
    else
    {
        vector<string> reset(16," ");
        pegs = reset; 
    }
    
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
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;

}

bool TicTacToe::check_diagonal_win()
{
   return false;
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

//Friend functions used to overload operators 
//do we need to change from refrence to pointer?
std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    //cout << "we are in the outstream function\n";
    int iter = 0;
    int game_dimnesion = game.pegs.size();
    //cout << "game dimension is: " << game_dimnesion << "\n";

    if (game.pegs.size() == 9)
    {
        //out << "the 3x3 game should be printed\n";
        while (iter < game.pegs.size())
        {
            if (iter % 3 == 0 || iter % 3 == 1)
            {
                out << game.pegs[iter] << " | ";
                iter +=  1;
            }
            else 
            {
                out << game.pegs[iter] << "\n";
                iter +=  1;
            }
        }   
    }
    else if (game.pegs.size() == 16)
    {
        //out << "the 4x4 game should be printed\n";
        while (iter < game.pegs.size())
        {
            if (iter % 4 == 0 || iter % 4 == 1 || iter % 4 == 2)
            {
                out << game.pegs[iter] << " | ";
                iter +=  1;
            }
            else 
            {
                out << game.pegs[iter] << "\n";
                iter +=  1;
            }
        }   
    }
    

    out << "\n";
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int input;
    cout << "PLAYER please type in a number :";
    in >> input;

    while ((input < 1 || input > 16) )
    {
        cout << "\nSeems like that was invalid input. Please type in a number between 1-9:";
        in >> input;
    }

    game.mark_board(input);
    

    return in;
}

vector<string> TicTacToe::get_pegs() const {
    return pegs;
}


