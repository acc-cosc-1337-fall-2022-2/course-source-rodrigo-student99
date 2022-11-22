#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify first player set to X in 3x3")
{
	std::unique_ptr<TicTacToe> juego = std::make_unique<TicTacToe3>();
	juego->start_game("X");
	REQUIRE(juego->get_player() == "X");
}

TEST_CASE("Verify first player set to O in 3x3")
{
	std::unique_ptr<TicTacToe> juego = std::make_unique<TicTacToe3>();
	juego->start_game("O");
	REQUIRE(juego->get_player() == "O");
}

//NOTE: NEED TO MAKE SURE NO WIN CONDITIONS BEFORE CAT **AND RETURNS C!
TEST_CASE("Verify TicTacToe Game is working")
{
	std::unique_ptr<TicTacToe> juego = std::make_unique<TicTacToe3>();
	juego->start_game("X");
	juego->mark_board(2);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(1);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(3);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(5);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(4);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(6);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(7);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(8);
	REQUIRE(juego->game_over() == false);
	juego->mark_board(9);
	juego->game_over();
	REQUIRE(juego->get_winner() == "C");
}

TEST_CASE("Verify that can win game by getting full 1st column")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify that can win game by getting full 2nd column")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full 3rd column")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");

}

TEST_CASE("Verify can win game by getting full first row")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verofy can win game by getting full second row")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full third row")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}


TEST_CASE("Verify can win game by getting full diagonal from top left")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full diagonal from top right")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("X");
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}


TEST_CASE("Verify TicTacToe 4x4 can start with X")
{
	std::unique_ptr<TicTacToe> juego = std::make_unique<TicTacToe4>();
	juego->start_game("X");
	REQUIRE(juego->get_player() == "X");
}

TEST_CASE("Verify TicTacToe 4x4 can start with O")
{
	std::unique_ptr<TicTacToe> juego = std::make_unique<TicTacToe4>();
	juego->start_game("O");
	REQUIRE(juego->get_player() == "O");
}

TEST_CASE("Verify can win game by getting full first row in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full second row in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(12);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full third row in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(10);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(11);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(14);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(12);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full fourth row in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(14);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(15);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(16);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full first column in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full second column in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(10);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(14);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full third column in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(11);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(15);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full fourth column in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(12);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(16);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting top left to bottom right diagonal in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(11);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(16);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify can win game by getting top right to bottom left diagonal in 4x4")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(10);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "X");
}

TEST_CASE("Verify that we can have tied 4x4 game")
{
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("O");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(10);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(11);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(12);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(14);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(16);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(15);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "C");
}

TEST_CASE("Verify that TicTacToe Manager works across multiple games of types 3x3 and 4x4")
{
	TicTacToeManager coach;
	
	//X is winner of 4x4 game
	std::unique_ptr<TicTacToe> jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("X");
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(10);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == true);

	coach.save_game(jogo);

	//O is winner of 3x3 game
	jogo = std::make_unique<TicTacToe3>();
	jogo->start_game("O");
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "O");

	coach.save_game(jogo);

	//we will have a tied 4x4 game
	jogo = std::make_unique<TicTacToe4>();
	jogo->start_game("O");
	jogo->mark_board(1);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(2);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(3);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(4);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(5);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(6);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(7);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(8);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(9);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(10);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(11);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(12);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(14);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(13);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(16);
	REQUIRE(jogo->game_over() == false);
	jogo->mark_board(15);
	REQUIRE(jogo->game_over() == true);
	REQUIRE(jogo->get_winner() == "C");
	coach.save_game(jogo);

	//set up variables to see if correct number of each result is saved
	int x_wins = 0;
	int o_wins = 0;
	int c_wins = 0;
	coach.get_winner_total(x_wins,o_wins,c_wins);
	REQUIRE(x_wins == 1);
	REQUIRE(o_wins == 1);
	REQUIRE(c_wins == 1);
}


