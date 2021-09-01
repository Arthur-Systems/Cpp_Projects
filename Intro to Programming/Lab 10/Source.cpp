#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void out(int yearly[12][2], string mounth[12]);
int y = 1, x = 0, z = 0;
ofstream outFile;
int main()
{

    int yearly[12][2] = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
    string mounth[12] = {"Jan", "Feb", "Mar",
                         "Apr", "May", "Jun",
                         "Jul", "Aug", "Sep",
                         "Oct", "Nov", "Dec"};

    outFile.open("Year.txt", ios::out);

    if (outFile.is_open())
    {
        out(yearly, mounth);
    }

    cout << "Done! Saved To Text File!" << endl;
    outFile.close();
}
void out(int yearly[12][2], string mounth[12])
{
    for (; x < 12; x++)
    {
        outFile << mounth[x] << ":" << endl;
        cout << mounth[x] << ":" << endl;

        for (; y <= yearly[z][1]; y++)
        {
            outFile << setw(12) << y;
            cout << setw(12) << y;

            if (y % 7 == 0)
            {
                outFile << endl;
                cout << endl;
            }
        }
        if (z <= 12)
            z++;
        outFile << endl;
        cout << endl;
        y = 1;
    }
}
