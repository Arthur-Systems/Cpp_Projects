#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int carPrice = 0;
int rebate = 0;
double creditRate = 0.0;
double dealerRate = 0.0;
int term = 0;
double creditPayment = 0.0;
double dealerPayment = 0.0;

double getPayment(int, double, int);
void getInfo();

int main()
{
    char stopCode = 'N';

    while (stopCode != 'Y')
    {
        getInfo();
        //dispalay payments
        cout << fixed << setprecision(2) << endl;
        cout << "Credit union payment:$" << creditPayment << endl;
        cout << "Dealer Payment : $" << dealerPayment << endl;
        if (creditPayment > dealerPayment)
            cout << "Don't take the rebate. Finacne though the dealer." << endl;
        else if (dealerPayment > creditPayment)
            cout << "Take the rebate and finace through the credit union" << endl;
        else if (creditPayment = dealerPayment)
            cout << "You can finance through the dealer or the credit union" << endl;
        cout << "Do you want to stop the code?";
        cin >> stopCode;

        if (toupper(stopCode) == 'Y')
        {
            char stopCode = 'Y';
            cout << "Ok! Stopping Code" << endl;
            break;
        }
        else if (toupper(stopCode) == 'N')
        {
            cout << "Ok!" << endl;
            char stopCode = 'N';
        }
    }

    return 0;
}
double getPayment(int prin, double monthRate, int months)
{
    double monthPay = 0.0;
    monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
    return monthPay;
}; /// end of func
void getInfo()
{
    cout << "Car price (after any tade-in):";
    cin >> carPrice;
    cout << "Rebate:";
    cin >> rebate;
    cout << "Credit unit rate:";
    cin >> creditRate;
    if (creditRate > 1)
    {
        creditRate /= 100;
    }
    cout << "Dealer rate:";
    cin >> dealerRate;
    if (dealerRate > 1)
    {
        dealerRate /= 100;
    }
    cout << "Term in years:";
    cin >> term;
    //call function to calculate payments
    creditPayment = getPayment(carPrice - rebate,
                               creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice,
                               dealerRate / 12, term * 12);
};