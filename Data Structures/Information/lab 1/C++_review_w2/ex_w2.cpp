/* CS 124-3 
 * C++ Review Examples 
 * Filename: ex_w2.cpp
 * 2/1/21
 */
 
// #include statements
#include <iostream>
#include <cmath>
#include "ex_w2.h"

using namespace std;

// functions that main uses:

int factorial(int number) {
    int result = 1;
    for (int n = number; n > 1; n--) {
        result *= n;
    }
    return result;
}

void printTenTimes(char c) {
    for (int i = 0; i < 10; i++) {
        cout << c;
    }
    cout << endl;
}

int doubleValue(int x) {
    x *= 2;
    return x;
}

void doubleValueWithRef(int &x) {
    x *= 2;
}

int square(int x) {
    return x * x;
}

bool even(int v) {
    return v % 2 == 0;
}