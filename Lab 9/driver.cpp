/*
title: driver.cpp
author: Julian Trujillo
date: 4/16/2023 
purpose: create a database of paranormal activity sightings for a company 
*/

#include "header.h"
int main()
{
    // variables and pointers 
    string line('-',30);
    int numInvestigators;
    int totalRecordings;
    int index;
    double avgRecordings;
    int* evps ;
    string* name;
    string* date;
    char location [100];
    
    //introduction 
    cout << "Hello! What haunted location are you investigating?\n";
    cin.getline(location,100);
    cout << endl;

    // input for how many users 
    cout << "How many investigators will be working at this location?\n";
    cin >> numInvestigators;
    // user input validation
    while(numInvestigators <=0 || numInvestigators > 25)
    {
        cout << "The number of investigators you have entered is invalid.\n";
        cout << "Please enter the number of investigators that will be working.(1-25)\n";
        cin >> numInvestigators;
    }
    cin.ignore();
     
    //dynamic allocation of arrays with pointers 
    name = new string[numInvestigators];
    date = new string[numInvestigators];
    evps = new int[numInvestigators];
    cout << "Enter the investigator's name, the day of their investigation, and the number of EVPs\n";
    cout << "they recorded on their voice recorder.\n";

    // function calls
    getParanormalData(numInvestigators, evps, name, date); //used to get all of the information needed from the users
    getStats(numInvestigators, evps, &totalRecordings, &avgRecordings, &index); // does all of the math in order to get the stats 
    

    // output of the results 
    cout << line << endl;
    cout << "The total amount of EVPS recorded by all " << numInvestigators << " at " << location << endl << " is " << totalRecordings << " recordings\n";
    cout << endl;
    cout <<"The average amount of EVPS recorded at " << location << endl << " is " << avgRecordings << " recordings\n";
    cout << endl;
    cout << "The investigator who recorded the most (" << *(evps+index) << " recordings)\n is " << *(name+index) << " on " << *(date+index);
    cout << endl;
    cout << line;

    //removing of arrays in order to prevent data leaks
    delete [] name;
    delete [] date;
    delete [] evps;

    return 0;
}