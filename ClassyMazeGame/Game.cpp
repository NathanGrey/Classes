






#include <iostream>
#include <string>
#include <stdio.h>
#include "Player.h"
#include "Game.h"
#include "Maze.h"

using namespace std;

int Game::GameLogic() // Holds the majority of the game logic
    {
        Maze MazeObject;
    
        while(m_GameOver == false) // While the game is not over ask for the player's input
        {
            void print(char m_maze[][42]);// Calls back to the function and prints the maze map
            
            char m_PlayerMove = ' '; // Moves the player by one space
            cout << "\nMove: "; // Promts the player to move
            
            // While statment to continue to prompt player to move until the goal is reached
            while(m_PlayerMove != 'u' && m_PlayerMove != 'd' && m_PlayerMove != 'l' && m_PlayerMove != 'r' && m_PlayerMove != 'q')
            {
                cin >> m_PlayerMove;
            }
            
            if (m_PlayerMove == 'u')
            {
                if (MazeObject.m_maze[MazeObject.m_row - 1][MazeObject.m_col] == ' ')
                {
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = ' ';
                    MazeObject.m_row--;
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = '@';
                    m_Counter++;
                }
                else if (MazeObject.m_maze[MazeObject.m_row - 1][MazeObject.m_col] == '#')
                {
                    m_GameOver = true;
                }
            }
            else if (m_PlayerMove == 'd')
            {
                if (MazeObject.m_maze[MazeObject.m_row + 1][MazeObject.m_col] == ' ')
                {
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = ' ';
                    MazeObject.m_row++;
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = '@';
                    m_Counter++;
                }
                else if (MazeObject.m_maze[MazeObject.m_row + 1][MazeObject.m_col] == '#')
                {
                    m_GameOver = true;
                }
            }
            else if (m_PlayerMove == 'l')
            {
                if (MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col - 1] == ' ')
                {
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = ' ';
                    MazeObject.m_col--;
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = '@';
                    m_Counter++;
                }
                else if (MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col - 1] == '#')
                {
                    m_GameOver = true;
                }
            }
            else if (m_PlayerMove == 'r')
            {
                if (MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col + 1] == ' ')
                {
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = ' ';
                    MazeObject.m_col++;
                    MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col] = '@';
                    m_Counter++;
                }
                else if (MazeObject.m_maze[MazeObject.m_row][MazeObject.m_col + 1] == '#') // If the player finds the goal then the game ends
                {
                    cout << "Congratulation! You win! You reached the goal in" << " " << m_Counter << " " << "steps!";
                    printAchivement();
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
        
        return 0;
    }

void Game::printAchivement() // Prints trophy based on number of steps
    {
        if (m_Counter <= 100)
        {
            cout << "You won the " << m_GoldTrophy << "! You're a maze master!" << endl;
        }
        else if (m_Counter >= 100)
        {
            cout << "You won the " << m_SilverTrophy << "... Better luck next time." << endl;
        }
    }
