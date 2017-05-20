






#ifndef Maze_h
#define Maze_h
#include <iostream>
#include <stdio.h>

#include "Game.h"
using namespace std;

class Maze // Creates a class for the maze
{
public:
 
    // 2D Array of maze map
    char m_maze[42][42] = {
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
    int m_row = 1; // Declares where the player's starting position is
    int m_col = 1; // Declares where the player's starting position is
    void print(); // Function for showing the Maze Map
    int PlayAgain(); // Function to play the game again
   
};
#endif /* Maze_hpp */
