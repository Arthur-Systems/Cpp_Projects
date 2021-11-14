#ifndef _Person_h
#define _Person_h
#include <string>

class Person
{
public:
    Person(std::string fn, std::string ln, std::string s, int m, int d, int y);
    void const printInfo();
    int getMonth(); // return month
    int getYear();  // return year
    std::string getLastName();
    std::string getFirstName();

private:
    std::string fname, lname, gender;
    int month, day, year;
};

#endif // _ReadFile_h
