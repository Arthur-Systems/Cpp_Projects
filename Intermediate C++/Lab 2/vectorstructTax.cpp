//
// Purpose- use C++ vector in order to store and calculate tax based on data supplied by the user.
// @author Haichuan Wei
// @version 1.0 9/19/21
// @param  main()- is the entry point of the program and is where the storing and calculation of data is done.
// @return- 0 and print out the total tax for each person given by the user.
//
#include <iostream>
#include <vector>
#include <iomanip>
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
    vector<taxPayer *> taxPayerList;
    printMeFirst("Haichuan Wei ", "CS-116 Vector");
    cout << fixed << showpoint << setprecision(2);
    cout << "Please enter the annual income and tax rate for 3 tax payers: " << endl;
    cout << endl
         << endl;
    //asks the user to enter income and tax rate for 3 tax payers:
    for (int count = 0; count < 3; count++)
    {
        // create a new pointer to a taxPayer struct
        taxPayer *newTaxPayerList = new taxPayer;
        cout << "Tax payer " << count + 1 << ": " << endl;
        cout << "Enter this year's income for tax payer " << (count + 1) << ": ";
        cin >> newTaxPayerList->income;
        cout << "Enter the tax rate for tax payer # " << (count + 1) << ": ";
        cin >> newTaxPayerList->taxRate;
        newTaxPayerList->taxes = newTaxPayerList->income * newTaxPayerList->taxRate / 100;
        taxPayerList.push_back(newTaxPayerList);
    }
    //displays everything
    cout << "\tTaxes due for this year: " << endl
         << endl;
    for (int index = 0; index < 3; index++)
    {
        cout << "Tax payer " << index + 1 << ": " << endl;
        cout << "\tIncome: $" << taxPayerList[index]->income << endl;
        cout << "\tTax rate: " << taxPayerList[index]->taxRate << "%" << endl;
        cout << "\tTaxes due: $" << taxPayerList[index]->taxes << endl;
    };
    return 0;
}