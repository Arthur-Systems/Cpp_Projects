
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "HWrain.h"
using namespace std;

struct Data
{
    double AmountOfRain;
    double total;
    double average;
    double largest;
    double smallest;
};
vector<Data *> totalrain;
int rainfallstore()
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

    //! total data: goes though all every given data and adds them together
    for (int index = 0; index < totalrain.size(); index++)
    {
        totalrain[0]->total += totalrain[index]->AmountOfRain;
    }
    //! average data: Devides the already given total and puts it in the average variable in the structure.
    totalrain[0]->average = totalrain[0]->total / 12;

    //! smallest data: First initializes by setting itself as the first data in the vector and then goes through the vector and compares its current data with the vector data and if it is smaller it will set the smallest data to the current data.
    totalrain[0]->smallest = totalrain[0]->AmountOfRain;
    for (int index = 0; index < 12; index++)
    {
        if (totalrain[index]->AmountOfRain < totalrain[0]->smallest)
        {
            totalrain[0]->smallest = totalrain[index]->AmountOfRain;
        }
    }
    // !largest data: same princpal as the smallest data but it will compare the current data with the vector data and if it is larger it will set the largest data to the current data.
    totalrain[0]->largest = totalrain[0]->AmountOfRain;
    for (int index = 0; index < 12; index++)
    {
        if (totalrain[index]->AmountOfRain > totalrain[0]->largest)
        {
            totalrain[0]->largest = totalrain[index]->AmountOfRain;
        }
    }
    //! The below code is to print out the data in the correct format. It looks at the first position each of the variables which was already defined by the code above and prints it out.
    cout << fixed << setprecision(2) << endl
         << endl
         << "The total rainfall for the year is:" << totalrain[0]->total << " Inches" << endl
         << "The average rainfall for the year is:" << totalrain[0]->average << " Inches" << endl
         << "The smallest rainfall for the year is:" << totalrain[0]->smallest << " Inches" << endl
         << "The largest rainfall for the year is:" << totalrain[0]->largest << " Inches" << endl;
    //! selection sort: This sort first takes the smallest data and puts it in the first position of the vector and then goes through the vector and compares the current data with the vector data and if it is smaller it will swap the data.
    for (int count = 0; count < totalrain.size(); count++)
    {
        int MinimumNum = count;
        for (int LookAhead = count + 1; LookAhead < totalrain.size(); LookAhead++)
        {
            if (totalrain[LookAhead]->AmountOfRain < totalrain[MinimumNum]->AmountOfRain)
            {
                MinimumNum = LookAhead;
            }
        }
        Data *temp = totalrain[count];
        totalrain[count] = totalrain[MinimumNum];
        totalrain[MinimumNum] = temp;
    }
    cout << endl
         << endl
         << "Here are the rainfall amounts, sorted in ascending order:" << endl;
    for (int index = 0; index < totalrain.size(); index++)
    {
        cout << totalrain[index]->AmountOfRain << endl;
    }
    return 0;
}
