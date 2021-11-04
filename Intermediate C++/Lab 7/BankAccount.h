/*
Purpose- This the main file holding the bankaccount class. This has all the basic functions for the bank account.
@author Haichuan Wei
@version 1.0 11/3/21
@function BankAccount()- This is the deafult constructor for the bank account.
@function BankAccount(string acct, double a)- This is the constructor for the bank account.
deposit (double amount) which will set the balance to amount plus existing balance
@function withdraw (double amount) which will set the balance to existing balance minus the  amount.
@function get_balance()-  will return the current balance
@function display_balance() will print out the current account balance
@function set_account_number(string) will set the accountNum to n
@function get_account_number () will return the current accountNum
@data member accountNum- This is the account number of the bank account
@data member balance- This is the balance of the bank account

*/
#ifndef _BankAccount_h
#define _BankAccount_h
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    double balance;
    string accountNum;

public:
    BankAccount();
    BankAccount(string acct, double a);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();
    void display_balance();
    void set_account_number(string n);
    string get_account_number();
};
#endif // _BankAccount_h
