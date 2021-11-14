#ifndef _Person_h
#define _Person_h
#include "ReadFile.h"
class Person
{
public:
    Person(string fn, string ln, string s, int m, int d, int y);
    void const printInfo();
    int getMonth(); // return month
    int getYear();  // return year
    string getLastName();
    string getFirstName();

private:
    string fname, lname, gender;
    int month, day, year;
};

#endif // _ReadFile_h
