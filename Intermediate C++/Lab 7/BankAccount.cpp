#include "BankAccount.h"
BankAccount::BankAccount()
{
    balance = 0;
    accountNum = "NA";
}

BankAccount::BankAccount(string acct, double a)
{
    accountNum = acct;
    balance = a;
}
void BankAccount::deposit(double amount)
{
    balance += amount;
}
void BankAccount::withdraw(double amount)
{
    if (amount > balance)
    {
        cout << "Insufficient funds! Trying to remove $" << amount << " But only $" << balance << "available! "
             << "Not removing anything!" << endl;
    }
    else
    {
        balance -= amount;
    }
}

double BankAccount::get_balance()
{
    return balance;
}
void BankAccount::display_balance()
{
    cout << accountNum << "'s balance is $" << balance << endl;
}
void BankAccount::set_account_number(string n)
{
    accountNum = n;
}
string BankAccount::get_account_number()
{
    return accountNum;
}
