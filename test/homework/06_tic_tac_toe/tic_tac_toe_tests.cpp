#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify TicTacToe Game is working")
{
	TicTacToe juego;
	juego.start_game("X");
	juego.mark_board(1);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(2);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(3);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(4);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(5);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(6);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(7);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(8);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(9);
	REQUIRE(juego.game_over() == true);
}

