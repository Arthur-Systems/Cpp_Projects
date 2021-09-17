// File: Maze.cpp
// Functions: bool traverse_maze(): This function explores the three directions available at a given spot in the maze. The function returns true (tapestry found) or false (tapestry not found)
//bool dead_end(): This function determines whether the direction in front of the user is a dead end. Dead ends are caused by a wall or a direction that the user has already explored. The function returns true (for a dead end) or false (for no dead end).

// Title: Lab Assignment 1
// Programmer: Haichaun Wei
// Date: 9/14/2021
// Version: 1.0

#include <iostream>
#include "auxa1.h"
#include "Maze.h"
#include <vector>
using namespace std;

//maze grid
int maze[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}};
int yPosition = 3;
int xPosition = 0;
bool dead_end(); //forward direction

//this is the main function that asks the user how they want to move
bool traverse_maze()
{
    cout << endl;
    cin.clear();
    bool found = inquire("Have you found the tapestry?");
    if (found)
    {
        //this checks if the user is on a deadend spot by checking the array for a 1 or 2 and if found, it errors out.
        bool IsDeadEnd = dead_end();
        if (!IsDeadEnd)
        {
            cout << "You have found the tapestry!\n";
            return true;
        }
        else
        {
            cout << "The tapestry can NOT be here! You are in a dead end.\n";
            return false;
        }
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
                yPosition += 1;
                xPosition += 1;
                //change the data in the array to 2
                maze[yPosition][xPosition] = 2;
                // test_maze(maze);
                traverse_maze();
            }
        }
        else if (LeftWall)
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
        else if (!RightWall)
        {
            bool NameCheck = inquire("Is your name written in front of you?");
            if (NameCheck)
            {
                traverse_maze();
            }
            else if (!NameCheck)
            {
                cout << "Step forward & write your name on the ground.";
                yPosition += 1;
                maze[yPosition][xPosition] = 2;
                // test_maze(maze);
                traverse_maze();
            }
        }
        return true;
    }
    return true;
}

//dead end sees if a "1" (A wall) is in front of the user or "2" (A name) is in front of the user
bool dead_end()
{
    return maze[yPosition][xPosition] == '1' || maze[yPosition][xPosition] == '2';
}

//this function is used to print out the maze in the console so I can see what is going on.

// void test_maze(int maze[5][5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << maze[i][j] << " ";
//         }
//         cout << endl;
//     }
// }