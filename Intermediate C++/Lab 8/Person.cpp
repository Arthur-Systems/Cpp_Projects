#include "Person.h"

#include <iostream>

using namespace std;

Person::Person(string fn, string ln, string s, int m, int d, int y)
{
    fname = fn;
    lname = ln;
    gender = s;
    month = m;
    day = d;
    year = y;
}
void const Person::printInfo()
{
    cout << "First Name: " << fname << endl;
    cout << "Last Name: " << lname << endl;
    cout << "Street: " << month << endl;
    cout << "Month: " << month << endl;
    cout << "Day: " << day << endl;
    cout << "Year: " << year << endl;
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