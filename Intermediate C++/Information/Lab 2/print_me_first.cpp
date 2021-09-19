//PrintMeFirst.cpp
#include <iostream>
#include <string>
#include <iomanip> 
#include "print_me_first.h"
using namespace std;

/**
 * @Purpose - this function print out the person who wrote the program, 
 * and date/time the program run.
 * @parm - name - the author of the program
 * @parm - courseInfo - the name of the course
 * @return - none
 * @file - PrintMeFirst.cpp
 * @author -Haiyan
 **/

void print_me_first(string name, string courseInfo)
{
cout <<" Program written by: "<< name << endl; // put your name here
cout <<" Course info: "<< courseInfo << endl;
time_t now = time(0); // current date/time based on current system
char* dt = ctime(&now); // convert now to string for
cout << " Date: " << dt << endl;
}
