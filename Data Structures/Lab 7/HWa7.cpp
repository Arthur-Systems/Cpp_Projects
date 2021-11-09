#include "HWparen.h"
int main()
{
    int count = 0;
    while (true)
    {
        cout << "Test Number: " << count << endl;
        cout << "\tThis program will detect unbalanced expression parentheses"
             << endl;
        cout << "\tEnter an string with parentheses\n"
             << endl;
        string str;
        cin >> str;
        while (str.find('(') == -1 && str.find(')') == -1)
        {
            cout << "Please Enter Parentheses!\n"
                 << endl;
            cin >> str;
        }
        parentheses paren;
        paren.setString(str);
        bool result = paren.isBalanced();
        cout << "The parentheses are " << (result ? "" : "NOT ")
             << "balanced.\n"
             << endl;
        ++count;
    }
}
/*
arthur@DESKTOP-UP5LF24:
 ./Parentheses
Test Number: 0
        This program will detect unbalanced expression parentheses
        Enter an string with parentheses

hi
Please Enter Parentheses!

(
The parentheses are NOT balanced.

Test Number: 1
        This program will detect unbalanced expression parentheses
        Enter an string with parentheses

)
The parentheses are NOT balanced.

Test Number: 2
        This program will detect unbalanced expression parentheses
        Enter an string with parentheses

(1*3)+2)
The parentheses are NOT balanced.

Test Number: 3
        This program will detect unbalanced expression parentheses
        Enter an string with parentheses

((4/2)*3
The parentheses are NOT balanced.

Test Number: 4
        This program will detect unbalanced expression parentheses
        Enter an string with parentheses

(((1+2)*3)/3)
The parentheses are balanced.

Test Number: 5
        This program will detect unbalanced expression parentheses
        Enter an string with parentheses

^C
arthur@DESKTOP-UP5LF24:
*/