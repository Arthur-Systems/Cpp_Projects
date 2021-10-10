/*
Purpose- Practice with using templates by writing a function that finds the 
smallest element in an array.
@author Haichuan Wei
@version 1.0 10/5/21
@function main()- the entry point of the program. It holds the test 
cases that calls the template. 
@function template smallest()- Generic programming that finds the 
smallest element of an given array.
@return smallest- the smallest number of the given arrays. 
*/

#ifndef _WeiA4_h_
#define _WeiA4_h_
template <typename T>
T smallest(T array[], int size)
{
    T smallest = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    return smallest;
}

#endif //!_WeiA4_h_
