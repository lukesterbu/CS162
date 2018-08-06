/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Menu function for fantasy game
**********************************************************************/

#include "Character.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

void fantasyMenu()
{
    int numPlayers = 2;
    int choice = 0;
    vector<Character*> characterArray;
    
    for (int i = 0; i < numPlayers; i++) // iterate twice for 2 players
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
            characterArray.push_back(new Vampire());
        }
        else if (choice == 2) // Create Barbarian
        {
            characterArray.push_back(new Barbarian());
        }
        else if (choice == 3) // Create Blue Men
        {
            characterArray.push_back(new BlueMen());
        }
        else if (choice == 4) // Create Medusa
        {
            characterArray.push_back(new Medusa());
        }
        else if (choice == 5) // Create Harry Potter
        {
            characterArray.push_back(new HarryPotter());
        }
    }
}
