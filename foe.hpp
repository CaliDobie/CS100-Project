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
        string pClass;
        string alignment;
    public:
        Foe(){}
        Foe(string name, int health, int damage) {
            setName(name);
            setHealth(health);
            setStrength(damage);
        }
        virtual void setName(string n){name = n;}
        virtual void setHealth(int h){health = h;}
        virtual void setClass(string c) {pClass = c;}
        virtual void setAlignment(string a) {alignment = a;}
        virtual void setEP(int e){EP = e;}
        virtual void setStrength(int st){strength = st;}
        virtual void setMagicPower(int mp){magicPower = mp;}
        virtual void setPhysicalDefense(int pd){physicalDefense = pd;}
        virtual void setMagicDefense(int md){magicDefense = md;}
        virtual void setSpeed(int sp){speed = sp;}
        virtual string getName(){return name;}
        virtual int getHealth(){return health;}
        virtual int getEP(){return EP;}
        virtual int getStrength(){return strength;}
        virtual int getMagicPower(){return magicPower;}
        virtual int getPhysicalDefense(){return physicalDefense;}
        virtual int getMagicDefense(){return magicDefense;}
        virtual int getSpeed(){return speed;}
        virtual string getClass() {return pClass;}
        virtual string getAlignment() {return alignment;}
        virtual bool getType() {return false;}
};
#endif //FOE_HPP
