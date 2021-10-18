
#ifndef __MONEY_H__
#define __MONEY_H__
class Money
{
public:
    Money();
    Money(int dollars, int cents);

    int getDollars();
    int getCents();

    Money operator+(const Money &other) const;
    Money operator-(const Money &other) const;
    Money operator*(const int &other) const;
    Money operator/(const int &other) const;
    Money operator%(const int &other) const;
    Money operator<<(const int &other) const;

private:
    int dollars;
    int cents;
};
#endif // __MONEY_H__
