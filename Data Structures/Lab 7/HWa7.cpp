#include "HWparen.h"
int main()
{

    while (true)
    {
        cout << "This program will detect unbalanced expression parentheses" << endl;
        cout << "Enter an string with parentheses" << endl;
        string str;
        cin >> str;
        if (str.length() == 0)
        {
            cout << "Please Enter Something!" << endl;
            continue;
        }
        else if (str.find('(') == -1 || str.find(')') == -1)
        {
            cout << "Please Enter Parentheses!" << endl;
            continue;
        }
        else
        {
            parenthesis<string> text(str);
            bool result = text.isBalanced();
            cout << "The string is " << (result ? "" : "not ") << "balanced." << endl;
        }
    }
}
