/* 
Title: lab7.cpp
Author: Julian Trujillo
Date: 3/6/2023
Purpose: SuperHero Roommate compatability test.
*/

#include "lab7.h"

int main()
{
    bool roomies;
    string name1, name2;
    int age1, age2;
    string pet1, pet2;

   cout << "Super Hero Roommate Compatibility Check\n";
   getData(name1, name2, age1, age2, pet1, pet2);
   roomies = calculateResults(name1, name2, age1, age2, pet1, pet2);
   
   cout << "***** Results *****\n";

   if (roomies ==  true)
   { 
     cout << name1 <<" and " << name2 << " are compatible to be roommates!\n";
   }

   else if(roomies == false)
   {
     cout << name1 << " and " << name2 << " are not comaptible to be roommates.\n";
   }
   return 0;

}