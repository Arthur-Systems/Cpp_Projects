/*
Purpose- This file hosts the function printWineInfo() which is used to print the wine information.
@author Haichuan Wei
@version 1.0 11/21/21

!Function is defined Below
*/

#include "LinkedList.h"
#include "Wine.h"

#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;

/**
 * the function that print the list of wine information in correct format
 * @param wineList(any type)
 */
void printWineInfo(List<Wine> &wineList)
{
   Wine *wp;
   wp = (Wine *)wineList.getInfo(0); // get node based on key

   ListNode<Wine> *currentPtr;

   currentPtr = wineList.getFirstPtr();
   // move the pintor to the next node
   currentPtr = currentPtr->getNextPtr();
   wp = (Wine *)currentPtr;
   wp->printInfo();
   cout << "The Wine list is: \n";
   // print out all the info in linked list
   while (currentPtr != 0) // display elements in list
   {
      wp = (Wine *)currentPtr; // convert to correct data type
      wp->printInfo();
      currentPtr = currentPtr->getNextPtr();
   } // end while
}
