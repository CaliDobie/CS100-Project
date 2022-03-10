//
// Created by Isaac Castro on 2/22/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_FOE_HPP
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_FOE_HPP

#include "character.hpp"
#include <string>
using namespace std;

class Foe : public Character {
    //to be implemented just a dummy foe for now
    string name;
    bool isPlayer = false;
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
    Foe(string newName, int newSpeed, int newHealth) {
        name = newName;
        speed = newSpeed;
        health = newHealth;

    }
    virtual void setName(string newName) {
        name = newName;
    }
    virtual void setHealth(int newHealth) {
        health = newHealth;
    }

    virtual void setEP(int newEp) {
        EP = newEp;
    }

    virtual void setStrength(int newStrength) {
        strength = newStrength;
    }

    virtual void setMagicPower(int newPower) {
        magicPower = newPower;
    }

    virtual void setPhysicalDefense(int pd) {
        physicalDefense = pd;
    }

    virtual void setMagicDefense(int md){
        magicDefense = md;
    }

    virtual void setSpeed(int sp){
        speed = sp;
    }

    virtual void setClass(string c){
        pClass = c;
    }

    virtual void setAlignment(string a){
        alignment = a;
    }

    virtual string getName(){
        return name;
    }

    virtual int getHealth(){
        return health;
    }

    virtual int getEP(){
        return EP;
    }
    virtual int getStrength() {
        return strength;
    }
    virtual int getMagicPower(){
        return magicPower;
    }
    virtual int getPhysicalDefense(){
        return physicalDefense;
    }
    virtual int getMagicDefense(){
        return magicDefense;
    }
    virtual int getSpeed(){
        return speed;
    }
    virtual string getClass(){
        return pClass;
    }
    virtual string getAlignment(){
        return alignment;
    }

    virtual bool getType (){
        return isPlayer;
    }

};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_FOE_HPP
