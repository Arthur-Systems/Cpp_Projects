/*
Purpose- 
@author Haichuan Wei
@version 1.0 10/10/21
@param 
@return-none
*/
#ifndef _Account_h_
#define _Account_h_
#include "Bank.h"
#include <string>
class Account
{

public:
    Account();
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    void penalty(double amount);

private:
    double balance;
};
#endif //!_Account_h_