#include "Bank.h"
#include "Account.h"
#include <iostream>
#include <string>

using namespace std;
Account accounts;
//deposit member function will call Account member function deposit
void Bank::deposit(double amount, string account)
{
}

//withdraw member function will call Account member function withdraw
void Bank::withdraw(double amount, string account)
{
    accounts.withdraw(amount);
}

void Bank::printBalances() const
{
    cout << "Savings Account balance $" << savings << endl;
    cout << "Checking Account balance $" << checking << endl;
}
