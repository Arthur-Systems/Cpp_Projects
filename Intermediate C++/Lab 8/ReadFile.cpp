#include "ReadFile.h"

int main()
{
    vector<Person *> fptr;
    printMeFirst("Haichuan Wei", "Read File lab");
    readInfo("person.txt", fptr);
    printSortInfo(fptr, -1); // no sort
    printSortInfo(fptr, 0);  // sorted by month
    // printSortInfo(fptr, 1);  // sorted by year
    return 0;
}