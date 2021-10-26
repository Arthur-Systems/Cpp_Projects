//
//
//
//
//
//
//
//
//
//
//

#include <iostream>
using namespace std;
#ifndef _HW_DYNSTK_H_
#define _HW_DYNSTK_H_

//Define a dynamic stack template. 
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
    //Push an element onto the stack
    void push(T element){
        if(m_top == m_size - 1){
            cout << "Stack is full" << endl;
            return;
        }
        m_top++;
        m_stack[m_top] = element;
    }
    //Pop an element off the stack
    T pop(){
        if(m_top == -1){
            cout << "Stack is empty" << endl;
            exit(1);
        }
        return m_stack[m_top--];
    }
    //Return the top element of the stack
    T top(){
        if(m_top == -1){
            cout << "Stack is empty" << endl;
            exit(1);
        }
        return m_stack[m_top];
    }
    //Return the size of the stack
    int size(){
        return m_size;
    }
    //Return true if the stack is empty
    bool empty(){
        return m_top == -1;
    }
    //Return true if the stack is full
    bool full(){
        return m_top == m_size - 1;
    }
    //Print the stack
    void print(){
        for(int i = 0; i <= m_top; i++){
            cout << m_stack[i] << " ";
        }
        cout << endl;

      
    }
private:
    T *m_stack;
    int m_size;
    int m_top;
 

};

#endif // _HW_DYNSTK_H_