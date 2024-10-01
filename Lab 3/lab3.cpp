/* 
Title:     Lab3.cpp
Author:    Julian Trujillo
Date:      February-6-2023
Purpose:   To forecast the users future job
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{ // variables
    string company_a, company_b, company_hate;
    string car1, car2, hateCar;
    string lineOfStars(79,'*');
    int number; 
    int choice;
    double salary;
    int years;

   // title 
    cout << lineOfStars << endl;
    cout << "JOB FORECAST\n";

    srand(time(0));
    cout << fixed << setprecision(2);
    cout << lineOfStars << endl << endl;
    cout << "Enter in the information requested below and I will determine the job you will\nget, how many years you will work there, your salary, and the company car you\nwill drive. \n";
    
    // companies input
    cout << "\nCompany you like: ";
    getline(cin,company_a);
    cout << "Another Company you like: ";
    getline(cin,company_b);
    cout << "Company you hate: ";
    getline(cin,company_hate);
    
    // vehicles input 
    cout<< "\nVehicle you like: ";
    getline(cin, car1);
    cout << "Another Vehicle you like: ";
    getline(cin, car2);
    cout << "Vehicle you hate: ";
    getline(cin, hateCar);

    // Pick a number 
    cout << "\nPick an Integer 1 through 25 (inclusively): ";
    cin >> number; 
    if (number > 25 || number < 1)
    {
    cout << "\nOnly 1 through 25 please.\n";
    cout << "Pick and Integer 1 through 25 (inclusively)";
    cin >> number;
    }
    else 
    {
       cout << endl;
    }
    
    // years and salary generator
    years = rand() % 100+1;
    salary = (number * 10000.00) * (rand()%10+1);

    // this next block is to determine what choice is to be selected for the program (1,2,3)
    if (number >= 20)
    {
        choice =1;
    }
    else if (number >7)
    {
        choice = 2;
    }
    else if (number <=7)
    {
        choice =3;
    }

 cout << lineOfStars << endl;

 // program output 
 cout << "You will work at ";
 switch (choice)
 {
 case 1: cout<< company_a << " for "<< years << " years " << "making " << salary << " per year\n" << "and driving a red " << car2 << "on busniess trips.\n";
 break;

 case 2: cout<< company_b << " for "<< years << " years " << "making " << salary << " per year\n" << "and driving a royal blue " << car2 << "on busniess trips.\n";
 break;

 case 3: cout<< company_hate << " for "<< years << " years " << "making " << salary << " per year\n" << "and driving a neon orange " << hateCar << "on busniess trips.\n";
 break;
 }

 cout << lineOfStars << endl;

 return 0;

}