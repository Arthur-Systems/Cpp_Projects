
//! Please Replace Lab 2
/* Why is sorting important?
    ! * It is important to know how to sort the data.
    Sorting the data allows us to interperate the data easily.
    In this lab there were only
    12 data values meaning it was easily for
     humans to understand the data but once the data increases,
     humans  increaslying take longer to understand the data.
    Sorting not only allows for quick cross checking with the
    MIN and the Max value but it helps the user understand the data.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "HWrain.h"
using namespace std;

int main()
{

    cout << "\tWelcome to the Rainfall Analysis Program!" << endl;
    cout << "\t----------------------------------------" << endl;
    rainfallstore();
}
/*
./RainFallStats
Enter the rain (in inches) for month  #1:0
Enter the rain (in inches) for month  #2:0
Enter the rain (in inches) for month  #3:1
Enter the rain (in inches) for month  #4:-1
Enter a number ABOVE ZERO
Please Reenter your number
Enter the rain (in inches) for month  #4:3
Enter the rain (in inches) for month  #5:6
Enter the rain (in inches) for month  #6:8
Enter the rain (in inches) for month  #7:77
Enter the rain (in inches) for month  #8:2
Enter the rain (in inches) for month  #9:1
Enter the rain (in inches) for month  #10:1.5
Enter the rain (in inches) for month  #11:3.5
Enter the rain (in inches) for month  #12:66.9


The total rainfall for the year is:169.90 Inches
The average rainfall for the year is:14.16 Inches
The smallest rainfall for the year is:0.00 Inches
The largest rainfall for the year is:77.00 Inches


Here are the rainfall amounts, sorted in ascending order:
0.00
0.00
1.00
1.00
1.50
2.00
3.00
3.50
6.00
8.00
66.90
77.00
*/
