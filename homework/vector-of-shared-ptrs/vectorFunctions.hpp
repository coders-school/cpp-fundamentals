#ifndef VECTORFUNCTIONS_HPP
#define VECTORFUNCTIONS_HPP
#include <vector>
#include <memory>
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int);
void print(const std::vector<std::shared_ptr<int>>&);
void add10(const std::vector<std::shared_ptr<int>>&);
void sub10(int*);
void sub10(const std::vector<std::shared_ptr<int>>&);

#endif /*VECTORFUNCTIONS_HPP*/
