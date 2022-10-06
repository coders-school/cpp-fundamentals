#include "generateSequence.hpp"
#include <iostream>

int main() {
  for (const int element : generateSequence(3, 3))
    std::cout << element << " | ";

  return 0;
}
