
#ifndef __MONEY_H__
#define __MONEY_H__
class Money
{
public:
    Money();
    Money(int dollars, int cents);
    Money(int dollars);
    Money(double amount);
    ~Money();

    void setDollars(int dollars);
    void setCents(int cents);
    void setAmount(double amount);

    int getDollars();
    int getCents();
    double getAmount();

    void add(Money amount);
    void subtract(Money amount);
    void multiply(double multiplier);
    void divide(double divisor);

    void print();

private:
    int dollars;
    int cents;
};
#endif // __MONEY_H__
