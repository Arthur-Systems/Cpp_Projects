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
    double AmountOfRain;
    double total;
    double average;
    double largest;
    double smallest;
};

int rainfallstore(vector<Data *> &totalrain)
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
                cout << "Please Reenter your number" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                index--;
            }
        }
        else
        {
            cout << "Please Enter a VALID NUMBER!" << endl;
            cout << "Please Reenter your number" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            index--;
        }
    }
    return 0;
}
void Calculate(vector<Data *> &totalrain)
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
}

void Sortdata(vector<Data *> &totalrain)
{
    //selection sort
    for (int index = 0; index < totalrain.size(); index++)
    {
        int min = index;
        for (int index2 = index + 1; index2 < totalrain.size(); index2++)
        {
            if (totalrain[index2]->AmountOfRain < totalrain[min]->AmountOfRain)
            {
                min = index2;
            }
        }
        Data *temp = totalrain[index];
        totalrain[index] = totalrain[min];
        totalrain[min] = temp;
    }

    //print the vector
    for (int index = 0; index < totalrain.size(); index++)
    {
        cout << "The SORTED rainfall for month #" << (index + 1) << " is:" << totalrain[index]->AmountOfRain << " Inches" << endl;
    }
}
