/* 
Title:     Lab_2a.cpp
Author:    Julian Trujillo
Date:      January-30-2023
Purpose:   To calculate how mant nematodes per house for Spongebob.
*/

#include <iostream>
using namespace std; 
int main()

{
int nematodesTamed;
int houses;
int nematodesPerHouse;

cout<< "Enter number of Nematodes saved ";
cin >> nematodesTamed;

houses =5;
nematodesPerHouse = nematodesTamed / houses;

cout<< "number of nematodes that will be assigned to each of the 5 houses: " << nematodesPerHouse << " Nematodes.";

return 0;
}