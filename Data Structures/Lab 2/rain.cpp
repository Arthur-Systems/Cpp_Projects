//
// Purpose- use C++ vector in order to store and calculate tax based on data supplied by the user.
// @author Haichuan Wei
// @version 1.0 9/19/21
// @param  main()- is the entry point of the program and is where the storing and calculation of data is done.
// @return- 0 and print out the total tax for each person given by the user.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "rain.h"
using namespace std;

struct Data
{
    double AmountOfRain = 0;
    double total = 0;
    double average = 0;
    double largest = 0;
    double smallest = 0;
};

//vector array
vector<Data *> totalrain;
bool rainfallstore()
{
    for (int index = 0; index < 12; index++)
    {
        Data *Newdata = new Data;
        double rain;
        if (!cin.fail())
        {
            cout << "Enter the rain (in inches) for month  #" << (index + 1) << ":";
            cin >> rain;
            if (rain >= 0)
            {
                Newdata->AmountOfRain = rain;
                totalrain.push_back(Newdata);
            }
            else
            {
                cout << "Enter a number ABOVE ZERO" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                index--;
            }
        }
        else
        {
            cout << "Please Enter a VALID NUMBER!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            index--;
        }
    }
    return true;
}

void CalculateData()
{
    //total data
    for (int index = 0; index < 12; index++)
    {
        totalrain[0]->total += totalrain[index]->AmountOfRain;
    }
    //average data
    totalrain[0]->average = totalrain[0]->total / 12;

    //smallest data
    totalrain[0]->smallest = totalrain[0]->AmountOfRain;
    for (int index = 0; index < 12; index++)
    {
        if (totalrain[index]->AmountOfRain < totalrain[0]->smallest)
        {
            totalrain[0]->smallest = totalrain[index]->AmountOfRain;
        }
    }
    // largest data
    totalrain[0]->largest = totalrain[0]->AmountOfRain;
    for (int index = 0; index < 12; index++)
    {
        if (totalrain[index]->AmountOfRain > totalrain[0]->largest)
        {
            totalrain[0]->largest = totalrain[index]->AmountOfRain;
        }
    }

    cout << "The total rainfall for the year is:" << totalrain[0]->total << " Inches" << endl;
    cout << "The average rainfall for the year is:" << totalrain[0]->average << " Inches" << endl;
    cout << "The smallest rainfall for the year is:" << totalrain[0]->smallest << " Inches" << endl;
    cout << "The smallest rainfall for the year is:" << totalrain[0]->largest << " Inches" << endl;
}
