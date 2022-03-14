//
// Created by Isaac Castro on 3/13/22.
//
#include "spells/Spells.hpp"
#include "spells/Level1MageSpell.hpp"
#include "character.hpp"
#include "player.hpp"
#include "foe.hpp"
#include "gtest/gtest.h"
using namespace std;
TEST(SpellTests, damage) {
    Character* testChar = new Foe;
    testChar->setHealth(10);
    Spells* testSpell = new Level1MageSpell;
    testSpell->castSpell(testChar);
    cout << testChar->getHealth();
    int testHealth = testChar->getHealth();
    EXPECT_EQ(-10, testHealth);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

