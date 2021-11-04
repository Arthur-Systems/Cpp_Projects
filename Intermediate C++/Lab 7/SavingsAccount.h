/*
Purpose- This class is inherited from the Account class. It is used to create a savings account.
@author Haichuan Wei
@version 1.0 11/3/21
@function SavingsAccount() - the deafult constructor
@function SavingsAccount(string, double, double) - constructor with parameters
@function withdraw(double) - withdraws money from the account
@function setInterestRate(double) - sets the interest rate
@function getInterestRate() - returns the interest rate
@function display_balance() - displays the balance
@function month_end() - calculates the interest

*/
#ifndef _SavingsAccount_h
#define _SavingsAccount_h
#include "BankAccount.h"
class SavingsAccount : public BankAccount
{
private:
    double interest_rate;
    double min_balance;

public:
    SavingsAccount();
    SavingsAccount(string acctNum, double b, double i);
    void withdraw(double amount);
    void set_interest_rate(int rate);
    double get_interest_rate();
    void display_balance();
    void month_end();
};
#endif // _SavingsAccount_h