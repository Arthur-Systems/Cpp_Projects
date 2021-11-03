#include "SavingsAccount.h"
SavingsAccount()
{
    interest_rate = 0;
    min_balance = 0;
}
SavingsAccount(string acctNum, double b)
{
    accountNum = acctNum;
    balance = b;
    interest_rate = i;
    min_balance = b;
}

withdraw(double amounts)
{
    BankAccount::withdraw(amounts);
    check_for_fee();
}

void set_interest_rate()
{
}
get_interest_rate()
{
    return interest_rate;
}
double display_balance()
{
}
void month_end()
{

    BankAccount::deposit(interest_rate * balance);
    min_balance = balance;
}
