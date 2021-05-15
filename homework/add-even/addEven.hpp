#pragma once
#include <iostream>
#include <vector>

int addEven(const std::vector<int> &numbers) {
  auto r{0};
  for (auto i : numbers) {
    if (i % 2 == 0) {
      r += i;
    }
  }
  return r;
}
