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
#include "inputValidation.hpp"

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
    int rounds = 1;
    bool quit = false;
    
    vector<Character*> characters;
    
    do
    {
        for (int i = 0; i < numPlayers; i++) // iterate twice for 2 players
        {
            cout << "PLAYER " << i + 1 << endl;
            cout << "Choose a character:" << endl; 
            cout << "1. Vampire" << endl;
            cout << "2. Barbarian" << endl;
            cout << "3. Blue Men" << endl;
            cout << "4. Medusa" << endl;
            cout << "5. Harry Potter" << endl;
            choice = inputValidation(5);
            
            if (choice == 1) // Create Vampire
            {
                characters.push_back(new Vampire());
            }
            else if (choice == 2) // Create Barbarian
            {
                characters.push_back(new Barbarian());
            }
            else if (choice == 3) // Create Blue Men
            {
                characters.push_back(new BlueMen());
            }
            else if (choice == 4) // Create Medusa
            {
                characters.push_back(new Medusa());
            }
            else if (choice == 5) // Create Harry Potter
            {
                characters.push_back(new HarryPotter());
            }
        }
        // While both characters have above 0 strength 
        while (characters[0]->getStrength() > 0
        && characters[1]->getStrength() > 0)
        {
            cout << "ROUND " << rounds << endl << endl;
            cout << "Attacker Type: " << characters[0]->getType() << endl;
            cout << "Defender Type: " << characters[1]->getType() << endl;
            cout << "Defender Armor: " << characters[1]->getArmor() << endl;
            cout << "Defender Strength: " << characters[1]->getStrength()
            << endl;
	    // Run attack and defense (attack must be run first)
	    int attack = characters[0]->attack();
            int defense = characters[1]->defense(attack);
		
            cout << "Attacker Dice Roll: " << attack << endl;
            cout << "Defender Dice Roll: " << defense << endl;
            cout << "Updated Defender Strength: " 
            << characters[1]->getStrength() << endl << endl;
            
	    cout << "Attacker Type: " << characters[1]->getType() << endl;
            cout << "Defender Type: " << characters[0]->getType() << endl;
            cout << "Defender Armor: " << characters[0]->getArmor() << endl;
            cout << "Defender Strength: " << characters[0]->getStrength()
            << endl;	
	    // Switch attacker with defender and vice versa
            attack = characters[1]->attack();
	    defense = characters[0]->defense(attack);
		
            cout << "Attacker Dice Roll: " << attack << endl;
            cout << "Defender Dice Roll: " << defense << endl;
            cout << "Updated Defender Strength: " 
            << characters[0]->getStrength() << endl << endl;
 
            rounds++; // increment rounds
        }
        // Determine the winner 
	if (characters[0]->getStrength() > characters[1]->getStrength())
	    cout << "Player 1's " << characters[0]->getType() << " won!"
	    << endl << endl;
	else if (characters[1]->getStrength() < characters[0]->getStrength())
	    cout << "Player 2's " << characters[1]->getType() << " won!"
	    << endl << endl;
	else
	    cout << "Both characters died!" << endl << endl;

	// Ask the user to continue or not
        cout << "Choose from the following:" << endl;
        cout << "1. Play again" << endl;
        cout << "2. Exit the game" << endl;
        choice = inputValidation(2);
        if (choice == 2)
            quit = true;
            
    } while(!quit);
}
