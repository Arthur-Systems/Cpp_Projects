#include <iostream>
#include "Money.h"

using namespace std;

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
Money operator-(Money m1, Money m2)
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

Money operator/(Money m1, Money m2)
{
    int totalCents = m1.getCents() / m2.getCents();
    int totalDollars = m1.getDollars() / m2.getDollars();
    if (totalCents >= 100)
    {
        totalDollars += totalCents / 100;
        totalCents = totalCents % 100;
    }
    return Money(totalDollars, totalCents);
}

// get remainder  operand types are: int % Money
Money operator%(int m1, Money m2)
{
    int totalCents = m1 % m2.getCents();
    int totalDollars = m1 / m2.getCents();
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
// operand types are: std::ostream << Money
std::ostream &operator<<(std::ostream &os, Money m)
{
    os << m.getDollars() << " dollars and " << m.getCents() << " cents";
    return os;
}
// operand types are: std::basic_ostream<char, std::char_traits<char>> << Money
std::basic_ostream<char, std::char_traits<char>> &operator<<(std::basic_ostream<char, std::char_traits<char>> &os, Money m)
{
    os << m.getDollars() << " dollars and " << m.getCents() << " cents";
    return os;
}