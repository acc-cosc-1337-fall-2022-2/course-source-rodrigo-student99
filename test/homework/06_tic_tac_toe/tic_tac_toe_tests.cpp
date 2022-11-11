#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
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
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(6);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(4);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(7);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");
}

TEST_CASE("Verify that can win game by getting full 2nd column")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(6);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(8);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full 3rd column")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(6);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(1);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(9);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");

}

TEST_CASE("Verify can win game by getting full first row")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(1);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(9);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");
}

TEST_CASE("Verofy can win game by getting full second row")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(4);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(1);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(6);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full third row")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(7);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(8);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(1);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(9);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");
}


TEST_CASE("Verify can win game by getting full diagonal from top left")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(1);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(9);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");
}

TEST_CASE("Verify can win game by getting full diagonal from top right")
{
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(4);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(7);
	REQUIRE(jogo.game_over() == true);
	REQUIRE(jogo.get_winner() == "X");
}

TEST_CASE("Verify that TicTacToeManager is working")
{
	//This is the one instance of TicTacToeManager class that is used across 3 instances of TicTacToe
	TicTacToeManager coach;
	
	//These are variables necesscary to test whether correct # of wins b/w x & o and ties
	int x = 0;
	int o = 0;
	int t = 0;
	//First instance of TicTacToe to test if TTTManager records when x wins
	TicTacToe jogo;
	jogo.start_game("X");
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(4);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(7);
	REQUIRE(jogo.game_over() == true);
	coach.save_game(jogo);
	coach.get_winner_total(x,o,t);
	REQUIRE(jogo.get_winner() == "X");
	//we are testing wheter manager class has just recorded x win in its private variable
	REQUIRE(x == 1);
	REQUIRE(o == 0);
	REQUIRE(t == 0);

	//now testing whether manager class can record a o win in its private variable
	jogo.start_game("O");
	jogo.mark_board(3);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(2);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(5);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(4);
	REQUIRE(jogo.game_over() == false);
	jogo.mark_board(7);
	REQUIRE(jogo.game_over() == true);
	coach.save_game(jogo);
	coach.get_winner_total(x,o,t);
	REQUIRE(jogo.get_winner() == "O");
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 0);

	//Now lets test if the TicTacToeManager class can work across diffrent instances of TicTacToe classes
	TicTacToe juego;
	juego.start_game("O");
	juego.mark_board(1);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(2);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(4);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(5);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(8);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(7);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(3);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(6);
	REQUIRE(juego.game_over() == false);
	juego.mark_board(9);
	REQUIRE(juego.game_over() == true);
	coach.save_game(juego);
	coach.get_winner_total(x,o,t);
	//in the TicTacToe class, "C" indicates a tie
	REQUIRE(juego.get_winner() == "C");
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
	

}