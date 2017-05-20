
 
#include <iostream> // Starts the preprocessor command including the contents of iostream
#include "Player.h"
#include "Game.h"
#include "Maze.h"
using namespace std; // This eliminates the need to write std::cout so it can just be cout





int main()
{
    Game GameObject;
    Player PlayerObject;
    Maze MazeObject;
    
    PlayerObject.printMenu();
    MazeObject.print();

    GameObject.GameLogic();
    return 0;
}

