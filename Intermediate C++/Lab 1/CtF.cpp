/*
Purpose- This programs takes the user defined celcius and converts it to farnhrenheit .

@author Haichuan Wei
@version 1.0 9/2/21
@using  CLion

@param celcius - the user defined celcius
@return-none
*/
#include <iostream>
#include <iomanip>
#include "CtF.h"
using namespace std;

void CtoF(double celcius)
{
    if (!cin.fail())
    {
        double fahrenheit;
        fahrenheit = (celcius * 9 / 5) + 32;
        cout << celcius << " degrees celcius is " << setprecision(1) << fixed << fahrenheit << " degrees fahrenheit." << endl;
    }
    else
    {
        cout << "Please enter a valid NUMBER!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> celcius;
        CtoF(celcius);
    }
}