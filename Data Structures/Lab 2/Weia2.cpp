//
// Purpose- use C++ vector in order to store and calculate tax based on data supplied by the user.
// @author Haichuan Wei
// @version 1.0 9/19/21
// @param  main()- is the entry point of the program and is where the storing and calculation of data is done.
// @return- 0 and print out the total tax for each person given by the user.
//

/* Why is sorting important?
    * It is important to know how to sort the data.
*/

#include <iostream>
#include "rain.h"
using namespace std;

int main()
{
    rainfallstore();
    cout << rainfallstore() << endl;
    bool worked = rainfallstore();
    if (worked)
    {
        CalculateData();
    }
    else
    {
        cout << "Error: Something went wrong! Try again!" << endl;
        rainfallstore();
    }
}
/*



*/

// void codetest()
// {
//     //print out the vector array
//     for (int index = 0; index < 12; index++)
//     {
//         cout << "Month #" << (index + 1) << ": \t";
//         for (int index2 = 0; index2 < totalrain[index].size(); index2++)
//         {
//             cout << totalrain[index][index2] << " ";
//         }
//         cout << endl;
//     }
// }