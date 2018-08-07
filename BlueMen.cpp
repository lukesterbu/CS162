/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Blue Men class definition for fantasy game
**********************************************************************/

#include "BlueMen.hpp"

#include <iostream>

using std::cout;
using std::endl;

BlueMen::BlueMen()
{
    atkDie = 2;
    defDie = 3;
    atkNum = 10;
    defNum = 6;
    armor = 3;
    strength = 12;
    type = "Blue Men";
}

BlueMen::~BlueMen()
{
    
}
// Check to see if strength has been deducted by 4 and then
// decrement defDie if so
void BlueMen::checkSpecial()
{
    if ((strength / 4) > 2 && defDie == 3)
	defDie = 3;
    else if ((strength / 4) > 1 && defDie == 3)
    {
	defDie = 2;
	cout << "The Mob was decreased to " << defDie << endl;
    }
    else if ((strength / 4) <= 1 && defDie == 2)
    {
	defDie = 1;
	cout << "The Mob was decreased to " << defDie << endl;
    }
    else 
    {
	defDie = 0;
	cout << "The Mob was decreased to " << defDie << endl;
    }
}
