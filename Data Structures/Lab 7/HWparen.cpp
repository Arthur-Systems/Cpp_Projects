#include "HWparen.h"
parentheses::parentheses()
{
}
parentheses::~parentheses() {}
void parentheses::setString(string s)
{
    str = s;
}

bool parentheses::isBalanced()
{
    stack<char> paren;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            paren.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (paren.empty())
            {
                return false;
            }
            else
            {
                paren.pop();
            }
        }
    }
    if (paren.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
