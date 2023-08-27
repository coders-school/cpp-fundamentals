#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
  std::vector<int> res{};
  if (count <= 0) {
    return res;
  }
  int init = step;
  while (count-- > 0) {
    res.push_back(init);
    init += step;
  }
  return res;
}