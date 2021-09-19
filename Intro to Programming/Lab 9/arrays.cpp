#include <iostream>

using namespace std;


int x=0;
int y=0;
int main()
{
 double grades[3][3] = {{1.0,9.0},{2.0,8.8},{3.0,7.0}};

 for(;x<3;x++){
     for(;y<2;y++){
    cout << grades[x][y] << " ";
     }
     y=0;
 }
return 0;
}
