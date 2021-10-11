/*
Purpose- This is the header file for the Bank class. It's purpose is to call the account class to calculate the balance of the account then prints the balance.
@author Haichuan Wei
@version 1.0 10/10/21
@class function Bank() - the deafult constructor.
@class function Bank(double , double) - the constructor with paramenters of checkingAmount and savingsAmount.
@class function deposit(double, string) - this function will take in the amount and account type specified by the user and call the Account class deposit function witch will add the amount to the total balance.
@class function withdraw(double, string) - this function will take in the amount and account type specified by the user and call the Account class withdraw function witch will subtract the amount from the total balance.
@class transaction(double, string) - this function will take in the amount and account type specified by the user and then it add money to oppsite account specified by the user and remove it from the current account.
@class function printBalances() - this function will print the total balance of each account everytime it is called. 
@return-none
*/

#ifndef _Bank_h_
#define _Bank_h_
using namespace std;
#include <string>
#include "Account.h"
class Bank
{
public:
    Bank();
    Bank(double checkingAmount, double savingsAmount);
    //deposit member function will call Account member function deposit
    void deposit(double amount, string account);
    void withdraw(double amount, string account);
    void transfer(double amount, string account);
    void printBalances() const;

private:
    Account checking; //   change ????? with correct data type for variable checking
    Account savings;  // use correct data type for variable savings
};

#endif //!_Bank_h_