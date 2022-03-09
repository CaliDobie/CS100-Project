//
// Created by Isaac Castro on 2/22/22.
//

#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
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
            foe1 = new Foe("mon1", 60, 20);
            turnOrder.push_back(foe1);
        break;

        case 2:
            foe1 = new Foe("mon1", 10, 20);
            foe2 = new Foe("mon2", 10, 20 );
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

void Combat::CurrentCombat() {
    int phase = 1;
    int turnCounter = 0;
    int newHealth;
    char decision;
    int totalDamage;
    int playerLocation = FindPartyMember();
    int foeNum;
    Character* tempChar;
    system("clear");
    cout << "Phase " << phase << endl;
    if (turnOrder.at(0)->getType()) {
        foeNum = 1;
        combatState = 1;
    }
    else  {
        foeNum = 0;
        combatState = 0;
    }
    while(combatState != 3 && combatState!=4) {
        if (combatState == 0) {

            tempChar = turnOrder.at(playerLocation);

            totalDamage = turnOrder.at(foeNum)->getStrength() + turnOrder.at(foeNum)->getMagicPower();
            totalDamage /=2;
            int defenseOffeset = (tempChar->getMagicDefense() + tempChar->getPhysicalDefense())/2;
            totalDamage = totalDamage - defenseOffeset;
            if(totalDamage < 0) {
                totalDamage = 0;
            }
            newHealth = tempChar->getHealth() - totalDamage;
            cout << tempChar->getHealth() << "-" << totalDamage << endl;
            tempChar->setHealth(newHealth);
            cout << "Your Health:" << tempChar->getHealth() << endl;
            turnOrder.at(playerLocation) = tempChar;
            combatState = 1;

        } else if (combatState == 1) {
            cout << "1. Attack 2. Spell 3. "
                    "Item 4. Guard Any Key: Pass Turn" << endl;
            cin >> decision;
            cin.clear();
            if(decision == '1') {

                if(isGaurd) {
                    isGaurd = false;
                    player->setPhysicalDefense(prevDefense);
                }

                totalDamage = player->getMagicPower() + player->getStrength();
                totalDamage /= 2;

                tempChar = turnOrder.at(foeNum);

                newHealth = tempChar->getHealth() - totalDamage;

                tempChar->setHealth(newHealth);
                turnOrder.at(foeNum) = tempChar;

                combatState = 0;
            }
            else if (decision == '2') {
                cout << "To be implemented" << endl;
                combatState = 0;
            }
            else if (decision == '3') {
                cout << "To be implemented" << endl;
                combatState = 0;
            }
            else if (decision = '4') {
                prevDefense = player->getPhysicalDefense();
                player->setPhysicalDefense(prevDefense += 10);
                isGaurd = true;
                combatState = 0;
            }
            else {
                combatState = 0;
            }
        }

        if(turnOrder.at(foeNum)->getHealth() <= 0) {
            turnOrder.erase(turnOrder.begin() + foeNum);
        }
        if(!FindFoes()) {
            cout << "You Win" << endl;
            combatState = 3;
        }

        if(foeNum >= turnOrder.size()-1) {
            if (!turnOrder.at(0)->getType()) {
                foeNum = 0;
            }
            else {
                foeNum = 1;
            }
        }
        else {
            if (!turnOrder.at(foeNum+1)->getType()) {
                ++foeNum;
            }
            else {
                if(foeNum+2>= turnOrder.size()-1) {
                    foeNum = 0;
                }
                else {
                    foeNum += 2;
                }
            }
        }

    }
}


int Combat::FindPartyMember() {
    for(int i = 0; i < turnOrder.size(); i++) {
        if(turnOrder.at(i)->getType()) {
            return i;
        }
    }
    return  0;
}

bool Combat::FindFoes() {

    bool founded = false;
    for(int i = 0; i < turnOrder.size(); i++) {
        if(!turnOrder.at(i)->getType()) {
            founded = true;
            break;
        }
    }

    return founded;
}