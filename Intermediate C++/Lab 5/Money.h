/*
Purpose- This program uses overloaded operators to calculate numbers set by the users. The Operators + - * / % == << were all defied to do their own things.
@author Haichuan Wei
@version 1.0 9/2/21
@param dollars - the amount of dollars
@param cents - the amount of cents
@param i , d - user defined numbers
@function class Money - constructor
@function class Money(int dollars, int cents) - constructor
@function class getDollars() - returns the amount of dollars
@function class getCents() - returns the amount of cents
@operator + - * / % == << - overloaded operators
@return- Money
*/
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
