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

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
    //cout << "we run save game manager function\n";
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
    //cout << "we exit save game manager function\n";
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
    for(int i=0; i < manager.games.size(); i++)
    {
        auto& game = manager.games[i];

        out << "Game " << i+1 << "\n" << *game << "\n";
    }

    return out;
}