#ifndef VECTORFUNCTIONS_HPP_INCLUDED
#define VECTORFUNCTIONS_HPP_INCLUDED


#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>>& vec);
void add10(std::vector<std::shared_ptr<int>>& vec);
void sub10(const int* num);
void sub10(std::vector<std::shared_ptr<int>>& vec);

#endif // VECTORFUNCTIONS_HPP_INCLUDED
