#pragma once
#include <iostream>
#include <vector>

int addEven(const std::vector<int> &numbers) {
  auto r{0};
  for (auto i : numbers) {
    std::cout << i;
    if (i % 2 == 0) {
      r += i;
    }
  }
  std::cout << '\n';
  std::cout << "r= " << r << '\n';
  return r;
}
