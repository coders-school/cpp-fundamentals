#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int> &vec) {
  // TODO: Implement me :)
  //
  auto result = vec[0];

  for (const int &i : vec) {
    if (result < i) {
      result = i;
    }
  }

  return result;
}
