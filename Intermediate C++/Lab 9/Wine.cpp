#include "Wine.h"

#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

/**
 * the defualt constructor that set price to 0
 */
Wine::Wine()
{
	price = 0;
}

/**
 * the consturctor that set the name of the class to parameter name,
 * set the vintage of the class to parameter vintage,
 * set the score of the class to parameter score,
 * set the price of the class to parameter price,
 * set the type of the class to parameter type.
 * @param name, vintage, score, price, type
 */
Wine::Wine(string name, int vintage, int score, double price, string type)
{
	this->name = name;
	this->vintage = vintage;
	this->score = score;
	this->price = price;
	this->type = type;
}

/**
 * the member function that set the name of the class to parameter name,
 * set the vintage of the class to parameter vintage,
 * set the score of the class to parameter score,
 * set the price of the class to parameter price,
 * set the type of the class to parameter type.
 * @param name, vintage, score, price, type
 */
void Wine::setInfo(string name, int vintage, int score, double price, string type)
{

	this->name = name;
	this->vintage = vintage;
	this->score = score;
	this->price = price;
	this->type = type;
}

/**
 * the member function that set the price of this class to parameter price
 * @param price
 */
void Wine::setPrice(double price)
{
	this->price = price;
}

/**
 * the member function that return name
 * @return name
 */
string Wine::getName() const
{
	return name;
}

/**
 * the member function that return price
 * @return price
 */
int Wine::getPrice() const
{
	return price;
}

/**
 * the member function that cout name, price, score, year and vintage in correct format
 */
void Wine::printInfo()
{
	/*
	 * use setw() function to make the output print out
	 * nicely formated.
	 */

	cout << setw(35) << left << name << right << type << right << " " << setw(1) << price << left << " ; Rating: " << score << left << "  Year: "
		 << vintage << endl;
}
