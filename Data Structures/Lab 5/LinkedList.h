//
// Purpose- this lab aims to improve our second lab
// by using linked lists instead of arrays.
// This lab is pretty much the same as the first lab,
// except we are using linked lists instead of arrays.
// @author Haichuan Wei
// @version 1.0 9/21/21
// @class  LinkedList() - constructor
// @class  ~LinkedList() - destructor
// @class template appendNode(T) -
// this function adds a node to the list this also
// allocates more memory for the entire list.
// @class template insertNode(T) - this function inserts a node to the list.
// @class template deleteNode(T) - this function deletes a node from the list.
// @class template search(T) - searches for a node in the list.
// @class template getTotal() - adds up the total of all the nodes in the list.
// @class function int numNodes() - returns the number of nodes in the list.
// @class template T getAverage(); -
// returns the average of all the nodes in the list.
// @class template T getLargest() -
// returns the largest value of all the nodes in the list.
// @class template T getSmallest() -
// returns the smallest value of all the nodes in the list.
// @class function int getLargestPosition() -
// returns the position of the largest value of all the nodes in the list.
// @class function int getSmallestPosition() -
// returns the position of the smallest value of all the nodes in the list.
// @return- none
//
#ifndef __HWa5_LinkedList_h__
#define __HWa5_LinkedList_h__
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
template <class T>
class LinkedList
{
private:
    // Declare a structure for the lis
    struct ListNode
    {
        T value;
        struct ListNode *next;
    };
    ListNode *head; // List head pointer

public:
    LinkedList() // Constructor
    {
        head = nullptr;
    }
    ~LinkedList()
    {
        ListNode *current = head;
        ListNode *next;
        while (current != nullptr)
        {
            next = current->next;
            delete current;
            current = next;
        }

    } // Destructor
    void appendNode(T value)
    {
        ListNode *newNode = new ListNode;
        newNode->value = value;
        newNode->next = nullptr;
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            ListNode *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void insertNode(T value)
    {
        // insert a node at the beginning of the list
        ListNode *newNode = new ListNode;
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }

    void deleteNode(T value)
    {
        ListNode *current = head;
        ListNode *previous = nullptr;
        while (current != nullptr)
        {
            if (current->value == value)
            {
                if (previous == nullptr)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                delete current;
                break;
            }
            previous = current;
            current = current->next;
        }
    }
    void displayList()
    { // display the list
        ListNode *current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
    int search(T value)
    {
        ListNode *current = head;
        int position = 0;
        while (current != nullptr)
        {
            if (current->value == value)
            {
                return position;
            }
            position++;
            current = current->next;
        }
        return -1;
    }
    T getTotal()
    {
        ListNode *current = head;
        T total = 0;
        while (current != nullptr)
        {
            total += current->value;
            current = current->next;
        }
        return total;
    }

    int numNodes()
    {
        ListNode *current = head;
        int count = 0;
        while (current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }
    T getAverage()
    {
        ListNode *current = head;
        T total = 0;
        int num = 0;
        while (current != nullptr)
        {
            total += current->value;
            current = current->next;
            num++;
        }
        return total / num;
    }

    T getLargest()
    {
        ListNode *current = head;
        T largest = 0;
        while (current != nullptr)
        {
            if (current->value > largest)
            {
                largest = current->value;
            }
            current = current->next;
        }
        return largest;
    }
    int getLargestPosition()
    {
        ListNode *current = head;
        int position = 0;
        T largest = 0;
        do
        {
            if (current->value > largest)
            {
                largest = current->value;
                position = position;
                position++;
            }
            else if (current->value < largest)
            {
                current = current->next;
            }
            else if (current->value == largest)
            {
                current = current->next;
            }

        } while (current != nullptr);
        return position;
    }
    T getSmallest()
    {
        ListNode *current = head;
        T smallest = current->value;
        do
        {
            if (current->value < smallest)
            {
                smallest = current->value;
            }
            current = current->next;
        } while (current != nullptr);
        return smallest;
    }

    int getSmallestPosition()
    {
        ListNode *current = head;
        int position = 0;
        T smallest = current->value;
        do
        {
            if (current->value < smallest)
            {
                smallest = current->value;
                position++;
            }
            current = current->next;

        } while (current != nullptr);
        return position;
    }
};

#endif // __HWa5_LinkedList_h__