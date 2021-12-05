#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "dbconnect.h"

using namespace std;

void connect_db(MYSQL *&conn)
{
    MYSQL *conn;      // the connection
    MYSQL_RES *res;   // the results
    MYSQL_ROW fields; // the results row (line by line)

    struct connection_details mysqlD;
    mysqlD.server = (char *)"localhost";     // where the mysql database is
    mysqlD.user = (char *)"cs116";           // the root user of mysql
    mysqlD.password = (char *)"OhloneC$116"; // the password of the user in mysql
    mysqlD.database = (char *)"mysql";       // the databse to pick

    // make a connection to the database
    conn = mysql_init(NULL);
};
