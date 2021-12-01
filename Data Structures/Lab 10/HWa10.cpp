// #include "HWEmployee.h"
// #include "HWBinaryTree.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
// implement a binary tree whose nodes hold an instance of the EmployeeInfo class.
template <typename T>
class HWBinaryTree
{
private:
    struct Node
    {
        T data;
        Node *left;
        Node *right;
        Node(const T &d = T(), Node *l = NULL, Node *r = NULL)
        {
            data = d;
            left = l;
            right = r;
        }
    };
    Node *root;
    int size;
    void insert(Node *&, const T &);
    void makeEmpty(Node *&);

public:
    HWBinaryTree()
    {
        root = NULL;
    }
    HWBinaryTree(const HWBinaryTree &rhs)
    {
        root = NULL;
        *this = rhs;
    }
    ~HWBinaryTree()
    {
        makeEmpty();
    }

    HWBinaryTree &operator=(const HWBinaryTree &rhs)
    {
        if (this != &rhs)
        {
            makeEmpty();
            root = clone(rhs.root);
        }
        return *this;
    }

    void makeEmpty()
    {
        makeEmpty(root);
    }

    void insert(T data)
    {

        insert(root, data);
    }
};
class EmployeeInfo
{
private:
    string name;
    int employeeID;

public:
    // The nodes should be sorted on the EmpoyeeID number.
    EmployeeInfo(const string &n, int id)
    {
        name = n;
        employeeID = id;
    }
    EmployeeInfo(const EmployeeInfo &rhs)
    {
        name = rhs.name;
        employeeID = rhs.employeeID;
    }
    EmployeeInfo &operator=(const EmployeeInfo &rhs)
    {
        if (this != &rhs)
        {
            name = rhs.name;
            employeeID = rhs.employeeID;
        }
        return *this;
    }
    bool operator<(const EmployeeInfo &rhs) const
    {
        return employeeID < rhs.employeeID;
    }
    bool operator>(const EmployeeInfo &rhs) const
    {
        return employeeID > rhs.employeeID;
    }
};
int main()
{
    HWBinaryTree<EmployeeInfo> tree;
    EmployeeInfo e1("John", 1);
    EmployeeInfo e2("Mary", 2);

    tree.insert(e1);
}
