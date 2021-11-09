#ifndef HWChain_H
#define HWChain_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cassert>
using namespace std;

// chaining hash
class HWChain
{
public:
    HWChain();
    ~HWChain();
    void setSize(int size);
    void insert(int key, int value);
    int search(int key);
    void printTable();

private:
    struct Node
    {
        int key;
        int value;
        Node *next;
    };

    Node **table;
    int size;
};

#endif // HWChain_H
