//
// Created by Isaac Castro on 2/22/22.
//

#include <string>
#include <vector>
#include <iostream>
#include "Combat.hpp"
#include "../../Foe.hpp"
#include <algorithm>
#include "../Encounter.hpp"
#include "../../../character.hpp"

using namespace std;

Combat::Combat(Character* currPlayer, int numOfFoes) : Encounter() {
    player = currPlayer;
    foes = numOfFoes;
    switch (numOfFoes) {
        case 1:
            foe1 = new Foe("mon1", 10, 20);
            turnOrder.push_back(foe1);
        break;

        case 2:
            foe1 = new Foe("mon1", 10, 20);
            foe2 = new Foe("mon2", 10, 20);
            turnOrder.push_back(foe1);
            turnOrder.push_back(foe2);
            break;
        case 3:
            foe1 = new Foe("mon1", 10, 20);
            foe2 = new Foe("mon2", 10, 20);
            foe3 = new Foe("mon3", 10, 20);
            turnOrder.push_back(foe1);
            turnOrder.push_back(foe2);
            turnOrder.push_back(foe3);
    }

    turnOrder.push_back(player);
}

void Combat::DetermineTurnOrder() {
    int currSpeed;
    vector<Character*> tempOrder;
    Character* tempChar;
    for(int i = 0; i < turnOrder.size(); i++) {
        for(int j = i; j < turnOrder.size(); j++) {
            if (turnOrder.at(i)->getSpeed() <= turnOrder.at(j)->getSpeed()) {
                tempChar = turnOrder.at(i);
                turnOrder.at(i) = turnOrder.at(j);
                turnOrder.at(j) = tempChar;
            }
        }
    }

}
