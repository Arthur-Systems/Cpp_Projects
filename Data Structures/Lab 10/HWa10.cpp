// #include "HWEmployee.h"
// #include "HWBinaryTree.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;
template <typename T>
class HWBinaryTree
{
private:
    struct Node
    {
        T data;
        Node *left;
        Node *right;
        Node(T data)
        {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
    };
    Node *root;
    int size;
    void insert(Node *&node, T data)
    {
        if (node == NULL)
        {
            cout << "insert data: " << data->GetValue() << endl;
            node = new Node(data);
            size++;
        }
        else if (data->GetValue() < node->data->GetValue())
        {
            cout << "insert data: " << data->GetValue() << endl;
            insert(node->left, data);
        }
        else if (data->GetValue() > node->data->GetValue())
        {
            cout << "insert data: " << data->GetValue() << endl;
            insert(node->right, data);
        }
    }

    void search(Node *node, T data)
    {
        if (node != NULL)
        {
            if (node->data == data)
            {
                cout << "Found" << endl;
            }
            else if (data < node->data)
            {
                search(node->left, data);
            }
            else if (data > node->data)
            {
                search(node->right, data);
            }
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }
    void inOrder(Node *node, vector<T> &vec)
    {
        if (node == NULL)
        {
            return;
        }
        inOrder(node->left, vec);
        vec.push_back(node->data);
        inOrder(node->right, vec);
    }
    void inOrder(Node *node)
    {
        if (node != NULL)
        {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

public:
    HWBinaryTree()
    {
        root = NULL;
        size = 0;
    }
    HWBinaryTree(T data)
    {
        root = new Node(data);
        size = 1;
    }

    void insert(T data)
    {
        insert(root, data);
    }

    Node *getRoot()
    {
        return root;
    }

    void search(T data)
    {
        search(root, data);
    }
    void inOrder()
    {
        inOrder(root);
    }
    void inOrder(vector<T> &vec)
    {
        inOrder(root, vec);
    }
};

class EmployeeInfo
{
private:
    string name;
    int employeeID;

public:
    HWBinaryTree<EmployeeInfo *> tree;
    EmployeeInfo(string name, int employeeID)
    {
        this->name = name;
        this->employeeID = employeeID;
    }

    int GetValue()
    {
        return employeeID;
    }

    void print()
    {
        cout << "ID Number:" << employeeID << "\t Name:" << name << endl;
    }
};
int main()
{
    HWBinaryTree<EmployeeInfo *> tree;

    EmployeeInfo *e1 = new EmployeeInfo("Bob", 2);
    tree.insert(e1);
    EmployeeInfo *e2 = new EmployeeInfo("Bill", 3);
    tree.insert(e2);
    EmployeeInfo *e3 = new EmployeeInfo("Anish ❤️ ", 1);
    tree.insert(e3);
    cout << endl;
    tree.getRoot()->data->print();
    tree.getRoot()->right->data->print();
    tree.getRoot()->left->data->print();
    cout << endl;
    vector<EmployeeInfo *> vec;
    tree.inOrder(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i]->print();
    }
    // tree.getRoot()->right->data->print(); // WILL CASE A SEG FAULT CUZ NO DATA IS THERE

    tree.search(e1);
}
