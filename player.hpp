#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "character.hpp"
#include <iostream>
#include <string>

class Player : public Character {
    private:
        string name;
        int health;
        int EP;
        int strength;
        int magicPower;
        int physicalDefense;
        int magicDefense;
        int speed;
        string class;
        string alignment;
    public:
        void setName(string n){}
        void setHealth(int h){}
        void setEP(int e){}
        void setStrength(int st){}
        void setMagicPower(int mp){}
        void setPhysicalDefense(int pd){}
        void setMagicDefense(int md){}
        void setSpeed(int sp){}
        void setClass(string c){}
        void setAlignment(string a){}
        string getName(){return name;}
        int getHealth(){return health;}
        int getEP(){return EP;}
        int getStrength(){return strength;}
        int getPhysicalDefense(){return physicalDefense;}
        int getMagicDefense(){return magicDefense;}
        int getSpeed(){return speed;}
        string getClass(){return class;}
        string getAlignment(){return alignment;}
};
#endif //PLAYER_HPP
