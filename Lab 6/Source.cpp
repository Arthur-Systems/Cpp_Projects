#include<iostream>

using namespace std;

int main() {
	int maxRows = 0;
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
}
