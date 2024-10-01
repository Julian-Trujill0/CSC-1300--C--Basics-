/*
author: Julian Trujillo
date: 4/23/2023
title: functions.cpp
purpose: to provide function definitions for the header file as well as the driver file.
*/

#include "header.h"

// ALL function definitions that will be used within the program 

int loadMonstersFromFile(int numMonsters, Monsters array[])
{
    // variables used within the function
    string input;
    string fileName;
    ifstream beasts;
    int index = 0;

    // welcome message in order for the user to enter the name of the file the user wishes to open
    cout << "What is the name of the file with you monster data? (ex: filename.txt)\n";
    cout << "FILENAME: ";
    getline(cin,fileName);
    
    
        if (numMonsters < 75)
        {
            // opening the file in order to read in all of the monsters and their coresponding information 
            beasts.open(fileName);

            // while-loop to put all of the information into its coresponding array element
            while(getline(beasts, input, '#'))
            {

                // the stod function is used in order to convert from string to a double 
                array[index].name = input;

                getline(beasts, input, '#');
                array[index].description = input;

                getline(beasts, input, '#');
                array[index].weight = stod(input);

                getline(beasts, input, '#');
                array[index].height = stod(input);

                getline(beasts,input,'#');
                array[index].location = input;

                getline(beasts, input, '#');
                array[index].danger = stoi(input);

                getline(beasts, input, '#');
                array[index].monsterCost.hours = stod(input);

                getline(beasts, input, '#');
                array[index].monsterCost.price = stod(input);

                getline(beasts, input, '#');
                array[index].monsterCost.foodPrice = stod(input);

                getline(beasts, input, '#');
                array[index].monsterCost.materials = stod(input);
                index = index+1;

                numMonsters = index;
            }
        
            // for-loop to out put the names of the monsters read in from the file provided from the user
            for(int i =0; i<numMonsters; i++)
            {
                cout << array[i].name << " has been added.\n";
            }
            
        } 
        // closing of the files  
       beasts.close(); 
    
    

    return numMonsters;
}

int registerMonster(int numMonsters, Monsters array[])
{
    /*
    this if statement is used to ensure that if there is already 75 monsters within the array the 
    the user can no longer register another monster
    */
    if (numMonsters < 75)
    {
        // output the label of the information that the user needs tp input 
        cout << "Name: ";
        getline(cin, array[numMonsters].name);
        cout << "Description: \n";
        getline(cin, array[numMonsters].description);
        cout << "Weight: ";
        cin >> array[numMonsters].weight;
        cout << " Height: ";
        cin >> array[numMonsters].height;
        cin.ignore();
        cout << "Last Know Location: ";
        getline(cin, array[numMonsters].location);
        cout << "Danger Level: ";
        cin >> array[numMonsters].danger;

        // while-loop used to ensure that the enters a danger level value greater than 0 but less than 6
        while (array[numMonsters].danger < 1 || array[numMonsters].danger > 5)
        {
            cout << "The Danger Level you entered is incorrect Please try again (1-5)\n";
            cout << "Danger Level: ";
            cin >> array[numMonsters].danger;
        }

        cout << endl;
        cout << "CARE INFORMATION (per week):\n";
        cout << "Required direct care for monster (in hours): ";
        cin >> array[numMonsters].monsterCost.hours;
        cout << "Cost of care $ ";
        cin >> array[numMonsters].monsterCost.price;
        cout << "Food Cost $ ";
        cin >>array[numMonsters].monsterCost.foodPrice;
        cout << "Medical & grooming cost $ ";
        cin >> array[numMonsters].monsterCost.materials;
        cin.ignore();

        numMonsters = numMonsters + 1;
    }
    // else if statement that is used to ensure output a message if the zoo is already full
    else if (numMonsters >= 75)
    {
        cout << "You zoo is at capacity.\n";
        cout << "Unfortunately you will no longer be able to add monsters to you zoo.\n";
        cout << "We apologize for any inconvience.";
        cout << endl;
    }

    return numMonsters;
}

int removeMonster(int numMonsters, Monsters array[75])
{
    numMonsters +1;
    int index;
    string name;
    bool test = false;

    cout << "This is a list of all of the Monsters in you Zoo\n";
    for (int i = 0; i < numMonsters; i++)
    {
        cout << array[i].name << endl;
    }

    cout << "What monster is leaving the zoo?\n";
    cout << "Monster Name: ";
    getline(cin, name);

    for (int i = 0; i < numMonsters; i++)
    {
        if (name == array[i].name)
        {
            index = i;
            test = true;
        }  
    }

    if (test == true)
    {
        // used to set the element of the array that matches the name that is provied from 
        // user input and moves the rest of the elements of the array down 1 element value
        array[index].name = " ";
        array[index].description = " ";
        array[index].weight = 0;
        array[index].height = 0;
        array[index].location = " ";
        array[index].danger = 0;
        array[index].monsterCost.hours = 0;
        array[index].monsterCost.price = 0;
        array[index].monsterCost.foodPrice = 0;
        array[index].monsterCost.materials = 0;

        for (int i = index; i < (numMonsters - index+1); i++)
        {
            array[i] = array[i + 1];
        }
        //confirmation message of the removal of the creature 
        cout << "You have removed " << name << endl;
        numMonsters = numMonsters - 1;
    }
    // else-if statement that outputs a message if the users input does not match any of the names with in the array
    else if (test == false)
    {
        cout << "Sorry, a monster by the name " << name << " could not be found\n";
    }

    return numMonsters;
}

void printMonsters(int numMonsters, Monsters array[75])
{
    //variable used that outputs a line of lines to divide the outputs
    string line(50, '-');

    // if statement that outputs a message if there are no monsters being held within the array
    if (numMonsters == 0)
    {
        cout << "THERE ARE NO MONSTERS IN YOU ZOO!\n\n";
    }
    // else-if statement that out prints the monsters information based on information gotten from the array
    else if (numMonsters >=1 || numMonsters <= 75 )
    {
        // for-loop used to output the monsters that will run base on how many monsters the program believes are held within the
        for (int i = 0; i<numMonsters; i++)
        {
            cout << line << endl;
            cout << "** Monster " << i+1 << " **\n";
            cout << "Name:    " << array[i].name << endl;
            cout << "Description: " << array[i].description << endl;
            cout << "Weight:    " << array[i].weight << " pound(s)\n";
            cout << "Height:    " << array[i].height << " feet\n";
            cout << "Last known location:  " << array[i].location << endl;
            cout << "Weekly Care Information:\n";
            cout << "     -Hours of care required:     " << array[i].monsterCost.hours << endl;
            cout << "     -Cost of care:               " << array[i].monsterCost.price << endl;
            cout << "     -Food cost:                  " << array[i].monsterCost.foodPrice << endl;
            cout << "     - Grooming & Supplies Cost:  " << array[i].monsterCost.materials << endl;
            cout << endl;
        }

    }
}


void printCostInfo(int numMonsters, Monsters array[])
{
    double total;
    double cost;

    // if-statement that outputs a mesage if there are no monsters with the array at the moment
    if(numMonsters == 0)
    {
        cout << "There are no monsters in your zoo so the total cost is $0.00.\n\n";
    }

    // else if statement that outputs if there ARE monsters within the array 
    else if(numMonsters > 0)
    {
        //header for the cost section
        cout << "COST FOR EACH MONSTER FOR ONE WEEK:\n\n";
        cout << left << setw(30) << "MONSTER";                             
        cout << right << setw(30) << "CARE COST\n";

        // for-loop used to output all of the monsters name and coresponding cost based on an equation
        // hours * (food cost + cost of the monsters + cost of materials)
        for (int i =0; i<numMonsters; i++)
        {
            cost = array[i].monsterCost.hours * (array[i].monsterCost.price + array[i].monsterCost.foodPrice + array[i].monsterCost.materials);
            cout << left << setw(30) << array[i].name;
            cout << right << setw(21) << "$" << cost << endl;
            total = total + cost;
        }
        cout << endl;

        //outputs the total amount for taking care of all of the monsters 
        cout << left << setw(30) << "TOTAL COST";                          
        cout << right << setw(21) << "$" << total << endl;
        cout << endl;
    }
}


void saveMonstersToFile(int numMonsters, Monsters array[])
{
    //variables used within the array
    ofstream save;
    string fileName;
    char choice;
    
    // outputs the a message to allow the user to decide if they want to save monsters or not
    cout << "Would you like to save your monsters list to a file? (y or n): ";
    cin >> choice;

    // while-loop for user input validation
    while(choice !='y' && choice != 'Y' && choice != 'n' && choice != 'N')
    {
        cout << "The choice you have entered is invalid please try again (y or n)\n";
        cout << "Choice: ";
        cin >> choice;
    } 
    cin.ignore();

    //if-statement that if they choose y or Y it starts the saving process 
    if(choice == 'y'|| choice == 'Y')
    {
        // message to indicate that the user must provide a file name for the monsters to be saved to 
        cout << "What is the name of the file you want to save your creatures to?\n";
        cout <<"FILENAME: ";
        getline(cin,fileName);

        //opening the file for the files to be saved
        save.open(fileName);

        //for-loop used to output each array's infomration and being seperated by the delimiter '#'
        for(int i =0; i< numMonsters; i++)
        {
            save << array[i].name << '#';
            save << array[i].description << '#';
            save << array[i].weight << '#';
            save << array[i].height << '#';
            save << array[i].location << '#';
            save << array[i].danger << '#';
            save << array[i].monsterCost.hours << '#';
            save << array[i].monsterCost.price << '#';
            save << array[i].monsterCost.foodPrice << '#';
            save << array[i].monsterCost.materials << '#';
        }
        // closing the file
        save.close();
        cout << endl;
        cout << "Your monsters currently housed in the zoo were successfully saved to the " << fileName << " file.\n";
    }

    // else-if statement that if the user inputs n or N then goes to the exit message 
    else if (choice == 'n' || choice == 'N')
    {

    }

    // exit message
    cout << "GOODBYE!";
}