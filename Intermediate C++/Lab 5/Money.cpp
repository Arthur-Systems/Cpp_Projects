#include <iostream>
#include "Money.h"
#include <iomanip>

using namespace std;
Money::Money()
{
    dollars = 0;
    cents = 0;
}
Money::Money(int dollars, int cents)
{
    this->dollars = dollars;
    this->cents = cents;
}
int Money::getDollars()
{

    return dollars;
}

int Money::getCents()
{

    return cents;
}

// The class object should also have overloaded operators

Money operator+(Money m1, Money m2)
{
    int totalCents = m1.getCents() + m2.getCents();
    int totalDollars = m1.getDollars() + m2.getDollars();
    if (totalCents >= 100)
    {
        totalDollars += totalCents / 100;
        totalCents = totalCents % 100;
    }
    return Money(totalDollars, totalCents);
}
Money operator-(Money &m1, Money &m2)
{
    int totalCents = m1.getCents() - m2.getCents();
    int totalDollars = m1.getDollars() - m2.getDollars();
    if (totalCents < 0)
    {
        totalDollars -= totalCents / 100;
        totalCents = totalCents % 100;
    }
    return Money(totalDollars, totalCents);
}

// operand types are: int * Money
Money operator*(int i, Money m)
{
    int totalCents = m.getCents() * i;
    int totalDollars = m.getDollars() * i;
    if (totalCents >= 100)
    {
        totalDollars += totalCents / 100;
        totalCents = totalCents % 100;
    }
    return Money(totalDollars, totalCents);
}

//operand types are: Money * double
Money operator*(Money m, double d)
{
    int totalCents = m.getCents() * d;
    int totalDollars = m.getDollars() * d;
    if (totalCents >= 100)
    {
        totalDollars += totalCents / 100;
        totalCents = totalCents % 100;
    }
    return Money(totalDollars, totalCents);
}

Money operator/(Money m1, double d)
{
    int totalCents = m1.getCents() / d;
    int totalDollars = m1.getDollars() / d;
    if (totalCents >= 100)
    {
        totalDollars += totalCents / 100;
        totalCents = totalCents % 100;
    }
    return Money(totalDollars, totalCents);
}

// get the % of m1
Money operator%(int m1, Money m2)
{
    int totalCents = m1 * m2.getCents() / 100;
    int totalDollars = m1 * m2.getDollars() / 100;
    if (totalCents >= 100)
    {
        totalDollars += totalCents / 100;
        totalCents = totalCents % 100;
    }
    return Money(totalDollars, totalCents);
}

// operand types are: Money == Money
bool operator==(Money m1, Money m2)
{
    return (m1.getDollars() == m2.getDollars() && m1.getCents() == m2.getCents());
}

std::ostream &operator<<(std::ostream &os, Money money)
{

       if (money.getCents() < 10)
    {
        os << fixed << setprecision(3) << "$" << money.getDollars() << ".0" << money.getCents();
    }
    else
    {
        os << fixed << setprecision(3) << "$" << money.getDollars() << "." << money.getCents();
    }

    return os;
}
