/* FILE:  mergeSort.cpp
 * CS 124-03 Sorting Example
 * Development Env:  Red Hat 4.4.7-17; g++ 4.4.7
 * Solution File:   mergeSort.cpp                 
 * DESCRIPTION: mergesort() merge sort algorithm Implementation
 *              main() Test driver for mergeSort Implementation
 * Date: 02/08/2021
 */
 
#include <iostream>
using namespace std;

void print( int list[], int size );
void mergesort( int list[], int size );

// Test driver 
int main()
{
    int list[] = { 7, 15, 3, 21, 17, 1, 5 };
    
    cout << "The original array is:\n";
    print( list, 7 );
    cout << endl;
        
    mergesort( list, 7 );
    cout << "The sorted array is:\n";
    print( list, 7 );
    cout << endl;
    return 0;
}

// Display
void print( int list[], int size )
{
    for ( int i = 0; i < size; i++ )
        cout << list[i] << ' ';
    cout << endl;
}

// Merge Sort Implementation 
void mergesort( int list[], int size )
{
    // check for sorted array
    if ( size < 2 )
       return;

    // sort the two sub-arrays
    int middle = (size - 1) / 2;
    int leftSize = middle + 1;
    int rightSize = size - middle - 1;
    mergesort( list, leftSize );
    mergesort( list+middle+1, rightSize );
    
    // merge the two sorted arrays into one array
    
    // first, copy data into temporary left and right sub-arrays
    int left[leftSize];
    int right[rightSize];
    
    for ( int i=0; i<leftSize; i++ )
        left[i] = list[i];
    
    for ( int j=0; j<rightSize; j++ )
        right[j] = list[middle+1+j];
    
    // merge data back into original array in sorted order
    int i = 0;        // index for left sub-array
    int j = 0;      // index for right sub-array
    int k = 0;  // index for original array
    
    while ( i < leftSize && j < rightSize )
    {
        if (left[i] <= right[j])
        {
            list[k] = left[i];
            i++;
        }
        else
        {
            list[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copy any remaining elements from left
    while (i < leftSize)
    {
        list[k] = left[i];
        i++;
        k++;
    }
 
    // Copy any remaining elements from right
    while (j < rightSize)
    {
        list[k] = right[j];
        j++;
        k++;
    }
}
/*
The original array is:
7 15 3 21 17 1 5

The sorted array is:
1 3 5 7 15 17 21
*/