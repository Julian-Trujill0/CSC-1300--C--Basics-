/* 
Title:     Lab_2c.cpp
Author:    Julian Trujillo
Date:      January-30-2023
Purpose:   To calculate how much money you spend on games in 3 months and the average price of all the games.
*/


#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
    // the next 4 lines are to give me my variables for the next 3 months of data.
    string month1, month2, month3; 
    double game_1a, game_2a, game_3a;
    double game_1b, game_2b, game_3b;
    double game_1c, game_2c, game_3c;
    double month1_total, month2_total, month3_total;
    double completeTotal;
    double avgGamePrice;


    //this block is for the first month
    cout << fixed << setprecision(2);
    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Price of Game 1: $";
    cin >> game_1a;  
    cout << "Price of Game 2: $";
    cin >> game_2a;
    cout << "Price of Game 3: $";
    cin >> game_3a;
    month1_total = game_1a + game_2a + game_3a;
    cout << "Total cost of all three games in " << month1 << ": $"<< month1_total;
    cout<< endl<< endl;


    // This block is for the second month
    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Price of game 1: $";
    cin >> game_1b;
    cout << "Price of game 2: $";
    cin >> game_2b;
    cout << "Price of game 3: $";
    cin >> game_3b;
    month2_total = game_1b + game_2b + game_3b;
    cout << "Total cost of all three games in " << month2<< ": $"<< month2_total;
    cout << endl << endl;


    // this block is for the third month 
    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Price of game 1: $";
    cin >> game_1c;
    cout << "Price of game 2: $";
    cin >> game_2c;
    cout << "Price of game 3: $";
    cin >> game_3c;
    month3_total = game_1c + game_2c + game_3c;
    cout << "Total cost of all three games in " << month3<< ": $"<< month3_total<< endl<<endl;
    

    // this next block is for the total over the last three months as well as the avg price per game 
    completeTotal = month1_total + month2_total + month3_total;
    avgGamePrice = completeTotal / 9;
    cout << "Total amount spent over all 3 months: $" << completeTotal<<endl;
    cout << "The average price per game is: $"<< avgGamePrice;

    return 0;
}