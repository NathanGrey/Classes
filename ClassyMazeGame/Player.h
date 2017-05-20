






#ifndef Player_h
#define Player_h
#include <iostream>
#include <stdio.h>

using namespace std;

class Player // Class for the player
{
public:
    char m_PlayerMove = ' ';
    enum m_PlayerDirection {Up, Down, Left, Right};
    m_PlayerDirection u = Up;
    m_PlayerDirection d = Down;
    m_PlayerDirection l = Left;
    m_PlayerDirection r = Right;
    void printMenu();
    void printInvalid();
};
#endif /* Player_hpp */
