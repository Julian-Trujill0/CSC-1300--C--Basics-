/* 
Title: driver.cpp
Author: Julian Trujillo
date: 3/27/23
purpose: do create a database of spells learned by a student(the user) at Hogwarts
*/

#include "spells.h"

int main()
{
    // variable and array declarations
    string lineBorder(60, '-');
    string spellName[SIZE];
    int spellEffect[SIZE];
    double average;
    string strongestSpell, weakestSpellName;
    int strongest, weakest;


    cout << "Welcome to the Hogwarts School of Witchcraft and Wizardry.\n";
    cout << "This is the Hogwarts Spell Evaluation program.\n\n";

    // user information function
    getInfoFromUser(spellName, spellEffect, SIZE);
    average = calculateAverage(spellEffect, SIZE); // average 
    weakest = findLowest(spellEffect, spellName, SIZE, weakestSpellName); // weakest spell
    strongest = findHighest(spellEffect, spellName, SIZE, strongestSpell); // strongest spell
    
    
    // results based on input and function calculation
    cout << lineBorder <<endl<<endl;
    cout << "The avergage amount of effect of spells is: " << average <<endl << endl;
    cout << "The spell with the lowest amount of effect is " << weakestSpellName << " with an effect value of " << weakest <<endl <<endl;
    cout << "The spell with the highest amount of effect is " << strongestSpell << " with an effect value of " << strongest <<endl;

    return 0;
}