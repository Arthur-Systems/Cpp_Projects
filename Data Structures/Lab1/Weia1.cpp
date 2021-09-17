#include "auxa1.h"
#include "Maze.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "You step forward & write your name on the ground.\n";
    bool IsFinished = traverse_maze();
    cout << endl;
    cout << IsFinished;
    if (IsFinished)
    {
        cout << " Finished!";
        return 0;
    }
}