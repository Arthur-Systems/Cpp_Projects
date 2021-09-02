#include <iostream>
#include <cstdlib>
#include <string>

# include "factorial.h"

using namespace std;

/*
 * Purpose:  this function will take a number input and return the
 * 	factorial of number input.  
 * 
 * @parm n - number to be used to calculate the factorial.  
 *           n must be positive number
 * @return - return the factorial of n
 * 
 */
 
int factorial (int n)
{
	int num=1; // initialize default factori number to 1
	
	if (n < 1) {
		cout << "Factorial number must be > 0\n";
		num = 0;
	} else if (n == 1)
		num = 1;
	else {
		for (int i=1; i<=n; i++) {
			num = num * i;
		}
	}
	return (num);
}
	
