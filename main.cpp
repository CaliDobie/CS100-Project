#include <iostream>
#include <string>
using namespace std;

#include "character.hpp"
#include "player.hpp"

int main()
{
    /*user*/
    string name;
    int health;
    int EP;
    int strength;
    int magicPower;
    int physicalDefense;
    int magicDefense;
    int speed;
    string uClass;
    string alignment;

    /*foe*/
    string fname;
    int fhealth;
    int fEP;
    int fstrength;
    int fmagicPower;
    int fphysicalDefense;
    int fmagicDefense;
    int fspeed;

    /*ally*/
    string aname;
    int ahealth;
    int aEP;
    int astrength;
    int amagicPower;
    int aphysicalDefense;
    int amagicDefense;
    int aspeed;
    
    Character* user = new Player;
    cout << "Enter your name: ";
    cin >> name;
    user->setName(name);
    
    cout << "Welcome " << user->getName() << endl;
    
    cout << "Select your class - (1)Mage, (2)Warrior, (3)Knight: ";
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
            /*mage*/
            health = 100;
            EP = 50;
            strength = 0;
            magicPower = 100;
            physicalDefense = 0;
            magicDefense = 100;
            speed = 50;
            uClass = "Mage";
            alignment = "Magic";
            break;
        case 2:
            /*warrior*/
            health = 100;
            EP = 50;
            strength = 100;
            magicPower = 0;
            physicalDefense = 100;
            magicDefense = 0;
            speed = 25;
            uClass = "Warrior";
            alignment = "Strength";            
            break;
        case 3:
            /*knight*/
            health = 100;
            EP = 50;
            strength = 50;
            magicPower = 50;
            physicalDefense = 50;
            magicDefense = 50;
            speed = 38;
            uClass = "Knight";
            alignment = "Balanced";            
            break;
    }
    user->setHealth(health);
    user->setEP(EP);
    user->setStrength(strength);
    user->setMagicPower(magicPower);
    user->setPhysicalDefense(physicalDefense);
    user->setMagicDefense(magicDefense);
    user->setSpeed(speed);
    user->setClass(uClass);
    user->setAlignment(alignment);
    
    cout << "You have selected: " << user->getClass() << endl;
    cout << "Alignment: " << user->getAlignment() << endl;
    cout << "Health: " << user->getHealth() << endl;
    cout << "EP: " << user->getEP() << endl;
    cout << "Strength: " << user->getStrength() << endl;
    cout << "Magic Power: " << user->getMagicPower() << endl;
    cout << "Physical Defense: " << user->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << user->getMagicDefense() << endl;
    cout << "Speed: " << user->getSpeed() << endl;
    
    return 0;
}
