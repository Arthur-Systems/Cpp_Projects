/*
Purpose- 

@author Haichuan Wei
@version 1.0 9/2/21
@using  CLion

@param name - 
@param courseInfo - CS-116 OOP C++
@return-
*/
#include "Main.h"
#include <string>
#include <iostream>
using namespace std;

void Time(int seconds)
{

    if (seconds > 0)
    {
        int hours = seconds / 3600;
        int minutes = (seconds % 3600) / 60;
        int seconds2 = seconds % 60;
        cout << hours << " hours " << minutes << " minutes " << seconds2 << " seconds" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        cin >> seconds;
        Time(seconds);
    }
};
