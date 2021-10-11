#include <iostream>
#include "Account.h"

void Account::deposit(double amount)
{
    balance += amount;
}
void Account::withdraw(double amount)
{

    if (balance > amount)
    {
        balance -= amount;
    }
    else if (balance < amount)
    {
        cout << "Only " << balance << "$ available. But trying to withdraw " << amount << "$ removing 5$" << endl;
        balance -= PENALTY;
    }
}
double Account::getBalance() const
{
    return balance;
}
Account::Account()
{
    balance = 0;
}