#pragma once
#include <vector>
#include <limits>
#include <bits/stdc++.h>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
    int result = 0;
    result = *max_element(vec.begin(), vec.end());
    return result;
}
