//
// Purpose- This lab is to practice tje use of stacks.
// @author Haichuan Wei
// @version 1.0 11/4/21
//@function parenthesis()- This function is the constructor of the class.
//@function ~parenthesis()- This function is the destructor of the class.
//@function isBalanced()- This function does most of the calculations.
// It stores both POP and PUSH operations in the stack.
// It takes in user data and checks if the data is balanced.
// It breaks the string into characters
// and checks if the character is a parenthese.
// If it is a parentheses, it pushes or pops the stack.
// If the stack is empty, it means the string is balanced.
//@function setString()- This function sets the string to be checked.
//

#ifndef _HW_PAREN_H_
#define _HW_PAREN_H_
#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>

using namespace std;

class parentheses
{
public:
    parentheses();
    ~parentheses();
    bool isBalanced();
    void setString(string s);

private:
    stack<char> paren;
    string str;
};

#endif //_HW_PAREN_H_