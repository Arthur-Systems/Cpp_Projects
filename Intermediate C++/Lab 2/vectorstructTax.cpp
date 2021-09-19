#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include "printMeFirst.h"

using namespace std;

struct taxPayer
{
    float taxRate;
    float income;
    float taxes;
};

int main()
{
    taxPayer taxPayerList[3];
    printMeFirst("Haichuan Wei", "CS-124 Vector");
    cout << fixed << showpoint << setprecision(2);

    cout << "Please enter the annual income and tax rate for 3 tax payers: " << endl;
    cout << endl
         << endl;

    for (int count = 0; count < 3; count++)
    {
        cout << "Enter this year's income for tax payer " << (count + 1) << ": ";
        cin >> taxPayerList[count].income;

        cout << "Enter the tax rate for tax payer # " << (count + 1) << ": ";
        cin >> taxPayerList[count].taxRate;

        cout << endl;

        taxPayerList[count].taxes = taxPayerList[count].income * taxPayerList[count].taxRate / 100;
    }

    cout << "Taxes due for this year: " << endl
         << endl;

    for (int index = 0; index < 5; index++)
    {
        cout << "Tax Payer # " << (index + 1) << ": "
             << "$ "
             << taxPayerList[index].taxes << endl;
    }

    return 0;
}
