#ifndef _INVENTORY_H_
#define _INVENTORY_H_

#include "items.h"
#include "weaponary.h"
#include "swords.h"
#include "magicStaff.h"
#include "armourSet.h"
#include "enchantedArmourSet.h"

#include <string>
#include <vector>
using namespace std;

class inventory {
private:

    int maximumSlots = 10;
    
public:

    vector<weaponary*> inventory;
    void inventoryAdd(weaponary*) {}
    void inventoryRemove(string name) {}
    void inventoryUse(string name) {}
    
};
#endif //_INVENTORY_H_