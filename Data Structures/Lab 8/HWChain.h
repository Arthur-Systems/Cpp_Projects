/*
@author Haichuan Wei
@version 1.0 11/9/21
@function HWChain()- This function is the constructor of the class.
@function ~HWChain()- This function is the destructor of the class.
@function insert()- This function is used to insert a new node into the chain.
It also checks if the node is already in the chain.
And then takes in the user provided data and inserts it into the chain.
@function remove()- This function is used to remove a node from the chain.
@function print()- This function is used to print the chain.
@struct Node- This struct is used to store the data of the node.
*/
#ifndef HWChain_H
#define HWChain_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class HWChain
{
public:
    HWChain();
    ~HWChain();
    void SetTableSize(int size);
    void insert(int key, int value);
    int search(int key);
    void remove(int key);
    void print();

private:
    struct Node
    {
        int key;
        int value;
        Node *next;
    };
    Node **table;
    int size;
    int hash(int key);
};

#endif // HWChain_H
