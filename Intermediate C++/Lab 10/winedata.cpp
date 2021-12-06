
#include "winedata.h"
using namespace std;
//print header
void printHeader()
{
    cout << "   " << setw(25) << "Wine Name"
         << setw(23) << "Vintage"
         << setw(9) << "Rating"
         << setw(7) << "Price"
         << setw(9) << "Type"
         << endl;
    cout << "   " << setw(25) << "---------"
         << setw(23) << "-------"
         << setw(9) << "------"
         << setw(7) << "-----"
         << setw(9) << "----"
         << endl;
};

void printwine(MYSQL_RES *res)
{
    MYSQL_ROW row;
    int count = 0;
    double price = 0;
    double whiteprice = 0;
    double redprice = 0;
    int redcount = 0;
    int whitecount = 0;

    //print the result of the sql query
    printHeader();
    while ((row = mysql_fetch_row(res)) != NULL)
    {
        string type = row[4];
        count++;
        price += atof(row[3]);
        /* print out each row of the data extracted from
          * MySQL database
          * Make sure the output is line up with the header
          * Hint: use left and setw
          */

        cout << "   " << setw(42) << left << row[0] << " " // coulumn (field) #1 - Wine Name
             << setw(6) << row[1] << "  "                  // field #2 - Vintage
             << setw(7) << row[2] << "  "                  // field #3 - Rating/Score
             << setw(8) << row[3] << "  "                  // field #4 - Price
             << setw(8) << row[4] << "  "                  // field #5 - Wine type
             << endl;                                      //
        if (type == "White" || type == "white")
        {
            whitecount++;
            whiteprice += atof(row[3]);
        }
        else if (type == "Red" || type == "red")
        {
            redcount++;
            redprice += atof(row[3]);
        }
    }
    cout << "\n________________________________________________\n"
         << endl;
    cout << "Number of wines: " << count << "    Average price: $"
         << fixed << setprecision(2) << price / count << endl;
    cout << "Number of red wines: " << redcount << "    Average price: $"
         << fixed << setprecision(2) << redprice / redcount << endl;
    cout << "Number of white wines: " << whitecount << "    Average price: $"
         << fixed << setprecision(2) << whiteprice / whitecount << endl;
    cout << "\n________________________________________________\n"
         << endl;
};

string displayprice()
{
    int x, y;
    cout << "Please enter the lower bound of price (0>):" << endl;
    cin >> x;
    if (cin.fail() || x < 0)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input, please enter again: ";
        cin >> x;
    }

    cout << "Please enter the upper bound of price(100<):" << endl;
    cin >> y;
    if (cin.fail() || y < 0 || x > y)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input, please enter again: ";
        cin >> y;
    }
    string query = "SELECT * FROM wineInfo WHERE price BETWEEN " + to_string(x) + " AND " + to_string(y) + " order by price DESC , score DESC ";
    return query;
};
string displayscore()
{
    int x, y;
    cout << "Please enter the lower bound of score(0>):" << endl;
    cin >> x;
    if (cin.fail() || x < 0 || x > 100)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input, please enter again: ";
        cin >> x;
    }

    cout << "Please enter the upper bound of score(100<):" << endl;
    cin >> y;
    if (cin.fail() || y < 0 || x > y || y > 100)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input, please enter again: ";
        cin >> y;
    }
    string query = "SELECT * FROM wineInfo WHERE score BETWEEN " + to_string(x) + " AND " + to_string(y) + "  order by score ASC ";
    return query;
};
string topten()
{
    string query = "SELECT * FROM wineInfo order by price DESC limit 10";
    return query;
};

string insertwine()
{

    string name, type;
    int vintage, score, price, upc;
    cout << "Please enter the name of the wine: " << endl;
    cin >> name;
    cout << "Please enter the vintage of the wine: " << endl;
    cin >> vintage;
    cout << "Please enter the score of the wine: " << endl;
    cin >> score;
    cout << "Please enter the price of the wine: " << endl;
    cin >> price;
    cout << "Please enter the type of the wine: " << endl;
    cin >> type;
    cout << "Please enter the upc of the wine: " << endl;
    cin >> upc;
    string query = "INSERT INTO wineInfo (name, vintage, score, price, type, upc) VALUES ('" + name + "', " + to_string(vintage) + ", " + to_string(score) + ", " + to_string(price) + ", '" + type + "', " + to_string(upc) + ")";
    return query;
};
string updatewine()
{
    string name, type;
    int vintage, score, price, upc;
    cout << "which data do you want use to update other data?" << endl;
    cout << "1. name" << endl;
    cout << "2. upc" << endl;
    int onetwo;
    cin >> onetwo;
    if (cin.fail() || onetwo < 1 || onetwo > 2)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input, please enter again: ";
        cin >> onetwo;
    }
    switch (onetwo)
    {
    case 1:
    {
        cout << "Please enter the name of the wine: " << endl;
        cin >> name;
        break;
    }
    case 2:
    {
        cout << "Please enter the upc of the wine: " << endl;
        cin >> upc;
        break;
    }
    }
    cout << "\n \n 1. name" << endl;
    cout << "2. vintage" << endl;
    cout << "3. score" << endl;
    cout << "4. price" << endl;
    cout << "5. type" << endl;
    cout << "6. upc" << endl;
    int choice;
    cin >> choice;
    if (cin.fail() || choice < 1 || choice > 6)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input, please enter again: ";
        cin >> choice;
    }
    switch (choice)
    {
    case 1:
        cout << "Please enter the new name of the wine: " << endl;
        cin >> name;
        break;
    case 2:
        cout << "Please enter the new vintage of the wine: " << endl;
        cin >> vintage;
        break;
    case 3:
        cout << "Please enter the new score of the wine: " << endl;
        cin >> score;
        break;
    case 4:
        cout << "Please enter the new price of the wine: " << endl;
        cin >> price;
        break;
    case 5:
        cout << "Please enter the new type of the wine: " << endl;
        cin >> type;
        break;
    case 6:
        cout << "Please enter the new upc of the wine: " << endl;
        cin >> upc;
        break;
    }
    string query = "UPDATE wineInfo SET ";
    switch (choice)
    {
    case 1:
        query += "name = '" + name + "' ";
        break;
    case 2:
        query += "vintage = " + to_string(vintage) + " ";
        break;
    case 3:
        query += "score = " + to_string(score) + " ";
        break;
    case 4:
        query += "price = " + to_string(price) + " ";
        break;
    case 5:
        query += "type = '" + type + "' ";
        break;
    case 6:
        query += "upc = " + to_string(upc) + " ";
        break;
    }
    query += "WHERE ";
    switch (onetwo)
    {
    case 1:
        query += "name = '" + name + "' ";
        break;
    case 2:
        query += "upc = " + to_string(upc) + " ";
        break;
    }
    return query;
};