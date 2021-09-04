#include <iostream>
#include <cstdlib>
#include <string>
#include "factorial.h" 

#include "printMeFirst.h"

using namespace std;

int getNumber(int minNum, int maxNum);  /* forward declaration */

/*
 * This program will print out factorial number of 
 * command line input argv[1]
 * Usage: program factNum
 * 
 * Return: 0 - success
 *         1 - error
 * 
 * @file factorialSample.cpp
 * @author Ron Sha
 * 
 */
 
const int MIN_NUM = 0;
const int MAX_NUM = 15;

int main (int argc, char *argv[])
{  
	int factNum=1;
	int n=0;
	int choice;
	
	cout << "Program Name: " << argv[0] << endl; 
	cout << "Number of Program argument: " << argc - 1 << "\n\n";
	
	printMeFirst("Ron Sha", "CS-116 Example");

	
	if (argc < 2) { /* will ask user to enter factorial number */
		do {
			// displays menu
			cin.clear();
			cout << "Choose a selection below:" << endl;
			cout << "\t1 - Enter a number to calculate factorial number" << endl;
			cout << "\t2 - Quit" << endl;
			cin >> choice;
			
			if (cin.fail()) { /* this is used to clear input buffer */
				cin.clear();
				cin.ignore();
			};
			
			// handles choice input
			switch (choice) {
				case 1:
					n = getNumber(MIN_NUM, MAX_NUM); /* get a number between parm */
					factNum = factorial(n);
					cout << "Factorial of " << n << " is " << factNum << endl;
					break;
				case 2:
					break;
				default:
					cout << "Please enter a valid selection." << endl;
					break;
			};			
			cout << endl;		
		} while (choice != 2); // loops menu and functions until quit
	}
	else {

	/*
	 * convert argv[1] to integer and 
	 * print out factorial of argv[1] input
	 */
	 
		n = atoi(argv[1]);
		factNum = factorial(n);
		
		cout << "Factorial of " << n << " = " << factNum << endl;
	}
		
	return(0);
}

/*
 * Purpose:  this function will get a number between the minNum and
 *           maxNum number.
 * 
 * @parm minNum - minum number of the input.  
 * @parm maxum - maximum number of the input.  
 * @return - return the user's input of the number
 * 
 */

int getNumber(int minNum, int maxNum)
{
	long double num = 0;
	bool done = false;
	
	
	while (! done)
	{
		cout << "Enter a number between " << minNum 
			<< " and " << maxNum << ": ";
		cin >> num;
		if (cin.fail()) { /* this is used to clear input buffer */
			cin.clear();
			cin.ignore(1024, '\n');
			done = false;
		}
		else if (num >= minNum and num <= maxNum)
		{
			cout << "Num: " << num << endl;
			done = true;
		}
	}
	return (num);
}

