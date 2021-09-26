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
    void setDepartment(string department);
    void setPosition(string position);
    void setName(string name);
    void setInfo(string name, int idNumber, string department, string position);
    void setIdNumber(int idNumber);
    void displayEmployee() const;
};

#endif // EMPLOYEE_H