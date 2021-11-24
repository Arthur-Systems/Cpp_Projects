#include "HWBinaryTree.h"

int main()
{
    // insert into the tree
    BinaryTree<int> tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);

    // remove from the tree
    tree.deleteNode(5);
    tree.deleteNode(3);
    tree.deleteNode(7);
    // print the tree
}