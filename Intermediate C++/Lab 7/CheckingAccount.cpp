#include "CheckingAccount.h"
void CheckingAccount::check_for_fee()
{
    transaction++;
    const int FREE_TRANSACTIONS = 3;
    const int TRANSACTION_FEE = 1;

    if (transaction > FREE_TRANSACTIONS)
    {
        cout << "Number of Transactions: " << transaction << " is over free number of transactions of: " << FREE_TRANSACTIONS << endl;
        cout << "Deduct $" << TRANSACTION_FEE << " From account \n";
        BankAccount::withdraw(TRANSACTION_FEE);
        transaction = 0;
        cout << "Number of Transactions:" << transaction << endl;
    }
    else
    {
        cout << "Number of Transactions:" << transaction << endl;
    }
}
CheckingAccount::CheckingAccount()
{
    transaction = 0;
}
CheckingAccount::CheckingAccount(string acctNum, double b)
{
    BankAccount(acctNum, b);
}
void CheckingAccount::withdraw(double amount)
{
    cout << "Checking Account Balance:" << endl
         << endl;

    BankAccount::withdraw(amount);

    check_for_fee();
}
void CheckingAccount::deposit(double amount)
{
    cout << "Checking Account Balance:" << endl
         << endl;
    BankAccount::deposit(amount);

    check_for_fee();
}
void CheckingAccount::month_end()
{
    transaction = 0;
}