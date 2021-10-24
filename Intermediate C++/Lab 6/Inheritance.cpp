#include "Inheritance.h"

Person::Person()
{
    name = "None";
    gender = "None";
};

Person::Person(string pname, string pgender){
    // set name to pname and gender to pgender

};

string Person::set_name(string name)
{
    this->name = name;
    return name;
}
string Person::set_gender(string pgender)
{
}