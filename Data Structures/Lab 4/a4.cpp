#include <iostream>
#include "weia4.h"

using namespace std;
//Define a function template to be used as a tool for creating a set of functions that have the same code logic but whose code can be applied to different data types.
template <class T>
void print(T t)
{
    cout << t << endl;
}

int main()
{
    print(1);
    print("Hello");
    print(1.0);
    return 0;
}
int main()
{
}