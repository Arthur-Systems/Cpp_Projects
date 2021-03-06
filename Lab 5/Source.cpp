/*
Sophia's Pizzeria sells two sizes of pizzas: medium and large. 
A medium pizza is $9.99, and a large pizza is $12.99. 
Periodically, Sophia e-mails customers a $2 coupon on the purches of a large pixxa only.
she wants a program that displays the price of a pizza given the size 
of the pizza orderned and heater or nmot the custromer has $2 courpon
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	const double large = 12.99;
	const double medium = 9.99;
	char coupon = ' ';
	char size = ' ';
	char sizechecked = ' ';
	double totalprice = 0.00;
	cout << "Menu:" << endl << "L Pizza: $12.99" << endl << "M pizza:$9.99" << endl;
	

	while (toupper(sizechecked) != 'L' || toupper(sizechecked) != 'M') {
		cout << "what size Pizza do you want? L or M?";
		cin >> size;
		if (toupper(size) == 'L' || toupper(size) == 'M')
			sizechecked = size;

		
	}
		cout << "Do you have a coupon?";
		cin >> coupon;

		if (toupper(sizechecked) == 'L') {
			totalprice += large;
		}
		if (toupper(sizechecked) == 'M') {
			totalprice += medium;
		}
		if (toupper(coupon) == 'Y') {
			totalprice -= 2.00;
		}
	
		cout << fixed << setprecision(2);
		cout << "The subtotal is $" << totalprice << endl;

		return 0;
}
