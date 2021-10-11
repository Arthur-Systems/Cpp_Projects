/*
The program will generate a version for each data type.
Meaing, This program generates 3 versions on run time. 
Each Data type will generate a different version of the program. 
If the two int data types are called together 
then the template does not need to regenerate the program. 
It is only when another data type is called the code must regenerate. 
If I were to stagger the calls then there will be 6 generations. 


*/

#include <iostream>
#include "HWa4.h"
using namespace std;
int main()
{
    char MainCharacter[2] = {'x', 'A'};
    char TestCharacter[4] = {'Z', 'f'};
    int MainInteger[2] = {149, 182};
    int TestInteger[2] = {999, 356};
    double MainDecimal[2] = {11.3, 56.7};
    double TestDecimal[2] = {43.4, 53.7};

    cout << "The smaller value of " << MainCharacter[0] << " and "
         << MainCharacter[1] << " is " << smallest(MainCharacter, 2) << endl;
    cout << "the smaller value of " << TestCharacter[0] << " and "
         << TestCharacter[1] << " is " << smallest(TestCharacter, 2) << endl;
    cout << "The smaller value of " << MainInteger[0] << " and "
         << MainInteger[1] << " is " << smallest(MainInteger, 2) << endl;
    cout << "the smaller value of " << TestInteger[0] << " and "
         << TestInteger[1] << " is " << smallest(TestInteger, 2) << endl;
    cout << "The smaller value of " << MainDecimal[0] << " and "
         << MainDecimal[1] << " is " << smallest(MainDecimal, 2) << endl;
    cout << "the smaller value of " << TestDecimal[0] << " and "
         << TestDecimal[1] << " is " << smallest(TestDecimal, 2) << endl;
}
/*
Haichuans-Air:Lab 4 arthur$ make all
g++ -fsanitize=address -o main HWa4.cpp 
Haichuans-Air:Lab 4 arthur$ make run
./main
The smaller value of x and A is A
the smaller value of Z and f is Z
The smaller value of 149 and 182 is 149
the smaller value of 999 and 356 is 356
The smaller value of 11.3 and 56.7 is 11.3
the smaller value of43.4 and 53.7 is 43.4
Haichuans-Air:Lab 4 arthur$ 
*/