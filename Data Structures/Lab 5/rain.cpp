
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "LinkedList.h"
using namespace std;

void LinkedList<int>::appendNode(T)
{
    Node<int> *newNode = new Node<int>(T);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
}

//void appendNode(T);
