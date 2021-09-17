// File: Weia1.cpp
// Functions: main(): This function provides the test driver to traverse the maze and report whether or not the tapestry is found.
// Title: Lab Assignment 1
// Description:
// Programmer: Haichaun Wei
// Date: 9/14/2021
// Version: 1.0

#include "auxa1.h"
#include "Maze.h"
#include <iostream>

using namespace std;
int main()
{
    cout << "You step forward & write your name on the ground.\n";
    //once the traverse_maze function returns true, Is Finished is ran.
    bool IsFinished = traverse_maze();
    cout << endl;
    if (IsFinished)
    {
        cout << " Pick up the tapestry and take a step backward." << endl;
        cout << " You Found it!" << endl;
        return 0;
    }
}

/* Test case one :
Haichuans-Air:Lab1 arthur$ make run
./a1
You step forward & write your name on the ground.

Have you found the tapestry? [Yes or No]
y
You have found the tapestry!

 Pick up the tapestry and take a step backward.
 You Found it!
*/

/* Test case two :

Haichuans-Air:Lab1 arthur$ make run
./a1
You step forward & write your name on the ground.

Have you found the tapestry? [Yes or No]
n
Please turn left 90 degrees 
 Are you facing a wall? [Yes or No]
n
Is your name written in front of you? [Yes or No]
n
Step forward & write your name on the ground.

Have you found the tapestry? [Yes or No]
n
Please turn left 90 degrees 
 Are you facing a wall? [Yes or No]
y
Please turn right 90 degrees 
 Are you facing a wall?  [Yes or No]
n
Is your name written in front of you? [Yes or No]
n
Step forward & write your name on the ground.
Have you found the tapestry? [Yes or No]
y
You have found the tapestry!
*/