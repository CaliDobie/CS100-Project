#ifndef _STRENGTH_POTION_H
#define _STRENGTH_POTION_H
#include "consumables.h"
#include "Character.h"
#include "Player.h"
#include <string>
#include <vector>

using namespace std;
//category 3
class strengthPotion : public consumables {

private:

	string name;
	int category;
	int effect;

public:

	strengthPotion(string name, int category, int effect) : consumables() {
		setName(name);
		setCategory(category);
		setEffect(effect);
	}
	virtual string getName() {
		return name;
	}
	virtual void setName(string newName) {
		name = newName;
	}
	virtual int getCategory() {
		return category;
	}
	virtual void setCategory(int newCategory) {
		category = newCategory;
	}
	virtual int getEffect() {
		return effect;
	}
	virtual void setEffect(int newEffect) {
		effect = newEffect;
	}
	
	virtual void doEffect(Character* player) {

		int temp = player->getStrength();
		temp += effect;
		player->setStrength(temp);

	}
	

};
#endif
