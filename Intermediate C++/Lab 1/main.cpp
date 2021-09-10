/*
Purpose- This project is a multifunctional calculator that can be used to convert secounds to hours, minutes, and seconds. It also convert Fahrenheit to Celsius and Celsius to Fahrenheit.

@author Haichuan Wei
@version 1.0 9/2/21

@param fahrenheit - The number of fahrenheit defined by the user
@param celcius - The number of celcius defined by the user
@param seconds - The number of seconds defined by the user
@Arthur-Systems
@return-none
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
    int choice, seconds;
    double fahrenheit, celcius;

    while (choice != 4)
    {
        printMeFirst("Haichuan Wei", "CS-116-01 C++ Programming");
        cout << "Welcome to my calculator!" << endl;
        cout << "Choose one of the four options!" << endl;
        cout << endl;
        cout << "\t 1.Seconds to hours minutes and seconds " << endl
             << "\t 2.Fahrenheit to Celsius" << endl
             << "\t 3.Celsius to Fahrenheit" << endl
             << "\t 4.Quit" << endl;
        cin >> choice;

        if (!cin.fail())
        {
            if (choice == 1)
            {
                cout << "\tYou have chosen the time calculator!\n\tPlease Input the seconds you want to convert" << endl;
                cin >> seconds;
                cout << endl;
                Time(seconds);
                cout << endl;
                cin.clear();
            }
            else if (choice == 2)
            {
                cout << "\tYou picked the Fahrenheit to Celsius Calculator!\n\tPlease input the Temp in Fahrenheit you want to conver." << endl;
                cin >> fahrenheit;
                cout << endl;
                FtoC(fahrenheit);
                cout << endl;
                cin.clear();
            }
            else if (choice == 3)
            {
                cout << "\tYou picked the Celsius to Fahrenheit Calculator\n\tPlease input the Temp in Celsius you want to convert." << endl;
                cin >> celcius;
                cout << endl;
                CtoF(celcius);
                cout << endl;
                cin.clear();
            }
            else if (choice == 4)
            {
                cout << "Rodger that, Quitting!" << endl;
                return 0;
            }
            else
            {
                cout << "You have entered an invalid option. \n Pick 1, 2 , or 3" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                break;
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
