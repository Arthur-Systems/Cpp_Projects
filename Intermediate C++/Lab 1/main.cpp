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
// #include "main.h"
// int main(int argc, char *argv[])
// {
//     {
int main()
{
    int choice;
    string stopcode;
    printMeFirst("Haichuan Wei", "CS-116 OOP C++");
    cout << "Welcome to my calculator!" << endl;
    cout << "Choose one of the three options!" << endl;
    cout << endl;
    cout << "\t 1.Seconds to hours minutes and seconds " << endl
         << "\t 2.Fahrenheit to Celsius" << endl
         << "\t 3.Celsius to Fahrenheit" << endl;
    cin >> choice;
    do
    {
        if (!cin.fail())
        {
            double fahrenheit, celcius;
            int seconds;
            switch (choice)
            {
            case 1:
                cout << "You have chosen the time calculator!" << endl
                     << endl
                     << "Please Input the seconds you want to convert" << endl;
                cin >> seconds;
                Time(seconds);
                return 0;
            case 2:
                cout << "you picked the Fahrenheit to Celsius Calculator" << endl
                     << "Please input the Temp in Fahrenheit you want to convert" << endl;

                cin >> fahrenheit;
                FtoC(fahrenheit);
                return 0;
            case 3:
                cout << "You picked the Celsius to Fahrenheit Calculator" << endl
                     << "Please input the Temp in Celsius you want to convert" << endl;
                cin >> celcius;
                CtoF(celcius);
                return 0;
            default:
                cout << "You have entered an invalid option" << endl;
                cin.clear();
                cin >> choice;
            }
        }
        else
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a valid NUMBER!" << endl;
            cin >> choice;
        }
    } while (choice != 1 || choice != 2 || choice != 3);
}
