#include<iostream>

using namespace std;

int main() {
	int maxRows = 0;
	cout << "how many Rows?";
	cin >> maxRows;
	maxRows -= 1;
	for (int row = 0; row <= maxRows; row ++) {
		for (int col = 0; col <= row; col ++) {
			int num = col + 1;
			cout << num;

			//end for
			//cout << endl;
		} //end for
		cout << endl;
	}
	return 0;
	//end of main function
}
