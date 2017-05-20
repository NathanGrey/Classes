





#include <iostream>
#include "Maze.h"
#include "Player.h"
#include "Game.h"

using namespace std;

void Maze::print() // Function for showing the Maze Map
    {
        for (int i = 0; i < 41; ++i)
        {
            for (int j = 0; j < 42; ++j)
            {
                cout << m_maze[i][j];
            }
            cout << endl;
        }
    }
    
int Maze::PlayAgain() // Function to play the game again
    {
        Game GameObject;
        
 
        if ((GameObject.m_GameOver = true))
        {
            cout << "Would you like to play again?" << endl;
            cout << "Press 1 for yes and 2 for no." << endl;
            int m_PlayerChoice;
            cin >> m_PlayerChoice;
            
            switch (m_PlayerChoice)
            {
                case 1: {
                system ("cls");
            }
                case 2:{
                    cout << "Closing Game." << endl;
                    return 0;
            }
            default:
            cout << "Closing Game." << endl;
            return 0;
        
            }
           
        }
        return 0;
    }
