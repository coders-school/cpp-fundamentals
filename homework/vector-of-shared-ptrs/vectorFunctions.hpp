#ifndef VECTOR_OF_SHARED_POINTERS_VECTORFUNCTIONS_HPP
#define VECTOR_OF_SHARED_POINTERS_VECTORFUNCTIONS_HPP
#include <vector>
#include <memory>
#include <algorithm>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> vec);
void add10(std::vector<std::shared_ptr<int>> vec);
void sub10(int* const pointer);
void sub10(std::vector<std::shared_ptr<int>> vec);

#endif //VECTOR_OF_SHARED_POINTERS_VECTORFUNCTIONS_H