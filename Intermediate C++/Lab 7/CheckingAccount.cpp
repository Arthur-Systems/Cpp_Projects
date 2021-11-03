#include "CheckingAccount.h"

check_for_fee()
{
    transaction++;
    const int FREE_TRANSACTIONS = 3;
    const int TRANSACTION_FEE = 1;
    if (transaction > FREE_TRANSACTIONS)
    {
        withdraw(TRANSACTION_FEE);
        cout << "Number of Transactions:" << transaction << "is over free number of transactions of:" << FREE_TRANSACTIONS << endl;
        cout << "Deduct $" << TRANSACTION_FEE << "From account \n"
             << endl;
        transaction = 0;
    }
}
CheckingAccount()
{
    transaction = 0;
}
CheckingAccount(string acctNum, double b)
{
    accountNumber = acctNum;
    balance = b;
}
void withdraw(double amount)
{
    BankAccount::withdraw(amount);
    check_for_fee();
}
deposit(double amount)
{
    BankAccount::deposit(amount);
    check_for_fee();
}
void month_end()
{
    transaction = 0;
}