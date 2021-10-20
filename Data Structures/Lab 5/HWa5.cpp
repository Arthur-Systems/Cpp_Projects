#include "LinkedList.h"
int main()
{
    LinkedList<double> rainFall;
    cout << "How many months will you enter?" << endl;
    int numMonths;
    do
    {
        cin >> numMonths;
        if (numMonths <= 0)
        {
            cout << "Please enter a positive number of months." << endl;
        }
        else
        {
            break;
        }
    } while (numMonths < 1);
    for (int i = 0; i < numMonths; i++)
    {
        double rainFallAmount;
        cout << "Enter the amount of rain fall for month (in inches) "
             << i + 1 << ": ";
        cin >> rainFallAmount;
        if (rainFallAmount >= 0)
        {
            rainFall.appendNode(rainFallAmount);
        }
        else
        {
            cout << "Please enter a positive number of rain fall." << endl;
            rainFall.deleteNode(rainFallAmount);
            i--;
        }
    }

    cout << fixed << setprecision(2); // set precision to 2 decimal places
    // total
    double total = rainFall.getTotal();
    cout << "The total rainfall for the year is "
         << total << " inches." << endl;
    // average
    double average = rainFall.getAverage();
    cout << "The average rainfall for the year is "
         << average << " inches." << endl;
    // highest
    double highest = rainFall.getLargest();
    cout << "The highest rainfall for the year is "
         << highest << " inches." << endl;
    // search for the lowest
    double lowest = rainFall.getSmallest();
    cout << "The lowest rainfall for the year is "
         << lowest << " inches." << endl;
    // position Of Largest
    int positionOfLargest = rainFall.getLargestPosition();
    cout << "The most amount of rainfall was "
         << highest << " inches at month " << positionOfLargest << "." << endl;
    // position Of Smallest
    int positionOfSmallest = rainFall.getSmallestPosition();
    cout << "The smallest amount of rainfall was "
         << lowest << " inches at month " << positionOfSmallest << "." << endl;
}

/*
arthur@DESKTOP-UP5LF24:/mnt/c/Users/Arthur/Documents/Github/Cpp_Projects/Data Structures/Lab 5$ make run
./Rain
How many months will you enter?
-13
Please enter a positive number of months.
0
Please enter a positive number of months.
12
Enter the amount of rain fall for month (in inches) 1: 17
Enter the amount of rain fall for month (in inches) 2: 27
Enter the amount of rain fall for month (in inches) 3: 30
Enter the amount of rain fall for month (in inches) 4: 2
Enter the amount of rain fall for month (in inches) 5: 12
Enter the amount of rain fall for month (in inches) 6: 11
Enter the amount of rain fall for month (in inches) 7: 5
Enter the amount of rain fall for month (in inches) 8: 7
Enter the amount of rain fall for month (in inches) 9: 14
Enter the amount of rain fall for month (in inches) 10: 15
Enter the amount of rain fall for month (in inches) 11: 13
Enter the amount of rain fall for month (in inches) 12: 15
The total rainfall for the year is 168.00 inches.
The average rainfall for the year is 14.00 inches.
The highest rainfall for the year is 30.00 inches.
The lowest rainfall for the year is 2.00 inches.
The most amount of rainfall was 30.00 inches at month 3.
The smallest amount of rainfall was 2.00 inches at month 1.
arthur@DESKTOP-UP5LF24:/mnt/c/Users/Arthur/Documents/Github/Cpp_Projects/Data Structures/Lab 5$ make run
*/