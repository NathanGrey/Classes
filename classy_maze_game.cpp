#include <iostream> // Starts the preprocessor command including the contents of iostream
using namespace std; // Sets the namespace

// Creates a Books class that can access Document class functions
class Maze 
{
public:
    const char* m_maze[][42] = { // 2D Array of Maze map
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
	void print(char m_maze[][42])
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
};


// Creates a Books class that can access Document class functions
class Player 
{
public:
     
	// Declares where the player's starting position is 
	int m_row = 1; 
	int m_col = 1;

	// Keeps track of the number of steps it takes to get to the goal
	int m_counter = 0;

	// Boolean statement showing that the game is running the loop until the player quits or reaches the goal
	bool m_GameOver = false;
	int loop (){while(!m_GameOver)
	{
		Maze printingmaze = Maze();
        printingmaze.print(char m_maze[][42]);
		 // Calls back to the function and prints the maze map

		char m_PlayerMove = ' '; // Moves the player by one space
		cout << "\nMove: "; // Promts the player to move

		// While statment to continue to prompt player to move until the goal is reached
		while(m_PlayerMove != 'u' && m_PlayerMove != 'd' && m_PlayerMove != 'l' && m_PlayerMove != 'r' && m_PlayerMove != 'q')
		{
			cin >> m_PlayerMove;
		}

		if (m_PlayerMove == 'u')
		{
			if (m_maze[m_row - 1][m_col] == ' ')
			{
				m_maze[m_row][m_col] = ' ';
				m_row--;
				maze[m_row][m_col] = '@';
				m_counter++;
			}
			else if (m_maze[m_row - 1][m_col] == '#')
			{
				m_GameOver = true;
			}
		}
		else if (m_PlayerMove == 'd')
		{
			if (m_maze[m_row + 1][m_col] == ' ')
			{
				m_maze[m_row][m_col] = ' ';
				m_row++;
				m_maze[m_row][m_col] = '@';
				m_counter++;
			}
			else if (m_maze[m_row + 1][m_col] == '#')
			{
				m_GameOver = true;
			}
		}
		else if (m_PlayerMove == 'l')
		{
			if (m_maze[m_row][m_col - 1] == ' ')
			{
				m_maze[m_row][m_col] = ' ';
				m_col--;
				m_maze[m_row][m_col] = '@';
				m_counter++;
			}
			else if (m_maze[m_row][m_col - 1] == '#')
			{
				m_GameOver = true;
			}
		}
		else if (m_PlayerMove == 'r')
		{
			if (m_maze[m_row][m_col + 1] == ' ')
			{
				m_maze[m_row][m_col] = ' ';
				m_col++;
				m_maze[m_row][m_col] = '@';
				m_counter++;
			}
			else if (m_maze[m_row][m_col + 1] == '#') // If the player finds the goal then the game ends
			{
				cout << "Congratulation! You win! You reached the goal in" << " " << m_counter << " " << "steps!";
				m_GameOver = true;
			}
		}
		else if (m_PlayerMove == 'q') // Quits the game
		{
			m_GameOver = true;
		}
		else
		{
			cout << "Invalid Input." << endl;
		}
	}

	return 0; }

};

// Creates a Books class that can access Document class functions
class Credits 
{
public:
       
     void ShowCredits();

     void ShowThanksForPlaying();

};

int main()
{
// Calls back to print the main menu
Maze printingthemenu = Maze();
printingthemenu.printMenu();

}
