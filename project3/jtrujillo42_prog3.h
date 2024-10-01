/*
title: jtrujillo42_prog3.h
author: Julian Trujillo
date: 4/5/2023
purpose: to have needed prototypes, global constants, etc.. 
*/

#ifndef JTRUJILLO42_PROG3_H
#define JTRUJILLO42_PROG3_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;


const int spaces = 25;
const int maxPlayers = 20;

void getPlayerNames(string [], int, int);
int rollDice(string );
void activateActionSpace(string [], int [], double [], int, int, int );
void PlayerFinishedBoard(string [], int [], double [], int , int);




#endif