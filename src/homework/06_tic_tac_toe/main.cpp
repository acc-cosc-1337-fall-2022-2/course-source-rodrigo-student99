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

		//while loop to validate user input
		while ( (response != "X") && (response != "O"))
		{
			cout << "\nUH-OH, seems like that input is not valid! Please enter a capital X or O here:";
			cin >> response;
		} 
		
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
				string game_end_result = game.get_winner();
				//cout << "\n" << game_end_result;
				if (game_end_result == "C")
				{
					cout << "\nThe game has ended in a tie!\n";
				}
				else
				{
					cout << "\nThe winner of the game was " << game_end_result << "\n";
				}
				
				game_loop_over = true;
				cout << "\nWould you like to exit the game? Type Y/N here:";
				string respuersta; 
				cin >> respuersta;
				
				while (respuersta != "Y" && respuersta != "N")
				{
					cout << "\nPlease type in Y or N as capital letters here:";
					cin >> respuersta;
				}
				
				
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