/*
Purpose- This file contains the class definition for the Wine class.
@author Haichuan Wei
@version 1.0 11/21/21
@class Wine() - This class is used to create a wine object.
!All Functions and Parameters are already defined in the file Below.
*/
#ifndef WINE_H
#define WINE_H

#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

class Wine
{
public:
   /**
    * the defualt constructor that set price to 0
    */
   Wine();
   /**
    * the consturctor that set the name of the class to parameter name,
    * set the vintage of the class to parameter vintage,
    * set the score of the class to parameter score,
    * set the price of the class to parameter price,
    * set the type of the class to parameter type.
    * @param name, vintage, score, price, type
    */
   Wine(string name, int vintage, int score, double price, string type);
   /**
    * the member function that set the name of the class to parameter name,
    * set the vintage of the class to parameter vintage,
    * set the score of the class to parameter score,
    * set the price of the class to parameter price,
    * set the type of the class to parameter type.
    * @param name, vintage, score, price, type
    */
   void setInfo(string name, int vintage, int score,
                double price, string type);
   /**
    * the member function that set the price of this class to parameter price
    * @param price
    */
   void setPrice(double price);
   /**
    * the member function that return name
    * @return name
    */
   string getName() const;
   /**
    * the member function that return price
    * @return price
    */
   int getPrice() const;
   /**
    * the member function that cout name, price, score, year and vintage in correct format
    */
   void printInfo();

private:
   string name;
   int vintage;
   int score;
   double price;
   string type;
};

#endif
