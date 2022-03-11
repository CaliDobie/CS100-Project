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

    return 0;
}
