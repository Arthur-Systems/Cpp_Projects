#ifndef FACTORIAL_H
#define FACTORIAL_H
/*
 * Define the header information for Factorial
 */
 
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/* 
 * forward declaration - tells the compiler that the function
 * factorial(int n) is defined else where so just go use it, and
 * it will be resolved during the linking time.
 * 
 */
 
int factorial(int n);  

#endif
