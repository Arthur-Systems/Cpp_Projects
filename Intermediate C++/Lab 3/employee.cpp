#include <iostream>
#include "employee.h"
#include "printMeFirst.h"

using namespace std;

class Employee
{
public:
    Employee(string name, int id, string department, double salary);
    void setName(string name);
    void setId(int id);
    void setDepartment(string department);
    void setSalary(double salary);
    string getName();
    int getId();
    string getDepartment();
    double getSalary();
    void print();

private:
    string name;
    int id;
    string department;
    double salary;
}

//create a class called Employee
//create a constructor that takes in 4 parameters
//create a setter for each of the parameters

int
main()
{
    Employee employee1("John", 123, "IT", 100000);
    Employee employee2("Jane", 456, "HR", 200000);
    Employee employee3("Bob", 789, "IT", 300000);
    Employee employee4("Mary", 101, "HR", 400000);
    Employee employee5("Mike", 102, "IT", 500000);
    Employee employee6("Sally", 103, "HR", 600000);
    Employee employee7("Sam", 104, "IT", 700000);
    Employee employee8("Sue", 105, "HR", 800000);
