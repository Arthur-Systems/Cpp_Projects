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
int StepsTaken[10] = {0, 1, 0, 2, 0, 1, 0, 1, 0, 2};
int yPosition = 3;
int xPosition = 0;
void test_maze(int maze[5][5]); // forward declaration
bool dead_end(int xPosition, int yPosition); // forward declaration
void backtrack(int StepsTaken[10]);          // forward declaration
bool traverse_maze()
{

    cout << endl;
    cin.clear();
    bool found = inquire("Have you found the tapestry?");
    if (found)
    {
        cout << "You have found the tapestry!\n";
        // backtrack(xPosition, yPosition);
        return true;
    }
    else if (!found)
    {
        bool LeftWall = inquire("Please turn left 90 degrees \n Are you facing a wall?");
        if (!LeftWall)
        {
            //move left
            bool NameCheck = inquire("Is your name written in front of you?");
            if (NameCheck)
            {
                traverse_maze();
            }
            if (!NameCheck)
            {
                cout << "Step forward & write your name on the ground." << endl;
                yPosition -= 2;
                maze[yPosition][xPosition] = 2;
                cout << dead_end(xPosition, yPosition);
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
    return maze[yPosition][xPosition] == '1' || maze[yPosition][xPosition] == '2';
}

void backtrack(int StepsTaken[10])
{
    //insert numbers into the array
    for (int i = 0; i < 10; i++)
    {
        StepsTaken[i] = i;
    }
    //reverse the array
    for (int i = 0; i < 10; i++)
    {
        StepsTaken[i] = StepsTaken[9 - i];
    }
    //print the array
    for (int i = 0; i < 10; i++)
    {
        cout << StepsTaken[i] << " ";
    }
    cout << endl;
    //see if the array has a 1
    for (int i = 0; i < 10; i++)
    {
        if (StepsTaken[i] == 1)
        {
            cout << "Bye!" << endl;
            return;
        }
    }
    //see if the array has a 2
    for (int i = 0; i < 10; i++)
    {
        if (StepsTaken[i] == 2)
        {
            cout << "Hey!" << endl;
            return;
        }
    }
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