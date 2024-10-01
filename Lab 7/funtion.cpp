/* 
title: lab7.h
author: Julian Trujillo
date: 03/06/2023
purpose: Fuctions for my lab 7 program
*/

#include "lab7.h"
void getData(string& name1, string& name2, int& age1, int& age2, string& pet1, string& pet2 )
{
    // First Hero's data
    
    cout << "Please enter the data of the first super hero:\n";
    cout << "NAME: ";
    getline(cin, name1);
    cout << "AGE: ";
    cin >> age1;
    cout << "PET (dog/cat/rabit/guinea pig) : ";
    cin.ignore();
    getline(cin,pet1);
    cout << endl << endl;

    //Second hero's data
    cout << "Please enter the data of the second super hero:\n";
    cout << "NAME: ";
    getline(cin,name2);
    cout << "AGE: ";
    cin >> age2;
    cout << "PET (dog/cat/rabit/guinea pig) : ";
    cin.ignore();
    getline(cin,pet2);
  
}

bool calculateResults(string name1, string name2, int age1, int age2, string pet1, string pet2)
{
    bool compatible = false;
    bool a, b, c; // 'a' is for name, 'b' is for age, and 'c' is for pet
    int value1 = 0;
    int value2 = 0;
    int length1 = name1.length();
    int length2 = name2.length();
    int nameCheck;

    for (int i =0; i < length1; i++)
    {
        value1 += static_cast<int>(name1.at(i));
    }

    for (int i =0; i < length2; i++)
    {
        value2 += static_cast<int>(name2.at(i));
    }
    
    if(value1 > value2)
    {
        nameCheck = value1 - value2 ;
    }
    else if(value2 > value1)
    {
        nameCheck = value2 - value1;
    }
    cout <<"\nThe ASCII value of  " << name1 << " is " << value1 << endl;
    cout << "The ASCII value of " << name2 << " is " << value2 << endl;

    if(nameCheck <= 50 )
    {
        cout << "Check 1 is true.\n";
        a=true;
    }
    else 
    {
        cout << "Check 1 is false.\n";
        a = false;
    }

    if ((age1-age2) <= 10)
    {
        cout <<"Check 2 is true.\n";
        b = true;
    }
    else if((age1-age2)>10)
    {
     cout << "Check 2 is false.\n";
     b = false;
    }
    if (pet1 == pet2)
    {
        cout << "Check 3 is true.\n\n";
        c = true;
    }

    else 
    {
     cout << "Check 3 is false.\n\n";
     c = false;
    }


   if( (a && b) == true|| (b && c ) == true || (c && a) == true)
   {
    compatible = true;
   }

   else 
   {
    compatible = false;
   }

    return compatible;

}
