/*
Purpose- This file has the Person class in it. 
@author Haichuan Wei
@version 1.0 11/14/21

class Person - This class has the information of a person, including the name, month, and year. 
    The constructor is called outside of the class and is used to initialize the variables.

void const printInfo() - This function prints the information of the person.
@param fn - The first name of the person
@param ln - The last name of the person
@param s - The Gender of the person 
@param m - The month of the person's birth
@param d - The day of the person's birth
@param y - The year of the person's birth

int const getMonth() - This function returns the month of the person.
int const getYear() - This function returns the year of the person.
String const getFname() - This function returns the first name of the person.
String const getLname() - This function returns the last name of the person.
Data Members-
    String fname - The first name of the person.
    String lname - The last name of the person.
    int month - The month.
    int year - The year.


    class CompareYear - This class is used to compare the year of two people.
    bool operator()(Person *p1, Person *p2) - This function compares the year of two people.
    Data Members-
        int year - The year.
    Return-
        bool - True if the year of p1 is greater than the year of p2.
        False if the year of p1 is less than the year of p2.
    
    Class CompareMonth - This class is used to compare the month of two people.
    bool operator()(Person *p1, Person *p2) - This function compares the month of two people.
    Data Members-
        int month - The month.
    Return-
        bool - True if the month of p1 is greater than the month of p2.
        False if the month of p1 is less than the month of p2.

        Class CompareLastName - This class is used to compare the name of two people.
        bool operator()(Person *p1, Person *p2) - This function compares the name of two people.
        Data Members-
            String fname - The first name of the person.
            String lname - The last name of the person.
*/
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
   class CompareYear 
        {
        public:
            bool operator()(Person *p1, Person *p2)
            {
                return p1->getYear() < p2->getYear();
            }
        };
          class CompareMonth 
        {
        public:
            bool operator()(Person *p1, Person *p2)
            {
                return p1->getMonth() < p2->getMonth();
            }
        };
        class CompareLastName 
        {
        public:
            bool operator()(Person *p1, Person *p2)
            {
                return p1->getLastName() < p2->getLastName();
            }
        };

#endif // _ReadFile_h
