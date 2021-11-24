#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;
template <class T>
class BinaryTree
{
public:
    // inserting an element into the tree, deleting an element from the tree, searching for an element in the tree and support pre-order, in-order, and post-order traversals of the tree.
    void insert(T)
    {
        cout << "inserting" << endl;
        if (root == NULL)
        {
            root = new Node<T>(data);
        }
        else
        {
            Node<T> *current = root;
            Node<T> *parent;
            while (true)
            {
                parent = current;
                if (data < current->data)
                {
                    current = current->left;
                    if (current == NULL)
                    {
                        parent->left = new Node<T>(data);
                        break;
                    }
                }
                else
                {
                    current = current->right;
                    if (current == NULL)
                    {
                        parent->right = new Node<T>(data);
                        break;
                    }
                }
            }
        }
    }
    void deleteNode(T)
    {
        cout << "deleting" << endl;
        // deleting an element from the tree
        if (root == NULL)
        {
            return;
        }
        else
        {
            Node<T> *current = root;
            Node<T> *parent = root;
            bool isLeftChild = true;
            while (current->data != data)
            {
                parent = current;
                if (data < current->data)
                {
                    isLeftChild = true;
                    current = current->left;
                }
                else
                {
                    isLeftChild = false;
                    current = current->right;
                }
                if (current == NULL)
                {
                    return;
                }
            }
            // if current has no children
            if (current->left == NULL && current->right == NULL)
            {
                if (current == root)
                {
                    root = NULL;
                }
                else if (isLeftChild)
                {
                    parent->left = NULL;
                }
                else
                {
                    parent->right = NULL;
                }
            }
            // if current has only right child
            else if (current->left == NULL)
            {
                if (current == root)
                {
                    root = current->right;
                }
                else if (isLeftChild)
                {
                    parent->left = current->right;
                }
                else
                {
                    parent->right = current->right;
                }
            }
            // if current has only left child
            else if (current->right == NULL)
            {
                if (current == root)
                {
                    root = current->left;
                }
                else if (isLeftChild)
                {
                    parent->left = current->left;
                }
                else
                {
                    parent->right = current->left;
                }
            }
            // if current has both children
            else
            {
                Node<T> *successor = getSuccessor(current);
                if (current == root)
                {
                    root = successor;
                }
                else if (isLeftChild)
                {
                    parent->left = successor;
                }
                else
                {
                    parent->right = successor;
                }
                successor->left = current->left;
            }
        }
    }
    bool search(T)
    {
        // searching for an element in the tree
        Node<T> *current = root;
        while (current->data != data)
        {
            if (data < current->data)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
            if (current == NULL)
            {
                return false;
            }
        }
        return true;
    }
    void preOrder(Node<T> *node)
    {
        if (node != NULL)
        {
            cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
    void inOrder(Node<T> *node)
    {
        if (node != NULL)
        {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }
    void postOrder(Node<T> *node)
    {
        if (node != NULL)
        {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->data << " ";
        }
    }
    void PrintTree(Node<T> *node)
    {
        if (node == NULL)
        {
            return;
        }
        PrintTree(node->left);
        cout << node->data << " ";
        PrintTree(node->right);
    }

    // constructor
    BinaryTree()
    {
        root = NULL;
    }
    // destructor
    ~BinaryTree()
    {
        delete root;
    }
    // private variables
private:
    // root node
    struct Node
    {
        T data;
        Node *left;
        Node *right;
    };
    Node *root;
    // private functions
    void insert(T, Node *);
    void deleteNode(T, Node *);
    bool search(T, Node *);
    void preOrderTraversal(Node *);
    void inOrderTraversal(Node *);
    void postOrderTraversal(Node *);
};
