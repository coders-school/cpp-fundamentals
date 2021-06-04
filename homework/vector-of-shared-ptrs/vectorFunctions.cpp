#include "vectorFunctions.hpp"

#include <memory>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> result(count);
    for (auto i = 0; i < count; i++) {
        result[i] = std::make_shared<int>(i);
    }

    return result;
}

void print(std::vector<std::shared_ptr<int>> &vec) {

}

void sub10(std::vector<std::shared_ptr<int>> &vec) {
    for(auto it : vec) {
        if (it) {
            sub10(it.get());
        }
    }
}

void add10(std::vector<std::shared_ptr<int>> &vec) {
    for(auto it : vec) {
        if (it) *it += 10;
    }
}

void sub10(int *pInt) {
    if (pInt)
        *pInt -= 10;
}

