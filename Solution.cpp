// Player.h
#pragma once
class Player
{
	int m_xPosition;
	int m_yPosition;
	char m_symbol;

public:
	Player(int x, int y, char s);
	~Player();

	void Print();

	int GetPositionX();
	void SetPositionX(int x);
	int GetPositionY();
	void SetPositionY(int y);
};

// Player.cpp
# include "Player.h"
#include <iostream>

using namespace std;

Player::Player(int x, int y, char s)
	: m_xPosition(x)
	, m_yPosition(y)
	, m_symbol(s)
{
}

Player::~Player()
{
}

void Player::Print()
{
	cout << m_symbol;
}

int Player::SetPositionX(int x)
{
	m_xPosition = x;
}

int Player::GetPositionY()
{
	return m_yPosition;
}

void Player::SetPositionY(int y)
{
	m_yPosition = y;
}

// Goal.h

#pragma once
class Goal
{
	int m_xPosition;
	int m_yPosition;
	char m_symbol;

public:
	Goal(int x, int y, char s);
	~Goal();

	void Print();

	int GetPositionX();
	void SetPositionX(int x);
	int GetPositionY();
	void SetPositionY(int y);
};


// Goal.cpp
#include "Goal.h"
#include <iostream>

using namespace std;

Goal::Goal(int x, int y, char s)
: m_xPosition(x)
, m_yPosition(y)
, m_symbol(s)
{
}

Goal::~Goal()
{
}

void Goal::Print()
{
	cout << m_symbol;
}

int Goal::GetPositionX()
{
	return m_xPosition = x;
}

void Goal::SetPositionX(int x)
{
	m_xPosition = x;
}

int Goal::GetPositionY()
{
	return m_yPosition;
}

void Goal::SetPositionY(int y)
{
	m_yPosition = y;
}

// Maze.h
#pragma once
#include "Player.h"
#include "Goal.h"

class Maze
{
	const int k_Size = 42;
	const char k_Board[42][42]
	{
		{ "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" },
		{ "| |     |   |   |         |           | |" },
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

 public:
 	Maze();
 	~Maze();

 	void Print(Player* p, Goal* g);
 	bool IsEmptySlot(int y, int x);
};


// Maze.cpp
#include "Maze.h"
#include <iostream>

using namespace std;

Maze::Maze()
{

}

Maze::~Maze()
{

}

void Maze::Print(Player* p, Goal* g)
{
	system("cls");
	for (int i - 0; i < k_Size; ++i)
	{
		for (int j = 0; j < k_Size; ++j)
		{
			if (j == p->GetPositionX() && == p->GetPositionY())
			{
				cout << '@';
			}
			else if (j == g->GetPositionX() && i == g->GetPositionY())
			{
				cout << 'x';
			}
			else
			{
				cout << k_Board[i][j];
			}
		}
		cout << endl;
	}
}

bool Maze::IsEmptySlot(int x, int y)
{
	return k_Board[y][x] == ' ';
}

// Game.h
#pragma once
#include "Maze.h"

class Game
{
	Maze* m_pMaze;
	Player* mpPlayer;
	Goal* m_pGoal;
	int m_NumberOfTurns;
	bool m_IsOver;

public:
	Game();
	~Game();

	void Display();
	void Update();

	bool IsOver();
};

// Game.cpp
#include "Game.h"
#include <iostream>
#include <conio.h>

using namespace std;

Game::Game()
	: m_NumberOfTurns(0)
	, m_IsOver(false)
{
	m_pMaze = new Maze();
	m_pPlayer = new Player(35, 39, '@');
	m_pGoal = new Goal(39, 39, 'x');
}

Game::~Game()
{
	if (m_pMaze != nullptr)
	{
		delete m_pMaze;
		m_pMaze = nullptr;
	}

	if (m_pPlayer != nullptr)
	{
		delete m_pPlayer;
		m_pPlayer = nullptr;
	}
}

void Game:Display()
{
	m_pMaze->Print(m_pPlayer, m_pGoal);
	cout << "W A S or D: ";
}

void Game::Update()
{
	int newPlayerX = m_pPlayer->GetPositionX();
	int newPlayerY = m_pPlayer->GetPositionY();

	switch (_getch())
	{
	case 'w':
	case 'W':
		newPlayerY = newPlayerY - 1;
		break;

	case 'a':
	case 'A':
		newPlayerX = newPlayerX - 1;
		break;

	case 's':
	case 'S':
		newPlayerY = newPlayerY + 1;
		break;

	case 'd':
	case 'D':
		newPlayerX = newPlayerX + 1;
		break;

	default:
		break;
	}

	int goalX = m_pGoal->GetPositionX();
	int goalY = m_pGoal->GetPositionY();

	if (newPlayerX == goalX && newPlayerY == goalY)
	{
		m_NumberOfTurns++;
		m_pPlayer->SetPositionX(goalX);
		m_pPlayer->SetPositionY(goalY);
		m_pMaze->Print(m_pPlayer, m_pGoal);
		cout << "YOU BEAT THE MAZE IN " << m_NumberOfTurns << "TURNS!" << endl;
		m_IsOver = true;
	}
	else if (m_pMaze->IsEmptySlot(newPlayerX, newPlayerY))
	{
		m_NumberOfTurns++;
		m_pPlayer->SetPositionX(newPlayerX);
		m_pMaze->SetPositionY(newPlayerY);
	}
}

bool Game::IsOver()
{
	return m_IsOver;
}

// Main.cpp
#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
	Game game;

	do
	{
		game.Display();
		game.Update();
	} while (!game.IsOver());

	system("pause");
	return 0;
}
