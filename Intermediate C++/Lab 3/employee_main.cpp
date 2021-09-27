#include <iostream>
#include "employee.h"
#include "printMeFirst.h"
#include <string>
int main()
{
    printMeFirst("Haichuan Wei", "CS-116 Lab 4"); //put your name
    // Create an Employee object to test constructor #1.
    Employee susan;
    susan.setInfo("Susan Meyers", 47899, "Accounting", "Vice President");
    // Create an Employee object to test constructor #2.
    Employee mark;
    mark.setInfo("Mark Jones", 39119, "Dept", "Title");
    mark.setDepartment("IT");
    mark.setPosition("Programmer");
    // Create an Employee object to test constructor #3.
    Employee joy;
    joy.setName("Joy Rogers");
    joy.setIdNumber(81774);
    joy.setDepartment("Manufacturing");
    joy.setPosition("Engineer");
    // Display each employee's data.
    displayEmployee(susan);
    displayEmployee(mark);
    displayEmployee(joy);
    return 0;
}
