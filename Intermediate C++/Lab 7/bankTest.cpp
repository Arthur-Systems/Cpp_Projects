#include <iostream>
#include <string>
using namespace std;

/*
 * You need to use this test program for this lab
 * 
 * You need to create SavingsAccount.h, CheckingAccout.h and 
 * BankAccount.h files.  The c++ codes for these header files
 * are stored in a separate cpp file.
 */
 
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "BankAccount.h"
#include <vector>
#include <iomanip>
#include "printMeFirst.h"

int main ()
{
	printMeFirst("Haichuan Wei", "CS-116 - Bank Inheritance Lab");
    double amount;

    // Create accounts

    vector < BankAccount > myAccount;
    BankAccount acct1;
    BankAccount acct2 ("S1002", 3000);
    CheckingAccount myChecking;
    SavingsAccount mySaving ("S1001", 2500, 1.25);

    cout << fixed << setprecision (2);
    mySaving.set_account_number ("S1001");
    mySaving.display_balance ();
    acct1.set_account_number ("S1000");
    acct2.set_account_number ("S1002");
    acct1.deposit (2000);
    myAccount.push_back (acct1);
    myAccount.push_back (acct2);
    for (unsigned int n = 0; n < myAccount.size (); n++)
    {
        myAccount[n].display_balance ();
    }

    // withdraw from account acctNum
    string acctNum = "S1002";
    double withdrawAmt = 200;
    for (unsigned int n = 0; n < myAccount.size (); n++)
    {
        if (myAccount[n].get_account_number () == acctNum)
        {
            cout << "Withdraw $" << withdrawAmt
                 <<" from account " << acctNum << endl;
            myAccount[n].withdraw (withdrawAmt);
            myAccount[n].display_balance ();
        }
    }

    myChecking.set_account_number ("C1001");
    amount = 4500;
    cout << "Account: " << myChecking.get_account_number ()
         <<": Deposit " << amount << endl;
    myChecking.deposit (amount);
    myChecking.display_balance ();

    amount = 150;
    cout << "Account: " << myChecking.get_account_number ()
         <<": Deposit " << amount << endl;
    myChecking.deposit (amount);
    myChecking.display_balance ();

    amount = 100;
    cout << "Account: " << myChecking.get_account_number ()
         <<": Withdraw " << amount << endl;
    myChecking.withdraw (amount);
    myChecking.display_balance ();

    amount = 550;
    cout << "Account: " << myChecking.get_account_number ()
         <<": Withdraw " << amount << endl;

    myChecking.withdraw (amount);
    myChecking.display_balance ();

    cout << "\nSaving account month end\n";
    mySaving.display_balance ();
    mySaving.month_end ();
    mySaving.display_balance ();

    amount = 4000;
    cout << "Account: " << mySaving.get_account_number ()
         <<": Withdraw " << amount << endl;
    mySaving.withdraw (amount);
    mySaving.display_balance ();

    return 0;
}
