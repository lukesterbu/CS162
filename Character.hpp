/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Character class declaration for fantasy game
**********************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character
{
    protected:
        int atkDie; // how many attack dies
        int defDie; // how many defense dies
        int atkNum; // how many attack die faces
        int defNum; // how many defense die faces
        int armor; 
        int strength; // hit points
        std::string type; // used for character name
    public:
        Character();
        ~Character();
        virtual int attack();
        virtual int defense(int);
        int getArmor();
        virtual void setStrength(int);
        int getStrength();
        std::string getType(); // returns type
};

#endif
