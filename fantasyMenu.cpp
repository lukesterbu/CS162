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
            cin >> choice; // will use inputValidation here
            
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
        
        while (characters[0]->getStrength() > 0
        && characters[1]->getStrength() > 0)
        {
            int attack = characters[0]->attack();
            int defense = characters[1]->defense();
            
            cout << "ROUND " << rounds << endl << endl;
            cout << "Attacker Type: " << characters[0]->getType() << endl;
            cout << "Defender Type: " << characters[1]->getType() << endl;
            cout << "Defender Armor: " << characters[1]->getArmor() << endl;
            cout << "Defender Strength: " << characters[1]->getStrength()
            << endl;
            cout << "Attacker Dice Roll: " << attack << endl;
            cout << "Defender Dice Roll: " << defense << endl;
            // Calculates updated strength
            characters[1]->setStrength(characters[1]->getStrength() 
            + characters[1]->getArmor() + defense - attack);
            cout << "Updated Defender Strength: " 
            << characters[1]->getStrength() << endl;
            
            // Switch attacker with defender and vice versa
            attack = characters[1]->attack();
            defense = characters[0]->defense();
            
            cout << "Attacker Type: " << characters[1]->getType() << endl;
            cout << "Defender Type: " << characters[0]->getType() << endl;
            cout << "Defender Armor: " << characters[0]->getArmor() << endl;
            cout << "Defender Strength: " << characters[0]->getStrength()
            << endl;
            cout << "Attacker Dice Roll: " << attack << endl;
            cout << "Defender Dice Roll: " << defense << endl;
            // Calculates updated strength
            characters[0]->setStrength(characters[0]->getStrength() 
            + characters[0]->getArmor() + defense - attack);
            cout << "Updated Defender Strength: " 
            << characters[0]->getStrength() << endl;
            
            rounds++; // increment rounds
        }
        
        cout << "Choose from the following:" << endl;
        cout << "1. Play again" << endl;
        cout << "2. Exit the game" << endl;
        cin >> choice;
        if (choice == 2)
            quit = true;
            
    } while(!quit);
}
