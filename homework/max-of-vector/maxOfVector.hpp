#pragma once
#include <vector>
#include <limits>
using namespace std;
int maxOfVector(const std::vector<int>& vec) {
    int maxV = vec[0];
    for (int i=0;i<vec.size();i++) {
        if(vec[i] > maxV) maxV = vec[i];
    }
    return maxV;
}
