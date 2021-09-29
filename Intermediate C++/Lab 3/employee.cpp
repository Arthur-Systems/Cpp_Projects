
/*
Purpose- This file contains the implementation of the Employee class. The employee main file runs the code here. 
@author Haichuan Wei @Arthur-Systems
@version 1.0 9/26/21
@Function name: displayEmployee
@ Function description: Displays the the data stored in the variables of the employee class.
@param string name the name of the employee , int idNumber the Id number , string department the department , string position the position they hold
@return- name, idNumber , department ,position
*/

#include <iostream>
#include "employee.h"
#include "printMeFirst.h"

void Employee::setInfo(string name, int idNumber, string department, string position)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
};
//setDepartment
void Employee::setDepartment(string department)
{
    this->department = department;
};
//setPosition
void Employee::setPosition(string position)
{
    this->position = position;
};
//setName
void Employee::setName(string name)
{
    this->name = name;
};
void Employee::setIdNumber(int idNumber)
{
    this->idNumber = idNumber;
};

//getData
string Employee::getName()
{
    return name;
};
int Employee::getIdNumber()
{
    return idNumber;
};
string Employee::getDepartment()
{
    return department;
};
string Employee::getPosition()
{
    return position;
};

//displayEmployee
void displayEmployee(Employee employee)
{
    cout << endl;
    cout << "Name: " << employee.getName() << endl;
    cout << "ID Number: " << employee.getIdNumber() << endl;
    cout << "Department: " << employee.getDepartment() << endl;
    cout << "Position: " << employee.getPosition() << endl;
};