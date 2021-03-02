#include<iostream>
using namespace std;

int main() {
	//declare named constant and variables
	const double COMM_RATE = 0.1;
	double sales = 0.0;
	double commission = 0.0;

	//enter input item
	cout << "Sales amount:";
	cin >> sales;

	//calculate and display the commission 

	commission = sales * COMM_RATE;
	cout << "Cmmission: $" << commission << endl;
	return 0;
	//end of main function
}