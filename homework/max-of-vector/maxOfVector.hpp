#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int> &vec) {
  auto max{vec[0]};
  for (auto i : vec) {
    if (i > max) {
      max = i;
    }
  }
  return max;
}
