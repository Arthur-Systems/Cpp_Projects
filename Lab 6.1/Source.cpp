#include<iostream>
#include<cmath>
using namespace std;

int patternFunction() {
	for (int row = 0; row <= maxRows; row++) {

		for (int col = 0; col <= row; col++) {
			cout << col;
		}

		cout << endl;

	}

};

int main() {
	bool pattern = false;
	int maxRows = 0;
	
	pattern = patternFunction(maxRows);

	if (pattern) cout << "Fuction Worked";
	return 0;
	//end of main function


};
