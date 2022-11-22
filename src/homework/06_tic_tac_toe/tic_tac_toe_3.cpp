#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
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
    //cout <<"we check for column win\n";
    return has_won;
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win()
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
    //cout <<"we check for row win\n";
    return has_won;

}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

bool TicTacToe3::check_diagonal_win()
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

TicTacToe3::TicTacToe3(): TicTacToe(3)
{
    //cout << "we call the constructor ttt3 class to create a 3x3 game\n";
}