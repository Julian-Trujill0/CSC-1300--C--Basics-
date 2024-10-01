/* 
Title: functions.cpp
Author: Julian Trujillo
date: 3/27/23
purpose: do create a database of spells learned by a student(the user) at Hogwarts
*/

#include "spells.h"

//User input for spells (name and effect)
void getInfoFromUser(string name[], int effect[], int size)
{
    cout << "Please enter the spell(s) that you have learned.\n";

    // for loop in order to make sure that the user can enter the info for each individual spell.
    for(int i=0; i<SIZE; i++)
    {
        cout << "Spell "<< i+1 << ": \n";
        cout << "         NAME- ";
        getline(cin,name[i]);
        cout << "         EFFECT- ";
        cin >> effect[i];
        cout << endl;
        cin.ignore();
    }
}

//calculaltes the average of all of the spells entered and returns the value
double calculateAverage(int effects[], int size )
{
    double totalAvg;
    int amount =0;

    //going though all of the spells and their effects in order find the average
    for(int i=0; i <SIZE; i++)
    {
        amount += effects[i];
    }
    totalAvg = double(amount)/SIZE;

    return totalAvg;
}


// find the weakest spell that you have entered
int findLowest(int effect[], string names[], int size, string& weakestSpell)
{
    int weakest;
    weakest = effect[0];
    weakestSpell = names[0];
    
    // for loop in order to go through the array in order to find the weakest spell
    for(int i=0; i<size; i++)
    {
        if(effect[i] < weakest)
        {
            weakest = effect[i];
            weakestSpell = names[i];
        }
        
    }
    
    
    return weakest;
}


// finds the strongest spell that you have entered
int findHighest(int effect[], string names[], int size, string &strongestSpell)
{
    int highest;
    highest= effect[0];
    strongestSpell = names[0];

    // for loop to go though all of the spells and their effect levels
    for(int i=0; i < size; i++)
    {
        if(effect[i] > highest)
        {
           highest = effect[i];
           strongestSpell = names[i];
        }
    }

    return highest;
}