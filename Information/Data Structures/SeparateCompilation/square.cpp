// square.cpp
//
// CS 124-03 Spring 2021
// Week 1 Code Example
//
// Again, based on the technique discussed in README.txt, this is the
// definition of the square function.  It is simple; it just multiplies
// its argument by itself and returns the result.
//
// The compiler will compile this source file in the absence of the others,
// generating "square.obj" as a result.  "square.obj" will contain the
// compiled version of the square function, and nothing else.
//
// It is generally good practice to include the header file that corresponds
// to each source file, though, technically, it is not necessary in this
// case.  It will be very important when we start implementing classes in a
// week or so, though.

#include "square.h"

int square(int n)
{
	return n * n;
}
