





#ifndef Game_h
#define Game_h
#include <iostream>
#include <string>
#include <stdio.h>
#include "Player.h"
#include "Game.h"
#include "Maze.h"

using namespace std;

class Game
{
public: 
bool m_GameOver = false; // Boolean statement showing that the game is running the loop until the player quits or reaches the goal
int m_Counter = 0; // Keeps track of the number of steps it takes to get to the goal
string m_GoldTrophy = "Gold Trophy"; // Achievement
string m_SilverTrophy = "Silver Trophy"; // Achievement
    int GameLogic();
    void printAchivement();
};
#endif /* Game_hpp */
