#ifndef ALLY_HPP
#define ALLY_HPP

#include "npc.hpp"
#include <string>

class Ally : public NPC {
    private:
        string name;
        int health;
        int EP;
        int strength;
        int magicPower;
        int physicalDefense;
        int magicDefense;
        int speed;
    public:
        
};
#endif //ALLY_HPP
