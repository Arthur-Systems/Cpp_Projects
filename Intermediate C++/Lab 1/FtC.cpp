/*
Purpose- This function takes the user defined fahrenheit and converts it to celsius.
@author Haichuan Wei
@version 1.0 9/2/21
@using  CLion

@param fahrenheit - the user defined fahrenheit
@return-none
*/
#include <iostream>
#include <iomanip>
#include "Ftc.h"
using namespace std;
void FtoC(double fahrenheit)
{

    if (!cin.fail())
    {

        double celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << " degrees Fahrenheit is " << setprecision(1) << fixed << celsius << " degrees Celsius." << endl;
    }
    else
    {
        cout << "Please enter a valid NUMBER!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> fahrenheit;
        FtoC(fahrenheit);
    }
}
