#include <iostream>
using namespace std;

void printDisplay();

int x = 0;
int y = 0;
int z = 0;

void display(int yearly[12][2],string mounth[12]);

int main()
{
    int yearly[12][2] = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
    string mounth[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    display(yearly , mounth);
}

void display(int yearly[12][2], string mounth[12])
{
    cout << "The last day of each month" <<endl;
    for (; x < 12; x++)
    {
       cout << mounth[x] << ":";

        for (; y < 2; y+2)
        {
            cout  << yearly[x][y] << " ";

            for (;z < yearly[][y]; )
            
        }
        cout <<endl;
        y=0;
    }
}

