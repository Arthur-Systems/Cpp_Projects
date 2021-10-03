/*File Description  - This is the test driver of the program. It will take in user defined input and output the results.The user can input how many varable values they want to test.
@author Haichuan Wei @Arthur-Systems
 */
#include "sort.h"
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    cout << "The sorted array is: ";
    void quickSort(int arr[], int left, int right);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*
Haichuans-Air:Lab 3 arthur$ make run
./QuickSort
Enter the number of elements: 10
Enter the elements: 53

654

245

7

24

765

25

97

0

-5

The sorted array is: -5 0 7 24 25 53 97 245 654 765 Haichuans-Air:Lab 3 arthur$ 
*/