#include <iostream>

#include "Account.h"
using namespace std;

void Account::deposit(double amount)
{
    balance += amount;
}
void Account::withdraw(double amount)
{
    balance -= amount;
}
double Account::getBalance() const
{
    return balance;
}

// Charge a $5 penalty if an attempt is made to withdraw more money than what is available in the account

void Account::penalty(double amount)
{

    if (amount <= balance)
    {
        balance -= amount;
    }
    else
    {
        cout << "Too little funds! Removing 5$ lol";
        balance -= 5;
    }
}