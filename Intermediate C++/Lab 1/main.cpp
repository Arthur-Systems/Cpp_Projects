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
#include "main.h"
#include "printMeFirst.h"
#include "Time.h"
//int main(int argc, char *argv[]) {
int main() {
    int choice;
    // char stopcode = ' ';
    printMeFirst("testing", "123");
    cout << "Welcome to my calculator!" << endl;
    cout << "Choose one of the three options!" << endl;
    cout << endl;
    cout << "\t 1.Seconds to hours minutes and seconds " << endl
         << "\t 2.Fahrenheit to Celsius" << endl
         << "\t 3.Celsius to Fahrenheit" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You have chosen the time calculator!" << endl
             << endl
             << "Please Input the seconds you want to convert" << endl;
        int seconds;
        cin >> seconds;
        Time(seconds);
        return 0;
    case 2:
        cout << "you picked option two";
        break;
    case 3:
        cout << "you picked option three";
        break;
    default:
        cout << " that is not a option!";
    }
    return 0;
}