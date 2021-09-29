
/*
Purpose- Prints the information of the developer.
@author Haichuan Wei
@version 1.0 9/26/21
@param name - Haichuan WEi 
@param courseInfo - CS-116 OOP C++
@return-none
*/
#include "printMeFirst.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void printMeFirst(string name, string courseInfo)
{
	cout << "Program written by: " << name << endl;
	cout << "Course Info: " << courseInfo << endl;
	time_t now = time(0);
	char *dt = ctime(&now);
	cout << "Date: " << dt << endl;
}
