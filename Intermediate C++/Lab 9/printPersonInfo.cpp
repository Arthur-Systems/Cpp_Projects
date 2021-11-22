/*
Purpose- This file Hosts contains the the function printWineInfo() which is used to print the person information.
@author Haichuan Wei
@version 1.0 11/21/21

!Function is defined Below

*/
#include "LinkedList.h"
#include "Person.h"
#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

/**
 * the function that print the list of person information in correct format
 * @param personList(any type)
 */
void printPersonInfo(List<Person> &personList)
{
   Person *f;
   f = (Person *)personList.getInfo(0); // get node based on key
   // f->printInfo();
   ListNode<Person> *currentPtr;
   currentPtr = personList.getFirstPtr();
   f = (Person *)currentPtr; // convert to correct data type
   f->printInfo();
   cout << "The Employee list is: \n";
   // print out all the info in linked list
   while (currentPtr != 0) // display elements in list
   {
      f = (Person *)currentPtr; // convert to correct data type
      f->printInfo();
      currentPtr = currentPtr->getNextPtr();
   } // end while
   cout << endl;
}
