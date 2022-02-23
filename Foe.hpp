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

    void setPhysicalDefense(int pd) {
        physicalDefense = pd;
    }

    void setMagicDefense(int md){
        magicDefense = md;
    }

    void setSpeed(int sp){
        speed = sp;
    }

    void setClass(string c){
        pClass = c;
    }

    void setAlignment(string a){
        alignment = a;
    }

    string getName(){
        return name;
    }

    int getHealth(){
        return health;
    }

    int getEP(){
        return EP;
    }
    int getStrength() {
        return strength;
    }
    int getMagicPower(){
        return magicPower;
    }
    int getPhysicalDefense(){
        return physicalDefense;
    }
    int getMagicDefense(){
        return magicDefense;
    }
    int getSpeed(){
        return speed;
    }
    string getClass(){
        return pClass;
    }
    string getAlignment(){
        return alignment;
    }

};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_FOE_HPP
