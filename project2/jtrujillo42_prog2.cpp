/*
Title: Mash.cpp
Author: Julian Trujillo
Date: 03/09/23
purpose: To predict the users fortune based off a series of questions
*/

// libraries used for the program 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// the two funtion prototypes that will be called in main
int displayMenuGetChoice();
int randNumGen(int);

// main function
int main()
{
    //seeding the random number Generator 
    srand(time(0));
    srand(time(0));
    

    // all of the variable by type
    int selection;
    int num1a, num2a, num3a;
    int num1b, num2b, num3b;
    int three = 3;
    int fifteen = 15;
    int loopNum, loopNum2, loopNum3, loopNum4, loopNum5, loopNum6, loopNum7, loopNum8;
    int children, salary;
    string spouse, house, location, car, company, title;
    string goodJob1, goodJob2, badJob;
    string company1, company2, bcompany;
    ifstream data;

    

    do // do-while in order to for the Menu to be repeated until user inputs 2
    {
        selection = displayMenuGetChoice(); // function call for menu defined at bottom

        switch(selection) // used to determine if user plays MASHnor quits
        {
         case 1: 
         // starting to gather user input needed for Prediction
         cout << "You chose to predict your future!\n";
         cout << "First, I just need a little information.\n\n";

         cout << "Enter three numbers 1-100, seperated by a space: ";
         cin >> num1a >> num2a >> num3a;
         cout << endl;

         //Next few lines are all used for user input validation
         while (num1a < 1 || num1a > 100)
         {
            cout << "Your input for the first number you entered is invalid\n";
            cout << "Please enter a number between 1-100: ";
            cin >> num1a;
            cout << endl;
         }

         while (num2a < 1 || num2a > 100)
         {
            cout << "Your input for the second number you entered is invalid\n";
            cout << "Please enter a number between 1-100: ";
            cin >> num2a;
            cout << endl;
         }

         while (num3a < 1 || num3a > 100)
         {
            cout << "Your input for the third number you entered is invalid\n";
            cout << "Please enter a number between 1-100: ";
            cin >> num3a;
            cout << endl;
         }
         cin.ignore();

         // more user input that is needed for prediction
         // job title input
         cout << "Enter an awesome job title: ";
         getline(cin,goodJob1);
         
         cout << "Enter another awesome job title: ";
         getline(cin,goodJob2);
         
         cout << "Enter the worst job title ever: ";
         getline(cin,badJob);

         cout << endl;

         //company input
         cout << "Enter a company, organization, or restaurant you like: ";
         getline(cin,company1);
         
         cout << "Enter another company, organization, or restaurant you like: ";
         getline(cin,company2);
         
         cout << "Enter a company, organization, or restaurant you hate: ";
         getline(cin,bcompany);
         
         cout << endl; 

         //user number input used for salary
         cout << "Enter three numbers between 10,000 and 500,000, seperated by spaces: " << endl;
         cin >> num1b >> num2b >> num3b;
         cout << endl;


         // next few lines used for user input validation
         while(num1b <10000 || num1b > 500000)
         {
            cout << "The first number you entered in invalid.\n";
            cout << "Enter a number 10,000-500,000: ";
            cin >> num1b;
            cout << endl;
         }

         while(num2b <10000 || num2b > 500000)
         {
            cout << "The second number you entered in invalid.\n";
            cout << "Enter a number 10,000-500,000: ";
            cin >> num2b;
            cout << endl;
         }

         while(num3b <10000 || num3b > 500000)
         {
            cout << "The third number you entered in invalid.\n";
            cout << "Enter a number 10,000-500,000: ";
            cin >> num3b;
            cout << endl;
         }

         // this section will be the "random" aspect of the code
        
         // determines number of children 
         loopNum = randNumGen(three);
         switch (loopNum)
         {
            case 1: 
            children = num1a;
            break;

            case 2: 
            children = num2a;
            break;

            case 3: 
            children = num3a;

         }
         
         // determines salary amount 
         loopNum2 = randNumGen(three);

         switch (loopNum2)
         {
            case 1: 
            salary = num1b;
            break;

            case 2: 
            salary = num2b;
            break;

            case 3: 
            salary = num3b;

         }

         // determines spouse by reading from people.txt file
         loopNum3 = randNumGen(fifteen);
         data.open("People.txt");
         for(int i = 1; i<=loopNum3; i++)
         {
            getline(data,spouse);
         }
         data.close();


         // determines house by reading from the DWELLINGS_PC.txt file
         loopNum4 = randNumGen(fifteen);
         data.open("DWELLINGS_PC.txt");
         for(int i = 1; i <= loopNum4; i++)
         { 
            getline(data,house);
         }
         data.close();

         // determines the location where you will live
         loopNum5 = randNumGen(fifteen);
         data.open("Locations.txt");
         for (int i = 1; i <= loopNum5; i++)
         {
            getline(data,location);
         }
         data.close();

         // determines what car you will drive based on random number using cars.txt file
         loopNum6 = randNumGen(fifteen);
         data.open("cars.txt");
         for(int i =1; i <= loopNum6; i++)
         { 
            getline(data, car);
         }
         data.close();

         // determines what company you will work at based on user input and random number
         loopNum7 = randNumGen(three);
         switch(loopNum7)
         {
            case 1:
            company = company1;
            break;
            
            case 2:
            company = company2;
            break;

            case 3:
            company = bcompany;
            break;
         }

         // determines what job title you will have
         loopNum8 = randNumGen(three);
         if(loopNum8 == 1)
         {
            title = goodJob1;
         }
         else if (loopNum8 == 2)
         {
            title = goodJob2;
         }
         else if(loopNum8== 3)
         {
            title = badJob;
         }


         // final output using all the information from user inputs, random numbers, and all files
         cout << "****** YOUR FUTURE ******\n";
         cout << "You and your spouse, " << spouse << " will live in a " << house << " in " << location << endl;
         cout << "and will drive a " << car << ".\n";
         cout << "You and your spouse will have " << children << " children.\n";
         cout << "You will work at " << company << " as a " << title << " making $"<< salary << " a year";
         cout << endl << endl;        
         break;

         case 2: // causes the end of program when selected from menu
         cout << "You chose to end the program.\nGoodBye!";
         break;
        }

    }while (selection != 2); // while statement for the do-while loop for menu
    return 0;

} // end of main function 


// used for menu selection between the two options
int displayMenuGetChoice()
{
    int mainChoice;
    cout << "Pick from the following menu:\n";
    cout << "1. Let's Play MASH!\n";
    cout << "2. End Program.\n";
    cout<< "CHOOSE 1 or 2: ";
    cin >> mainChoice;
    while(mainChoice < 1 || mainChoice > 2)
    {
        cout << "Input incorrect only 1 or 2.\n ";
        cout << "CHOOSE 1 or 2: ";
        cin >> mainChoice;

    }

    return mainChoice;

}

// random number Generator fuction 
int randNumGen(int num)
{ 
    int rNum;
    rNum = rand() % num+1;
    
    return rNum;
}