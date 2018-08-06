/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Vampire class declaration for fantasy game
**********************************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Character.hpp"

class Vampire : public Character
{
    public:
        Vampire();
        ~Vampire();
        int attack();
        int defense();
};

#endif
