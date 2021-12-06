#include "printMeFirst.h"
#include </usr/include/mysql/mysql.h>
#include "winedata.h"
#include "dbconnect.h"
using namespace std;

int main(int argc, char *argv[])
{
   printMeFirst("Haichuan Wei", "CS116 Lab 10");
   //connect to the database
   MYSQL *conn;      // the connection
   MYSQL_RES *res;   // the results
   MYSQL_ROW fields; // the results row (line by line)
   struct connection_details mysqlD;
   mysqlD.server = (char *)"localhost";     // where the mysql database is
   mysqlD.user = (char *)"cs116";           // the root user of mysql
   mysqlD.password = (char *)"OhloneC$116"; // the password of the user in mysql
   mysqlD.database = (char *)"mysql";       // the databse to pick
   // connect to the mysql database
   conn = mysql_connection_setup(mysqlD);
   res = mysql_perform_query(conn, (char *)"use cs116");

   // perform the query
   cout << "Welcome to the wine database!" << endl;
   cout << "Please select an option:" << endl;
   cout << "1. Display wine Between two scores" << endl;
   cout << "2. Display wine between two prices" << endl;
   cout << "3. Display top 10 wine" << endl;
   cout << "4. Insert New Wine" << endl;
   cout << "5. Update an existing Wine data" << endl;
   cout << "6. Quit" << endl;
   int selection;
   cin >> selection;
   while (selection != 6)
   {
      if (selection == 1)
      {
         string query = displayscore();
         res = mysql_perform_query(conn, (char *)query.c_str());
         printwine(res);
         cout << query << endl;
      }
      else if (selection == 2)
      {
         string query = displayprice();
         res = mysql_perform_query(conn, (char *)query.c_str());
         printwine(res);
         cout << query << endl;
      }
      else if (selection == 3)
      {
         string query = topten();
         res = mysql_perform_query(conn, (char *)query.c_str());
         printwine(res);
         cout << query << endl;
      }
      else if (selection == 4)
      {
         string query = insertwine();
         mysql_perform_query(conn, (char *)query.c_str());
         cout << query << endl;
         res = mysql_perform_query(conn, (char *)"select * from wineInfo");
         printwine(res);
         cout << query << endl;
      }
      else if (selection == 5)
      {
         string query = updatewine();
         mysql_perform_query(conn, (char *)query.c_str());
         cout << query << endl;
         printwine(res);
         cout << query << endl;
      }
      else
      {
         cout << "Invalid selection" << endl;
      }
      while (cin.fail() || selection < 1 || selection > 6)
      {
         cout << "Invalid input, please enter a number between 1 and 6" << endl;
         cin.clear();
         cin.ignore(256, '\n');
         cin >> selection;
      }
      cout << "Please select an option:" << endl;
      cout << "1. Display wine Between two scores" << endl;
      cout << "2. Display wine between two prices" << endl;
      cout << "3. Display top 10 wine" << endl;
      cout << "4. Insert New Wine" << endl;
      cout << "5. Update an existing Wine data" << endl;
      cout << "6. Quit" << endl;
      cin >> selection;
   }
   /* clean up the database link */
   mysql_close(conn);
   return 0;
}
