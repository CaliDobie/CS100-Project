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
        void setName(string){}
        void setHealth(int){}
        void setEP(int){}
        void setStrength(int){}
        void setMagicPower(int){}
        void setPhysicalDefense(int){}
        void setMagicDefense(int){}
        void setSpeed(int){}
        void setClass(string){}
        void setAlignment(string){}
        
        
};
#endif //PLAYER_HPP
