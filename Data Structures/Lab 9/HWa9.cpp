#include "HWBinaryTree.h"

/* This is test file for HWBinaryTree.h.
It hosts two test cases using the HWBinaryTree Tree.
The first test case tests interger values with all the functions.
The second test case tests double values with only
insert, delete, and print which was the in instruction.
*/
int main()
{
    HWBinaryTree<int> tree;
    cout << "Interger Test:" << endl;
    tree.insert(1);
    tree.insert(5);
    tree.insert(16);
    tree.insert(3);
    tree.insert(2);
    tree.insert(4);
    tree.insert(8);
    tree.insert(9);
    tree.insert(10);
    tree.preOrder();
    cout << endl;
    tree.inOrder();
    cout << endl;
    tree.postOrder();
    cout << endl;
    cout << " Searching for 16: " << endl;
    tree.search(16);
    cout << " Searching for 17: " << endl;
    tree.search(17);
    tree.deleteNode(16);
    tree.preOrder();
    cout << endl;
    tree.inOrder();
    cout << endl;
    tree.postOrder();
    cout << endl;

    cout << "\n\n Double Test: " << endl;
    HWBinaryTree<double> tree2;
    tree2.insert(2.1);
    tree2.insert(5.4);
    tree2.insert(16.16);
    tree2.insert(3.3);
    tree2.insert(8.5);
    tree2.insert(3.2);
    tree2.insert(1.4);
    tree2.insert(9.9);
    tree2.inOrder();
    cout << endl;
    tree2.deleteNode(16.16);
    tree2.deleteNode(1.4);
    tree2.inOrder();
    cout << endl;

    return 0;
}

/*
 ./BinaryTree
Interger Test:
Travering and displaying the tree using Preorder:
1 5 3 2 4 16 8 9 10
Travering and displaying the tree using Inorder:
1 2 3 4 5 8 9 10 16
Travering and displaying the tree using Postorder:
2 4 3 10 9 8 16 5 1
 Searching for 16:
16 Found!
 Searching for 17:
17 NOT FOUND!
Removeing 16
Travering and displaying the tree using Preorder:
1 5 3 2 4 8 9 10
Travering and displaying the tree using Inorder:
1 2 3 4 5 8 9 10
Travering and displaying the tree using Postorder:
2 4 3 10 9 8 5 1


 Double Test:
Travering and displaying the tree using Inorder:
1.4 2.1 3.2 3.3 5.4 8.5 9.9 16.16
Removeing 16.16
Removeing 1.4
Travering and displaying the tree using Inorder:
2.1 3.2 3.3 5.4 8.5 9.9
*/