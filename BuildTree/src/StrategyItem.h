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

    /* StrategyItem(BWAPI::UnitType _unitType, */
    /*              std::vector<BWAPI::UnitType> _children) */
    /*     : unitType(_unitType) { */
    /*     for (auto type : _children) { */
    /*         children.push_back(type); */
    /*     } */
    /* } */

    StrategyItem(BWAPI::UnitType _unitType) : unitType(_unitType) {}

    void addChildren(const StrategyItem& children);
    BWAPI::UnitType unitType;
    bool executed = false;
    bool completed = false;
    bool loop = false;
    bool autoWorker = false;
    bool morph = false;
    std::vector<StrategyItem> children;
    std::vector<StrategyItem> morphChildren;
};
