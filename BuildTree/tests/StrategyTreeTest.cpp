#include <gtest/gtest.h>

#include "StrategyItem.hpp"

using namespace BWAPI;

namespace UT = BWAPI::UnitTypes;
TEST(StrategyItem, Construct) {
    auto type = UnitTypes::Zerg_Drone;
    StrategyItem a(type);
    ASSERT_EQ(type, a.unitType);
}

TEST(StrategyItem, ConstructWithItems) {
    auto type = UT::Zerg_Drone;
    StrategyItem a(type, {type});
    ASSERT_EQ(a.morphChildren.size(), 1);
}

TEST(StrategyItem, Add) {
    auto type = UnitTypes::Zerg_Drone;
    StrategyItem a(type);
    a.addChild(type);
    ASSERT_EQ(a.morphChildren.size(), 1);
}

TEST(StrategyItem, RemoveIndex) {
    auto type = UT::Zerg_Drone;
    StrategyItem a(type);
    a.addChild(type);
    a.removeChild(0);
    ASSERT_EQ(a.morphChildren.size(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
