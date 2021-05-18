#pragma once
#include <vector>
#include <limits>
#include <bits/stdc++.h>

int maxOfVector(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}
