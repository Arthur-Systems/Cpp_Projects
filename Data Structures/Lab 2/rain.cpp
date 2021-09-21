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

//vector array
vector<double> totalrain[13];
int rainfallstore()
{
    int rain;
    for (int index = 0; index < 12; index++)
    {
        if (!cin.fail())
        {
            {
                cout << "Enter the rain (in inches) for month  #" << (index + 1) << ": \t";
                cin >> rain;
                totalrain[index].push_back(rain);
            }
        }
        else if (rain < 0)
        {
            cout << "Enter a number ABOVE ZERO" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else
        {
            cout << "Please Enter a NUMBER!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    //print out the vector array
    for (int index = 0; index < 12; index++)
    {
        cout << "Month #" << (index + 1) << ": \t";
        for (int index2 = 0; index2 < totalrain[index].size(); index2++)
        {
            cout << totalrain[index][index2] << " ";
        }
        cout << endl;
    }

    return 0;
}
