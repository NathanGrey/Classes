#include <iostream> // Starts the preprocessor command including the contents of iostream
using namespace std; // This eliminates the need to write std::cout so it can just be cout

class Position // Creates a class for positioning
{
  public:
    int m_row;
    int m_col;
    int m_counter;
};

class Movements // Creates a class for the player's movements
{
  public:
    int m_playerMove;
};

class EndOfGame // Creates a class for determining the end of the game
{
  public:
    bool m_gameOver;
};
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

// Function for Player's movement through the maze
int main()
{

// Calls bacj to print the main menu
printMenu();

// 2D Array of Maze map
char maze[][42] = {
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

	// Defines Variable type of Position
	Position start; 

	// Declares where the player's starting position is 
	start.m_row = 1; 
	start.m_col = 1;

	// Keeps track of the number of steps it takes to get to the goal
	start.m_counter = 0;

	// Defines Variable type of EndOfGame
	EndOfGame track;

	// Boolean statement showing that the game is running the loop until the player quits or reaches the goal
	track.m_gameOver = false;
	while(!track.m_gameOver)
	{
		print(maze); // Calls back to the function and prints the maze map
		Movements begin; // Defines Variable type of Movement

		begin.m_playerMove = ' '; // Moves the player by one space
		cout << "\nMove: "; // Promts the player to move

		// While statment to continue to prompt player to move until the goal is reached
		while(begin.m_playerMove != 'u' && begin.m_playerMove != 'd' && begin.m_playerMove != 'l' && begin.m_playerMove != 'r' && begin.m_playerMove != 'q')
		{
			cin >> begin.m_playerMove;
		}

		if (begin.m_playerMove == 'u')
		{
			if (maze[start.m_row - 1][start.m_col] == ' ')
			{
				maze[start.m_row][start.m_col] = ' ';
				start.m_row--;
				maze[start.m_row][start.m_col] = '@';
				start.m_counter++;
			}
			else if (maze[start.m_row - 1][start.m_col] == '#')
			{
				track.m_gameOver = true;
			}
		}
		else if (begin.m_playerMove == 'd')
		{
			if (maze[start.m_row + 1][start.m_col] == ' ')
			{
				maze[start.m_row][start.m_col] = ' ';
				start.m_row++;
				maze[start.m_row][start.m_col] = '@';
				start.m_counter++;
			}
			else if (maze[start.m_row + 1][start.m_col] == '#')
			{
				track.m_gameOver = true;
			}
		}
		else if (begin.m_playerMove == 'l')
		{
			if (maze[start.m_row][start.m_col - 1] == ' ')
			{
				maze[start.m_row][start.m_col] = ' ';
				start.m_col--;
				maze[start.m_row][start.m_col] = '@';
				start.m_counter++;
			}
			else if (maze[start.m_row][start.m_col - 1] == '#')
			{
				track.m_gameOver = true;
			}
		}
		else if (begin.m_playerMove == 'r')
		{
			if (maze[start.m_row][start.m_col + 1] == ' ')
			{
				maze[start.m_row][start.m_col] = ' ';
				start.m_col++;
				maze[start.m_row][start.m_col] = '@';
				start.m_counter++;
			}
			else if (maze[start.m_row][start.m_col + 1] == '#') // If the player finds the goal then the game ends
			{
				cout << "Congratulation! You win! You reached the goal in" << " " << start.m_counter << " " << "steps!";
				track.m_gameOver = true;
			}
		}
		else if (begin.m_playerMove == 'q') // Quits the game
		{
			track.m_gameOver = true;
		}
		else
		{
			cout << "Invalid Input." << endl;
		}
	}

	return 0;
}

/* 	==================================================[ BUG NOTES ]========================================================
1. Couldn't get maze map to print. Accidentally put number of start.m_rows/start.m_cols in brackets for i and j.
2. Player started in inccoreect position. Changed the starting coordinates to accomodate for the extra number.
========================================================================================================================== */
