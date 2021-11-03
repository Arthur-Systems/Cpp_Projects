#include "BankAccount.h"
BankAccount()
{
    balance = 0;
    accountNum = "NA";
};

BankAccount(string acct, double a)
{
    accoutNum = acct;
    balance = a;
};
void deposit(double amount)
{
    balance += amount;
};

void withdraw(double amount)
{
    if (amount > balance)
    {
        cout << "Insufficient funds" << endl;
    }
    else
    {
        balance -= amount;
    }
};
double get_balance()
{
    return balance;
};
void display_balance()
{
    cout << "The balance is " << balance << endl;
};
void set_account_balance(string n)
{
    accountNum = n;
};
void get_account_balance()
{
    return accountNum;
};
