






#include "Player.h"
#include <iostream>
using namespace std;
    
void Player::printMenu() // Function for printing the main menu
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
void Player::printInvalid()
    {
        cout << "Invalid Input." << endl;
    }


