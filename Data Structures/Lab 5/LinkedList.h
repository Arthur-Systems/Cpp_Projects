//
// Purpose-
// @author Haichuan Wei
// @version 1.0 9/21/21
// @param
// @return- 0 and prints out the sorted  data.
//
template <class T>
class LinkedList
{
private:
    // Declare a structure for the lis
    struct ListNode
    {
        T value;
        struct ListNode *next;
    };

    ListNode *head; // List head pointer

public:
    LinkedList() // Constructor
    {
        head = nullptr;
    }
    ~LinkedList(); // Destructor
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void displayList();
    int search(T); // search function
    T getTotal();
    int numNodes();
    T getAverage();
    T getLargest();
    int getLargestPosition();
    T getSmallest();
    int getSmallestPosition();
};