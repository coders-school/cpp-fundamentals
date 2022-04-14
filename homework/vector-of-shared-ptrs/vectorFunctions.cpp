#include "vectorFunctions.hpp"

#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
  if (count < 1) {
    return {};
  }
  std::vector<std::shared_ptr<int>> vec = {};
  for (unsigned int i = 0; i < count; ++i) {
    vec.push_back(std::make_shared<int>(i));
  }
  return vec;
}

void print(std::vector<std::shared_ptr<int>> vec) {
  for (auto &element : vec) {
    std::cout << *element << "\n";
  }
}

void add10(std::vector<std::shared_ptr<int>> vec) {
  for (auto &element : vec) {
    if (element) {
      *element += 10;
    }
  }
}

void sub10(int *const pointer) {
  if (pointer) {
    *pointer -= 10;
  }
}

void sub10(std::vector<std::shared_ptr<int>> vec) {
  for (auto &element : vec) {
    sub10(element.get());
  }
}