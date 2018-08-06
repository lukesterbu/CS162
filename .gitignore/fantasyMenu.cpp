#include "fantasyMenu.hpp"

/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Menu function for Project 3
**********************************************************************/

#include "fantasyMenu.hpp"

#include <iostream>

using std::cout;
using std::endl;

void fantasyMenu()
{
    int choice = 0;
    
    for (int i = 1; i < 3; i++) // iterate twice for 2 players
    {
        cout << "PLAYER " << i << endl;
        cout << "Choose a character:" << endl; 
        cout << "1. Vampire" << endl;
        cout << "2. Barbarian" << endl;
        cout << "3. Blue Men" << endl;
        cout << "4. Medusa" << endl;
        cout << "5. Harry Potter" << endl;
        cin >> choice; // will use inputValidation here
        
        if (choice == 1) // Create Vampire
        {
            
        }
        else if (choice == 2) // Create Barbarian
        {
            
        }
        else if (choice == 3) // Create Blue Men
        {
            
        }
        else if (choice == 4) // Create Medusa
        {
            
        }
        else if (choice == 5) // Create Harry Potter
        {
            
        }
    }
}
