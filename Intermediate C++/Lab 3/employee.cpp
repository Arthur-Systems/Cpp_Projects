#include <iostream>
#include "employee.h"
#include "printMeFirst.h"

void Employee::setInfo(string name, int idNumber, string department, string position)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}
//setDepartment
void Employee::setDepartment(string department)
{
    this->department = department;
}
//setPosition
void Employee::setPosition(string position)
{
    this->position = position;
}
//setName
void Employee::setName(string name)
{
    this->name = name;
}
void Employee::setIdNumber(int idNumber)
{
    this->idNumber = idNumber;
}
//display each employee
void Employee::displayEmployee() const
{
    cout << "Name: " << name << endl;
    cout << "ID Number: " << idNumber << endl;
    cout << "Department: " << department << endl;
    cout << "Position: " << position << endl;
}