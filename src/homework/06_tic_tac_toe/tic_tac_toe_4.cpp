#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    string tester;
    //game_check_player_switcher sets tester to X if player is Y and vice-versa
    tester = game_check_player_switcher(player);
    //cout << "we are checking for character" << tester << "in the loop\n";

    bool has_won = false;
    for (int i = 0; i < 4; i++ )
    {
        if (pegs[i] == tester && pegs[i + 4] == tester && pegs[i + 8] == tester && pegs[i + 12] == tester)
        {
            has_won = true;
        }
    }
    //cout << "we check for 4x4 column win\n";
    return has_won;
}



/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{
    string tester;
    tester = game_check_player_switcher(player);
    //cout << "we are checking for character" << tester << "in the loop\n";

    bool has_won = false;
    for (int j = 0; j < 4; j++)
    {
        int temp = j *4;
        if (pegs[temp] == tester && pegs[temp + 1] == tester && pegs[temp + 2] == tester && pegs[temp + 3] == tester)
        {
            has_won = true;
        }
    }
    //cout << "we check for a row win\n";
    return has_won;

}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_diagonal_win()
{
    string tester;
    tester = game_check_player_switcher(player);
    //cout << "we are checking for character" << tester << "in the loop\n";
    
    bool has_won = false;

    if ((pegs[0] == tester && pegs[5] == tester && pegs[10] == tester && pegs[15] == tester) || (pegs[3] == tester && pegs[6] == tester && pegs[9] == tester && pegs[12] == tester))
    {
        has_won = true;
    }
    //cout << "we check for a diagonal win\n";
    return has_won;
}

TicTacToe4::TicTacToe4(): TicTacToe(4)
{
    //cout << "we call ttt4 with arguement of 4 to create a 4x4 game\n";
}