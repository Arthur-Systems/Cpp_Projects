#include <iostream>

using namespace std;

int main()
{
    bool sorted = false;
    int a = 55;
    int b = 543;
    int c = 123;
    int d = 23;
    int e = 5;
    int f = 10;
    int g = 43534;

    while (sorted == false)
    {
        if (a > b)
        {

            int temp = a;
            a = b;
            b = temp;
        }
        else if (b > c)
        {
            int temp = b;
            b = c;
            c = temp;
        }
        else if (c > d)
        {
            int temp = c;
            c = d;
            d = temp;
        }
        else if (d > e)
        {
            int temp = d;
            d = e;
            e = temp;
        }
        else if (e > f)
        {
            int temp = e;
            e = f;
            f = temp;
        }
        else if (f > g)
        {
            int temp = f;
            f = g;
            g = temp;
        }
        if (a < b && b < c && c < d && d < e && e < f && f < g)
        {
            sorted = true;
        }
    }
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << endl;
    return 0;
}