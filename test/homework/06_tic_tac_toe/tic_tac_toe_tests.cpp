#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify first player set to X")
{
	TicTacToe juego;
	juego.start_game("X");
	REQUIRE(juego.get_player() == "X");
}

TEST_CASE("Verify first player set to O")
{
	TicTacToe juego;
	juego.start_game("O");
	REQUIRE(juego.get_player() == "O");
}

//NOTE: NEED TO MAKE SURE NO WIN CONDITIONS BEFORE CAT **AND RETURNS C!
TEST_CASE("Verify TicTacToe Game is working")
{
	TicTacToe juego;
	juego.start_game("X");
	juego.mark_board(2);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(1);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(3);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(5);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(4);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(6);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(7);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(8);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(9);
	juego.game_over();
	REQUIRE(juego.get_winner() == "C");
}

TEST_CASE("Verify that can win game by getting full 1st column")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(1);
	jogo.mark_board(6);
	jogo.mark_board(4);
	jogo.mark_board(2);
	jogo.mark_board(7);
	REQUIRE(jogo.game_over() == true);
}

TEST_CASE("Verify that can win game by getting full 2nd column")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(2);
	jogo.mark_board(6);
	jogo.mark_board(5);
	jogo.mark_board(3);
	jogo.mark_board(8);
	REQUIRE(jogo.game_over() == true);
}

TEST_CASE("Verify can win game by getting full 3rd column")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(3);
	jogo.mark_board(5);
	jogo.mark_board(6);
	jogo.mark_board(1);
	jogo.mark_board(9);
	REQUIRE(jogo.game_over() == true);
}

TEST_CASE("Verify can win game by getting full first row")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(1);
	jogo.mark_board(5);
	jogo.mark_board(2);
	jogo.mark_board(9);
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == true);
}

TEST_CASE("Verofy can win game by getting full second row")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(4);
	jogo.mark_board(2);
	jogo.mark_board(5);
	jogo.mark_board(1);
	jogo.mark_board(6);
	REQUIRE(jogo.game_over() == true);
}

TEST_CASE("Verify can win game by getting full third row")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(7);
	jogo.mark_board(5);
	jogo.mark_board(8);
	jogo.mark_board(1);
	jogo.mark_board(9);
	REQUIRE(jogo.game_over() == true);
}


TEST_CASE("Verify can win game by getting full diagonal from top left")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(1);
	jogo.mark_board(2);
	jogo.mark_board(5);
	jogo.mark_board(3);
	jogo.mark_board(9);
	REQUIRE(jogo.game_over() == true);
}

TEST_CASE("Verify can win game by getting full diagonal from top right")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(3);
	jogo.mark_board(2);
	jogo.mark_board(5);
	jogo.mark_board(4);
	jogo.mark_board(7);
	REQUIRE(jogo.game_over() == true);
}