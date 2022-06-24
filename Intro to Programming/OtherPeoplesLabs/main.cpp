//
// Purpose- this lab aims to improve our second lab
// by using linked lists instead of arrays.
// This lab is pretty much the same as the first lab,
// except we are using linked lists instead of arrays.
// @author Haichuan Wei
// @version 1.0 9/21/21
// @class  LinkedList() - constructor
// @class  ~LinkedList() - destructor
// @class template appendNode(T) -
// this function adds a node to the list this also
// allocates more memory for the entire list.
// @class template insertNode(T) - this function inserts a node to the list.
// @class template deleteNode(T) - this function deletes a node from the list.
// @class template search(T) - searches for a node in the list.
// @class template getTotal() - adds up the total of all the nodes in the list.
// @class function int numNodes() - returns the number of nodes in the list.
// @class template T getAverage(); -
// returns the average of all the nodes in the list.
// @class template T getLargest() -
// returns the largest value of all the nodes in the list.
// @class template T getSmallest() -
// returns the smallest value of all the nodes in the list.
// @class function int getLargestPosition() -
// returns the position of the largest value of all the nodes in the list.
// @class function int getSmallestPosition() -
// returns the position of the smallest value of all the nodes in the list.
// @return- none
//

 /**
 * @file main.cpp
 * @author  *change*
 * @brief The purpose of this program is to use varables to 
 construct arithmetic expressions, using the varables defnied 
 This program aims to provide practice on how to manipulate data and varables.
 * @version 1
 * @date 2022-06-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    //!Varaible Declaration
    int my_id= 27;
    int num_let= 9;
    const int LEFT_MOST_DIGIT = 5; 
    //!Programmer Information
    cout<< "Program Created By Harjaspreet Rajasonsi"
    cout<<"My student ID is:  \n My Last Name Is: Rajasonsi" <<endl;
    cout<<"my_id is: " <<my_id <<endl;
    cout <<"num_let is: " <<num_let <<endl;
   //!Structuring the program
    cout<< setfill('*') << setw(50) << "*" << endl;
    cout<< setw(10) << "Expression" << setw(10) << "Value" << endl;
    cout<< setw(10) << "---------" << setw(10) << "-----" << endl;  
   // !Start of the expression
    cout<<setw(10) <<  "Expression #1:" << my_id <<" /2= " << setw(10) my_id/2 <<endl; 
    cout<<setw(10) <<  "Expression #2:" << my_id <<" %2= " << setw(10) my_id%2 <<endl;
    for (; num_let > 0; num_let--){
    cout<< setw(10) << "Expression #3" << 
    num_let += num_let-1;
    }
    cout << setw(10)<< num_let << endl;


     



     int int_result = 0;
     double double_result = 0;
    
}