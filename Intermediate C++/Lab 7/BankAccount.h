#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    double balance;

public:
    BankAccount();
    BankAccount(string acct, double a);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();
    void display_balance();
    void set_account_balance(string n);
    void get_account_balance();
};
