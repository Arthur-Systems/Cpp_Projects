#include <iostream> 

using namespace std;

int totalitems;
float totalprice;
int main(){

    int doughnuts , muffins;
    cout << "How many doughnuts?";
    cin >> doughnuts;
    cout << "How many muffins?";
    cin >> muffins;
    totalitems = muffins + doughnuts;
    cout << "The total amount of Muffins and Doughnuts is " << totalitems << endl;
    totalprice = totalitems * 0.5;
    printf("Subtotal $%.2f\n", totalprice);

return 0;
}