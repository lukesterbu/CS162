/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Barbarian class declaration for fantasy game
**********************************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Character.hpp"

class Barbarian : public Character
{
    public:
        Barbarian();
        ~Barbarian();
        int attack();
        int defense();
};

#endif
