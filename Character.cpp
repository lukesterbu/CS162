/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Menu function for fantasy game
**********************************************************************/

#include "fantasyMenu.hpp"
#include "Character.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void fantasyMenu()
{
    int choice = 0;
    Character playerArray[2];
    
    for (int i = 0; i < 2; i++) // iterate twice for 2 players
    {
        cout << "PLAYER " << i + 1 << endl;
        cout << "Choose a character:" << endl; 
        cout << "1. Vampire" << endl;
        cout << "2. Barbarian" << endl;
        cout << "3. Blue Men" << endl;
        cout << "4. Medusa" << endl;
        cout << "5. Harry Potter" << endl;
        cin >> choice; // will use inputValidation here
        
        if (choice == 1) // Create Vampire
        {
            playerArray[i] = new Vampire;
        }
        else if (choice == 2) // Create Barbarian
        {
            playerArray[i] = new Barbarian;
        }
        else if (choice == 3) // Create Blue Men
        {
            playerArray[i] = new BlueMen;
        }
        else if (choice == 4) // Create Medusa
        {
            playerArray[i] = new Medusa;
        }
        else if (choice == 5) // Create Harry Potter
        {
            playerArray[i] = new HarryPotter;
        }
    }
}
