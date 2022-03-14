//
// Created by Isaac Castro on 3/13/22.
//
#include "spells/Spells.hpp"
#include "spells/Level1MageSpell.hpp"
#include "spells/Level1WarriorSpell.hpp"
#include "spells/Level1KnightSpells.hpp"
#include "character.hpp"
#include "player.hpp"
#include "foe.hpp"
#include "gtest/gtest.h"
using namespace std;

TEST(SpellTests, MageDamage) {
    Character* testChar = new Foe;
    testChar->setHealth(10);
    Spells* testSpell = new Level1MageSpell;
    testSpell->castSpell(testChar);
    int testHealth = testChar->getHealth();
    EXPECT_EQ(-10, testHealth);
}

TEST(SpellTests, WarriorDamage) {
    Character* testChar = new Foe;
    testChar->setHealth(10);
    Spells* testSpell = new Level1WarriorSpell;
    testSpell->castSpell(testChar);
    int testHealth =  testChar->getHealth();
    EXPECT_EQ(-30, testHealth);
}

TEST(SpellTests, KnightDamage) {
    Character* testChar = new Foe;
    testChar->setHealth(10);
    Spells* testSpell = new Level1KnightSpells;
    testSpell->castSpell(testChar);
    int testHealth = testChar->getHealth();
    EXPECT_EQ(-20, testHealth);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

