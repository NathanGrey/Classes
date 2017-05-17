#include <iostream> // Starts the preprocessor command including the contents of iostream
using namespace std; // This eliminates the need to write std::cout so it can just be cout
class Game
{
bool m_GameOver = false; // Boolean statement showing that the game is running the loop until the player quits or reaches the goal
int m_Counter = 0; // Keeps track of the number of steps it takes to get to the goal
string m_GoldTrophy;
string m_SilverTrophy;

void GameLogic()
{
	while(!GameOver)
	{
		print(maze); // Calls back to the function and prints the maze map

		char PlayerMove = ' '; // Moves the player by one space
		cout << "\nMove: "; // Promts the player to move

		// While statment to continue to prompt player to move until the goal is reached
		while(PlayerMove != 'u' && PlayerMove != 'd' && PlayerMove != 'l' && PlayerMove != 'r' && PlayerMove != 'q')
		{
			cin >> PlayerMove;
		}

		if (PlayerMove == 'u')
		{
			if (maze[row - 1][col] == ' ')
			{
				maze[row][col] = ' ';
				row--;
				maze[row][col] = '@';
				counter++;
			}
			else if (maze[row - 1][col] == '#')
			{
				GameOver = true;
			}
		}
		else if (PlayerMove == 'd')
		{
			if (maze[row + 1][col] == ' ')
			{
				maze[row][col] = ' ';
				row++;
				maze[row][col] = '@';
				counter++;
			}
			else if (maze[row + 1][col] == '#')
			{
				GameOver = true;
			}
		}
		else if (PlayerMove == 'l')
		{
			if (maze[row][col - 1] == ' ')
			{
				maze[row][col] = ' ';
				col--;
				maze[row][col] = '@';
				counter++;
			}
			else if (maze[row][col - 1] == '#')
			{
				GameOver = true;
			}
		}
		else if (PlayerMove == 'r')
		{
			if (maze[row][col + 1] == ' ')
			{
				maze[row][col] = ' ';
				col++;
				maze[row][col] = '@';
				counter++;
			}
			else if (maze[row][col + 1] == '#') // If the player finds the goal then the game ends
			{
				cout << "Congratulation! You win! You reached the goal in" << " " << counter << " " << "steps!";
				GameOver = true;
			}
		}
		else if (PlayerMove == 'q') // Quits the game
		{
			GameOver = true;
		}
		else
		{
			cout << "Invalid Input." << endl;
		}
	}

	return 0;
}

void printAchivement()
{
	if (counter < = 100)
	{
		cout << "You won the " << m_GoldTrophy << "! You're a maze master!" << endl;
	}
	else
	{
		cout << "You won the " << m_SilverTrophy << "... Better luck next time." << endl;
	}
}

};


class Maze
{
private:

// 2D Array of Maze map
char m_maze[][42] = {
{ "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" },
{ "|@|     |   |   |         |           | |" },
{ "+ +-+-+ +-+ + + + + +-+-+-+ + + +-+-+ + +" },
{ "|   |     |   |   |         |   |   | | |" },
{ "+-+ + + + + +-+-+-+-+-+-+-+-+-+-+-+ + + +" },
{ "|   | | | | |           |     |       | |" },
{ "+ +-+ +-+ + + +-+-+-+-+ + +-+ + +-+-+ + +" },
{ "| |     |   | |     | | | | |   |   |   |" },
{ "+ + +-+ + +-+ +-+ + + + + + +-+-+ +-+-+-+" },
{ "|   |   |   |   | |     |             | |" },
{ "+-+-+ +-+-+-+-+ +-+-+ +-+-+ +-+-+ +-+ + +" },
{ "|   |   |       |   |     | |   |   | | |" },
{ "+ + +-+ + +-+-+-+ + +-+ + +-+ + +-+ + + +" },
{ "| |     |   |     | |   |   | |     | | |" },
{ "+ +-+-+-+-+ + +-+-+ + +-+-+ + +-+-+-+ + +" },
{ "|       |   | |   | | |   |   |     |   |" },
{ "+-+ +-+-+ +-+ + + + +-+ + +-+ +-+-+ +-+ +" },
{ "|   |   |   |   | | |   |   | |     | | |" },
{ "+ +-+ + +-+ +-+ + + + +-+-+ + + + +-+ + +" },
{ "|   | |   |   | | |   |   | | | | | | | |" },
{ "+-+ +-+ + +-+ +-+ + +-+ +-+ +-+ + + + + +" },
{ "|   |   |   |   | |   | |       |   |   |" },
{ "+ +-+ +-+-+-+-+ + + + + + + + +-+-+-+-+-+" },
{ "| |   | |     | | | | |   | |       |   |" },
{ "+ + +-+ + +-+ + + + + + +-+ + +-+-+ + +-+" },
{ "| | |   |   |     | | | |   |     | |   |" },
{ "+ + + + +-+ +-+-+-+-+ +-+ +-+-+-+-+ +-+ +" },
{ "| | | |     |   |   | |   |       | |   |" },
{ "+ + + +-+-+-+ +-+ + + + + + +-+-+ + + +-+" },
{ "|   |       |     |   | |       |   |   |" },
{ "+-+ +-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+ +" },
{ "|   |   | |     |         |       |   | |" },
{ "+ +-+ + + + +-+ +-+ +-+-+ + +-+-+ +-+ + +" },
{ "| | | |     | |     | |   | |   |   |   |" },
{ "+ + + +-+-+-+ +-+-+-+ + +-+ +-+ +-+ + + +" },
{ "|   | |   |     |   |   |     | | |   | |" },
{ "+ +-+ + +-+ +-+ +-+ +-+-+-+ + + + +-+-+ +" },
{ "| |   |     |   |   |   |   | | |     | |" },
{ "+ + +-+ +-+-+ +-+ + + + + +-+ + + +-+ + +" },
{ "| |         |     |   |     |   |   |  X|" },
{ "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" },
};
int i;
int j;
int m_row = 1; // Declares where the player's starting position is 
int m_col = 1; // Declares where the player's starting position is 

// Function for showing the Maze Map
void print(char maze[][42])
{
		for (int i = 0; i < 41; ++i)
	{
		for (int j = 0; j < 42; ++j)
		{
			cout << maze[i][j];
		}
		cout << endl;
	}
}

int PlayAgain()
{
	if (m_GameOver = true)
		{
			cout << "Would you like to play again?" << endl;
			cout << "Press 1 for yes and 2 for no." << endl;
			int m_PlayerChoice;
			cin >> m_PlayerChoice;

			switch (m_PlayerChoice)
			case "1": {
				system ("cls");
			}
			case "2":{
				cout << "Closing Game." << endl;
				return 0;
			}
		}
}
};

class Player
{
char m_PlayerMove = ' ';
enum m_PlayerDirection {Up, Down, Left, Right};
PlayerDirection u = Up;
PlayerDirection d = Down;
PlayerDirection l = Left;
PlayerDirection r = Right;

// Function for printing the main menu
void printMenu()
{
	cout << "=========================================\n"
		"\t \tMaze Game \n"
		"=========================================\n"
		"Solve in as little steps as possible\n\n\n"

		"Controls\n"
		"--------------\n\n"
		"U = Up \n"
		"D = Down \n"
		"L = Left \n"
		"R = Right \n"
		"Q = Quit Game (Boo Quitter!)\n\n\n";
}
void printInvalid()
{
	cout << "Invalid Input." << endl;
}
};





	
