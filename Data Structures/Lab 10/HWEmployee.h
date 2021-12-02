/*
@author Haichuan Wei
@version 1.0 11/30/21
@Class EmployeeInfo: is a class that contains the information of an employee.
@function EmployeeInfo: is a constructor that initializes
the information of an employee.
        @param: name, the name of the employee.
        @param: id, the id of the employee.
@function getName: returns the name of the employee.
@function getId: returns the id of the employee.
@function print: prints the information of the employee.

*/

#ifndef HWEmployee_h
#define HWEmployee_h
#include "HWBinaryTree.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
class EmployeeInfo
{
private:
    string name;
    int employeeID;

public:
    EmployeeInfo(string name, int employeeID)
    {
        this->name = name;
        this->employeeID = employeeID;
    }

    int GetID()
    {
        return employeeID;
    }
    string GetName()
    {
        return name;
    }

    void print()
    {
        cout << "ID Number:" << employeeID << "\t Name:" << name << endl;
    }
};

#endif //! HWEmployee_h
