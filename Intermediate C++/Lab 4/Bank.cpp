#include <iostream>
#include "Bank.h"
#include <iomanip>
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
}
Bank::Bank()
{
}
Bank::Bank(double checkingAmount, double savingsAmount)
{
    checking.deposit(checkingAmount);
    savings.deposit(savingsAmount);
}
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
}
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
}
void Bank::printBalances() const
{
    cout << fixed << setprecision(2);
    cout << "Savings Balance: " << savings.getBalance() << endl;
    cout << "Checking Balance: " << checking.getBalance() << endl;
}
