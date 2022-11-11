//h
#include<iostream>
#include<string>
#include<vector>

using std::cin; using std::cout; using std::vector; using std::string;

//header guard
#ifndef TicTacToe_H
#define TicTacToe_H


class TicTacToe
{
//friend functions
friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
friend std::istream& operator>>(std::istream& in, TicTacToe& game);

//public functions include: bool game_over,void start_game, void mark_board, string get_player and void display_board,void 
public:
TicTacToe(): pegs(9,"a"){}

bool game_over();
void start_game(string first_player);
void mark_board(int position);
string get_player() const;
string get_winner() const;
//void display_board();
    //display_board not to be used as now using operator overload! 

//personal function added to make process of switching X/Y for checking more staightfoward and less repetitive
string game_check_player_switcher(string current_player);

private: //private functions and data include: string player (player 1 & 2) , vector of string pegs, set_next_player, bool check_board_full and void clear_board 
//private variables
vector<string> pegs;
string player;
string winner;

//private functions
void set_next_player();
bool check_board_full();
void clear_board();
bool check_column_win();
bool check_row_win();
bool check_diagonal_win();
void set_winner();
};

#endif