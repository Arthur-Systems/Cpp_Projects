
#ifndef PRINT_ME_FIRST_H
#define PRINT_ME_FIRST_H
#include <string>

using namespace std;

/**
 * Define the header information for PrintMeFirst
 * forward declaration - tells the compiler that the function
 * PrintMeFirst( ) is defined else where so just go use it, and
 * it will be resolved during the linking time.
 * @file - PrintMeFirst.h
 * @author - Ron Sha
 **/


void print_me_first(string name, string courseInfo);

#endif 
