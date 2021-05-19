#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int temp {std::numeric_limits<int> :: min()};
    int elem {};

    for (const auto& elem : vec) {
        if (elem > temp) {
            temp = elem;
        }
    } return temp;
}
