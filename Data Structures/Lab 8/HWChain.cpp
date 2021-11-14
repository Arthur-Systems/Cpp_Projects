#include "HWChain.h"
HWChain::HWChain()
{
}
HWChain::~HWChain()
{
    for (int i = 0; i < this->size; i++)
    {
        Node *temp = this->table[i];
        while (temp != NULL)
        {
            Node *temp2 = temp;
            temp = temp->next;
            delete temp2;
        }
    }
    delete[] this->table;
}
void HWChain::SetTableSize(int size)
{
    // make dynamic size of table
    this->size = size;
    this->table = new Node *[size];
    for (int i = 0; i < size; i++)
    {
        this->table[i] = NULL;
    }
}
void HWChain::insert(int key, int value)
{
    int index = key % this->size;
    Node *temp = this->table[index];
    while (temp != NULL)
    {
        if (temp->key == key)
        {
            temp->value = value;
            return;
        }
        temp = temp->next;
    }
    Node *newNode = new Node;
    newNode->key = key;
    newNode->value = value;
    newNode->next = this->table[index];
    this->table[index] = newNode;
}
int HWChain::search(int key)
{
    int index = key % this->size;
    Node *temp = this->table[index];
    while (temp != NULL)
    {
        if (temp->key == key)
        {
            return temp->value;
        }
        temp = temp->next;
    }
    return -1;
}
void HWChain::remove(int key)
{
    int index = key % this->size;
    Node *temp = this->table[index];
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->key == key)
        {
            if (prev == NULL)
            {
                this->table[index] = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}
void HWChain::print()
{
    for (int i = 0; i < this->size; i++)
    {
        Node *temp = this->table[i];
        while (temp != NULL)
        {
            cout << temp->key << " " << temp->value << endl;
            temp = temp->next;
        }
    }
}
