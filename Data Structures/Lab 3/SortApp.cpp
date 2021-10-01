/*File Description- This file contains the sorting functions for the application. It takes the passed vaules from the test driver and sorts them. 
@author Haichuan Wei @Arthur-Systems
 */
#include "sort.h"
#include <iostream>
using namespace std;
//quick sort algorithm
void quickSort(int arr[], int left, int right)
{
    //i and j are the left and right index which will be used to posision the pivot.
    int i = left, j = right;
    int tmp;
    // pivot is the middle element of the array. (left + right) / 2 is the middle index.
    int pivot = arr[(left + right) / 2];
    //if the left is less than or equal to the right, then the loop will continue.
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            //swap the elements at the i and j index.
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    //if the left index is less than the right index, then the left index will be used to sort the array.
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}
