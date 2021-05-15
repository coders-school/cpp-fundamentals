#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    // TODO: Implement me :)
  int maxNum{std::numeric_limits<int>::min()};
  for(int i = 0; i < vec.size(); i++) {
    if(vec[i] > maxNum) {
      maxNum = vec[i];
    }
  }
    return maxNum;
}
