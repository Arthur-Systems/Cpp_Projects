#include "HWChain.h"
int main()
{
    HWChain chain;

    int MKey = 0, MValue = 0;

    chain.SetTableSize(10);

    for (int i = 0; i < 10; i++)
    {
        cout << "Please Enter The Key" << endl;
        cin >> MKey;
        cout << "Please Enter The Value" << endl;
        cin >> MValue;
        chain.insert(MKey, MValue);
        chain.print();
    }

    int searchKey = 0;
    cout << "Enter key to search: ";
    cin >> searchKey;
    int searchValue = chain.search(searchKey);
    if (searchValue == -1)
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "The last number of " << searchKey
             << " is " << searchValue << endl;
    }
    char choice;
    cout << "Do you want to delete a key? (y/n)" << endl;
    cin >> choice;
    while (choice == 'y')
    {
        int deleteKey = 0;
        cout << "Enter key to delete: ";
        cin >> deleteKey;
        chain.remove(deleteKey);
        chain.print();
        cout << "Do you want to delete another key? (y/n)" << endl;
        cin >> choice;
    }

    return 0;
}
/*
Please Enter The Key
1
Please Enter The Value
5
1 5
Please Enter The Key
2
Please Enter The Value
3
1 5
2 3
Please Enter The Key
1
Please Enter The Value
3
1 3
2 3
Please Enter The Key
3
Please Enter The Value
6
1 3
2 3
3 6
Please Enter The Key
4
Please Enter The Value
7
1 3
2 3
3 6
4 7
Please Enter The Key
3
Please Enter The Value
7
1 3
2 3
3 7
4 7
Please Enter The Key
1
Please Enter The Value
1
1 1
2 3
3 7
4 7
Please Enter The Key
1
Please Enter The Value
7
1 7
2 3
3 7
4 7
Please Enter The Key
5
Please Enter The Value
7
1 7
2 3
3 7
4 7
5 7
Please Enter The Key
5
Please Enter The Value
9
1 7
2 3
3 7
4 7
5 9
Enter key to search: 1
The last number of 1 is 7
Do you want to delete a key? (y/n)
y
Enter key to delete: 5
1 7
2 3
3 7
4 7
Do you want to delete another key? (y/n)
y
Enter key to delete: 4
1 7
2 3
3 7
Do you want to delete another key? (y/n)
n
*/