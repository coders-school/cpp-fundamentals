#include "vectorFunctions.hpp"

using shared_pointers = std::vector<std::shared_ptr<int>>;

shared_pointers generate(int count) {
    shared_pointers pointers;
    if (count > 0) {
        pointers.reserve(count);
        for (int i{}; i < count; ++i) {
            pointers.emplace_back(std::make_shared<int>(i));
        }
    }

    return pointers;
}
