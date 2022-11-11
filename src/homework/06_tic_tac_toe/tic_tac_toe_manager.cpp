//cpp
#include "tic_tac_toe_manager.h"


void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win += 1;
    }
    else if (winner == "O")
    {
        o_win += 1;
    }
    else
    {
        ties += 1;
    }
}

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    string current_winner = b.get_winner();
    update_winner_count(current_winner);
    /*
    cout << "\nNumber of x wins is: " << x_win;
    cout << "\nNumber of o wins is: " << o_win;
    cout << "\nNumber of ties is: " << ties;
    */
}

//this function exists to allow us to access private variables while testing and ensure are correct values
void TicTacToeManager::get_winner_total(int& x_games_won, int& o_games_won, int& tied_games)
{
    x_games_won = x_win;
    o_games_won = o_win;
    tied_games = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    //game_num tracks result of each number game to make clear to player and make it easier to check for errors
    int game_num = 1;
    for (TicTacToe instance: manager.games)
    {
        cout << "\nThis is the result of game number: " << game_num << "\n";
        cout << instance;
        game_num += 1;
    }

    return out;
}