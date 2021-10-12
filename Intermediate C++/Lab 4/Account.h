/*
Purpose- The account class is used to calculate the balance of the user provided numbers and return the balance result.
@author Haichuan Wei
@version 1.0 10/10/21
@class function Account(): This is the deafult constructor of the class Account.
@class function deposit(double): This function is used to add the numbers to the balance varable. 
@class function withdraw(double): This function is used to subtract the user defined number from the balance varable.
@class function getBalance(): This function is used to return the balance varable.
@param amount - the amount of money to be added or removed from the account.
@return-balance
*/

#ifndef _Account_h_
#define _Account_h_
using namespace std;
#include <string>
const double PENALTY = 5.0;

class Account
{
public:
    Account();
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    // void penalty(double amount) const;

private:
    double balance;
};
#endif //!_Account_h_