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
            EP = ;
            strength = ;
            magicPower = ;
            physicalDefense = ;
            magicDefense = ;
            speed = ;
            class = "Mage";
            alignment = "";
            break;
        case 2:
            /*warrior*/
            health = 100;
            EP = ;
            strength = ;
            magicPower = ;
            physicalDefense = ;
            magicDefense = ;
            speed = ;
            class = "Warrior";
            alignment = "";            
            break;
        case 3:
            /*knight*/
            health = 100;
            EP = ;
            strength = ;
            magicPower = ;
            physicalDefense = ;
            magicDefense = ;
            speed = ;
            class = "Knight";
            alignment = "";            
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
