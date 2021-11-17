/*
Purpose- This is the header file for the ReadFile.cpp file. In this file the functions are defined.
@author Haichuan Wei
@version 1.0 11/14/21

ReadInfo - Reads in the information from the file
@param fileName - the name of the file to be read
@param fptr - The vector of persons to be filled

PrintSortInfo - Prints the information in the vector in the order specified
@param fptr - The vector of persons to be printed
@param sortType - The type of sort to be done : -1 for no sort, 0 for month, 1 for year

sort() - Sorts the vector of persons in the order specified
@param fptr - The vector of persons to be sorted

*/

#ifndef _ReadFile_h
#define _ReadFile_h
#include <fstream>
#include <functional>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // used for vector sort
#include <iomanip>   // output format setw
#include "printMeFirst.h"
#include "Person.h"
using namespace std;

void readInfo(string filename, vector<Person *> &fptr)
{
    ifstream infile(filename);
    string line;
    while (getline(infile, line))
    {
        istringstream iss(line);
        string fname, lname, gender;
        int month, day, year;
        iss >> fname >> lname >> gender >> year >> month >> day;
        Person *p = new Person(fname, lname, gender, year, month, day);
        fptr.push_back(p);

    }
    infile.close();
}
void printSortInfo(vector<Person *> &fptr, int SortFlag)
{

    if (SortFlag == -1)
    {
        // no sort
        cout << "Print out unsorted Person" << endl;
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }
        cout << endl;
    }
    else if (SortFlag == 0)
    {
        // sorted by month
        cout << "Print out sorted by month" << endl;
        sort(fptr.begin(), fptr.end(), CompareMonth());
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }

        cout << endl;
    }
    else if (SortFlag == 1)
    {
        // sorted by year
        cout << "Print out sorted by year" << endl;
        sort(fptr.begin(), fptr.end(), CompareYear());
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }
        cout << endl;

    }
}

#endif // _ReadFile_h