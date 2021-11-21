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
   wp->printInfo();

   ListNode<Wine> *currentPtr;

   currentPtr = wineList.getFirstPtr();

   cout << "The Wine list is: \n";
   // print out all the info in linked list
   while (currentPtr != 0) // display elements in list
   {
      wp = (Wine *)currentPtr; // convert to correct data type
      wp->printInfo();
      currentPtr = currentPtr->getNextPtr();
   } // end while
}
