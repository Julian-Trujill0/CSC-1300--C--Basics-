/*
author: Julian Trujillo
title: fucntions.cpp
Date: 4/16/2023
purpose: to provide fucntion definitions for the driver file
*/
#include "header.h"

//function used to collect users input
void getParanormalData(int numInvestigators, int* evps, string* names, string* dates )
{
    //for-loop to go through all of the arrays for the individual users
    for (int i = 0; i < numInvestigators; i++)
    {
        cout << "Investigator " << i+1 <<":\n";
        cout << "       NAME:";
        getline(cin,*(names+i));
        cout << "       DAY(ex: 04-03-2023): ";
        getline(cin,*(dates+i));
        cout << "      NUMBER OF EVPs: ";
        cin >> *(evps+i);
        cin.ignore();
    }
    cout << endl;
}

// fucntion to get all of the stats based on the users' input
void getStats(int numInvestigators, int* evps, int* total, double* average, int* most)
{
    // for-loop to find the total number of EVPs found by all users.
    int complete =0;
    for (int i = 0; i<numInvestigators; i++)
    {
        complete = complete + *(evps+i);
        
    }
    *total = complete;

    //used to find the average EVPs found per user
    *average = (complete/numInvestigators);

    // for-loop to find which user found the most EVPs
    *most = 0;
    for(int i=0; i<numInvestigators; i++)
    {
        if(*(evps+i) > *most)
        {*most = i;}

        else if (*(evps+i) < *most)
        {*most = *most;}
    }

}