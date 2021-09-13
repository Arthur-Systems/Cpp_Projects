// CS124-04
// FILE: auxa1.h
// PROVIDES: A toolkit of useful functions for lab 1. 
//
// FUNCTIONS in this toolkit:                  
//
//   void eat_line( )
//     Postcondition: Up to next newline has been read and discarded from cin.
//
//   bool inquire(const char query[ ])
//     Precondition: query is a null-terminated string of characters.
//     Postcondition: query has been printed, and a one-line response read 
//     from the user. The function returns true if the user's response begins 
//     with 'Y' or 'y', and returns false if the user's response begins with 
//     'N' or 'n'. (If the response begins with some other letter, then the
//     query is repeated.)

#ifndef AUXA1_H // Prevent duplicate definition
#define AUXA1_H 

    void eat_line( );
    bool inquire(const char query[ ]);

#endif
