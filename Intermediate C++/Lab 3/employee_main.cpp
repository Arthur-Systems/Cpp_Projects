/*
Purpose- This is the predefined main file. This the test driver for my code. My code is built around this. This files calls the class defined in the headder by creating objects and calling the function using it.

@author Haichuan Wei
@version 1.0 9/26/21
@Function name: main
@ Function description: Displays the the data stored in the variables of the employee class.
@param param_name 
@return- 0
*/

#include <iostream>
#include "employee.h"
#include "printMeFirst.h"
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
