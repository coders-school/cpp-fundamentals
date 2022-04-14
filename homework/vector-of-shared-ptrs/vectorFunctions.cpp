#include "vectorFunctions.hpp"

#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
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
