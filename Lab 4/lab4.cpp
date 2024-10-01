/* 
Title: Lab4.cpp
Author: Julian Trujillo
Date: February 13,2023
Purpose: To tell what you should do with your life based on how much screen time you have during the day
*/

#include <iostream>
using namespace std;

int main()
{
    int screen;
    int study;

    cout << "Rounding to the nearest hour, how many hours is you daily average PHONE screen time?\nAVG DAILY SCREEN-TIME HOURS: ";
    cin >> screen;

    while (screen < 0 || screen > 24)
    {
        cout << "\nYOU HAVE FAILED! Please enter a number 0-24: ";
        cin >> screen;
    }

    cout<< "\nRounding to the nearest hour, how many hours is you daily average study or homework time?\nAVG DAILY STUDY OR HOMEOWORK HOURS: ";
    cin >> study;

    while (study < 0 || study > 24)
    {
        cout << "\nYOU HAVE FAILED! Please enter a number 0-24: ";
        cin >> study;
    }

    if( screen <=2 && study < 2)
    {
        cout << "\nYou may want to study more if you wish to learn anything.\n";
    }
    else if (screen <=2 && study >= 6)
    {
        cout << "\nYou need to socialize with people more often.\n";
    }
    else if (screen > 2 && study >= 6 )
    {
        cout << "\nYou need to socialize with more people and get off that phone.\n";
    }
    else if (screen <= 2 && study >= 2 && study < 6)
    { 
        cout << "\nYou manage your time well.\n";
    }
    else if (screen >2 && study < 6)
    {
        cout << "\nWhat are you going to do if you lose that phone?\nIt is interfering with your ablility to have a real life.\n";
    }

 return 0;

}