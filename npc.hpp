#ifndef NPC_HPP
#define NPC_HPP

#include "character.hpp"

class NPC {
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
        NPC() {}
};
#endif //NPC_HPP
