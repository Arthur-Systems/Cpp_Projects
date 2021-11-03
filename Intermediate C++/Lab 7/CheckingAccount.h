#include "BankAccount.h"
class CheckingAccount : public BankAccount
{
private:
    int transaction;
    check_for_fee();

public:
    CheckingAccount();
    CheckingAccount(string acctNum, double b);
    void withdraw(double amount);
    void deposit(double amount);
    void month_end();
}