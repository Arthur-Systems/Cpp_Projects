
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "LinkedList.h"
using namespace std;

LinkedList<int>::LinkedList()
{
    head = NULL;
}

LinkedList<int>::~LinkedList()
{
    ListNode<int> *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

//void appendNode(T);
