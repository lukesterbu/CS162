/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Character class definition for fantasy game
**********************************************************************/

#include "Character.hpp"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

Character::Character()
{
    atkDie = 0;
    defDie = 0;
    atkNum = 0;
    defNum = 0;
    armor = 0;
    strength = 0;
    type = "Character";
}

Character::~Character()
{}

int Character::attack()
{
    int attack = 0;
    for (int i = 0; i < atkDie; i++)
    {
        attack += rand() % (atkNum - 1 + 1) + 1;
    }
    return attack;
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

int Character::getArmor()
{
    return armor;
}

void Character::setStrength(int strength)
{
    if (this->strength - strength < 0)
	this->strength = 0;
    else 
	this->strength = strength;
}

int Character::getStrength()
{        
    return strength;
}

string Character::getType()
{
    return type;
}
