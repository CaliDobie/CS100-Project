#include "inventory.h"
#include "consumableInventory.h"
#include "items.h"
#include "consumables.h"
#include "weaponary.h"
#include "healthPotion.h"
#include "epPotion.h"
#include "strengthPotion.h"
#include "physicalDefensePotion.h"
#include "magicPowerPotion.h"
#include "magicDefensePotion.h"
#include "speedPotion.h"
#include "sword.h"
#include "magicStaff.h"
#include "armourSet.h"
#include "enchantedArmourSet.h"
#include "Player.h"
#include "Character.h"
#include "scenes/Scene.hpp"
#include "scenes/Encounter/Encounter.hpp"
#include "scenes/Encounter/Combat/Combat.hpp"
#include "npc.hpp"
#include "foe.hpp"
#include "ally.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {


	  string name = "The Dark Knights Claymore";
	  int category = 1;
	  int effect = 6756;

	  items* itemTesting = new sword(name, category, effect);
	  Character* Isaac = new Player;
	  Isaac->setName("Isaac");
	  Isaac->setHealth(0);
	  Isaac->setEP(0);
	  Isaac->setStrength(0);
	  Isaac->setPhysicalDefense(0);
	  Isaac->setMagicPower(0);
	  Isaac->setMagicDefense(0);
	  Isaac->setSpeed(0);
	  /*
	  cout << "Item's name: " << itemTesting->getName() << endl;
	  cout << "Item's category: " <<itemTesting->getCategory() << endl;
	  cout << "Item's effect value: " << itemTesting->getEffect() << endl;

	cout << endl << "Players stats" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	  cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl;

	itemTesting->doEffect(Isaac);

	cout << endl << "Players stats (after do effect)" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	  cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl;

	itemTesting->undoEffect(Isaac);

	cout << endl << "Players stats (after undo effect)" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	  cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl;
	*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	  
	inventory* testInventory = new inventory;

	items* itemTesting1 = new sword("Object 1", 1, 10);
	items* itemTesting2 = new magicStaff("Object 2", 1, 20);
	items* itemTesting3 = new armourSet("Object 3", 1, 30); 
	items* itemTesting4 = new enchantedArmourSet("Object 4", 1, 40);
	items* itemTesting5 = new sword("Object 5", 1, 50);
	items* itemTesting6 = new sword("Object 6", 1, 60);
	items* itemTesting7 = new sword("Object 7", 1, 70);
	items* itemTesting8 = new sword("Object 8", 1, 80);
	items* itemTesting9 = new sword("Object 9", 1, 90);
	items* itemTesting10 = new sword("Object 10", 1, 100);
	items* itemTesting11 = new sword("Object 11", 1, 110);

	cout << "------------------TESTING INVENTORY FOR WEAPONARY------------------" << endl << endl << endl;

	cout << "Adding our weaponary into the inventory" << endl << endl;

	testInventory->inventoryAdd(itemTesting1);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting2);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting3);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting4);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting5);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting6);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting7);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting8);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting9);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting10);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl;
	testInventory->inventoryAdd(itemTesting11);
	cout << "Size of inventory: " << testInventory->inventorySize() << endl << endl;

	cout << "Checking that inventory was updated correctly" << endl << endl;

	for (unsigned int i = 0; i < testInventory->inventorySize(); ++i) {
		cout << testInventory->getItemName(i) << endl;
	}

	cout << endl << "Testing remove" << endl << endl;
	
	testInventory->inventoryRemove("Object 1");
	cout << "Removed Object 1" << endl;
	testInventory->inventoryRemove("Object 4");
	cout << "Removed Object 4" << endl;
	testInventory->inventoryRemove("Object 7");
	cout << "Removed Object 7" << endl;
	testInventory->inventoryRemove("Object 5");
	cout << "Removed Object 5" << endl;
	testInventory->inventoryRemove("Object 10");
	cout << "Removed Object 10" << endl;

	cout << endl << "Inventory after removing" << endl << endl;
	
	for (unsigned int i = 0; i < testInventory->inventorySize(); ++i) {
		cout << testInventory->getItemName(i) << endl;
	}

	cout << endl << "Players stats (before equip)" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl;
	
	testInventory->inventoryEquip("Object 3", Isaac);

	cout << endl << "Players stats (after equip and before unequip)" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl;

	testInventory->inventoryDequip("Object 3", Isaac);

	cout << endl << "Players stats (after equip and before unequip)" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl << endl;

	cout << "------------------ END TESTING INVENTORY FOR WEAPONARY------------------" << endl << endl << endl;
	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "------------------TESTING INVENTORY FOR CONSUMABLES------------------" << endl << endl << endl;

	consumableInventory* testInventory2 = new consumableInventory;

	items* item1 = new healthPotion("Potion 1", 1, 10);
	items* item2 = new epPotion("Potion 2", 1, 20);
	items* item3 = new strengthPotion("Potion 3", 1, 30);
	items* item4 = new physicalDefensePotion("Potion 4", 1, 40);
	items* item5 = new magicPowerPotion("Potion 5", 1, 50);
	items* item6 = new magicDefensePotion("Potion 6", 1, 60);
	items* item7 = new speedPotion("Potion 7", 1, 70);
	items* item8 = new healthPotion("Potion 8", 1, 80);
	items* item9 = new epPotion("Potion 9", 1, 90);
	items* item10 = new strengthPotion("Potion 10", 1, 100);
	items* item11 = new physicalDefensePotion("Potion 11", 1, 110);
	items* item12 = new magicPowerPotion("Potion 12", 1, 120);
	items* item13 = new magicDefensePotion("Potion 13", 1, 130);
	items* item14 = new speedPotion("Potion 14", 1, 140);
	items* item15 = new healthPotion("Potion 15", 1, 150);
	items* item16 = new epPotion("Potion 16", 1, 160);
	items* item17 = new strengthPotion("Potion 17", 1, 170);
	items* item18 = new physicalDefensePotion("Potion 18", 1, 180);
	items* item19 = new magicPowerPotion("Potion 19", 1, 190);
	items* item20 = new magicDefensePotion("Potion 20", 1, 200);
	items* item21 = new speedPotion("Potion 21", 1, 210);

	cout << "Adding our consumables into the inventory" << endl << endl;

	testInventory2->consumableInventoryAdd(item1);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item2);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item3);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item4);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item5);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item6);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item7);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item8);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item9);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item10);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item11);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item12);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item13);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item14);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item15);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item16);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item17);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item18);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item19);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item20);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl;
	testInventory2->consumableInventoryAdd(item21);
	cout << "Size of consumable inventory: " << testInventory2->consumableInventorySize() << endl << endl;

	cout << "Checking that consumable inventory was updated correctly" << endl << endl;

	for (unsigned int i = 0; i < testInventory2->consumableInventorySize(); ++i) {
		cout << testInventory2->getItemName(i) << endl;
	}
	
	cout << endl << "Testing remove" << endl << endl;

	testInventory2->consumableInventoryRemove("Potion 1");
	cout << "Removed Potion 1" << endl;
	testInventory2->consumableInventoryRemove("Potion 3");
	cout << "Removed Potion 3" << endl;
	testInventory2->consumableInventoryRemove("Potion 5");
	cout << "Removed Potion 5" << endl;
	testInventory2->consumableInventoryRemove("Potion 7");
	cout << "Removed Potion 7" << endl;
	testInventory2->consumableInventoryRemove("Potion 9");
	cout << "Removed Potion 9" << endl;
	testInventory2->consumableInventoryRemove("Potion 11");
	cout << "Removed Potion 11" << endl;
	testInventory2->consumableInventoryRemove("Potion 13");
	cout << "Removed Potion 13" << endl;
	testInventory2->consumableInventoryRemove("Potion 15");
	cout << "Removed Potion 15" << endl;
	testInventory2->consumableInventoryRemove("Potion 17");
	cout << "Removed Potion 17" << endl;
	testInventory2->consumableInventoryRemove("Potion 19");
	cout << "Removed Potion 19" << endl;
	testInventory2->consumableInventoryRemove("Potion 20");
	cout << "Removed Potion 20" << endl;

	cout << endl << "Consumable inventory after removing" << endl << endl;

	for (unsigned int i = 0; i < testInventory2->consumableInventorySize(); ++i) {
		cout << testInventory2->getItemName(i) << endl;
	}

	cout << endl << "Testing used potions" << endl << endl;

	cout << endl << "Players stats (before consuming potions)" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl << endl;

	testInventory2->consumableUse("Potion 2", Isaac);
	testInventory2->consumableUse("Potion 6", Isaac);
	testInventory2->consumableUse("Potion 10", Isaac);
	testInventory2->consumableUse("Potion 14", Isaac);
	testInventory2->consumableUse("Potion 18", Isaac);

	cout << endl << "Players stats (after consuming potions)" << endl << endl;
	cout << "Players Health = " << Isaac->getHealth() << endl;
	cout << "Players EP = " << Isaac->getEP() << endl;
	cout << "Players Strength = " << Isaac->getStrength() << endl;
	cout << "Players Defense = " << Isaac->getPhysicalDefense() << endl;
	cout << "Players Magic Power = " << Isaac->getMagicPower() << endl;
	cout << "Players Magic Defense = " << Isaac->getMagicDefense() << endl;
	cout << "Players Speed = " << Isaac->getSpeed() << endl << endl;

	cout << "Potions remaining" << endl << endl;

	for (unsigned int i = 0; i < testInventory2->consumableInventorySize(); ++i) {
		cout << testInventory2->getItemName(i) << endl;
	}


	cout << "------------------END TESTING INVENTORY FOR CONSUMABLES------------------" << endl << endl << endl;


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

    cout << endl;

    cout << "Welcome " << user->getName() << endl;

    cout << endl;

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

    cout << endl;

    cout << "You have selected: " << user->getClass() << endl;
    cout << "Alignment: " << user->getAlignment() << endl;
    cout << "Health: " << user->getHealth() << endl;
    cout << "EP: " << user->getEP() << endl;
    cout << "Strength: " << user->getStrength() << endl;
    cout << "Magic Power: " << user->getMagicPower() << endl;
    cout << "Physical Defense: " << user->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << user->getMagicDefense() << endl;
    cout << "Speed: " << user->getSpeed() << endl;

   // cout << "COMBAT TUTORIAL!!!!" << endl;

  //  Scene* combatScene = new Combat(user, 2);
  //  combatScene->SetUpScene();

    Character* ally_npc = new Ally;

    switch(choice)
    {
        case 1:
            /*mage ally*/
            aname = "Warrior(Ally)";
            ahealth = 100;
            aEP = 50;
            astrength = 100;
            amagicPower = 0;
            aphysicalDefense = 100;
            amagicDefense = 0;
            aspeed = 25;
            break;
        case 2:
            /*warrior ally*/
            aname = "Mage(Ally)";
            ahealth = 100;
            aEP = 50;
            astrength = 0;
            amagicPower = 100;
            aphysicalDefense = 0;
            amagicDefense = 100;
            aspeed = 50;
            break;
        case 3:
            /*knight ally*/
            aname = "Knight(Ally)";
            ahealth = 100;
            aEP = 50;
            astrength = 50;
            amagicPower = 50;
            aphysicalDefense = 50;
            amagicDefense = 50;
            aspeed = 38;
            break;
    }

    ally_npc->setName(aname);
    ally_npc->setHealth(ahealth);
    ally_npc->setEP(aEP);
    ally_npc->setStrength(astrength);
    ally_npc->setMagicPower(amagicPower);
    ally_npc->setPhysicalDefense(aphysicalDefense);
    ally_npc->setMagicDefense(amagicDefense);
    ally_npc->setSpeed(aspeed);

    cout << endl;

    cout << "Your Ally:" << endl;
    cout << "Name: " << ally_npc->getName() << endl;
    cout << "Health: " << ally_npc->getHealth() << endl;
    cout << "EP: " << ally_npc->getEP() << endl;
    cout << "Strength: " << ally_npc->getStrength() << endl;
    cout << "Magic Power: " << ally_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << ally_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << ally_npc->getMagicDefense() << endl;
    cout << "Speed: " << ally_npc->getSpeed() << endl;

    /*created 10 foes*/
    Character* foe_1_npc = new Foe;
    Character* foe_2_npc = new Foe;
    Character* foe_3_npc = new Foe;
    Character* foe_4_npc = new Foe;
    Character* foe_5_npc = new Foe;
    Character* foe_6_npc = new Foe;
    Character* foe_7_npc = new Foe;
    Character* foe_8_npc = new Foe;
    Character* foe_9_npc = new Foe;
    Character* foe_10_npc = new Foe;

    /*foe1*/
    fname = "Foe_1";
    fhealth = 100;
    fEP = 25;
    fstrength = 25;
    fmagicPower = 25;
    fphysicalDefense = 25;
    fmagicDefense = 25;
    fspeed = 25;

    foe_1_npc->setName(fname);
    foe_1_npc->setHealth(fhealth);
    foe_1_npc->setEP(fEP);
    foe_1_npc->setStrength(fstrength);
    foe_1_npc->setMagicPower(fmagicPower);
    foe_1_npc->setPhysicalDefense(fphysicalDefense);
    foe_1_npc->setMagicDefense(fmagicDefense);
    foe_1_npc->setSpeed(fspeed);

    /*foe2*/
    fname = "Foe_2";
    fhealth = 120;
    fEP = 27;
    fstrength = 27;
    fmagicPower = 27;
    fphysicalDefense = 27;
    fmagicDefense = 27;
    fspeed = 27;

    foe_2_npc->setName(fname);
    foe_2_npc->setHealth(fhealth);
    foe_2_npc->setEP(fEP);
    foe_2_npc->setStrength(fstrength);
    foe_2_npc->setMagicPower(fmagicPower);
    foe_2_npc->setPhysicalDefense(fphysicalDefense);
    foe_2_npc->setMagicDefense(fmagicDefense);
    foe_2_npc->setSpeed(fspeed);

    /*foe3*/
    fname = "Foe_3";
    fhealth = 140;
    fEP = 29;
    fstrength = 29;
    fmagicPower = 29;
    fphysicalDefense = 29;
    fmagicDefense = 29;
    fspeed = 29;

    foe_3_npc->setName(fname);
    foe_3_npc->setHealth(fhealth);
    foe_3_npc->setEP(fEP);
    foe_3_npc->setStrength(fstrength);
    foe_3_npc->setMagicPower(fmagicPower);
    foe_3_npc->setPhysicalDefense(fphysicalDefense);
    foe_3_npc->setMagicDefense(fmagicDefense);
    foe_3_npc->setSpeed(fspeed);

    /*foe4*/
    fname = "Foe_4";
    fhealth = 160;
    fEP = 31;
    fstrength = 31;
    fmagicPower = 31;
    fphysicalDefense = 31;
    fmagicDefense = 31;
    fspeed = 31;

    foe_4_npc->setName(fname);
    foe_4_npc->setHealth(fhealth);
    foe_4_npc->setEP(fEP);
    foe_4_npc->setStrength(fstrength);
    foe_4_npc->setMagicPower(fmagicPower);
    foe_4_npc->setPhysicalDefense(fphysicalDefense);
    foe_4_npc->setMagicDefense(fmagicDefense);
    foe_4_npc->setSpeed(fspeed);

    /*foe5*/
    fname = "Foe_5";
    fhealth = 180;
    fEP = 33;
    fstrength = 33;
    fmagicPower = 33;
    fphysicalDefense = 33;
    fmagicDefense = 33;
    fspeed = 33;

    foe_5_npc->setName(fname);
    foe_5_npc->setHealth(fhealth);
    foe_5_npc->setEP(fEP);
    foe_5_npc->setStrength(fstrength);
    foe_5_npc->setMagicPower(fmagicPower);
    foe_5_npc->setPhysicalDefense(fphysicalDefense);
    foe_5_npc->setMagicDefense(fmagicDefense);
    foe_5_npc->setSpeed(fspeed);

    /*foe6*/
    fname = "Foe_6";
    fhealth = 200;
    fEP = 35;
    fstrength = 35;
    fmagicPower = 35;
    fphysicalDefense = 35;
    fmagicDefense = 35;
    fspeed = 35;

    foe_6_npc->setName(fname);
    foe_6_npc->setHealth(fhealth);
    foe_6_npc->setEP(fEP);
    foe_6_npc->setStrength(fstrength);
    foe_6_npc->setMagicPower(fmagicPower);
    foe_6_npc->setPhysicalDefense(fphysicalDefense);
    foe_6_npc->setMagicDefense(fmagicDefense);
    foe_6_npc->setSpeed(fspeed);

    /*foe7*/
    fname = "Foe_7";
    fhealth = 220;
    fEP = 33;
    fstrength = 33;
    fmagicPower = 33;
    fphysicalDefense = 33;
    fmagicDefense = 33;
    fspeed = 33;

    foe_7_npc->setName(fname);
    foe_7_npc->setHealth(fhealth);
    foe_7_npc->setEP(fEP);
    foe_7_npc->setStrength(fstrength);
    foe_7_npc->setMagicPower(fmagicPower);
    foe_7_npc->setPhysicalDefense(fphysicalDefense);
    foe_7_npc->setMagicDefense(fmagicDefense);
    foe_7_npc->setSpeed(fspeed);

    /*foe8*/
    fname = "Foe_8";
    fhealth = 240;
    fEP = 31;
    fstrength = 31;
    fmagicPower = 31;
    fphysicalDefense = 31;
    fmagicDefense = 31;
    fspeed = 31;

    foe_8_npc->setName(fname);
    foe_8_npc->setHealth(fhealth);
    foe_8_npc->setEP(fEP);
    foe_8_npc->setStrength(fstrength);
    foe_8_npc->setMagicPower(fmagicPower);
    foe_8_npc->setPhysicalDefense(fphysicalDefense);
    foe_8_npc->setMagicDefense(fmagicDefense);
    foe_8_npc->setSpeed(fspeed);

    /*foe9*/
    fname = "Foe_9";
    fhealth = 260;
    fEP = 29;
    fstrength = 29;
    fmagicPower = 29;
    fphysicalDefense = 29;
    fmagicDefense = 29;
    fspeed = 29;

    foe_9_npc->setName(fname);
    foe_9_npc->setHealth(fhealth);
    foe_9_npc->setEP(fEP);
    foe_9_npc->setStrength(fstrength);
    foe_9_npc->setMagicPower(fmagicPower);
    foe_9_npc->setPhysicalDefense(fphysicalDefense);
    foe_9_npc->setMagicDefense(fmagicDefense);
    foe_9_npc->setSpeed(fspeed);

    /*foe10*/
    fname = "Foe_10";
    fhealth = 200;
    fEP = 25;
    fstrength = 25;
    fmagicPower = 25;
    fphysicalDefense = 25;
    fmagicDefense = 25;
    fspeed = 25;

    foe_10_npc->setName(fname);
    foe_10_npc->setHealth(fhealth);
    foe_10_npc->setEP(fEP);
    foe_10_npc->setStrength(fstrength);
    foe_10_npc->setMagicPower(fmagicPower);
    foe_10_npc->setPhysicalDefense(fphysicalDefense);
    foe_10_npc->setMagicDefense(fmagicDefense);
    foe_10_npc->setSpeed(fspeed);

    vector<Character*> participants;
    participants.push_back(foe_1_npc);
    participants.push_back(foe_2_npc);
    participants.push_back(foe_3_npc);
    participants.push_back(foe_4_npc);
    participants.push_back(foe_5_npc);

    Scene* testCombat = new Combat(participants, user);
    testCombat->SetUpScene();
    /*foe stat check*/
    /*
    cout << endl << endl << endl;
    cout << "foe Stats:" << endl;

    cout << endl;
    cout << "Name: " << foe_1_npc->getName() << endl;
    cout << "Health: " << foe_1_npc->getHealth() << endl;
    cout << "EP: " << foe_1_npc->getEP() << endl;
    cout << "Strength: " << foe_1_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_1_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_1_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_1_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_1_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_2_npc->getName() << endl;
    cout << "Health: " << foe_2_npc->getHealth() << endl;
    cout << "EP: " << foe_2_npc->getEP() << endl;
    cout << "Strength: " << foe_2_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_2_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_2_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_2_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_2_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_3_npc->getName() << endl;
    cout << "Health: " << foe_3_npc->getHealth() << endl;
    cout << "EP: " << foe_3_npc->getEP() << endl;
    cout << "Strength: " << foe_3_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_3_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_3_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_3_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_3_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_4_npc->getName() << endl;
    cout << "Health: " << foe_4_npc->getHealth() << endl;
    cout << "EP: " << foe_4_npc->getEP() << endl;
    cout << "Strength: " << foe_4_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_4_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_4_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_4_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_4_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_5_npc->getName() << endl;
    cout << "Health: " << foe_5_npc->getHealth() << endl;
    cout << "EP: " << foe_5_npc->getEP() << endl;
    cout << "Strength: " << foe_5_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_5_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_5_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_5_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_5_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_6_npc->getName() << endl;
    cout << "Health: " << foe_6_npc->getHealth() << endl;
    cout << "EP: " << foe_6_npc->getEP() << endl;
    cout << "Strength: " << foe_6_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_6_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_6_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_6_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_6_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_7_npc->getName() << endl;
    cout << "Health: " << foe_7_npc->getHealth() << endl;
    cout << "EP: " << foe_7_npc->getEP() << endl;
    cout << "Strength: " << foe_7_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_7_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_7_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_7_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_7_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_8_npc->getName() << endl;
    cout << "Health: " << foe_8_npc->getHealth() << endl;
    cout << "EP: " << foe_8_npc->getEP() << endl;
    cout << "Strength: " << foe_8_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_8_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_8_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_8_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_8_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_9_npc->getName() << endl;
    cout << "Health: " << foe_9_npc->getHealth() << endl;
    cout << "EP: " << foe_9_npc->getEP() << endl;
    cout << "Strength: " << foe_9_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_9_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_9_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_9_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_9_npc->getSpeed() << endl;

    cout << endl;
    cout << "Name: " << foe_10_npc->getName() << endl;
    cout << "Health: " << foe_10_npc->getHealth() << endl;
    cout << "EP: " << foe_10_npc->getEP() << endl;
    cout << "Strength: " << foe_10_npc->getStrength() << endl;
    cout << "Magic Power: " << foe_10_npc->getMagicPower() << endl;
    cout << "Physical Defense: " << foe_10_npc->getPhysicalDefense() << endl;
    cout << "Magic Defense: " << foe_10_npc->getMagicDefense() << endl;
    cout << "Speed: " << foe_10_npc->getSpeed() << endl;
    */


    return 0;
}
