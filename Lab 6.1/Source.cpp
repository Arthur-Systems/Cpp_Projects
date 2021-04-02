#include<iostream>
#include<cmath>
using namespace std;

int maxRows = 5;
bool pattern = false;

int main() {
	patternFunction(){
	cout << "how many Rows?";
	cin >> maxRows;
	for (int row = 0; row <= maxRows; row ++) {
		for (int col = 0; col <= row; col ++) {
			cout << col;
			//end for
			//cout << endl;
		} //end for
		cout << endl;
	}
	return 0;
	//end of main function
};



	pattern = patternFunction(maxRows);

	if (pattern) cout << "Fuction Worked";
		return 0;
	//end of main function


}