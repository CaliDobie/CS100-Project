#include <iostream>
#include <string>
using namespace std;

#include "character.hpp"
#include "player.hpp"

int main()
{
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
    
    Character* user = new Player;
    cout << "Enter your name: ";
    cin >> name;
    user->setName(name);
    
    cout << "Select your class - (1)Mage, (2)Warrior, (3)Knight: "
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
            class = "Mage";
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
            class = "Warrior";
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
            class = "Knight";
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
    user->setClass(class);
    user->setAlignment(alignment);
    
    return 0;
}
