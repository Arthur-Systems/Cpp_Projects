/**
* @file harjaspreetrajasonsiLab2.cpp
* @author  Harjaspreet Rajasonsi
* @brief 

* @version 1
* @date 2022-07-04
*
* @copyright Copyright (c) 2022
*
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
double CostPerGallon = 0.0, MilesPerDay = 0.0;
int AvgMPG = 0, ParkingFee = 0, Tolls = 0;
// calculation variables
double TotalCost = 0.0, CarpoolCost = 0.0;

cout<<"Welcome to my carpool program!"<<endl;
cout << "Please enter the following data" <<endl;
cout<<"The cost of gas per gallon:(in dollars.cents):" ;
cin>>CostPerGallon;
while(cin.fail() || CostPerGallon <= 0){ // This just validates the input
     cout<<"Invalid input!"<<endl;
     cin.clear();
     cin.ignore(1000, '\n');
     cout<<"The cost of gas per gallon: ";
     cin>>CostPerGallon;
}
cout << "Adverage MPG : ";
cin>>AvgMPG;
while(cin.fail() || AvgMPG <= 0){ // This just validates the input
     cout<<"Invalid input!"<<endl;
     cin.clear();
     cin.ignore(1000, '\n');
     cout<<"Adverage MPG: ";
     cin>>AvgMPG;
}
cout << "Miles Driven Per Day: ";
cin>>MilesPerDay;
while(cin.fail() || MilesPerDay < 0){ // This just validates the input
     cout<<"Invalid input!"<<endl;
     cin.clear();
     cin.ignore(1000, '\n');
     cout<<"Miles Driven Per Day: ";
     cin>>MilesPerDay;
}
cout << "Parking Fee Per Day (in $): ";
cin>>ParkingFee;
while(cin.fail() || ParkingFee < 0){ // This just validates the input
     cout<<"Invalid input!"<<endl;
     cin.clear();
     cin.ignore(1000, '\n');
     cout<<"Parking Fee Per Day: ";
     cin>>ParkingFee;
}
cout << "Tolls Per Day (in $): ";
cin>>Tolls;
while(cin.fail() || Tolls < 0){ // This just validates the input 
     cout<<"Invalid input!"<<endl;
     cin.clear();
     cin.ignore(1000, '\n');
     cout<<"Tolls Per Day: ";
     cin>>Tolls;
}
cout<< setfill('*') << setw(20) << '*' << endl;
cout<< "Total Driving Cost Per Day: $";
TotalCost = (CostPerGallon * ( MilesPerDay / AvgMPG)) + ParkingFee + Tolls;
cout << fixed << setprecision(2) << TotalCost<<endl;
cout<< setfill('*') << setw(20) << '*' << endl;

cout << "\nCarpool Costs:" << endl;
for(int i = 1; i <= 5; i++)
{
     CarpoolCost = TotalCost / (i + 1);
     cout << i <<" Other Passengers: $ ";
     cout << fixed << setprecision(2) << right << CarpoolCost << endl;
}
//if youre reading this youre fucking gay <3


// \nCost per gallon of gasoline\nAverage miles per galon\nParking tees per day\n
// Tolls per day"
}



/*
!Terminal Output
Program Created By Harjaspreet Rajasonsi
Haichuans-MBP:Downloads arthur$ ./a.out 
Welcome to my carpool program!
Please enter the following data
The cost of gas per gallon:(in dollars.cents):4.5
Adverage MPG : 23
Miles Driven Per Day: 10
Parking Fee Per Day (in $): 5
Tolls Per Day (in $): 7
********************
Total Driving Cost Per Day: $13.96
********************

Carpool Costs:
1Passengers: $ 6.98
2Passengers: $ 4.65
3Passengers: $ 3.49
4Passengers: $ 2.79
5Passengers: $ 2.33
Haichuans-MBP:Downloads arthur$ 


*/
