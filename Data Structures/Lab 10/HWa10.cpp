#include "HWEmployee.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{

    // crease a workforce of at last 5 employees
    HWEmployee *employees[5];
    // create 5 employees
    for (int i = 0; i < 5; i++)
    {
        employees[i] = new HWEmployee();
    }
}