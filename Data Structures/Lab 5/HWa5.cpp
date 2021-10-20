#include "LinkedList.h"
int main()
{
    LinkedList<double> rainFall;
    // First obtain user input for the number of months of data to be entered.  Use a linked list instead of an array to hold the monthly data.
    cout << "How many months will you enter?" << endl;

    int numMonths;

    do
    {
        cin >> numMonths;
        if (numMonths < 1)
        {
            cout << "Please enter a positive number of months." << endl;
        }
        else
        {
            break;
        }
    } while (numMonths < 1);
    // appendNode
    for (int i = 0; i < numMonths; i++)
    {
        double rainfall;
        cout << "Enter the rainfall for month " << i + 1 << ": ";
        cin >> rainfall;
        rainFall.appendNode(rainfall);
    }
    cout << fixed << setprecision(2); // set precision to 2 decimal places
    // total
    double total = rainFall.getTotal();
    cout << "The total rainfall for the year is " << total << " inches." << endl;
    // average
    double average = rainFall.getAverage();
    cout << "The average rainfall for the year is " << average << " inches." << endl;
    // highest
    double highest = rainFall.getLargest();
    cout << "The highest rainfall for the year is " << highest << " inches." << endl;
    // lowest
    double lowest = rainFall.getSmallest();
    cout << "The lowest rainfall for the year is " << lowest << " inches." << endl;
    // positionOfLargest
    int positionOfLargest = rainFall.getLargestPosition();
    cout << "The position of the highest rainfall is month " << positionOfLargest << "." << endl;
    // positionOfSmallest
    int positionOfSmallest = rainFall.getSmallestPosition();
    cout << "The position of the lowest rainfall is month " << positionOfSmallest << "." << endl;
}