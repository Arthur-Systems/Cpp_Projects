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
#include "HWEmployee.h"
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
            node = new Node(data);
            size++;
        }
        else if (data->GetID() < node->data->GetID())
        {

            insert(node->left, data);
        }
        else if (data->GetID() > node->data->GetID())
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
        else if (data->GetID() < node->data->GetID())
        {
            deleteNode(node->left, data);
        }
        else if (data->GetID() > node->data->GetID())
        {
            deleteNode(node->right, data);
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                delete node;
                node = NULL;
                size--;
            }
            else if (node->left == NULL)
            {
                Node *temp = node;
                node = node->right;
                delete temp;
                size--;
            }
            else if (node->right == NULL)
            {
                Node *temp = node;
                node = node->left;
                delete temp;
                size--;
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
    void search(Node *&node, T data)
    {
        if (node == NULL)
        {
            cout << "Employee " << data->GetID() << " Not found!" << endl;
        }
        else if (data->GetID() < node->data->GetID())
        {
            search(node->left, data);
        }
        else if (data->GetID() > node->data->GetID())
        {
            search(node->right, data);
        }
        else
        {
            cout << "Employee Found" << endl;
            cout << "ID Number:" << node->data->GetID()
                 << "\t Name:" << node->data->GetName() << endl;
        }
    }
    void $(Node *node)
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

    void inOrder(Node *node, vector<T> &vec)
    {
        if (node != NULL)
        {
            inOrder(node->left, vec);
            vec.push_back(node->data);
            inOrder(node->right, vec);
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
    void deleteNode(T data)
    {
        deleteNode(root, data);
    }

    void search(T data)
    {
        search(root, data);
    }

    Node *getRoot()
    {
        return root;
    }

    void inOrder(vector<T> &vec)
    {
        inOrder(root, vec);
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

#endif // _HW_BINARY_TREE_H_
