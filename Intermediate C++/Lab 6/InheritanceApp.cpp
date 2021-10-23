
#include "printMeFirst.h"
#include "Inheritance.h"
int main()
{
    Person maxwell("Maxwell Smith", "M");
    Instructor mary;
    Student jonathan;
    Instructor ron("Ron Sha", "M", 50000);
    printMeFirst("Haichuan Wei", "Lab Employee");
    mary.set_name("Mary Smith");
    mary.set_gender("F");
    mary.set_salary(85000);
    jonathan.set_name("Jonathan Smith");
    jonathan.set_gender("M");
    jonathan.set_major("Computer Science");
    maxwell.display();
    cout << endl;
    mary.display();
    cout << endl;
    jonathan.display();
    cout << endl;
    ron.display();
    cout << endl;
    return 0;
}