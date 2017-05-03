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
		
	}
}





























































