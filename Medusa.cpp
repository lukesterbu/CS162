/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Medusa class definition for fantasy game
**********************************************************************/

#include "Medusa.hpp"

#include <iostream>

using std::cout;
using std::endl;

Medusa::Medusa()
{
    atkDie = 2;
    defDie = 1;
    atkNum = 6;
    defNum = 6;
    armor = 3;
    strength = 8;
    type = "Medusa";
}

Medusa::~Medusa()
{
    
}

// Returns 1000 if Medusa rolled a perfect 12
int Medusa::attack()
{
    int attack = 0;
    for (int i = 0; i < atkDie; i++)
    {
        attack += rand() % (atkNum - 1 + 1) + 1;
    }
	
    if (attack == 12)
    {
		attack = 1000; // Very high number so opponent dies
		cout << "Medusa used glare!" << endl;
    }
    return attack;
}
