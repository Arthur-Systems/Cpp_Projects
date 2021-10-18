
#ifndef __MONEY_H__
#define __MONEY_H__
using namespace std;
#include <iostream>

class Money
{
public:
    Money();
    Money(int dollars, int cents);
    int getDollars();
    int getCents();

private:
    int dollars;
    int cents;
};

Money operator%(int i, Money m);
Money operator*(int i, Money m);
Money operator*(Money m, double d);
Money operator+(Money m1, Money m2);
Money operator-(Money &m1, Money &m2);
Money operator/(Money m, double i);

bool operator==(Money m1, Money m2);
ostream &operator<<(std::ostream &os, Money money);

#endif // __MONEY_H__
