//
//  main.cpp
//  HarjaspreetRajasonsiLab3
//
//  Created by Harjaspreet Rajasonsi on 7/15/22.
//

#include <iostream>
using namespace std;

// pass by reference
void getScore(int(&score1), int(&score2), int(&score3), int(&score4), int(&score5));
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
    int score1, score2, score3, score4, score5;
    getScore(score1, score2, score3, score4, score5);
    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than an (int) or anything *
 * not within a 0-100 range, it will display an error,  *
 * clear the input stream, ignore previous input up     *
 * untill the new line (\n) character.                  *
 ********************************************************/

void getScore(int(&score1), int(&score2), int(&score3), int(&score4), int(&score5))
{
    cout << "Enter score 1: ";
    cin >> score1;
    while (cin.fail() || score1 < 0 || score1 > 10)
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input. Please enter a number between 0 and 10: ";
        cin >> score1;
    }

    cout << "Enter score 2: ";
    cin >> score2;
    while (cin.fail() || score2 < 0 || score2 > 10)
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input. Please enter a number between 0 and 10: ";
        cin >> score2;
    }

    cout << "Enter score 3: ";
    cin >> score3;
    while (cin.fail() || score3 < 0 || score3 > 10)
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input. Please enter a number between 0 and 10: ";
        cin >> score3;
    }

    cout << "Enter score 4: ";
    cin >> score4;
    while (cin.fail() || score4 < 0 || score4 > 10)
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input. Please enter a number between 0 and 10: ";
        cin >> score4;
    }

    cout << "Enter score 5: ";
    cin >> score5;
    while (cin.fail() || score5 < 0 || score5 > 10)
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Invalid input. Please enter a number between 0 and 10: ";
        cin >> score5;
    }
}

/********************************************************
 * Function Definition for void calcAverage():          *
 * calcAverage() should calculate and display the       *
 * average of the four highest scores. This function    *
 * should be called just once by main and should be     *
 * passed the five scores.                              *
 ********************************************************/
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    cout << score1 << " " << score2 << " " << score3 << " " << score4 << " " << score5 << endl;
    int average = 0;
    int lowest = findLowest(score1, score2, score3, score4, score5);
    average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4;
    cout << "After dropping the lowest score " << lowest << "\n The average of the four highest scores is: " << average << endl;
}

/********************************************************
 * Definition of lowest():                              *
 * lowest using a if statmenent to find the lowest      *
 * number.                                              *
 ********************************************************/

/********************************************************
 * Function Definition for int findLowest():            *
 * findLowest() should find and return the lowest of    *
 * the five scores passed to it. It should be called by *
 * calcAverage, which uses the function to determine    *
 * which of the five scores to drop.                    *
 ********************************************************/
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowest = score1;
    if (score2 < lowest)
    {
        lowest = score2;
    }
    if (score3 < lowest)
    {
        lowest = score3;
    }
    if (score4 < lowest)
    {
        lowest = score4;
    }
    if (score5 < lowest)
    {
        lowest = score5;
    }
    return lowest;
}
