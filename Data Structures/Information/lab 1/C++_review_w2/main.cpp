/* CS 124-3 
 * C++ Review Examples 
 * Filename: main.cpp
 * 2/1/21
 */

// #include statements
#include <iostream>
#include <cmath>
#include "ex_w2.h"

using namespace std;

int main() {

    // Comments
    // Two forward slashes comment out the rest of the line
    cout << "Hello, Ohlone!" << endl; // past the double-slash is a comment

    /* This is a multi-line comment.
     * It begins and ends with an asterisk-slash.
     */

    // Console Output
    // Coding Style Hint:  Keep statement width < 80 characters.
	cout << "This is the time of our life, COVID, life, liberty" << " for all "
                   	<< 2021 << "." << endl; 

    cout << "This is some text followed by endl." << endl;
    cout << "This is more text.";
    cout << "We want to go to the next line here, too" << endl;
    cout << "We made it to the next line." << endl;

    // Typed Variables
    int a = 5; // a is an integer
    char c = 'x'; // b is a char ("character")
    double d = 1.06; // d is a double, a more accurate floating point number
    string s = "this is a C++ string";
    // double a = 4.2; // ERROR! You cannot redefine a variable to be another type
    // int a = 12; // ERROR! You do not need the type when re-assigning a variable
    a = 12; // this is okay

    // Boolean Expressions and Conditionals
    int firstNum = 1;
    string compareText;

    for (int secondNum = 0; secondNum < 3; secondNum++) {
        if (firstNum < secondNum) {
            compareText = "less than";
        } else if (firstNum > secondNum) {
            compareText = "greater than";
        } else {
            compareText = "equal to";
        }
        cout << "firstNum is " << firstNum << ", secondNum is " << secondNum 
		     << endl;
        cout << "firstNum is " << compareText << " secondNum" << endl << endl;
    }

    int x = 5;
    int y = 7;

    if (x == 5 && y == 7) {
        cout << "x equals 5 and y equals 7" << endl;
    }

    if (x == 5 || y == 5) { // note: cannot combine as if (x || y == 5)
        cout << "x equals 5 or y equals 5" << endl;
    }

    if (x != 5 && y != 5) {
        cout << "x is not equal to 5 and y is not equal to 5" << endl;
    } else if (x != 5 || y != 5) {
        cout << "x is not equal to 5 or y is not equal to 5" << endl;
    }

    if (!(x == 5 && y == 5)) {
        cout << "not (x is equal to 5 and y is equal to 5) (DeMorgan's Law)" 
		     << endl;
    }

    // While Loops
    int loopVar = 0;
    while (loopVar < 5) {
      cout << loopVar << endl;
      loopVar++;
    }

    // For Loops
    for (int i = 0; i < 3; i++) {
      cout << i << endl;
    }

    // Functions (defined in all-examples.cpp)
    double fpNum = 1234; // a floating point number
    double result = sqrt(fpNum); // set result equal to return value of sqrt 

    cout << "fpNum: " << fpNum << endl;
    cout << "square root of fpNum: " << result << endl;

    int fact5 = factorial(5);
    cout << "The factorial of 5 is " << fact5 << endl;

    printTenTimes('O');

    // uncomment the following to see compile error
    // int someResult = printTenTimes('c');

    cout << square(15) << endl;
    if (even(42)) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0; // the return value for main must be an integer.
              // In main(), a return value of 0 means "everything worked out"
}

/*
Hello, Ohlone!
This is the time of our life, COVID, life, liberty for all 2021.
This is some text followed by endl.
This is more text.We want to go to the next line here, too
We made it to the next line.
firstNum is 1, secondNum is 0
firstNum is greater than secondNum

firstNum is 1, secondNum is 1
firstNum is equal to secondNum

firstNum is 1, secondNum is 2
firstNum is less than secondNum

x equals 5 and y equals 7
x equals 5 or y equals 5
x is not equal to 5 or y is not equal to 5
not (x is equal to 5 and y is equal to 5) (DeMorgan's Law)
0
1
2
3
4
0
1
2
fpNum: 1234
square root of fpNum: 35.1283
The factorial of 5 is 120
OOOOOOOOOO
225
even
*/
