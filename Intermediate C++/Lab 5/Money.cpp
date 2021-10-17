#include <iostream>
#include "Money.h"

using namespace std;

Money::Money(int dollars, int cents)
{
    this->dollars = dollars;
    this->cents = cents;
}

Money::Money()
{
    this->dollars = 0;
    this->cents = 0;
}

void Money::add(Money m)
{
    this->cents += m.cents;
    this->dollars += m.dollars;
    if (this->cents >= 100)
    {
        this->dollars += this->cents / 100;
        this->cents = this->cents % 100;
    }
}
void Money::subtract(Money m)
{
    this->cents -= m.cents;
    this->dollars -= m.dollars;
    if (this->cents < 0)
    {
        this->dollars -= this->cents / 100 - 1;
        this->cents = this->cents % 100 + 100;
    }
}

// Money::{
//     Money temp;
//     temp.dollars = m1.dollars - m2.dollars;
//     temp.cents = m1.cents - m2.cents;
//     if (temp.cents < 0)
//     {
//         temp.cents = temp.cents + 100;
//         temp.dollars = temp.dollars - 1;
//     }
//     return temp;
// }