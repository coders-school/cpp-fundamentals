#pragma once
#include <vector>

int addEven(const std::vector<int> &numbers) {
  // TODO: Your implementation goes here
  // Below return is only to make this function compile now
  //
  auto result = 0; // Declaration of result
                   //
  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] % 2 == 0) { // check if value is even - if not do nothing
      result += numbers[i];
    }
  }

  return result;
}
