/*
Purpose- this class is inherited from the bankaccount class. It is used to create a checking account.
@author Haichuan Wei
@version 1.0 11/3/21
@data_member transaction - the number of transactions
@data_member check_for_fee() - the fee for each transaction
@function CheckingAccount()- the default constructor
@function CheckingAccount(string, double) - the constructor with two parameters
@function withdraw(double) - withdraw money from the account
@function deposit(double) -  deposits money into the account
@function month_end() - rests the transaction to 0
*/
#ifndef _CheckingAccount_h
#define _CheckingAccount_h
#include "BankAccount.h"
class CheckingAccount : public BankAccount
{
private:
    int transaction;
    void check_for_fee();

public:
    CheckingAccount();
    CheckingAccount(string acctNum, double b);
    void withdraw(double amount);
    void deposit(double amount);
    void month_end();
};
#endif // _CheckingAccount_h