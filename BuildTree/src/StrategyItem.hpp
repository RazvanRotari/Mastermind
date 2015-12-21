#pragma once
#ifdef NOBWAPI
#   include "UnitType.h" 
#else
#   include <BWAPI.h>
#endif

#include <vector>
#include <memory>

struct StrategyItem {
    StrategyItem(const BWAPI::UnitType _unitType, std::vector<StrategyItem> _children, const bool _loop = false)
        : unitType(_unitType), loop(_loop), morphChildren(_children) {}

    StrategyItem(BWAPI::UnitType _unitType) : unitType(_unitType) {}

    void addChild(const StrategyItem& children);
    void removeChild(const int index);

    BWAPI::UnitType unitType;
    bool loop = false;
    bool autoWorker = false;
    bool attack = false;

    //Internal uses - this will not be serialized
    bool executed = false;
    bool completed = false;
    bool morph = false;

    std::vector<StrategyItem> children;
    std::vector<StrategyItem> morphChildren;
};
