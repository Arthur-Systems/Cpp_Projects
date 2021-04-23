#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getPayment(int, double, int);

int main()
{
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;
    cout << "Car price (after any tade-in):";
    cin >> carPrice;
    cout << "Rebate:";
    cin >> rebate;
    cout << "Credit unit rate:";
    cin >> creditRate;
    cout << "Dealer rate:";
    cin >> dealerRate;
    cout << "Term in years:";
    cin >> term;

    //call function to calculate payments
    creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);
    //dispalay payments
    cout << fixed << setprecision(2) << endl;
    cout << "Credit union payment:$" << creditPayment << endl;
    cout << "Dealer Payment : $" << dealerPayment << endl;
    return 0;
} //end of main func

//func def
double getPayment(int prin, double monthRate, int months)
{
    double monthPay = 0.0;
    monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
    return monthPay;
} /// end of func
