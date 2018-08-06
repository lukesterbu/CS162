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
{}

int Character::defense()
{}

int Character::getStrength()
{
    return strength;
}

string Character::getType()
{
    return type;
}
