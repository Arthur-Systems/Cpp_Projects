#include <iostream>
#include "auxa1.h"
#include "Maze.h"
using namespace std;

//maze grid
int maze[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}};

int xPosition, yPosition = 0;

bool traverse_maze()
{
    bool found = inquire("Have you found the tapestry?");
    if (found)
    {
        cout << "You have found the tapestry!\n";
        backtrack(xPosition, yPosition);
        return true;
    }
    bool LeftWall = inquire("Please turn left 90 degrees \n Are you facing a wall?");
    if (!LeftWall)
    {

        return false;
    }
    bool RightWall = inquire("Please turn right 90 degrees \n Are you facing a wall? ");
    if (!RightWall)
    {
    }
    return false;
}
bool dead_end(int xPosition, int yPosition)
{
    return maze[xPosition][yPosition] == '1' || maze[xPosition][yPosition] == '2';
}

int backtrack(int xPosition, int yPosition)
{
    return 0;
}