#include<iostream>
using namespace std;

//lab4-2.cpp- dispays a salesperson's commission
//created/revised by Haihcuan Wei on 3/2/21

int main() {
	//declare named variables
	double COMM_RATE = 0.1;
	double sales = 0.0;
	double commission = 0.0;

	//enter input item
	cout << "Sales amount:";
	cin >> sales;

	//enter commission rate
	cout << "Commission rate:";
	cin >> COMM_RATE;

	//calculate and display the commission 

	commission = sales * COMM_RATE;
	cout << "Commission: $" << commission << endl;
	return 0;
	//end of main function
}