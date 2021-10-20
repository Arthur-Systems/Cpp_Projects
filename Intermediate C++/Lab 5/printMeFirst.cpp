#include "printMeFirst.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

/*
Purpose- Prints the information of the developer.
@author Haichuan Wei
@version 1.0 9/2/21
@using  CLion
@param name - none
@param courseInfo - CS-116 OOP C++
@return-
*/

void printMeFirst(string name, string courseInfo)
{
	cout << "Program written by: " << name << endl;
	cout << "Course Info: " << courseInfo << endl;
	time_t now = time(0);
	char *dt = ctime(&now);
	cout << "Date: " << dt << endl;
}