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

int Vampire::charm(int attack)
{
    int charm = attack;
    if (((rand() % 2) + 1) == 2)
    {
	charm = 0;
	cout << "The Vampire used charm!" << endl;
    }
    return charm;
}

int Character::defense()
{
    int defense = 0;
    for (int i = 0; i < defDie; i++)
    {
        defense += rand() % (defNum - 1 + 1) + 1;
    }
    return defense;
}
