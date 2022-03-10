//
// Created by Isaac Castro on 2/22/22.
//

#ifndef FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_COMBAT_H
#define FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_COMBAT_H

#include <vector>
#include <string>
#include "../Encounter.hpp"
#include "../../../character.hpp"

using namespace std;

class Combat: public Encounter {
    int combatState = 0;
    int foes = 0;
    int prevDefense;
    bool isGaurd = false;
    vector<Character*> turnOrder;
    Character* player;
    Character* foe1;
    Character* foe2;
    Character* foe3;

public:
    Combat(Character* currPlayer, int numOfFoes);
    //Combat(vector<Character*> combatParticipants);
    void DetermineTurnOrder();
    int FindPartyMember();
    bool FindFoes();
    bool FindPlayer();
    void UpdateOrder();
    void CurrentCombat();
    virtual void SetUpScene() {
        DetermineTurnOrder();
        CurrentCombat();
    };


};


#endif //FINAL_PROJECT_ICAST065_CAREL009_SSMIT129_JMUNI017_COMBAT_H
