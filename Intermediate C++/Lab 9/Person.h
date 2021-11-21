/*
Purpose- This file holds the Person class.
@author Haichuan Wei
@version 1.0 11/21/21
@class Person - This class is used to create a person object.
!All Functions and Parameters are already defined in the file Below.
*/
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

class Person
{
public:
   /**
    * the defualt constructor of Person
    */
   Person();
   /**
    * the constructor of Person that set name to pname and age to page
    * @param pname, page
    */
   Person(string pname, int page);
   /**
    * the member function of Person that set name to n
    * @param n
    */
   void set_name(string n);
   /**
    * the member function of Person that set age to a
    * @param a
    */
   void set_age(int a);
   /**
    * the member function of Person that set name to n, age to a
    * @param n, a
    */
   void set_info(string n, int a);
   /**
    * the memeber function of Person that return name
    * @return name
    */
   string get_name() const;
   /**
    * the member function of Person that return age
    * @return age
    */
   int get_age() const;
   /**
    * the member function that cout name and age in correct form
    */
   void printInfo();

private:
   string name;
   int age; /* 0 if unknown */
};

#endif
