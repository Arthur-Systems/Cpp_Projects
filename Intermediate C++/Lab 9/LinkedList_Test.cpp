
#include <iostream>
#include <typeinfo>
#include <iomanip>
#include "LinkedList.h"
#include "Wine.h"
#include "Person.h"

using namespace std;

bool DEBUG = true;

void printMeFirst(string name, string courseInfo);

template <class T>
void printNoteInfo(List<T> &nodeList);
void printWineInfo(List<Wine> &wineList);
void printPersonInfo(List<Person> &personList);

// forward declaration

/*
 * Main test driver program to test all the functions
 */

int main()
{
   printMeFirst("Haichuan Wei", "CS-116 Linked List Lab");
   List<int> list1; // storage for first list
   List<int> list2; // storage for second list
   Person p;

   // use data type Person for the Linked List
   List<Person> personList;

   p.set_info("Ron", 22);

   personList.insertAtFront(p, 0);

   p.set_info("Sha", 30);
   personList.insertAtBack(p, 1);

   if (DEBUG)
      cout << "\n***Print using printPersonInfo***\n";
   printPersonInfo(personList);
   if (DEBUG)
      cout << "\n***Print using printNoteInfo***\n";
   printNoteInfo(personList);

   /* use the linked list for Wine data type
    */
   Wine w, temp;

   List<Wine> wineList;

   w.setInfo("Prisoner", 2014, 92, 44.99, "Red");
   wineList.insertAtBack(w, 0);
   w.setInfo("Vermentino", 2014, 85, 27, "White");
   wineList.insertAtFront(w, 1);
   w.setInfo("Stags Chardonnay Carneros", 2013, 89, 45, "White");
   wineList.insertAtBack(w, 2);
   w.setInfo("Castello Barone Reserve Cabernet", 2011, 92, 92, "Red");
   wineList.insertAtBack(w, 3);
   w.setInfo("Harlan Estate Bordeaux", 2011, 97, 850, "Red");
   wineList.insertAtFront(w, 4);
   w.setInfo("Futo Bordeaux Red", 2009, 97, 324.99, "Red");
   wineList.insertAtBack(w, 5);

   if (DEBUG)
      cout << "\n***Print using printWineInfo***\n";
   printWineInfo(wineList);
   if (DEBUG)
      cout << "\n***Print using printNoteInfo***\n";
   printNoteInfo(wineList);

   if (DEBUG)
      cout << "\n***AFTER REMOVING front node, Print using printNoteInfo***\n";
   wineList.removeFromFront(temp);
   if (DEBUG)
      cout << "\n***Print using printNoteInfo***\n";
   printNoteInfo(wineList);

   if (DEBUG)
      cout << "\n***AFTER REMOVING last node, Print using printNoteInfo***\n";
   wineList.removeFromBack(temp);
   if (DEBUG)
      cout << "\n***Print using printNoteInfo***\n";
   printNoteInfo(wineList);

   /*
    * Use int as data type for the linked List
    */
   // assign intger into first list, from 1 to 5
   if (DEBUG)
      cout << "\nLinked List using int \n";

   for (int i = 0; i < 5; i++)
      list1.insertAtBack(i, i);

   // call function print to print the list
   list1.print();

   // assign from 5 to 10 into second list
   for (int i = 5; i < 10; i++)
      list2.insertAtFront(i, i);

   list2.print();

} // end main
