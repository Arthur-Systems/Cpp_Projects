#include "HWEmployee.h"
#include "HWBinaryTree.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    HWBinaryTree<EmployeeInfo *> tree;
    EmployeeInfo *e1 = new EmployeeInfo("Giorgio Carroll", 123456);
    tree.insert(e1);
    EmployeeInfo *e2 = new EmployeeInfo("Terry Hulme", 177777);
    tree.insert(e2);
    EmployeeInfo *e3 = new EmployeeInfo("Anish Rooney", 654237);
    tree.insert(e3);
    EmployeeInfo *e4 = new EmployeeInfo("Ariella Rooney", 789032);
    tree.insert(e4);
    EmployeeInfo *e5 = new EmployeeInfo("Darcie Dodson", 654576);
    tree.insert(e5);
    EmployeeInfo *e6 = new EmployeeInfo("Conna Manning", 236543);
    tree.insert(e6);
    EmployeeInfo *e7 = new EmployeeInfo("Oliver Arias", 764514);
    tree.insert(e7);
    EmployeeInfo *e8 = new EmployeeInfo("Sahil Swift", 753896);
    tree.insert(e8);
    EmployeeInfo *e9 = new EmployeeInfo("Fay Kane", 754723);
    tree.insert(e9);
    EmployeeInfo *e10 = new EmployeeInfo("Vishal Jensen", 999999);
    tree.insert(e10);
    cout << "Workforce:" << endl;
    vector<EmployeeInfo *> vec;
    tree.inOrder(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i]->print();
    }
    cout << endl;
    while (true)
    {
        cout << "Enter Employee ID to search: ";
        int id;
        cin >> id;
        EmployeeInfo *e = new EmployeeInfo("", id);
        cout << "Searching for ID: " << id << endl;
        tree.search(e);
    }
}
/*
Workforce:
ID Number:123456         Name:Giorgio Carroll
ID Number:177777         Name:Terry Hulme
ID Number:236543         Name:Conna Manning
ID Number:654237         Name:Anish Rooney
ID Number:654576         Name:Darcie Dodson
ID Number:753896         Name:Sahil Swift
ID Number:754723         Name:Fay Kane
ID Number:764514         Name:Oliver Arias
ID Number:789032         Name:Ariella Rooney
ID Number:999999         Name:Vishal Jensen

Enter Employee ID to search: 658746
Searching for ID: 658746
Employee 658746 Not found!
Enter Employee ID to search: 753896
Searching for ID: 753896
Employee Found
ID Number:753896         Name:Sahil Swift
Enter Employee ID to search: 999999
Searching for ID: 999999
Employee Found
ID Number:999999         Name:Vishal Jensen
Enter Employee ID to search: 654237
Searching for ID: 654237
Employee Found
ID Number:654237         Name:Anish Rooney
Enter Employee ID to search: 753894
Searching for ID: 753894
Employee 753894 Not found!
Enter Employee ID to search: ^C
*/