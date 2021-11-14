#ifndef _ReadFile_h
#define _ReadFile_h
#include <fstream>
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
    ifstream infile;
    infile.open(filename);
    if (!infile)
    {
        cout << "Error opening file" << endl;
        return;
    }
    string line;
    while (getline(infile, line))
    {

        stringstream ss(line);
        string fn, ln, s;
        int m, d, y;
        ss >> fn >> ln >> s >> m >> d >> y;
        Person *p = new Person(fn, ln, s, m, d, y);

        fptr.push_back(p);
    }
    infile.close();
}
void printSortInfo(vector<Person *> &fptr, int sortType)
{

    if (sortType == -1)
    {
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }
    }
    else if (sortType = 0)
    {
        // sorted by month
        sort(fptr.begin(), fptr.end(), [](Person *a, Person *b)
             { return a->getMonth() < b->getMonth(); });
        for (int i = 0; i < fptr.size(); i++)
        {
            fptr[i]->printInfo();
        }
    }
}

#endif // _ReadFile_h