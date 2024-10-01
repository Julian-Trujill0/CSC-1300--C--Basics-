/*
Title Lab5.cpp
Author: Julian Trujillo
Date: 2/20/23
Purpose: To create a menu for customers to order the food that is available.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//variable declarations
	string lineOfStars(60, '*');
	int numA1=0, numA2=0, numA3=0;
	int numD1=0, numD2=0, numD3=0;
	int numM1=0, numM2=0, numM3=0, numM4=0;
	int numPeople;
	int mainChoice;
	int subChoice;
	double total=0;
	string name;

	//print header
	cout << endl << lineOfStars << endl;
	cout << setw(40) << "HOGWARTS RESTAURANT";
	cout << endl << lineOfStars << endl;
	
	
	//start user input
	cout << "How many people are included in your order?  ";
	cin >> numPeople;
	
	//validate input
	while (numPeople < 1 || numPeople > 4)
	{
		cout << "That is incorrect 3 people is the maximum amount. Sorry for any inconvenience.";
		cout << "\nHow many people are included in your order?: ";
		cin >> numPeople;
	}
	
	for(int i = 0; i < numPeople; ++i)
	{    
        cin.ignore();
	     cout << "What is the name of the order? ";
          getline(cin, name);
	 // CODE FOR MAIN MENU
        do 
		{

		 cout << "\nHi, " << name << ".  What would you like to order?\n";
		 cout << "1. Appetizer\n";
		 cout << "2. Drinks\n";
		 cout << "3. Meal\n";
		 cout << "4. I'm done!\n";
		 cout << "Enter 1-4: ";
		 cin >> mainChoice;
		 while (mainChoice < 1 || mainChoice >4)
		 {
			cout << "That is not a valid option. Please Select a valid choice.\n";
			cout << "Enter 1-4: ";
			cin >> mainChoice;
		 }
	
	      switch (mainChoice)
		 {//code for sub-menu (Appetizers)
         case 1 : 		
		 cout << "\nGreat, you have selected Appetizer!\n";
		 cout << "Choose from the following appetizers:\n";
		 cout << "1. Dumbledonuts\t$2.99\n";
		 cout << "2. Potterfries\t$5.99\n";
		 cout << "3. Griffintoes\t$4.99\n";
		 cout << "Choose 1-3: ";
		 cin >> subChoice;
         // Input Validation 
	     while (subChoice < 1 || subChoice > 3)
		 {
			cout << "That is not a valid option please only pick 1-3.: ";
			cin >> subChoice;
		 }
         //sub-menu price calcualtor 
		 if (subChoice == 1)
		  {
		   cout << "How many Dumbledonuts would you like?: ";
		   cin >> numA1;
		   total += (numA1*2.99);
          }

		  else if (subChoice == 2)
          {
		  cout << "How many orders of Potterfries would you like?: ";
		  cin >> numA2;
		  total += (numA2*5.99);
          }

		  else if (subChoice == 3)
          {
		  cout << "How many orders of Griffintoes would you like?: ";
	 	  cin >> numA3;
		  total += (numA3*4.99);
		  }				
	     break;
    
	      // code for sub-menu (Drinks)
         case 2: 
		  cout << "\nGreat, you have selected Drinks!\n";
		  cout << "Choose from the following drinks:\n";
		  cout << "1. Polyjuice Potion   \t$5.99\n";
		  cout << "2. Death Eater Negroni\t$6.99\n";
		  cout << "3. Butter Beer        \t$4.99\n";
		  cout << "Choose 1-3: ";
		  cin >> subChoice;

          //input validation
	      while (subChoice < 1 || subChoice > 3)
		  {cout << "That is not a valid option please only pick 1-3.: ";
		  cin >> subChoice;}

         // sub-Menu price calculator
	      if (subChoice == 1)
          {
		 cout << "How many orders of Polyjuice Potion would you like? ";
		 cin >> numD1;
		 total += (numD1*5.99);
          }

		 else if (subChoice == 2)
         {
		 cout << "How many orders of Death Eater Negroni would you like? ";
		 cin >> numD2;
		 total += (numD2*6.99);
         }

		 else if (subChoice == 3)
         {
		 cout << "How many orders of Butter Beer would you like? ";
		 cin >> numD3;
		 total += (numD3*4.99);
         }
	      break;

         // code for sub-menu (Meal)
	     case 3: 
		 cout << "\nGreat, you have selected Meal!\n";
		 cout << "Choose from the following meals:\n";
		 cout << "1. Griffinwings (10pcs)\t$10.99\n";
		 cout << "2. Voldenose           \t$14.99\n";
		 cout << "3. Hufflemuffin        \t$ 8.99\n";
		 cout << "4. Ravenclaw Meat      \t$19.99\n";
		 cout << "Choose 1-4: ";
		 cin >> subChoice;	

         //input validation   	
         while (subChoice < 1 || subChoice > 4)
		 {
			cout << "That is not a valid option please only pick 1-4.: ";
			cin >> subChoice;
		 }
         
         // sub-menu price Calculator
		 if (subChoice == 1)
         {
		 cout << "How many orders of Griffin Wings would you like? ";
		 cin >> numM1;
		 total += (numM1*10.99);
         }

		 else if (subChoice == 2)
         {
		 cout << "How many orders of Voldenoses would you like? ";
		 cin >> numM2;
		 total += (numM2*14.99);
         }

		 else if (subChoice == 3)
         {
		 cout << "How many orders of Hufflemuffins would you like? ";
		 cin >> numM3;
		 total += (numM3*8.99);
         }

		 else if (subChoice == 4)
         {
		 cout << "How many orders of Ravenclaw meat would you like? ";
		 cin >> numM4;
		 total += (numM4*19.99);
         }
          break;
	 }
         }
		while (mainChoice != 4);
	}

	//print results (receipt)
	cout << endl << lineOfStars << endl;
	cout << setw(35) << "RECEIPT";
	cout << endl << lineOfStars << endl << endl;
	cout << setprecision(2) << fixed;
	
	cout << "LIST OF ITEMS OREDERED:\n";
	cout << "Appetizers\n";
	if(numA1 != 0)
		cout << "\t-Dumbledonuts X " << numA1 << endl;
	if(numA2 != 0)
		cout << "\t-Potterfries X " << numA2 << endl;
	if(numA3 != 0)
		cout << "\t-Griffintoes X " << numA3 << endl;
	cout << "Drinks\n";
	if(numD1 != 0)
		cout << "\t-Polyjuice Potion X " << numD1 << endl;
	if(numD2 != 0)
		cout << "\t-Death Eater Negroni X " << numD2 << endl;
	if(numD3 != 0)
		cout << "\t-Butter Beer X " << numD3 << endl;	
	cout << "Meals\n";
	if(numM1 != 0)
		cout << "\t-Griffinwings (10pcs) X " << numM1 << endl;
	if(numM2 != 0)
		cout << "\t-Voldenose X " << numM2 << endl;
	if(numM3 != 0)
		cout << "\t-Hufflemuffin X " << numM3 << endl;	
	if(numM4 != 0)
		cout << "\t-Ravenclaw Meat X " << numM4 << endl;
	
	cout << "\n\n*****TOTAL BILL: $" << total << endl << "THANK YOU!!\n\n";
	
	return 0;
}