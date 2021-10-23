#include <iostream>
#include <string>
using namespace std;
#ifndef _Inheritance_h_
#define _Inheritance_h_

class Person
{
private:
    string name;
    string gender;

public:
    Person();
    Person(string pname, string pgender);
    string set_name(string name);
    string set_gender(string pgender);
};

class Instructor : public Person
{
private:
    double salary;

public:
    Instructor();
    double set_salary(double amount);
};

class Student : public Person
{

private:
    string major;

public:
    Student();
    string set_major(string major);
};
#endif // !_Inheritance_
