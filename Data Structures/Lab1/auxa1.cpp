// CS 124-04 
// FILE: auxa1.cpp
// IMPLEMENTS: A toolkit of functions for lab 1. 

#include <cctype>     // Provides toupper
#include <iostream>   // Provides cout, cin, get
#include "auxa1.h"

using namespace std;


void eat_line( )
// Library facilities used: iostream
// 
{
    char next;
    do
        cin.get(next);
    while (next != '\n');
}

bool inquire(const char query[ ])
// Library facilities used: ctype.h, iostream
{
    char answer;
    do
    {
        cout << query << " [Yes or No]" << endl;
        cin >> answer;
        answer = toupper(answer);
        eat_line( );
    }
    while ((answer != 'Y') && (answer != 'N'));
    return (answer == 'Y');
}

