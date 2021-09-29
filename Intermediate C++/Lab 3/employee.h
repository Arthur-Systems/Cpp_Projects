/*
Purpose- The purpose of this headder file is to create and define a class called Employee. And then Define the functions that will be used in the program.
@author Haichuan Wei
@version 1.0 9/26/21
@param Employee class - defines the structure.
@param displayEmployee - defines the function that displays the employee information.
@return-none
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    void setInfo(string name, int idNumber, string department, string position);
    void setDepartment(string department);
    void setPosition(string position);
    void setName(string name);
    void setIdNumber(int idNumber);
    //getData
    string getName();
    int getIdNumber();
    string getDepartment();
    string getPosition();
    void getInfo();
};
void displayEmployee(Employee employee);
#endif // EMPLOYEE_H