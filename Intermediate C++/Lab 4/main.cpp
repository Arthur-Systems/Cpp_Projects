#include <iostream>
#include "printMeFirst.h"
using namespace std;
int main()
{
    printMeFirst("Ron Sha", "CS-116 - 2021 Spring");
    Bank my_bank;
    cout << "\nInital bank balances: \n";
    my_bank.print_balances(); /* set up empty accounts */
    cout << "\nAdding some money to accounts: \n";
    cout << "\nAdding $1000 to saving \n";
    cout << "Adding $2000 to checking \n";
    my_bank.deposit(1000, "S"); /* deposit $1000 to savings */
    my_bank.deposit(2000, "C"); /* deposit $2000 to checking */
    my_bank.print_balances();
    cout << "\nTaking out $1500 from checking,and moving $200 from";
    cout << " savings to checking.\n";
    my_bank.withdraw(1500, "C"); /* withdraw $1500 from checking */
    my_bank.transfer(200, "S");  /* transfer $200 from savings */
    my_bank.print_balances();
    cout << "\ntrying to withdraw $900 from Savings.\n";
    my_bank.withdraw(900, "S");
    my_bank.print_balances();
    cout << "\ntrying to withdraw $400 from Checking.\n";
    my_bank.withdraw(400, "C");
    my_bank.print_balances();
    return 0;
}
