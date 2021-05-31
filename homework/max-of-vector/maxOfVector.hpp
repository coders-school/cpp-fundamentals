#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int el_max=0;
    for(auto el:vec)
        if (el>el_max) el_max=el;
    return el_max;
}
