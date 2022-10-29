#include "tic_tac_toe.h"
int main() 
{
	//initialize game object before game loops
	TicTacToe game;
	bool has_opted_out = false;

	//has_opted_out will determine loop if want to keep playing
	while (has_opted_out == false)
	{
		//necesscary pre-game code ran once before core game loop
		cout << "\nHello user, would you like to start off as X or O? Type here:";
		string response;
		cin >> response;
		game.start_game(response);
		bool game_loop_over = false;

		//core game loop that is run until board is filled up and user then can choose to exit game or start new game
		while(!game_loop_over)
		{
			int input;
			cout << "\nPLAYER, please type in a number 1-9 or type 999 to exit the game: ";
			cin >> input;
			
			///gives user option to exit game entirely
			if (input == 999)
			{
				has_opted_out = true;
				break;
			}
			game.mark_board(input);
			game.display_board();
			if (game.game_over())
			{
				game_loop_over = true;
				cout << "\nWould you like to exit the game? Type Y/N here:";
				string respuersta; 
				cin >> respuersta;
				if (respuersta == "Y")
				{
					has_opted_out = true;
				}
				
			}
		}
	}
	cout << "\nthe game has ended :(\n";
	return 0;
}