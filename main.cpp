#include "items.h"
#include "consumables.h"
#include "healthPotion.h"
#include "Player.h"
#include "Character.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {

	string name = "Super Potion";
	int category = 1;
	int effect = 28;

	items* potion = new healthPotion(name, category, effect);

	cout << potion->getName() << endl;
	cout << potion->getCategory() << endl;
	cout << potion->getEffect() << endl;

	return 0;
}