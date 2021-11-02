#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;
int main()
{
    int i, x, y;
    i = 8;
    x = i++;
    x += ++i;
    y = x + i;
    cout << y << endl;
};