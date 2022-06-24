/**
* @file harjaspreetrajasonsiLab1.cpp
* @author  Harjaspreet Rajasonsi
* @brief The purpose of this program is to use varables to
construct arithmetic expressions, using the varables defnied
This program aims to provide practice on how to manipulate data and varables.
* @version 1
* @date 2022-06-24
*
* @copyright Copyright (c) 2022
*
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //! Varaible Declaration
    int my_id = 27;
    int num_let = 9;
    const int LEFT_MOST_DIGIT = 5;
    //! Programmer Information
    cout << "Program Created By Harjaspreet Rajasonsi" << endl;
    cout << "My student ID is:  \nMy Last Name Is: Rajasonsi" << endl;
    cout << "my_id is: " << my_id << endl;
    cout << "num_let is:"
         << num_let << endl
         << endl;
    //! Structuring the program
    cout << setw(10) << right << "Expression" << setw(25) << "Value" << endl;
    cout << setw(10) << right << "---------" << setw(25) << "-----" << endl;

    //! Arithmetic Expressions
    cout << "Expression #1:" << my_id << " /2= "
         << my_id / 2 << endl;

    cout << "Expression #2:" << my_id << " %2= "
         << my_id % 2 << endl;

    cout << setw(10) << right << "Expression #3:";
    int sum = 0;
    for (int nLet = 2; nLet < num_let; nLet++)
    {
        cout << nLet << " + ";
        sum += nLet;
    }
    cout << num_let << " = " << sum + num_let << endl;

    cout << "Expression #4 " << my_id << " + " << num_let
         << "= " << my_id + num_let << endl;

    cout << "Expression #5 " << my_id << " * " << num_let
         << "= " << my_id * num_let << endl;

    cout << "Expression #6 " << my_id << " += " << num_let << "= ";
    my_id += num_let;
    cout << my_id << endl;

    double double_result = 0;
    int int_result = 0;

    cout << "Expression #7 " << my_id << " *= " << num_let << "= ";
    my_id *= num_let;
    cout << my_id << endl;

    cout << setw(10) << right << "Expression #8 " << my_id << " / "
         << num_let << "+ 1000 = ";
    double_result = my_id;
    double_result /= num_let + 1000;
    cout << setprecision(4) << double_result << endl;

    cout << setw(10) << right << "Expression #9 "
         << "SIN(" << LEFT_MOST_DIGIT << ") = ";
    double_result = sin(LEFT_MOST_DIGIT);
    cout << setprecision(4) << double_result << endl;

    return 0;
}

/*
!Terminal Output
Program Created By Harjaspreet Rajasonsi
My student ID is:
My Last Name Is: Rajasonsi
my_id is: 27
num_let is:
9
Expression                    Value
---------                    -----
Expression #1:27 /2= 13
Expression #2:27 %2= 1
Expression #3:2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = 44
Expression #4 27 + 9= 36
Expression #5 27 * 9= 243
Expression #6 27 += 9= 36
Expression #7 36 *= 9= 324
Expression #8 324 / 9+ 1000 = 0.3211
Expression #9 SIN(5) = -0.9589

*/
