#include <string>

class StrategyTree {
    public:
        static StrategyTree fromFile(const std::string& filename);
        void save();
}
