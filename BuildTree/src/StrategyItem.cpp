#include "StrategyItem.hpp"

void StrategyItem::addChild(const StrategyItem& child) {
    morphChildren.push_back(child);
}

void StrategyItem::removeChild(const int index) {
    morphChildren.erase(morphChildren.begin() + index);
}

