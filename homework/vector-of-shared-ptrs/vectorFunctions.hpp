#pragma once

#include <memory>
#include <vector>

// generates a vector of shared pointers pointing to numbers
// from 0 to count -1
// returns empty vector if count is negative or exceeds vector maximum size
std::vector<std::shared_ptr<int>> generate(int count);

// prints all the numbers pointed by vector elements
void print(const std::vector<std::shared_ptr<int>>& ptr_vec);

// adds 10 to every number pointed by vector elements
void add10(const std::vector<std::shared_ptr<int>>& ptr_vec);

// substracts 10 from the object pointed by ptr
void sub10(int* const ptr);

// substracts 10 from every number pointed by vector elements
void sub10(const std::vector<std::shared_ptr<int>>& ptr_vec);