#ifndef _CONSUMABLE_INVENTORY_H_
#define _CONSUMABLE_INVENTORY_H_

#include "items.h"
#include "consumables.h"
#include "healthPotion.h"
#include "epPotion.h"
#include "strengthPotion.h"
#include "physicalDefensePotion.h"
#include "magicPowerPotion.h"
#include "magicDefensePotion.h"
#include "speedPotion.h"

#include <string>
#include <vector>

using namespace std;

class consumableInventory {
private:

	int maximumSlots = 10;

public:

	vector<consumables*> consumableInventory;
	void consumableAdd(consumables* object) {

		if (consumableInventory.size() <= maximumSlots) {
			consumableInventory.push_back(object);
		}
		else {
			cout << "!Your inventory is full!" << endl;
		}
	
	}
	void consumableRemove(string name) {

		int flag = 0;

		for (unsigned int i = 0; i <= maximumSlots; ++i && flag == 0) {
			if (consumableInventory.at(i) = name) {
				consumableInventory.erase(consumableInventory.begin() + i);
				++flag;
			}
		}
		if(flag == 0) {

			cout << "No such potion found." << endl;

		}
	}
	void consumableUse(string name) {}


};
#endif //_CONSUMABLE_INVENTORY_H_