#include "Bank.h"
#include <iostream>

using namespace std;
//deposit member function will call Account member function deposit
void Bank::deposit(double amount, string account)
{
    if (account == "C")
    {
        checking.deposit(amount);
    }
    if (account == "S")
    {
        savings.deposit(amount);
    }
};

//withdraw member function will call Account member function withdraw
void Bank::withdraw(double amount, string account)
{
    if (account == "C")
    {
        checking.withdraw(amount);
    }
    if (account == "S")
    {
        savings.withdraw(amount);
    }
};

void Bank::transfer(double amount, string account)
{
    if (account == "C")
    {
        checking.withdraw(amount);
        savings.deposit(amount);
    }
    if (account == "S")
    {
        savings.withdraw(amount);
        checking.deposit(amount);
    }
};
void Bank::printBalances() const
{
    cout << "Checking Balance: " << checking.getBalance() << endl;
    cout << "Savings Balance: " << savings.getBalance() << endl;
};
