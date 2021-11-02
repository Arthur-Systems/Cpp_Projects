#include "Inheritance.h"

Person::Person()
{
    name = "None";
    gender = "None";
}
Person::Person(string pname, string pgender)
{
    name = pname;
    gender = pgender;
}
string Person::set_name(string name)
{
    this->name = name;
    return name;
}
string Person::set_gender(string pgender)
{
    this->gender = pgender;
    return gender;
}

void Person::display() const
{
    cout << "Name : " << name << endl;
    cout << "Gender : " << gender << endl;
}

Instructor::Instructor()
{
    salary = 0;
}
Instructor::Instructor(string pname, string pgender, double salary) : Person(pname, pgender)
{
    this->salary = salary;
}

double Instructor::set_salary(double amount)
{
    this->salary = amount;
    return salary;
}
void Instructor::display() const
{
    Person::display();
    cout << "Salary : " << salary << endl;
}

Student::Student()
{
    major = "None";
}
Student::Student(string pname, string pgender, string major) : Person(pname, pgender)
{
    this->major = major;
}

string Student::set_major(string major)
{
    this->major = major;
    return major;
}

void Student::display() const
{
    Person::display();
    cout << "Major : " << major << endl;
}