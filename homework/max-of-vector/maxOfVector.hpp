#pragma once
#include <vector>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

// first version below - typical solution
// int maxOfVector(const std::vector<int>& vec) {
//     int max = vec.front();
//     for (int element : vec) {
//         if (element > max) {
//             max = element;
//         }
//     }
//     return max;
// }
