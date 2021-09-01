#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void printDisplay();
void display(int yearly[12][2],string mounth[12]);
int y= 1 , x = 0, z = 0;
int main(){

ofstream outFile;
outFile.open("Year.txt" , ios::out);
    int yearly[12][2] = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
    string mounth[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};


if (outFile.is_open()){
    display(yearly , mounth);
}
}

void display(int yearly[12][2], string mounth[12]){
  
    for (; x < 12; x++)
    {
       cout << mounth[x] << ":" <<endl;

        for (; y <= yearly[z][1]; y++)
        {
            cout  << setw(12) << y;

            if (y %7 == 0){
                cout <<endl;
            }            
        }
        if (z <= 12) z++;
        cout <<endl;
        y=1;
    }

}


