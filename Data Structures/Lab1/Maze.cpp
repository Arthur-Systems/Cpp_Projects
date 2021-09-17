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

int yPosition = 2;
int xPosition = 1;
void test_maze(int maze[5][5]); // forward declaration
bool traverse_maze()
{

    cout << endl;
    bool found = inquire("Have you found the tapestry?");
    if (found)
    {
        cout << "You have found the tapestry!\n";
        // backtrack(xPosition, yPosition);
        return true;
    }
    if (found == false)
    {
        bool LeftWall = inquire("\tPlease turn left 90 degrees \n Are you facing a wall?");
        if (!LeftWall)
        {
            //move left
            bool NameCheck = inquire("\tIs your name written in front of you?");
            if (NameCheck)
            {
                traverse_maze();
            }
            if (!NameCheck)
            {
                cout << "Step forward & write your name on the ground." << endl;
                yPosition -= 1;
                maze[yPosition][xPosition] = 2;
                test_maze(maze);
                traverse_maze();
            }
        }
        if (LeftWall)
        {
            //change the data in the array to 1
            maze[yPosition][xPosition] = 1;
        }
        bool RightWall = inquire("Please turn right 90 degrees \n Are you facing a wall? ");
        if (RightWall)
        {
            //change the data in the array to 1
            maze[yPosition][xPosition] = 1;
        }
        if (!RightWall)
        {
            bool NameCheck = inquire("\tIs your name written in front of you?");
            if (NameCheck)
            {
            }
            if (!NameCheck)
            {
                cout << "\tStep forward & write your name on the ground.";
                maze[yPosition][xPosition] = 2;
                test_maze(maze);
                traverse_maze();
            }
        }
    }
    return false;
}

bool dead_end(int xPosition, int yPosition)
{
    return maze[xPosition][yPosition] == '1' || maze[xPosition][yPosition] == '2';
}

void backtrack()
{
}
void test_maze(int maze[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}