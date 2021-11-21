#include "Person.h"

#include "LinkedList.h"

#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

/**
 * the defualt constructor of Person
 */
Person::Person()
{ 
}

/**
 * the constructor of Person that set name to pname and age to page
 * @param pname, page
 */
Person::Person(string pname, int page)
{
   name = pname;
   age = page;
}

/**
 * the member function of Person that set name to n
 * @param n
 */
void Person::set_name(string n) 
{
	name = n;
}

/**
 * the member function of Person that set age to a
 * @param a
 */
void Person::set_age(int a) 
{
	age = a;
}

/**
 * the member function of Person that set name to n, age to a
 * @param n, a
 */
void Person::set_info(string n, int a) 
{
	name = n; age=a;
}

/**
 * the memeber function of Person that return name
 * @return name
 */
string Person::get_name() const
{
   return name;
}

/**
 * the member function of Person that return age
 * @return age
 */
int Person::get_age() const
{
   return age;
}

/**
 * the member function that cout name and age in correct form
 */
void Person::printInfo() 
{ 
	cout <<"Name: "<<name;
	cout << "\tAge: "<<age<<endl; 
}
