/*
Purpose- 

@author Haichuan Wei
@version 1.0 9/2/21
@using  CLion

@param name - 
@param courseInfo - CS-116 OOP C++
@return-
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include "printMeFirst.h"
#include "Time.h"
#include "Ftc.h"
#include "CtF.h"
int main()
{
    int choice;
    printMeFirst("Haichuan Wei", "CS-116-01 C++ Programming");
    cout << "Welcome to my calculator!" << endl;
    cout << "Choose one of the four options!" << endl;
    cout << endl;
    cout << "\t 1.Seconds to hours minutes and seconds " << endl
         << "\t 2.Fahrenheit to Celsius" << endl
         << "\t 3.Celsius to Fahrenheit" << endl
         << "\t 4.Quit" << endl;
    cin >> choice;

    while (choice != 1 || choice != 2 || choice != 3)
    {

        if (!cin.fail())
        {
            double fahrenheit, celcius;
            int seconds;
            switch (choice)
            {
            case 1:
                cout << "\tYou have chosen the time calculator!\n\tPlease Input the seconds you want to convert" << endl;
                cin >> seconds;
                cout << endl;
                Time(seconds);
                cout << endl;
                break;
            case 2:
                cout << "\tYou picked the Fahrenheit to Celsius Calculator!\n\tPlease input the Temp in Fahrenheit you want to conver." << endl;
                cin >> fahrenheit;
                cout << endl;
                FtoC(fahrenheit);
                cout << endl;
                break;
            case 3:
                cout << "\tYou picked the Celsius to Fahrenheit Calculator\n\tPlease input the Temp in Celsius you want to convert." << endl;
                cin >> celcius;
                cout << endl;
                CtoF(celcius);
                cout << endl;
                break;
            case 4:
                cout << "Rodger that, Quitting!" << endl;
                return 0;
            default:
                cout << "You have entered an invalid option. \n Pick 1, 2 , or 3" << endl;
                cin.clear();
            }
        }
        else
        {
            cout << "Please enter a valid NUMBER!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> choice;
        }
    }
}
