#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    if (vec.empty()) {std::cout<<"Vector is empty!"; return 0; }
    int max = vec[0];
    for (const auto& element : vec)
    {
	if (element > max) max = element;
    }
    return max;
}
