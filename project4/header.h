/*
author:Julian Trujillo
date: 4/23/2023
title: header.h
purpose: to provide libraries, structs, and function prototypes for the driver file
*/

#ifndef HEADER_H
#define HEADER_H

//libraries used for the functions
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// all structs used through out the program

//struct Cost for the monsters financial information
struct Cost
{
    double hours;
    double price;
    double foodPrice;
    double materials;
};

// struct monsters for ALL of the monsters information
struct Monsters
{
    string name;
    string description;
    double weight;
    double height;
    string location;
    int danger;

   // nested struct to be able to maintain all of the monsters data within one data type 
    Cost monsterCost;
};


// all of the function prototypes used thoughout the function
int loadMonstersFromFile(int , Monsters []);
int registerMonster(int, Monsters []);
int removeMonster(int , Monsters []);
void printMonsters(int, Monsters[]);
void printCostInfo(int, Monsters[]);
void saveMonstersToFile(int, Monsters []);
#endif