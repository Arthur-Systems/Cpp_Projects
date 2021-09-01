#include <iostream>

using namespace std;



void func(int myArray[10]){
    
    for(int x=0;x<10;x++){

        cout << myArray[x];
    }
}
int main()
{
int myArray[10] = {1,1,1,1,1,1,1,1};
 func(myArray[]);
}