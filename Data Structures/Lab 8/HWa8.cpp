#include "HWChain.h"

// chaining hash

int main()
{
    HWChain chain;

    int tableSize = 10;
    int table[10];
    int MKey = 0, MValue = 0;
    chain.setSize(tableSize);

    for (int i = 0; i < tableSize; i++)
    {

        cout << "Please Enter The Key" << endl;
        cin >> MKey;
        cout << "Please Enter The Value" << endl;
        cin >> MValue;
        chain.insert(MKey, MValue);
        chain.printTable();
    }

    int searchKey = 0;
    cout << "Enter key to search: ";
    cin >> searchKey;
    int searchValue;
    searchValue = chain.search(searchKey);
    if (searchValue == -1)
    {
        cout << "The Key has not been found!" << endl;
    }
    else
    {
        cout << "The Number of values on the is: " << searchValue << endl;
    }
}