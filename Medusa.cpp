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

// Returns 100 if Medusa rolled a perfect 12
int Medusa::attack()
{
    int stone = 0;
    if (attack == 12)
    {
	stone = 100;
	cout << "Medusa used glare!" << endl;
    }
    return stone;
}
