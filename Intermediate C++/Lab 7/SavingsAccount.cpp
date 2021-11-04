#include "SavingsAccount.h"
SavingsAccount::SavingsAccount()
{
    interest_rate = 0;
    min_balance = 0;
}
SavingsAccount::SavingsAccount(string acctNum, double b, double i)
{
    BankAccount(acctNum, b);
    interest_rate = i;
    min_balance = b;
}

void SavingsAccount::withdraw(double amounts)
{
    BankAccount::withdraw(amounts);
    if (BankAccount::get_balance() < min_balance)
    {
        min_balance = BankAccount::get_balance();
    }
}

void SavingsAccount::set_interest_rate(int rate)
{
    rate = interest_rate;
}
double SavingsAccount::get_interest_rate()
{
    return interest_rate;
}
void SavingsAccount::display_balance()
{
    cout << "Account:" << BankAccount::get_account_number() << "'s interest rate is " << interest_rate << endl;
    cout << BankAccount::get_account_number() << "'s Balance is $" << min_balance << endl;
}
void SavingsAccount::month_end()
{
    BankAccount::deposit(min_balance);
    double interest = min_balance * interest_rate / 100;
    BankAccount::deposit(interest);
    min_balance = BankAccount::get_balance();
}
