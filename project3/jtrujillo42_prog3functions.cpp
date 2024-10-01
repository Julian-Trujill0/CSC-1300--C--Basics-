/*
title: jtrujillo42_prog3functions.cpp
author: Julian Trujillo
date: 4/5/2023
purpose: to simulate a version of the game Life.
*/

#include "jtrujillo42_prog3.h"

void getPlayerNames(string names[], int Players, int totalPlayers)
{
    
    for (int i=0; i<totalPlayers; i++)
    {
        cout << endl;
        cout << "Player " << i+1 << ", WHAT IS YOUR NAME?\n";
        cout << "NAME: ";
        getline(cin,names[i]);
        
    }
}

int rollDice(string player)
{
    int rNum;
    cout << player << ", PRESS ENTER TO ROLL.";
    cin.get(); 
    rNum = rand() % 6+1;
    switch (rNum)
    {
        case 1:
		cout << " _________\n";
		cout << "|         |\n";
		cout << "|    o    |\n";
		cout << "|         |\n";
		cout << "|_________|\n\n";
		break;
	 case 2:
		cout << " _________\n";
		cout << "|         |\n";
		cout << "|  o      |\n";
		cout << "|      o  |\n";
		cout << "|_________|\n\n";
		break;
	 case 3:
		cout << " _________\n";
		cout << "| o       |\n";
		cout << "|    o    |\n";
		cout << "|       o |\n";
		cout << "|_________|\n\n";
		break;
	 case 4:
		cout << " _________\n";
		cout << "| o     o |\n";
		cout << "|         |\n";
		cout << "| o     o |\n";
		cout << "|_________|\n\n";
		break;
	 case 5:
		cout << " _________\n";
		cout << "| o     o |\n";
		cout << "|    o    |\n";
		cout << "| o     o |\n";
		cout << "|_________|\n\n";
		break;
	 case 6:
	 	cout << " _________\n";
		cout << "| o     o |\n";
		cout << "| o     o |\n";
		cout << "| o     o |\n";
		cout << "|_________|\n\n";
		break;
    }
    return rNum;

}

void activateActionSpace(string name[], int boardSpace[], double money[], int size, int numPlayers, int playerNum)
{
    int rNum;
    int line;
    double newMoney =0;
    string action;
    ifstream actionFile;

    rNum = rand() % 2+1;
    line = rand() % 20+1;
    switch(rNum)
    {
        case 1:
        cout<< "    *        *    "<<endl;
        cout<< "        |         " <<endl;
        cout<< " \\              /" <<endl;
        cout<< "    \\         /" << endl;
        cout<< "      --------";
        cout << endl << endl;
        cout << "CONGRAGULATIONS! ";
        
        actionFile.open("goodactions.txt");
        for(int i =0; i<=line; i++)
        {
            getline(actionFile,action);
        }
        actionFile.close();
        cout << action << endl;
        newMoney = newMoney + (rand() % 100000+1);
        money[playerNum] = money[playerNum] + newMoney;
        cout <<"ADDED $"<< newMoney <<" TO YOUR ACCOUNT.\n";
        cout << "YOU NOW HAVE $" << money[playerNum]<<" IN YOUR ACCOUNT\n";
        break;


        case 2:
        cout<< "    -        -    " << endl;
        cout<< "        |         "<< endl;
        cout<< "    ------------  "<< endl;
        cout<< "   /           \\ "<< endl<< endl;
        cout << "OH NO!";
         actionFile.open("badactions.txt");
        for(int i =0; i<=line; i++)
        {
            getline(actionFile,action);
        }
        actionFile.close();
        cout << action << endl;
        newMoney = newMoney + (rand() % 100000+1);
        money[playerNum] = money[playerNum] - newMoney;
        cout <<"SUBTRACTED $"<< newMoney <<" FROM YOUR ACCOUNT.\n";
        cout << "YOU NOW HAVE $" << money[playerNum]<<" IN YOUR ACCOUNT\n";
        break;
    }

}

void PlayerFinishedBoard(string names[], int spaces[], double money[], int maxPlayers, int numPlayers)
{
    string playerFinished;
    string richestPlayer;
    int highestSpace = spaces[0];
    double mostMoney = money[0];

    for(int i=0; i<numPlayers; i++)
    {
        if(spaces[i]> highestSpace)
        {
            highestSpace = spaces[i];
            playerFinished = names[i];
        }
    }

    for(int i=0; i < numPlayers; i++)
    {
        if (money[i]>mostMoney)
        {
            mostMoney = money[i];
            richestPlayer = names[i];
        }
    }

    cout << "THE WHO SURVIVED ENTIRE POPLANDIA BOARD: " << playerFinished <<endl;
    cout << "THE PLAYER WHO HAS THE MOST POPLANDIA MONEY " << richestPlayer << " has $" << mostMoney <<endl <<endl;

}


