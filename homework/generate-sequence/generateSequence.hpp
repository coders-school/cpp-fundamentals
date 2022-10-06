#pragma once
#include <iostream>
#include <vector>

std::vector<int> generateSequence(int count, int step) {
  // TODO: Implement me :)
  //
  std::vector<int> vec = {};
  if (count <= 0) {
    return vec;
  }

  switch (count) {
  case 1:
    vec.push_back(step);
    break;
  default:
    vec.push_back(step);
    for (int i = 0; i < count - 1; i++) {
      vec.push_back(vec[i] + step);
    }
  }

  return vec;
}
