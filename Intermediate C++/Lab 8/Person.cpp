#include "Person.h"

#include <iostream>

using namespace std;

Person::Person(string fn, string ln, string s, int m, int d, int y)
{
    fname = fn;
    lname = ln;
    gender = s;
    year = m;
    month = d;
    day = y;
}
void const Person::printInfo()
{
    cout << fname << "\t" << lname << "\t" << gender << "\t" << month << "\t" << day << "\t" << year << endl;
}

int Person::getMonth()
{
    return month;
}
int Person::getYear()
{
    return year;
}
string Person::getLastName()
{
    return lname;
}
string Person::getFirstName()
{
    return fname;
}