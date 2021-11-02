//
// Purpose- This lab is to practice the use of dynamic stack template class.
// @author Haichuan Wei
// @version 1.0 9/21/21
//@function main() - the main function of the program
// @class DynStk()- this is the constructor for the DynStk class
// @class ~DynStk()- this is the destructor for the DynStk class
// @class push(T elements)- this the dynamically adds an element to the 
// @class pop()- this is the dynamically removes an element from the stack
// @class top()- this returns the top element of the stack
// @return- returns elements in the stack
//

#include <iostream>
using namespace std;
#ifndef _HW_DYNSTK_H_
#define _HW_DYNSTK_H_
template <class T>
class DynStk
{
public:
    //Constructor
    DynStk(int size){
        m_size = size;
        m_top = -1;
        m_stack = new T[m_size];
    }
    //Destructor
    ~DynStk(){
        delete [] m_stack;
    }

    void push(T element){
        if(m_top == m_size - 1){
            cout << endl<<"Attempting to POP again... The stack is empty." << endl;
            return;
        }
        m_top++;
        m_stack[m_top] = element;
    }
    T pop(){
        if(m_top == 0){
            cout <<endl<< "Attempting to POP again... The stack is empty." << endl;
            return 0;
        }
        return m_stack[m_top--];
    }
    T top(){
        if(m_top == -1){

            return 0;
        }
        return m_stack[m_top];
    }
    

private:
    T *m_stack;
    int m_size;
    int m_top;
};

#endif // _HW_DYNSTK_H_