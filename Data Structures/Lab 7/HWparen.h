#ifndef _HW_PAREN_H_
#define _HW_PAREN_H_
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>

using namespace std;

// write a STL stack that can be used to test whether a string has balanced parentheses
template <typename T>
class parenthesis
{
public:
    parenthesis();
    ~parenthesis();
    void push(T);
    T pop();
    bool isEmpty();
    bool isFull();
    int size();
    void print();

private:
    vector<T> stack;
};

#endif _HW_PAREN_H_