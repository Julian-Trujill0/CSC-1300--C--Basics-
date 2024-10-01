/*
title: jtrujillo42_prog3driver.cpp
author: Julian Trujillo
date: 4/5/2023
purpose: to simulate a version of the game Life.
*/

#include "jtrujillo42_prog3.h"

int main()
{

    string currentPlayer;
    string names[maxPlayers];
    int numPlayers;
    int space, goodOrBad, rollNum;
    int boardSpace[spaces];
    double money[numPlayers];
    char selection; 

    srand(time(0));
    do
    {
        for(int i=0; i<maxPlayers; i++)
        {
            names[i] = " ";
            boardSpace[i] = 0;
            money[i] = 0;
        }
        
        
        cout << "YOU ARE PLAYING POPLANDIA" << endl;
        cout << "How many players?: ";

        cin >> numPlayers;
        while(numPlayers > 20 || numPlayers <=0)
        {
            cout << "Sorry but the number of players is invalid please try again.\n";
            cout << "Remember the max number of players is 20.\n";
            cout << "How many players?: ";
            cin >> numPlayers;
            
        }
        getPlayerNames(names, numPlayers, maxPlayers);

        do
        {
            for(int i =0; i <numPlayers; i++)
            {
                currentPlayer = names[i];
                rollNum = rollDice(currentPlayer);
                boardSpace[i] = boardSpace[i] + rollNum;
                cout << currentPlayer << "IS NOW ON SPACE "<<boardSpace[i] <<endl;
                if (boardSpace[i]<spaces)
                {
                    activateActionSpace(names, boardSpace, money, maxPlayers, numPlayers, i );
                }
                else
                break;

            }
            space = boardSpace[0];
            for(int i =0; i<numPlayers; i++)
            {
                if(boardSpace[i]>space)
                space = boardSpace[i];
            }
        }while(space <25);

        PlayerFinishedBoard(names, boardSpace, money, maxPlayers, numPlayers);

        cout << "Do you want to play again? (y/n): ";
        cin >> selection;
        while(selection != 'y' && selection != 'Y' && selection != 'n' && selection !='N')
        {
            cout << "Your selection is invalid!\n";
            cout << "Do you want to play again? (y/n): ";
            cin >> selection;
        }

        
    } while(selection != 'n' && selection != 'N');
   







    return 0;
}