/*
author: Julian Trujillo
date: 4/23/2023
title: driver.cpp
purpose: to create a database of chefs in order to find out which of chefs won the most awards
*/

#include "header.h"

int main()
{
  // variable declaration
  Monsters creatures[75];
  int numMonsters=0;
  int choice;

  cout << "WELCOME TO THE MONSTER ZOO PROGRAM!!\n";

  //function call to read in monsters from file 
  numMonsters = loadMonstersFromFile(numMonsters, creatures);

  // do-while loop in order for the menu to be repeated until the user decides to end the program
  do
  {
    // menu display
    cout << "What would you like to do?\n";
    cout << right << setw(30) << "1. Register a New Monster\n";
    cout << right << setw(33) << "2. Remove a Monster From Zoo\n";
    cout << right << setw(32) << "3. Print Monsters to Screen\n";
    cout << setw(36) << "4. Print Monster Care Cost Data\n";
    cout << setw(19) << "5. End Program\n";
    cout << setw(28) << "Enter 1, 2, 3, 4, or 5.\n";
    cout  << "Choice: ";
    cin >> choice;
    cout << endl;
    // user choice validation
    while(choice < 1 || choice >5)
    {
      cout << "The choice that you have entered is invalid. Please try again";
      cout << "What would you like to do?\n";
      cout << right << setw(30) << "1. Register a New Monster\n";
      cout << right << setw(33) << "2. Remove a Monster From Zoo\n";
      cout << right << setw(32) << "3. Print Monsters to Screen\n";
      cout << right << setw(36) << "4. Print Monster Care Cost Data\n";
      cout << right << setw(19) << "5. End Program\n";
      cout << right << setw(28) << "Enter 1, 2, 3, 4, or 5.\n";
      cout  << "Choice: ";
      cin >> choice;
      cout << endl;
    }
    cin.ignore();

    // switch statement to call the coresponding functioned based on the users choice 
    switch(choice)
    {
      case 1: 
      // registers a new monster based on user input 
      numMonsters =  registerMonster(numMonsters, creatures);
      break;

      case 2:
      // removes a monster based on the name provided from the user
      numMonsters = removeMonster(numMonsters, creatures);
      break;

      case 3:
      //outputs the monsters to the screen as well as there coresponding information
      printMonsters(numMonsters, creatures);
      break;

      case 4: 
      // outputs the cost of maintaining each monster per week based on information gathered from the creature array.
      printCostInfo(numMonsters, creatures);
      break;
    }

   // end condition for the do-while loop
  }while(choice != 5);
  // function called in order to give the user the option to save the monsters information to a file of their choosing.
  saveMonstersToFile(numMonsters, creatures);
  
  return 0;
}