//h
#ifndef TICTACTOEDATA_H
#define TICTACTOEDATA_H

#include "tic_tac_toe.h"
#include <vector>
#include <memory>
#include <string>

class TicTacToeData{
public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();
private:
    std::string file_name = "savegames.dol";

};
#endif