#include<iostream>
#include<cmath>
using namespace std;

int patternFunction(int maxRows) {
	if (maxRows < 0) {
		cout << "Wrong max row number: " << maxRows << endl;
		return false;
	}
	for (int row = 0; row <= maxRows; row++) {
		for (int col = 0; col <= row; col++) {
			int num = col+1;
			cout << num;
		}
		cout << endl;

	}
	return true;
};

int main() {
	bool pattern = false;
	int maxRows ;
	cout << "How many Rows?";
	cin >> maxRows;
	maxRows -= 1;
	pattern = patternFunction(maxRows);
	if (pattern) cout << "Fuction Worked";
	return 0;
	//end of main function


};
