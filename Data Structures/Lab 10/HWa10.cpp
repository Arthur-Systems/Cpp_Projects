// #include "HWEmployee.h"
// #include "HWBinaryTree.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;
// be able to insert both a string and an int into the tree
// be able to print the tree in order
template <typename T>
class HWBinaryTree
{
private:
    struct Node
    {
        T data;
        Node *left;
        Node *right;
    };
    Node *root;
    int size;
    // insert a string and an int into the tree
    void insert(T data, Node *&node)
    {
        if (node == NULL)
        {
            node = new Node;
            node->data = data;
            node->left = NULL;
            node->right = NULL;
            size++;
        }
        else if (data < node->data)
        {
            insert(data, node->left);
        }
        else if (data > node->data)
        {
            insert(data, node->right);
        }
    }

public:
    HWBinaryTree()
    {
        root = NULL;
        size = 0;
    }
    HWBinaryTree(const HWBinaryTree &);
    ~HWBinaryTree();
    HWBinaryTree &operator=(const HWBinaryTree &);

    void insert(T data)
    {
        insert(data, root);
    }

    void remove(T);
};

class EmployeeInfo
{
private:
    string name;
    int employeeID;

public:
    // The nodes should be sorted on the EmpoyeeID number.
    EmployeeInfo(string, int)
    {
        name = name;
        employeeID = employeeID;
    }
    EmployeeInfo(const EmployeeInfo &)
    {
        name = name;
        employeeID = employeeID;
    }
    ~EmployeeInfo()
    {
        cout << "Destructor called" << endl;
    }
    EmployeeInfo &operator=(const EmployeeInfo &)
    {
        name = name;
        employeeID = employeeID;
        return *this;
    }
    string getName() const
    {
        return name;
    }
    int getID() const
    {
        return employeeID;
    }
};
int main()
{
    HWBinaryTree<EmployeeInfo> tree;
    EmployeeInfo e1("John", 1);

    tree.insert(e1);
}
