/* 
Title: spells.h
Author: Julian Trujillo
date: 3/27/23
purpose: do create a database of spells learned by a student(the user) at Hogwarts
*/
#ifndef SPELLS_H
#define SPELLS_H

// libraries 
#include <iostream>
#include <iomanip>

using namespace std; 

// function prototypes
void getInfoFromUser(string [], int [], int);
double calculateAverage(int [], int);
int findLowest(int [], string [], int , string& weakestSpell);
int findHighest(int [], string [], int, string &strongestSpell);

// constant variables
const int SIZE = 10;

#endif