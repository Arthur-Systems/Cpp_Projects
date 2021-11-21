/*
Purpose- This file host the LinkedList class and is used to create a linked list.
@author Haichuan Wei
@version 1.0 11/21/21
@class LinkedList- A linked list
@class list - List class
!All Functions and Parameters are already defined in the file Below.
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
// place the template .h and .cpp in the same .h file
// https://bytefreaks.net/programming-2/c/c-undefined-reference-to-templated-class-function
// https://isocpp.org/wiki/faq/templates#separate-template-fn-defn-from-decl

#include <iostream>
#include <typeinfo>
#include <iomanip>

using namespace std;
template <typename T>
class List;

template <typename T>
class ListNode
{

public:
   friend class List<T>; // make List a friend
                         /**
                          * the constructor of ListNode that set data to info, set nextPtr to null.
                          * @param the address of info
                          */
   ListNode(const T &);  // constructor
                         /**
                          * the member function of ListNode that return the value of data
                          * @return data
                          */
   T getData() const;    // return the data in the node

   // set nextPtr to nPtr
   /**
    * The member function of ListNode that set nextPtr to nPtr
    * @param nPtr
    */
   void setNextPtr(ListNode *nPtr);

   // return nextPtr
   /**
    * The member function of ListNode that return the nextPtr
    * @return nextPtr
    */
   ListNode *getNextPtr() const;

private:
   T data;            // data
   int key;           // used for key for the list
   ListNode *nextPtr; // next node in the list
};                    // end class ListNode

template <typename T>
class List
{
public:
   /**
    * The default constructor that set firstPtr and lastPtr to 0.
    */
   List();                // default constructor
                          /**
                           * The copy constructor that copy a list to another
                           * @param copy
                           */
   List(const List<T> &); // copy constructor
                          /**
                           * The destructor of List that delete data and nodes
                           */
   ~List();               // destructor
                          /**
                           * The member function that insert a node at the front of the list
                           * @param value, key
                           */
   void insertAtFront(const T &, int);
   /**
    * The member function of List that insert at the back of the list
    * @param value, key
    */
   void insertAtBack(const T &, int);
   /**
    * The member function that remove one from front
    * @param value
    */
   bool removeFromFront(T &);
   /**
    * The member function that remove one from back
    * @param value
    */
   bool removeFromBack(T &);
   /**
    * The member function that check whether the first ptr is null
    * @return true if the firstPtr is null, false if it isn't
    */
   bool isEmpty() const;
   /**
    * The member function of List that print the contents of the List
    */
   void print() const;
   void printPtrFunc();
   /**
    * The member function of List that display the contents of the List
    * @param myKey
    * @return NULL until can't find anything else
    */
   T *getInfo(int myKey);
   // return nextPtr
   /**
    * The member function of List that return the firstPtr
    * @return firstPtr
    */
   ListNode<T> *getFirstPtr() const; // end function getNextPtr

protected:
   ListNode<T> *firstPtr; // pointer to first node
   ListNode<T> *lastPtr;  // pointer to last node

   // Utility function to allocate a new node
   /**
    * The member function that return the new node
    * @param value and an integer
    * @return ptr
    */
   ListNode<T> *getNewNode(const T &, int);
}; // end typename Template List

// constructor
/**
 * the constructor of ListNode that set data to info, set nextPtr to null.
 * @param the address of info
 */
template <typename T>
ListNode<T>::ListNode(const T &info)
{
   data = info;
   nextPtr = 0;
} // end constructor

// return a copy of the data in the node
/**
 * the member function of ListNode that return the value of data
 * @return data
 */
template <typename T>
T ListNode<T>::getData() const
{
   return data;
} // end function getData

// set nextPtr to nPtr
/**
 * The member function of ListNode that set nextPtr to nPtr
 * @param nPtr
 */
template <typename T>
void ListNode<T>::setNextPtr(ListNode *nPtr)
{
   nextPtr = nPtr;
} // end function setNextPtr

// return nextPtr
/**
 * The member function of ListNode that return the nextPtr
 * @return nextPtr
 */
template <typename T>
ListNode<T> *ListNode<T>::getNextPtr() const
{
   return nextPtr;
} // end function getNextPtr

// default constructor
/**
 * The default constructor that set firstPtr and lastPtr to 0.
 */
template <typename T>
List<T>::List()
{
   firstPtr = lastPtr = 0;
} // end constructor

// copy constructor
/**
 * The copy constructor of List that copy a list to another
 * @param copy
 */
template <typename T>
List<T>::List(const List<T> &copy)
{
   firstPtr = lastPtr = 0; // initialize pointers

   ListNode<T> *currentPtr = copy.firstPtr;

   // insert into the list
   while (currentPtr != 0)
   {
      insertAtBack(currentPtr->data);
      currentPtr = currentPtr->nextPtr;
   } // end while
} // end List copy constructor

// destructor
/**
 * The destructor of List that delete data and nodes
 */
template <typename T>
List<T>::~List()
{
   if (!isEmpty()) // List is not empty
   {
      // cout << "Destroying nodes ...\n";

      ListNode<T> *currentPtr = firstPtr;
      ListNode<T> *tempPtr;

      while (currentPtr != 0) // delete remaining nodes
      {
         tempPtr = currentPtr;
         //         cout << tempPtr->data << ' ';
         currentPtr = currentPtr->nextPtr;
         delete tempPtr;
      } // end while
   }    // end if

   //  cout << "\nAll nodes destroyed\n\n";
} // end destructor

// Insert a node at the front of the list
/**
 * The member function that insert a node at the front of the list
 * @param value, key
 */
template <typename T>
void List<T>::insertAtFront(const T &value,
                            int key)
{
   ListNode<T> *newPtr = getNewNode(value, key);

   if (isEmpty()) // List is empty
      firstPtr = lastPtr = newPtr;
   else // List is not empty
   {
      /*
       * write code to implement insert at front
       * 1. the new node needs to point to the first node
       * 2. first node needs to point to the new node
       * */
      newPtr->nextPtr = firstPtr;
      firstPtr = newPtr;

   } // end else
} // end function insertAtFront

// Insert a node at the back of the list
/**
 * The member function of List that insert at the back of the list
 * @param value, key
 */
template <typename T>
void List<T>::insertAtBack(const T &value, int key)
{
   ListNode<T> *newPtr = getNewNode(value, key);

   if (isEmpty()) // List is empty
      firstPtr = lastPtr = newPtr;
   else // List is not empty
   {
      /*
       * write code to implement insert at back
       * 1. next pointer of the last node points to the new node
       * 2. last node needs to point to the new node
       */

      lastPtr->nextPtr = newPtr;
      lastPtr = newPtr;

   } // end else
} // end function insertAtBack

// Delete a node from the front of the list
/**
 * The member function that remove one from front
 * @param value
 */
template <typename T>
bool List<T>::removeFromFront(T &value)
{
   if (isEmpty())   // List is empty
      return false; // delete unsuccessful
   else
   {
      ListNode<T> *tempPtr = firstPtr;

      /*
       * 1. check to see if first pointer is the same as last pointer
       * if it is the same, that means there is only one node, so
       * set both pointer to NULL
       * 2.  if it is not the same, that means there is more than one node
       * in the linked list.  So, make the the first node pointer points
       * to the the next node of the first node
       *
       * don't forget delete the pointer since it has been removed/deleted
       *
       * Write your code to implement the remove the 1st node
       *
       * */
      if (firstPtr == lastPtr)
      {
         firstPtr = lastPtr = NULL;
      }
      else
      {
         firstPtr = firstPtr->nextPtr;
      }
      value = tempPtr->data;
      delete tempPtr;
      return true; // delete successful
   }               // end else
} // end function removeFromFront

// delete a node from the back of the list
template <typename T>
/**
 * The member function that remove one from back
 * @param value
 */
bool List<T>::removeFromBack(T &value)
{
   if (isEmpty())
      return false; // delete unsuccessful
   else
   {
      ListNode<T> *tempPtr = lastPtr;

      if (firstPtr == lastPtr)
         firstPtr = lastPtr = 0;
      else
      {
         ListNode<T> *currentPtr = firstPtr;

         while (currentPtr->nextPtr != lastPtr)
            currentPtr = currentPtr->nextPtr;

         lastPtr = currentPtr;
         currentPtr->nextPtr = 0;
      } // end else

      value = tempPtr->data;
      delete tempPtr;
      return true; // delete successful
   }               // end else
} // end function removeFromBack

// Is the List empty?
/**
 * The member function that check whether the first ptr is null
 * @return true if the firstPtr is null, false if it isn't
 */
template <typename T>
bool List<T>::isEmpty() const
{
   return firstPtr == 0;
} // end function isEmpty

// Return a pointer to a newly allocated node
/**
 * The member function that return the new node
 * @param value and an integer
 * @return ptr
 */
template <typename T>
ListNode<T> *List<T>::getNewNode(
    const T &value, int)
{
   ListNode<T> *ptr = new ListNode<T>(value);
   return ptr;
} // end function getNewNode

// Display the contents of the List
/**
 * The member function of List that print the contents of the List
 */
template <typename T>
void List<T>::print() const
{
   if (isEmpty()) // empty list
   {
      cout << "The list is empty\n\n";
      return;
   } // end if

   ListNode<T> *currentPtr = firstPtr;

   // cout << "The list is: ";

   while (currentPtr != 0) // display elements in list
   {
      int i;
      string s;
      double d;
      char c;
      if (typeid(currentPtr->data).name() == typeid(i).name() ||
          typeid(currentPtr->data).name() == typeid(d).name() ||
          typeid(currentPtr->data).name() == typeid(s).name() ||
          typeid(currentPtr->data).name() == typeid(c).name())
      {
         // data value is a simple data type and can be printed
         cout << currentPtr->data << ' ';
      }
      else
      {
         cout << "Can't print - Not a simple data type (int, string, char, double)\n";
      }
      currentPtr = currentPtr->nextPtr;
   } // end while

   cout << "\n\n";
} // end function print

/**
 * The member function of List that return the firstPtr
 * @return firstPtr
 */
template <typename T>
ListNode<T> *List<T>::getFirstPtr() const
{
   return firstPtr;
} // end function getNextPtr

// Display the contents of the List
/**
 * The member function of List that display the contents of the List
 * @param myKey
 * @return NULL until can't find anything else
 */
template <typename T>
T *List<T>::getInfo(int myKey)
{
   if (isEmpty()) // empty list
   {
      cout << "The list is empty\n\n";
      return NULL;
   } // end if

   ListNode<T> *currentPtr = firstPtr;

   while (currentPtr != 0) // display elements in list
   {
      if (currentPtr->key == myKey) // found
         return (&currentPtr->data);

      currentPtr = currentPtr->nextPtr;
   } // end while

   return NULL; // can't find
} // end function print

/**
 * The function that can hold any type of node list and print the information it has
 * @param nodeList
 */
template <typename T>
void printNoteInfo(List<T> &nodeList)
{
   T *wp;
   wp = (T *)nodeList.getInfo(0); // get node based on key

   ListNode<T> *currentPtr;

   currentPtr = nodeList.getFirstPtr();

   cout << "The node list is: \n";
   // print out all the info in linked list
   while (currentPtr != 0) // display elements in list
   {
      wp = (T *)currentPtr; // convert to correct data type
      wp->printInfo();      // calling the function that is part of the
                            // data type
      currentPtr = currentPtr->getNextPtr();
   } // end while
}
#endif
