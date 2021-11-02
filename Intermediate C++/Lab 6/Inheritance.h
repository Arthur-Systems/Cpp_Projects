/*
Purpose- This program was made to practice class inheritance. This program takes in data provided by the user and then uses class inheritance to streamline reading and outputting the data. The “Instructor” and “Student” Class was inherited from the “Person” class meaning data was able to be quickly exchanged and ran.
@author Haichuan Wei
@version 1.0 10/23/21
@param pname , name - Name of the person
@param pgender - Gender of the person
@param major - The major of the person
@param amount, salary - The money the earn

@function class Person() - Deafult Constructor
@function class Person(string pname, string pgender) - Constructor
@function class set_name(string pname) - Sets the name to what ever the user inputs
@function class set_gender(string pgender) - Sets the gender
@function display()- Displays the data

@function class Instructor()- Deafult Constructor
@function class Instructor(string pname, string pgender,  double amount) - Constructor
@function class set_salary(double amount); - Sets the salary;
@function display()- Displays the data

@function class Student()- Deafult Constructor
@function class Student(string pname, string pgender, string major) - Constructor
@function class set_major(string major) - Sets the major
@function display()- Displays the data

@return- None
*/

#ifndef _Inheritance_h_
#define _Inheritance_h_
#include <iostream>
#include <string>
using namespace std;
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
    // display
    void display() const;
};

class Instructor : public Person
{
private:
    double salary;

public:
    Instructor();
    Instructor(string pname, string pgender, double salary);
    double set_salary(double amount);
    void display() const;
};

class Student : public Person
{

private:
    string major;

public:
    Student();
    Student(string pname, string pgender, string major);
    string set_major(string major);
    void display() const;
};
#endif // !_Inheritance_
