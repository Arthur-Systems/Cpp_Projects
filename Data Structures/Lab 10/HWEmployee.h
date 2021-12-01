/*


*/

#ifndef HWEmployee_h
#define HWEmployee_h
#include <iostream>
#include <string>
using namespace std;

class EmpolyeeInfo
{
private:
    int id;
    string name;

public:
    EmpolyeeInfo(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void print()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

#endif //! HWEmployee_h
