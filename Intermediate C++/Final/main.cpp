#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "A " << endl;
    }
    ~Person()
    {
        cout << "B" << endl;
    }
};
class Me : public Person
{
public:
    Me()
    {
        cout << "C" << endl;
    }
    ~Me()
    {
        cout << "D" << endl;
    }
};
int main()
{
    Me p;
}