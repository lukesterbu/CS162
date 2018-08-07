/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Harry Potter class declaration for fantasy game
**********************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Character.hpp"

class HarryPotter : public Character
{
    private:
        int lives; // only Harry needs this because of hogwarts ability
    public:
        HarryPotter();
        ~HarryPotter();
        void checkSpecial(); // hogwarts here
};

#endif
