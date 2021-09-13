// main.cpp
//
// CS 124-03 Spring 2021
// Week 1 Code Example
//
// A demo program that calls functions, defined elsewhere, called square()
// and cube().  The important thing here is that we are able to include
// "math.h" (which itself includes "square.h") and also include "square.h" a
// second time without any problems.  This is due to the #ifndef/#define/#endif
// idiom used in both header files, which is a way to prevent the same header
// file's text from being included in any given source file more than once.


// This is how you include the I/O library, which we wlll use to write console
// output from our program.
#include <iostream>
using namespace std;

#include "math.h"
#include "square.h"

int main()
{
	// These calls are allowed, even though the code for square and cube
	// does not appear in this source file (even after including "math.h"
	// and "square.h").  The linker will resolve these calls to the
	// functions defined in the other source files, thereby allowing the
	// program to run.

	int i = square(3);
	int j = cube(4);
	int k = i * j;

	cout << "The square of 3 is " << i << endl;
	cout << "The cube of 4 is " << j << endl;
	cout << "The square of 3 times the cube of 4 is " << k << endl;

	return 0;
}

// Note that, technically, it would not be an error to include the text of
// "square.h", as we have written it here, twice.  Function declarations can
// appear more than once in the same source file.  However, if other data type
// definitions, such as classes, were declared in "square.h" instead, it would  
// be a problem, since there are some data types that cannot be declared 
// twice in the same source file.  Advised to use caution by employing 
// #ifndef/#define/#endif idiom in your header files. because it is safe 
// practice to ensure that the text of the same header file is not included 
// in the same source file twice. 

// Perhaps a reasonable question to ask at this point is "Why are you
// including square.h right after including math.h, even though you know
// that math.h includes square.h?"  The answer is to demonstrate the point
// that this scenario can happend. 

// When the dependencies between header files are few, they are easy to 
// remember.  One of the goals of this class is to instill coding discipline
// that can scale.  You will find that over time as your solutions evolve
// and expand new dependencies will be added making it impractical to avoid
// possibly including the same header file twice. 

// The design goal that we will be after is to prevent the text of the 
// header file from being included twice, by using the
// #ifndef/define/endif idiom in every header file.
