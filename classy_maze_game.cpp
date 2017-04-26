#include <iostream> // Starts the preprocessor command including the contents of iostream
using namespace std; // This eliminates the need to write std::cout so it can just be cout

class Menu // This makes a class called Menu
{
public: // This allows other functions to access the data inside the Menu class

	m_StartGame; //Declares member variables of Menu class
	m_QuitGame;
	m_ShowMenu;

		void printMenu()	// Member function for printing the main menu
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
};


class Maze // This makes a class called Maze
{
public: // This allows other functions to access the data inside the Maze class
		char maze [][42];//Declares member variables of Maze class
	

		void print(char maze[][42]) // Member function for showing the Maze Map
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


class Movement // This creates a class called Movement
{

	public: // This allows other functions to access the data inside the Movement class
		int row; //Declares member variables of Movement class
		int col;
		int counter;
		char PlayerMove;

};

	// Declares where the player's starting position is 
	int row = 1; 
	int col = 1;

	// Keeps track of the number of steps it takes to get to the goal
	int counter = 0;

	// Boolean statement showing that the game is running the loop until the player quits or reaches the goal
	bool GameOver = false;
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


// Function for Player's movement through the maze
int main()
{

// Calls back to print the main menu
printMenu();


char maze[][42] = { //Declares member variables of Maze class
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
	return 0;
}

/* 	==================================================[ BUG NOTES ]========================================================
1. Couldn't get maze map to print. Accidentally put number of rows/cols in brackets for i and j.
2. Player started in inccoreect position. Changed the starting coordinates to accomodate for the extra number.
========================================================================================================================== */

Each class must have at least two member functions.
Each class must have at least four member variables.
-------------
Notes
-------------

Structured Data Type- Group of variables defined together under one type.

class [ClassName]
{
public:
    [memberVariableType1] [memberVariableName1];
    [memberVariableType2] [memberVariableName2];
};     // Remember the semicolon!

public: This defines the access modifier.
className: This is the name of the data type that you're defining.
memberVariableType: This is the type for the member variable of ClassName.
memberVariableName: This is the name of the member variable inside of ClassName.

--------

variableName.memberVariableName.

--------
Ammo incendiaryAmmo;

// Setting member variables of a class
incendiaryAmmo.m_distance = 100;
incendiaryAmmo.m_damage = 10;

// Printing member variables of a class.
cout << "Ammo distance: " << incendiaryAmmo.m_distance << endl;
cout << "Ammo damage: " << incendiaryAmmo.m_damage << endl;

#include <iostream>

using namespace std;

class Ammo
{
  public:
    int m_damage;
    int m_distance;
};

void main()
{
    Ammo incendiary;


    incendiary.m_damage = 10;
    incendiary.m_distance = 100;

    Ammo explosive;
    explosive.m_damage = 200;
    explosive.m_distance = 10;

    Ammo frost;
    frost.m_damage = 50;
    frost.distance = 50;
}

-----------


The preferred method to passing objects is pass by reference. Here is what it looks like:

void updateAmmoGui(Ammo &one, Ammo &two, Ammo &three)
{
    // some code here
}

If a parameter is not modified (no member variables are changed), 
then you should use a const reference.
it means that the variable is not modifiable.
Makes it so the variable can't be changed inside the function.

----------

A constructor is a function whose name is the name of the class it resides in.

----------

class Line
{
public:
    Point m_start;
    Point m_end;

    void Print()
    {
       m_start.Print();
       m_stop.Print();
    }

    void ApplyOffset(float x, float y)
    {
       // accessing member variables from inside the function
       m_start.Offset(x, y);
       m_end.Offset(x, y);
    }
};

class Point
{
public:
    float m_x;
    float m_y;

    void Print()
    {
        cout <<"x: " << m_x << " y: " << m_y << endl;
    }

    void Offset(float offsetX, float offsetY)
    {
        // accessing member variables from inside the function
        m_x += offsetX;
        m_y += offsetY;
    }
};
---------
Classes- A way of easily organizing data
Member Variable-
Member Function-
Struct- 
*/
