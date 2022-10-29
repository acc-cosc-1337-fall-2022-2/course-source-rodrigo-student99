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
//public functions include: bool game_over,void start_game, void mark_board, string get_player and void display_board,void 
public:
TicTacToe(): pegs(9,"a"){}

bool game_over();
void start_game(string first_player);
void mark_board(int position);
string get_player();
void display_board();



private: //private functions and data include: string player (player 1 & 2) , vector of string pegs, set_next_player, bool check_board_full and void clear_board 
vector<string> pegs;
string player;
void set_next_player();
bool check_board_full();
void clear_board();
};

#endif