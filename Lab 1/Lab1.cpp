/* 
Title:     Lab1.cpp
Author:    Julian Trujillo
Date:      January-23-2023
Purpose:   To convert from Celcius to Fahrenheit
*/

#include <iostream>
using namespace std; 
int main()
{

    double fahrenheit, celsius;
    cout <<"\n\nWhat is the tempurature in Celcius? ";
    cin >>celsius;
    fahrenheit = celsius * (9.0/5.0)+32;
    cout << "\nRESULT: " << celsius << "degrees Celcius is ";
    cout << fahrenheit << " degrees Fahrenheit. \n\n";
    return 0;

}