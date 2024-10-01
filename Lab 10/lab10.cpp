#include <iostream>
#include <iomanip>
using namespace std;

// structs used for the users
struct PastryCategory
{
    string category;
    int numAwards;
};

struct Chef
{
    string name;
    string homeTown;
    int num;
};

int main()
{
    //variables used in program
    int users;
    int index = 0;
    int* total;
    Chef* chefs;
    PastryCategory** awards;

    // welcome message
    cout << "How many chefs are competing? ";
    cin >> users;
    cin.ignore();

    // dynamically allocated pointers based on user input
    chefs = new Chef[users];
    awards = new PastryCategory* [users];
    total = new int[users];
    //awards[i]
    //awards[i][j]

    cout << "Please eneter the information about each chef.\n";

    // for-loop in order to go through each section for each users 
    for(int i =0; i < users; +i++)
    {
        // input for the name of each user as well as personal information
        cout << "**** Chef " << i+1 << " ****\n";
        cout << "        Name: ";
        getline(cin, chefs[i].name);
        cout << "        HomeTown: ";
        getline(cin,chefs[i].homeTown);
        cout << endl;
        cout << "How many categories has " << chefs[i].name << " won awards in? ";
        cin >> chefs[i].num;
        cin.ignore();
        
        //dynamically allocated parray based off of user input from number of categories 
        awards[i] = new PastryCategory[chefs[i].num];
        
        //for-loop for go through a set number of times based on number of categories
        for(int j = 0; j < chefs[i].num; j++)
        {
            cout << "FOR CATEGORY " << j+1 << ": \n";
            cout << "         Name of category- ";
            getline(cin,awards[i][j].category);
            cout << "         Number of Awards in " << awards[i][j].category << "- ";
            cin >> awards[i][j].numAwards;
            cin.ignore();
            cout << endl;
        }

    }
    
    // for-loop to set the all elements in total to 0
    for(int i =0; i<users; i++)
    {
        total[i]=0;
    }
   
    // for-loop used to find the total of each user
    for(int i=0; i<users; i++)
    {
        for(int j=0; j<chefs[i].num; j++)
        {
            total[i]=total[i]+awards[i][j].numAwards;
        }
    }

    // for-loop used to find who had the most awards
    int greatest = total[0];
    for(int i=0; i<users; i++)
    {
        if(total[i]> greatest)
        {
            greatest = total[i];
            index = i;
        }
    }

    // end message with results 
    cout << "The pastry chef that won the most awards (" << total[index] << ") is " << chefs[index].name;
    cout << ",\nwith awards in the following categories: \n";
   
   // for-loop used to print out the categories and their respective awards
   for(int i =0; i< chefs[index].num; i++)
   {
    cout << "      " << awards[index][i].category << " ("<< awards[index][i].numAwards << ")\n"; 
   }
    
    // for-loop used to delete all of the arrays that were created dynamically
    for(int i =0; i< users; i++)
    {
        for(int j =0; j<users; j++)
        {
            for(int k =0; k < chefs[i].num; k++)
            {
                delete [] awards[j];
            }

            delete [] awards [j];
        }
        delete [] chefs;
    }

    delete [] total;
    return 0;
}
