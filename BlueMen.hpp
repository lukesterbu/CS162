/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Blue Men class declaration for fantasy game
**********************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Character.hpp"

class BlueMen : public Character
{
    public:
        int attack();
        int defense();
};

#endif
