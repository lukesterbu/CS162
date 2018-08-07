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

void HarryPotter::checkSpecial()
{
    if (strength <= 0 && lives == 1)
    {
        strength = 20; 
	lives = 0;
	cout << "Harry Potter was resurrected!" << endl;
    }
}
