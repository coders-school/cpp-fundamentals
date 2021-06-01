#include "vectorFunctions.hpp"
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
  std::vector<std::shared_ptr<int>> vec{};
  for (auto i = 0; i < count; ++i) {
    vec.push_back(std::make_shared<int>(i));
  }
  return vec;
}

void print(std::vector<std::shared_ptr<int>> vec) {
  for (auto it : vec) {
    std::cout << it << '\n';
  }
}
void add10(std::vector<std::shared_ptr<int>> vec) {

}

void sub10(std::vector<std::shared_ptr<int>> vec) {}
