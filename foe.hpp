#ifndef FOE_HPP
#define FOE_HPP

#include "npc.hpp"
#include <string>

class Foe : public NPC {
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
#endif //FOE_HPP
