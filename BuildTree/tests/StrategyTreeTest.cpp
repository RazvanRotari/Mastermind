#include <gtest/gtest.h>

#include "../src/StrategyItem.h"

using namespace BWAPI;

namespace UT = BWAPI::UnitTypes;
TEST(StrategyItem, Construct) {
    auto type = UnitTypes::Zerg_Drone;
    StrategyItem a(type);
    ASSERT_EQ(type, a.unitType);
}

TEST(StrategyItem, Add) {
    auto type = UnitTypes::Zerg_Drone;
    StrategyItem a(type, {UnitTypes::Zerg_Drone});
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
