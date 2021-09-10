/*
Purpose- This function takes the user defined seconds and display it in the format of hours:minutes:seconds. Then it asks the user if they want to repeat the process.

@author Haichuan Wei
@version 1.0 9/2/21
@using  CLion

@param seconds - the user defined seconds
@return-none
*/
#include "Time.h"
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
    else if (cin.fail())
    {
        cout << "Please enter A valid NUMBER" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> seconds;
        Time(seconds);
    }
    else
    {
        cout << "Please enter a POSTIVE number" << endl;
        cin >> seconds;
        Time(seconds);
    }
}
