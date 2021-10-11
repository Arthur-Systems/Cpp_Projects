/*
Purpose- The purpose of this headder file is to create and define a class called Employee. And then Define the functions that will be used in the program.
@author Haichuan Wei
@version 1.0 9/26/21
@param Employee class - defines the structure.
@param displayEmployee - defines the function that displays the employee information.
@return-none
*/
#ifndef _Bank_h_
#define _Bank_h_

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
    double checking; //   change ????? with correct data type for variable checking
    double savings;  // use correct data type for variable savings
};

#endif //!_Bank_h_