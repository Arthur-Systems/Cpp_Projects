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
void printSortInfo(vector<Person *> &fptr, int sortType)
{

    if (sortType == -1)
    {
        // no sort
        cout << "Print out unsorted Person" << endl;
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }
        cout << endl;
    }
    else if (sortType == 0)
    {
        // sorted by month
        cout << "Print out sorted by month" << endl;
        sort(fptr.begin(), fptr.end(), [](Person *p1, Person *p2)
             { return p1->getMonth() < p2->getMonth(); });
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }
        cout << endl;
    }
    else if (sortType == 1)
    {
        // sorted by year
        cout << "Print out sorted by year" << endl;
        sort(fptr.begin(), fptr.end(), [](Person *p1, Person *p2)
             { return p1->getYear() < p2->getYear(); });
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }
        cout << endl;
    }
}

#endif // _ReadFile_h