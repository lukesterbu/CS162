/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Character class definition for fantasy game
**********************************************************************/

#include "Character.hpp"

Character::Character()
{
    atkDie = 0;
    defDie = 0;
    atkNum = 0;
    defNum = 0;
    armor = 0;
    strength = 0;
}

Character::~Character()
{}

int Character::attack()
{}

int Character::defense()
{}

void Character::printStats()
{
    //Attacker type.
    //Defender type, armor, strength point.
    //The attacker's attack dice roll.
    //The defenderb
