/*

http://www.codingfriends.com/index.php/2010/02/17/mysql-connection-example/
To compile up this program you will need to link to the mysql libraries and headers that are used within the program, e.g. mysql.h at the top of the program. To gain access to these, there is a nice mysql_config (you may need to install it via your package manager system if you do not have it already).
Here are my outputs of what is required on the command line for the g++ compiler
g++ -I/usr/include/mysql winedb.cpp -o winedb -L/usr/lib/mysql -lmysqlclient
./windb "select * from wineInfo where price > 100"
*/
#include </usr/include/mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "dbconnect.h"
#include "winedb.h"

using namespace std;

int main(int argc, char *argv[])
{
   connect_db();
}
