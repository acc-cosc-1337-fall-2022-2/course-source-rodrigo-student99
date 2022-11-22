#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_3.h"

#include <memory>
using std::unique_ptr; using std::make_unique;
int main() 
{
	//initialize TicTacToe and TicTacToeManager object before game loops
	unique_ptr<TicTacToe> game;
	TicTacToeManager coach;
	bool has_opted_out = false;
	
	//Logic to set up superclass pointer to point to correct instance of 3x3 or 4x4 game class
	


	//initialize variables to hold number of x wins, y wins, and ties
	int times_x_won = 0;
	int times_y_won = 0;
	int times_game_has_ties = 0;

	//has_opted_out will determine loop if want to keep playing
	while (has_opted_out == false)
	{
		int game_type;
		cout << "Hello Player, type 3 if you want to play a 3x3 game or type 4 if want 4x4 game here: ";
		cin >> game_type;

		do
		{
			if (game_type == 3)
			{
				//cout << "we make 3x3 class in heap here\n";
				game = make_unique<TicTacToe3>();
			}
			else if (game_type == 4)
			{
				//cout << "we make 4x4 class in heap here\n";
				game = make_unique<TicTacToe4>();
			}
		}while(game_type != 3 && game_type != 4);
		
		
		
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
		
		game->start_game(response);
		bool game_loop_over = false;

		//core game loop that is run until board is filled up and user then can choose to exit game or start new game
		while(!game_loop_over)
		{
			//logic to get response, validate it, and mark_board() all enclosed in TicTacToe >> ops
			cin >> *game;
			//logic to print out gameboard in TicTacToe << ops
			cout << *game;
			
			if (game->game_over())
			{
				
				string game_end_result = game->get_winner();
				coach.save_game(game);
				if (game_end_result == "C")
				{
					cout << "\nThe game has ended in a tie!\n";
				}
				else
				{
					cout << "\nThe winner of the game was " << game_end_result << "\n";
				}
				
				//get private variables of results of game in manager class and print it out
				coach.get_winner_total(times_x_won, times_y_won, times_game_has_ties);
				cout << "\nX has won the game " << times_x_won << " times";
				cout << "\nY has won the game " << times_y_won << " times";
				cout << "\nThe game has ended in a tie " << times_game_has_ties << " times\n";


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
	//Here is where we use overloaded operator for manager class to print out results of games played
	cout << coach;

	cout << "\nthe game has ended :(\n";
	return 0;
}