/*
@author Haichuan Wei
@version 1.0 11/23/21
@Class HWBinaryTree is a class that implements a binary tree.
This class is template meaning that it can be used to store any type of data.
@function HWBinaryTree() is the default constructor. Sets the root to NULL.
@function insert(data) inserts a node with the given value into the tree.
        @param data is the value of the node to be inserted.
@function deleteNode(data) removes a node with the given value from the tree.
        @param data is the value of the node to be removed.
@function search(data) searches for a node with the given value in the tree.
        @param data is the value of the node to be searched for.
@function preOrder() Traverses the tree in "pre-order".
@function inOrder() Traverses the tree in "in-order".
@function postOrder() Traverses the tree in "post-order".

*/

#ifndef _HW_BINARY_TREE_H_
#define _HW_BINARY_TREE_H_
#include <iostream>
#include <string>
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
    void insert(Node *&node, T data)
    {
        if (node == NULL)
        {
            node = new Node(data);
        }
        else if (data < node->data)
        {
            insert(node->left, data);
        }
        else
        {
            insert(node->right, data);
        }
    }
    void deleteNode(Node *&node, T data)
    {
        if (node == NULL)
        {
            return;
        }
        else if (data < node->data)
        {
            deleteNode(node->left, data);
        }
        else if (data > node->data)
        {
            deleteNode(node->right, data);
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                delete node;
                node = NULL;
            }
            else if (node->left == NULL)
            {
                Node *temp = node;
                node = node->right;
                delete temp;
            }
            else if (node->right == NULL)
            {
                Node *temp = node;
                node = node->left;
                delete temp;
            }
            else
            {
                Node *temp = node->right;
                while (temp->left != NULL)
                {
                    temp = temp->left;
                }
                node->data = temp->data;
                deleteNode(node->right, temp->data);
            }
        }
    }
    void search(Node *node, T data)
    {
        if (node == NULL)
        {
            cout << data << " NOT FOUND!" << endl;
        }
        else if (data < node->data)
        {
            search(node->left, data);
        }
        else if (data > node->data)
        {
            search(node->right, data);
        }
        else if (data == node->data)
        {
            cout << data << " Found!" << endl;
        }
    }

    void preOrder(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
    void inOrder(Node *node)
    {

        if (node == NULL)
        {
            return;
        }
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
    void postOrder(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }

public:
    HWBinaryTree()
    {
        root = NULL;
    }
    void insert(T data)
    {
        insert(root, data);
    }
    // overloaded insert function
    void deleteNode(T data)
    {
        cout << "Removeing " << data << endl;
        deleteNode(root, data);
    }
    void search(T data)
    {
        search(root, data);
    }

    void preOrder()
    {
        cout << "Travering and displaying the tree using Preorder: " << endl;
        preOrder(root);
    }
    void inOrder()
    {
        cout << "Travering and displaying the tree using Inorder: " << endl;
        inOrder(root);
    }
    void postOrder()
    {
        cout << "Travering and displaying the tree using Postorder: " << endl;
        postOrder(root);
    }
};
// Use the binary tree template designed in lab assignment 9 to implement a binary tree whose nodes hold an instance of the EmployeeInfo class.

class EmployeeInfo
{
private:
    string name;
    int id;

public:
    EmployeeInfo(string name, int id)
    {
        this->name = name;
        this->id = id;
    }

    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
};
int main()
{
    HWBinaryTree<EmployeeInfo> tree;
    EmployeeInfo info1 = EmployeeInfo("Haichuan", 1);
    EmployeeInfo *info2 = new EmployeeInfo("Haichuan", 2);

    tree.insert(info1);
}

#endif // _HW_BINARY_TREE_H_
