#include "DynStk.h"
int main(){
int num;
cout << "How many elements do you want in the stack? ";
cin >> num;
DynStk<double> stack(num);  
double element;
for(int i = 0; i < num; i++){
cout << "Push element " << i+1 << ": ";
cin >> element;
stack.push(element);
}
// print the elements
cout << "The Popped elements in the stack are: ";
for(int i = 0; i < num ; i++){
cout << endl<< stack.top() << " ";
stack.pop();
}
cout << endl;
return 0;
}
/*
Haichuans-MacBook-Air:Lab 6 arthur$ make run
./data
data(14852,0x1118cc600) malloc: nano zone abandoned due to inability to preallocate reserved vm space.
How many elements do you want in the stack? 10
Push element 1: 32.43
Push element 2: 1.24
Push element 3: 3.21 
Push element 4: 4.53
Push element 5: 54.32
Push element 6: 65.43
Push element 7: 1.23 
Push element 8: 6.54
Push element 9: 7.54
Push element 10: 8.65
The Popped elements in the stack are: 
8.65 
7.54 
6.54 
1.23 
65.43 
54.32 
4.53 
3.21 
1.24 
32.43 
Attempting to POP again... The stack is empty.

Haichuans-MacBook-Air:Lab 6 arthur$ 
*/
