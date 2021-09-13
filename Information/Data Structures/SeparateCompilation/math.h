// main.cpp
//
// CS 124-03 Spring 2021
// Week 1 Code Example
//
// This header file contains declarations for a set of functions called
// the "math functions."  
//
// In this demonstration, there are only two functions in
// the set: square and cube.  
//
// Note that we are reusing the declaration of the square function
// ofrom square.h here, so that if its signature changes, this 
// "math.h" header will also be affected.  Note, also, the
// use of the #ifndef/#define/#endif idiom.  (See square.h for more
// details about how it works.)

#ifndef MATH_H
#define MATH_H

#include "square.h"

int cube(int n);

#endif // MATH_H
