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