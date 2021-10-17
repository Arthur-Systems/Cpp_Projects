#include <iostream>

using namespace std;

// at global scope
void myMethod(int M)
{
    int k, x;
    for (k = 0; k < sqrt(M); k++)
        x = 1; // represents any constant-time statement.
}

int main(int M)
{

    // in main()
    for (int k = 0; k < M; k++)
    {
        for (j = 0; j < sqrt(M); j++)
            myMethod(M);
    }
}
