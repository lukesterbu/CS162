/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Harry Potter class definition for fantasy game
**********************************************************************/

#include "HarryPotter.hpp"

#include <iostream>

using std::cout;
using std::endl;

HarryPotter::HarryPotter()
{
    atkDie = 2;
    defDie = 2;
    atkNum = 6;
    defNum = 6;
    armor = 0;
    strength = 10;
    type = "Harry Potter";
    lives = 1;
}

HarryPotter::~HarryPotter()
{
	
}

// Doesn't let strength go below 0 and determines if resurrection
void Character::setStrength(int strength)
{
    if (this->strength - strength < 0)
	this->strength = 0;
    else 
	this->strength = strength;
    // Resurrection
    if (strength <= 0 && lives == 1)
    {
        strength = 20; 
	lives = 0;
	cout << "Harry Potter was resurrected!" << endl;
    }
}
