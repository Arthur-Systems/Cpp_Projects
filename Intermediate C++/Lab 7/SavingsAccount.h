#include "BankAccount.h"
class SavingsAccount : public BankAccount
{
private:
    double interest_rate;
    double min_balance;

public:
    SavingsAccount();
    SavingsAccount(string acctNum, double b);
    withdraw(double amount);
    set_interest_rate(rate);
    void get_interest_rate();
    double display_balance();
    void month_end();
};