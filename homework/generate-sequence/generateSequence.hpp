#pragma once
#include <math.h>
#include <vector>

std::vector<int> generateSequence(int count, int step) {
  std::vector<int> vec{step};

  if (count <= 0) {
    return std::vector<int>{};
  } else if (step == 0)
    for (auto i = 3; i < count; i++) {
      vec.push_back(step);
    }

  for (auto i = 1; i < count; i++) {
    vec.push_back(step + vec[i - 1]);
  }
  return vec;
}