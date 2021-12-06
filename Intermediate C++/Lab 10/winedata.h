/*
Purpose- This is the header file. It calulates the wine data, displays it, and it can be used to calculate the average. ALl data is fed from the my sql server.
@author Haichuan Wei
@version 1.0 11/14/21

@function printHeader() - This function prints the table header
@function printwine() - This function prints every wine based on the input
@function displayscore() - This function displays the score of the wine based on the minimum and maximum score
@function displayprice() -  This function displays the price of the wine based on the minimum and maximum price
@function topten() - This function displays the top ten wines sorted by price
@function insertwine() - This function inserts a wine into the database
@function updatewine() - This function updates a wine in the database

*/

#ifndef _winedata_h_h
#define _winedata_h_h
#include </usr/include/mysql/mysql.h>
#include <iostream>
#include <string>
#include <vector>
#include "dbconnect.h"

using namespace std;

void printHeader();
void printwine(MYSQL_RES *res);
string displayscore();
string displayprice();
string topten();
string insertwine();
string updatewine();

#endif // !_winedata_h
