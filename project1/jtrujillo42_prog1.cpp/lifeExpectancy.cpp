/* 
Title: lifeExpectancy.cpp
Author: Julian Trujillo 
Date: 2/15/23
Purpose: To determine the life expectancy of the user based on a series of questions about their life style
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // all variables based on identity: string,bool,int,char
 string fullName;
 string stars(10,'*');
 string stars2 (48,'*');
 bool answer = false;
 int age, lifeExpectancy;
 int weight, exercise;
 int married;
 int job;
 int friends;
 int education;
 int afterGender, afterSmoke, afterDrinks, afterExercise, afterPet, afterMarried, afterCaretaker;
 int afterJob, afterBreakfast, afterParents, afterFruits, afterVegetables, afterFriends, afterEducation, afterWeight;
 char gender;
 char smoke, drink;
 char pet;
 char caretaker, parents;
 char breakfast, fruit, vegetables;

 cout << stars << " Life Expectancy Calculator " << stars << endl; 
 // personal user information: Name and age
 cout << "\nEnter your full name: ";
 getline(cin, fullName); 
 cout << "\nEnter your age: ";
 cin >> age;
 if(age <= 60)
 {lifeExpectancy = 60;}
 else if (age > 60)
 {lifeExpectancy = age;}

 //gender
 cout << "\nAre you male or female (M / F): ";
 cin >> gender; 
 cout << endl;
 if(gender == 'f' || gender == 'F' )
 { answer = true;}
 else
 {answer = false;}

 if( answer == true)
 {lifeExpectancy = lifeExpectancy + 4;}
 else
 {lifeExpectancy = lifeExpectancy;}
 afterGender = lifeExpectancy;

 // weight
 cout << "What is your weight status?\n(1)Underweight, (2)Just Right, (3)Overweight, (4)Obese\n";
 cout << "(Enter 1, 2, 3, or 4): ";
 cin >> weight;
 cout << endl;
 if(weight == 1)
 {lifeExpectancy = lifeExpectancy - 1 ;}
 else if(weight == 2)
 {lifeExpectancy == lifeExpectancy + 5;}
 else if(weight == 3)
 {lifeExpectancy = lifeExpectancy -2;}
 else if (weight == 4)
 {lifeExpectancy = lifeExpectancy - 5;}
 afterWeight = lifeExpectancy; 

 //smoke or vape 
 cout << "Do you smoke or vape? (Y / N): ";
 cin >> smoke; 
 cout << endl;
 if(smoke == 'y' || smoke == 'Y' )
 { answer = true;}
 else
 {answer = false;} 

 if( answer == true)
 {lifeExpectancy = lifeExpectancy - 5;}
 else
 {lifeExpectancy = lifeExpectancy + 5;}
 afterSmoke = lifeExpectancy; 

 //alchohol
 cout << "Do you drink more than one alchoholic beverage every day?\n(Y / N): ";
 cin >> drink;
 cout << endl;
 if(drink == 'y' || drink == 'Y' )
 { answer = true;}
 else
 {answer = false;}

 if( answer == true)
 {lifeExpectancy = lifeExpectancy - 5;}
 else
 {lifeExpectancy = lifeExpectancy + 2;}
 afterDrinks = lifeExpectancy;

 // exercise if so how often 
 cout << "Do you exercise?\n(1)None, (2)Very Little, (3)Periodically, (4)Active, (5)Athlete\n";
 cout << "(Enter 1, 2, 3, 4, or 5): ";
 cin >> exercise;
 cout << endl;
 switch (exercise)
 { case 1: lifeExpectancy = lifeExpectancy - 5;
 break;
 case 2: lifeExpectancy = lifeExpectancy - 2;
 break;
 case 3: lifeExpectancy = lifeExpectancy + 0;
 break;
 case 4: lifeExpectancy =  lifeExpectancy + 5;
 break;
 case 5: lifeExpectancy = lifeExpectancy + 7;
 break;}
 afterExercise = lifeExpectancy;

 // Pet ownerShip
 cout << "Do you own a pet? ( Y / N): ";
 cin >> pet;
 cout << endl;
 if(pet == 'y' || pet == 'Y' )
 { answer = true;}
 else
 {answer = false;}

 if(answer == true)
 {lifeExpectancy = lifeExpectancy + 3;}
 else
 {lifeExpectancy = lifeExpectancy - 1;}
 afterPet = lifeExpectancy;
 
 //marriage status
 cout << "Are you married?\n";
 cout << "(1)Divorced, (2)Single, (3)Married, (4)Happily Married\n(Enter 1, 2, 3, or 4): ";
 cin >> married;
 cout<< endl;
 if(married == 1)
 {lifeExpectancy = lifeExpectancy - 5;}
 else if (married == 2)
 {lifeExpectancy = lifeExpectancy - 2;}
 else if( married == 3)
 {lifeExpectancy = lifeExpectancy + 2;}
 else if( married = 4)
 {lifeExpectancy = lifeExpectancy + 5;}
 afterMarried = lifeExpectancy;

 // are you a caretaker
 cout << "Are you a caretaker (Nurse/doctor or someone who takes care of parents/grandparents)\n";
 cout << "Enter (Y / N): ";
 cin >> caretaker;
 cout << endl;
 if(caretaker == 'y' || caretaker == 'Y' )
 { answer = true;}
 else
 {answer = false;}

 if( answer == true)
 {lifeExpectancy = lifeExpectancy - 2;}
 else
 {lifeExpectancy = lifeExpectancy + 0;}
 afterCaretaker = lifeExpectancy;

 //job
 cout << "How do you feel about your job?\n";
 cout << "(1)Hate it!, (2)Dislike it, (3)It's ok, (4)Enjoyable, (5)Love it!\n(Enter 1, 2, 3, 4, or 5): ";
 cin >> job;
 cout << endl;
 if(job == 1)
 {lifeExpectancy = lifeExpectancy - 5;}
 else if(job == 2)
 {lifeExpectancy = lifeExpectancy - 2;}
 else if (job == 3)
 {lifeExpectancy = lifeExpectancy + 0;}
 else if ( job == 4)
 {lifeExpectancy = lifeExpectancy + 2;}
 else if (job == 5)
 {lifeExpectancy = lifeExpectancy + 5;}
 afterJob = lifeExpectancy;
 
 // breakfast
 cout << "Do you eat breakfast everyday? (Enter Y / N): ";
 cin >> breakfast;
 cout << endl;
 if(breakfast == 'y' || breakfast == 'Y' )
 { answer = true;}
 else
 {answer = false;}

 if( answer == true)
 {lifeExpectancy = lifeExpectancy + 5;}
 else
 { lifeExpectancy = lifeExpectancy - 2;}
 afterBreakfast = lifeExpectancy;
 // parents and gradparents death
 cout << "Did either of your biological parents or biological\ngrandparents die before the age of 50? (Enter Y / N): ";
 cin >> parents;
 cout << endl;
 if(parents == 'y' || parents == 'Y' )
 { answer = true;}
 else
 {answer = false;}

 if( answer == true)
 {lifeExpectancy = lifeExpectancy - 2;}
 else
 {lifeExpectancy = lifeExpectancy + 5;}
 afterParents = lifeExpectancy;

 //fruit 
 cout << "Do you eat fruits every day? (Enter Y / N): ";
 cin >> fruit;
 cout << endl;
 if(fruit == 'y' || fruit == 'Y' )
 { answer = true;}
 else
 {answer = false;}

 if( answer == true)
 {lifeExpectancy = lifeExpectancy + 5;}
 else
 {lifeExpectancy = lifeExpectancy - 5;}
 afterFruits = lifeExpectancy;
 
 //vegetables
 cout << "Do you eat vegetables every day? (Enter Y / N): ";
 cin >> vegetables;
 cout << endl;
 if(vegetables == 'y' || vegetables == 'Y' )
 { answer = true;}
 else
 {answer = false;}

 if( answer == true)
 {lifeExpectancy = lifeExpectancy + 5;}
 else
 {lifeExpectancy = lifeExpectancy - 5;}
 afterVegetables = lifeExpectancy;
 
 //how often do you and your friends hang out
 cout << "How ofter do you hang out with friends?\n";
 cout << "(1)Never, (2)Periodically, (3)Often\n(Enter 1, 2, or 3): ";
 cin >> friends;
 cout << endl;
 if(friends == 1)
 {lifeExpectancy = lifeExpectancy - 2;}
 else if  (friends == 2)
 {lifeExpectancy = lifeExpectancy +0;}
 else if (friends == 3)
 {lifeExpectancy = lifeExpectancy + 2;}
 afterFriends = lifeExpectancy;

 // how far did you get in school
 cout << "What is your education level?\n";
 cout << "(1)No degrees, (2)Highschool degree, (3)Associates degree,\n(4)Bachelors degree, (5)Masters/PHD degree\n (Enter 1, 2, 3, 4, or 5): ";
 cin >> education;
 cout << endl;
 if(education == 1)
 {lifeExpectancy = lifeExpectancy - 5;}
 else if ( education == 2)
 {lifeExpectancy = lifeExpectancy - 2;}
 else if ( education == 3)
 {lifeExpectancy = lifeExpectancy + 2;}
 else if(education == 4)
 {lifeExpectancy = lifeExpectancy + 5;}
 else if ( education == 5)
 {lifeExpectancy = lifeExpectancy + 7;}
 afterEducation = lifeExpectancy;

 if (lifeExpectancy < age)
 {lifeExpectancy = age;}

 // all of the outputs of lifeExpectancy based on the different points in the program 
 cout << "Starting Life Expectancy:  " << age << endl;
 cout << "Life Expectancy after gender:  " << afterGender << endl;
 cout << "Life Expectancy after weight:  " << afterWeight << endl;
 cout << "Life Expectancy after smoke:  " << afterSmoke << endl;
 cout << "Life Expectancy after alchohol:  " << afterDrinks << endl;
 cout << "Life Expectancy after exercise:  " << afterExercise << endl;
 cout << "Life Expectancy after pet:  " << afterPet << endl;
 cout << "Life Expectancy after married:  " << afterMarried << endl;
 cout << "Life Expectancy after caretaker:  " << afterCaretaker << endl;
 cout << "Life Expectancy after job stress:  " << afterJob << endl;
 cout << "Life Expectancy after breakfast:  " << afterBreakfast << endl;
 cout << "Life Expectancy after died:  " << afterParents << endl;
 cout << "Life Expectancy after fruits:  "<< afterFruits << endl;
 cout << "Life Expectancy after vegetables:  " << afterVegetables << endl;
 cout << "Life Expectancy after friends:  " << afterFriends << endl;
 cout << "Life Expectancy after education level:  " << afterEducation << endl << endl;

// final border and results
 cout << left << stars2 << setw(30) << endl << endl;
 cout << right << "Name:     " << setw(22);
 cout << left << fullName << setw(30) << endl;
 cout << right << "Current Age:     "<< setw(22);
 cout << left << age << setw(30) << endl;
 cout << right << "Life Expectancy:     " << setw(22);
 cout << left << lifeExpectancy << setw(30)<< endl << endl << stars2;

 return 0;

}