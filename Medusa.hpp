/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Medusa class declaration for fantasy game
**********************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"

class Medusa : public Character
{
    public:
        Medusa();
        ~Medusa();
        int attack();
        int defense();
};

#endif
