#include "DynStk.h"
int main(){
//ask user how many elements they want in the stack
int num;
cout << "How many elements do you want in the stack? ";
cin >> num;
DynStk<double> stack(num);
// ask user for the elements
double element;
for(int i = 0; i < num; i++){
cout << "Enter element " << i+1 << ": ";
cin >> element;
stack.push(element);
}
// print the elements
cout << "The elements in the stack are: ";
for(int i = 0; i < num; i++){
cout << stack.top() << " ";
stack.pop();
}
cout << endl;
return 0;
}
