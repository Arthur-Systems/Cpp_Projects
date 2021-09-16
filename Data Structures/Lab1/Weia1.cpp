#include "auxa1.h"
#include "Maze.h"
#include <iostream>

using namespace std;

int main()
{
    do
    {
        cout << "You step forward & write your name on the ground.\n";
        traverse_maze();

    } while (!traverse_maze());
}