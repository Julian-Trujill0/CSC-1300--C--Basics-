/* 
title: Lab6.cpp
Author: Julian Trujillo
Purpose: To store and print a monsters information
Date: 2/27/23
*/

#include <iostream>
#include <fstream>
using namespace std;

//funtion Prototypes
int displayMenuGetChoice();
void printToFile(string, int, double, double, string, string);

//main Fuction
int main()
{
    int selection, monsterAge;
    double monsterHeight, monsterWeight;
    string monsterName, monsterFood, monsterFact;
    ofstream monsterData; // to send to file
    ifstream data; // to read from file

    //Do-while loop for menu
    do
    {
        selection = displayMenuGetChoice();
        switch(selection)
        {
            case 1: //user monster input 
            cout<< "Please enter the following informatation.\n";
            cout << "Monster Name: ";
            cin.ignore();
            getline(cin, monsterName);
            cout << monsterName <<"'s age (in years): ";
            cin >> monsterAge;
            cout << monsterName <<"'s height (in feet): ";
            cin >> monsterHeight;
            cout << monsterName <<"'s weight (in pounds): ";
            cin >> monsterWeight;
            cin.ignore();
            cout << "Food that " << monsterName << " prefers: ";
            getline(cin, monsterFood);
            cout << "Fun fact about " << monsterName<<":";
            
            getline(cin, monsterFact);
            break;

            case 2: //read data from file
            data.open("monsterData.txt");
            getline(data, monsterName);
            data >> monsterAge;
            data >> monsterHeight;
            data >> monsterWeight;
            data.ignore();
            getline(data, monsterFood);
                
            getline(data, monsterFact);

            data.close();
            break;

            case 3: 
            cout << "MONSTER NAME:      "<< monsterName << endl;
            cout << "AGE (in Years):    "<< monsterAge << endl;
            cout << "HEIGHT (in Feet):  "<< monsterHeight << endl;
            cout << "WEIGHT (in Years): "<<monsterWeight<< endl;
            cout << "FOOD IT EATS:      " << monsterFood << endl;
            cout << "FUN FACT:          "<< monsterFact << endl;
            cout << endl;
            break;

            case 4:
            break;
    

        }

    }while (selection != 4);

  printToFile(monsterName, monsterAge,monsterHeight,monsterWeight, monsterFood, monsterFact);
  cout << "GOODBYE!";


    return 0;
}

int displayMenuGetChoice()
{
    int mainChoice;
    cout << "What would you like to do?:\n";
    cout << "1. Enter a Monster's Data from Screen\n";
    cout << "2. Read a Monster's Data from File\n";
    cout << "3. Print the Monster's Data from File\n";
    cout << "4. Save & Quit Program\n";
    cout<< "Please enter selection: ";
    cin>> mainChoice;
    while (mainChoice <1 || mainChoice > 4)
    {
        cout << "That is not not a valid option. Only 1-4 please,\nPlease enter selection: ";
        cin>> mainChoice;
    }
    cout << endl;
    return mainChoice;
}
 void printToFile(string name, int age, double height, double weight, string food, string funFact)
{
    ofstream monsterData; 
    monsterData.open("monsterData.txt");
    monsterData << name<<endl;
    monsterData << age << endl;
    monsterData << height << endl;
    monsterData << weight << endl;
    monsterData << food << endl;
    monsterData << funFact << endl;
    monsterData.close();
    cout << endl << name << "'s data has been saved to monsterData.txt"<<endl;
}