/* 
Title:     Lab_2a.cpp
Author:    Julian Trujillo
Date:      January-30-2023
Purpose:   To calculate amount of pet food needed per day as well as total cost of pet food per week.
*/
#include <iostream> 
using namespace std; 
int main()

{
int numPuppies; 
int foodPerDay;
int costPerWeek;

cout << "Puppy Food Cost Calculator" <<endl;

cout << " Please enter the number of puppies: ";
cin >> numPuppies; 

foodPerDay = numPuppies * 2 ;
costPerWeek = (foodPerDay * 3)*7;

cout<< "The amount of food needed per day is: "<< foodPerDay<< " cups" << endl;
cout << "The total cost of pet food for the week is: $"<< costPerWeek;

return 0;
}