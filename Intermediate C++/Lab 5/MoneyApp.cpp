#include <iostream>
#include <string>
#include "printMeFirst.h"
#include "Money.h"
using namespace std;
int main()
{
    printMeFirst("Haichuan Wei", "CS-116 2021SP"); // change to your name
    Money m(2, 2);                                 // $2.02
    cout << "Original value is " << m << endl;
    Money n = 50 % m;
    cout << "50% of value is " << n << endl;
    n = 10 * m;
    cout << "10 times value is " << n << endl;
    Money a(8, 75);
    Money b(5, 80);
    cout << "\nTesting arithmetic operators: \n"
         << endl;
    Money t;
    double c;
    t = a + b;
    cout << a << " + " << b << " = " << t << endl;
    t = a - b;
    cout << a << " - " << b << " = " << t << endl;
    cout << b << " - " << a << " = " << b - a << endl;
    c = 2;
    t = a * c;
    cout << a << " * " << c << " = " << t << endl;
    c = 2;
    t = a / c;
    cout << a << " / " << c << " = " << t << endl;
    cout << a << " - " << t << " = " << a - t << endl;

    if (a == b)
        cout << a << " = " << b << endl;
    else
        cout << a << " not equal to " << b << endl;
    return 0;
}