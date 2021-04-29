#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    int numbers[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9}};

    while (x < 5)
    {
        y = 0;
        while (y < 2)
        {
            cout << numbers[y][x];

            y++;
        }
        x++;
    }
}