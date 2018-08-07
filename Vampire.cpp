/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Vampire class definition for fantasy game
**********************************************************************/

#include "Vampire.hpp"

#include <iostream>

using std::cout;
using std::endl;

Vampire::Vampire()
{
    atkDie = 1;
    defDie = 1;
    atkNum = 12;
    defNum = 6;
    armor = 1;
    strength = 18;
    type = "Vampire";
}

Vampire::~Vampire()
{
    
}

// Runs charm and calculates damage done
// Returns defense dice roll
int Vampire::defense(int attack)
{
    int defense = 0;
    for (int i = 0; i < defDie; i++)
    {
        defense += rand() % (defNum - 1 + 1) + 1;
    }
    // Use charm
    if (((rand() % 2) + 1) == 2)
    {
	attack = 0;
	cout << "The Vampire used charm!" << endl;
    }
	
    if ((defense + armor) >= attack)
	difference = 0;
    else
	difference = attack - defense - armor;
	
    setStrength(strength - difference);
	
    return defense;
}
